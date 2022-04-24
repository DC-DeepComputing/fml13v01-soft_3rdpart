/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_mailbox_sft_jh7110.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#if defined(HAL_MAILBOX_ENABLED) && defined(HAL_MAILBOX_SFT_JH7110)

#include "hal_mailbox_sft_jh7110.h"

typedef struct
{
    int peer_num;
    mailbox_irq_peer_t *irq_peer_map;
} mailbox_priv_t;

static uint32_t rcvd_it_peer, rcvd_it_count, rcvd_it_data;
static void default_recv_it_handler(mailbox_peer_t peer, uint32_t data)
{
    rcvd_it_peer = peer;
    rcvd_it_data = data;
    rcvd_it_count++;
}

static void mailbox_int_handler(int id, void *priv)
{
    mailbox_handle_t *mailbox = (mailbox_handle_t *)priv;
    mailbox_priv_t *mailbox_priv = (mailbox_priv_t *)mailbox->priv;
    recv_it_callback recv_it_cb = mailbox->initcfg.cb ? mailbox->initcfg.cb : default_recv_it_handler;
    int i;
    
    for (i = 0; i < mailbox_priv->peer_num; i++) {
        if (id == mailbox_priv->irq_peer_map[i].irq) {
            mailbox_regs_t * const regs = (mailbox_regs_t *)mailbox->base;
            pipe_regs_t * const pipe = regs->pipe + mailbox_priv->irq_peer_map[i].peer;
            uint32_t cmd = pipe->cmd;
            pipe->cmd_clr = cmd; //will clear pending bit
            recv_it_cb(mailbox_priv->irq_peer_map[i].peer, cmd);
            break;
        }
    }
    // error, shall never reach here
}

static int mailbox_get_peer_irq(mailbox_handle_t *mailbox, mailbox_peer_t peer)
{
    if (mailbox) {
        mailbox_priv_t *priv = (mailbox_priv_t *)mailbox->priv;
        int i;
        for (i = 0; i < priv->irq_peer_map && priv->peer_num > 0; i++) {
            if (priv->irq_peer_map[i].peer == peer) {
                return priv->irq_peer_map[i].irq;
            }
        }
    }
    return -1;
}

static int mailbox_send_sync(mailbox_handle_t *mailbox, uint32_t peers_mask, uint32_t data, uint32_t timeout_ms)
{
    mailbox_regs_t * const regs = (mailbox_regs_t *)mailbox->base;
    pipe_regs_t * const pipe = regs->pipe + mailbox->initcfg.self;

    //any message not be consumed
    if (HAS_MESSAGE_FROM(mailbox->initcfg.self, regs->pend_smry)) {
        return -EBUSY;
    }
    
    pipe->peers_mask = peers_mask;
    pipe->cmd_set = data;

    uint64_t time_base = sys_get_timer(0);
    while (timeout_ms && HAS_MESSAGE_FROM(mailbox->initcfg.self, regs->pend_smry)) {
        if (sys_get_timer(time_base) > (uint64_t)timeout_ms) {
            pipe->cmd_clr = 0;
            return -ETIMEDOUT;
        }
    }
    SYS_ASSERT(!timeout_ms || pipe->cmd == data);

    return 0;
}

mailbox_handle_t *mailbox_open(int id, const mailbox_initcfg_t *initcfg)
{
    mailbox_handle_t *mailbox = (mailbox_handle_t *)malloc(sizeof(mailbox_handle_t));
    if (!mailbox) {
        return NULL;
    }
    memset(mailbox, 0, sizeof(*mailbox));
    
    mailbox->id = id;
    memcpy(&mailbox->initcfg, initcfg, sizeof(mailbox_initcfg_t));
    mailbox->base = sys_mailbox_init(id, mailbox->initcfg.self);
    if (!mailbox->base) {
        free(mailbox);
        return NULL;
    }

    mailbox_priv_t *priv = (mailbox_priv_t *)malloc(sizeof(mailbox_priv_t));
    if (!priv) {
        free(mailbox);
        return NULL;
    }
    priv->irq_peer_map = sys_get_irq_peer_map(mailbox->id, &priv->peer_num);
    for (int i = 0; i < priv->peer_num && priv->irq_peer_map; i++) {
        sys_irq_register(priv->irq_peer_map[i].irq, mailbox_int_handler, mailbox);
        sys_irq_enable(priv->irq_peer_map[i].irq);
    }
    mailbox->priv = priv;

    return mailbox;
}

int mailbox_close(mailbox_handle_t *mailbox)
{
    if (mailbox) {
        //disable all mailbox related interrupts
        mailbox_priv_t *priv = (mailbox_priv_t *)mailbox->priv;
        for (int i = 0; i < priv->peer_num && priv->irq_peer_map; i++) {
            sys_irq_disable(priv->irq_peer_map[i].irq);
        }
        sys_mailbox_deinit(mailbox->id, mailbox->initcfg.self);
        free(mailbox->priv);
        mailbox->priv = NULL;
        free(mailbox);
    }
    return 0;
}

int mailbox_unicast(mailbox_handle_t *mailbox, mailbox_peer_t to, uint32_t data)
{
    return mailbox_send_sync(mailbox, BIT(to), data, 0);
}

int mailbox_unicast_sync(mailbox_handle_t *mailbox, mailbox_peer_t to, uint32_t data, uint32_t timeout_ms)
{
    return mailbox_send_sync(mailbox, BIT(to), data, timeout_ms);
}

int mailbox_recv(mailbox_handle_t *mailbox, mailbox_peer_t from, uint32_t *data)
{
    mailbox_regs_t * const regs = (mailbox_regs_t *)mailbox->base;
    pipe_regs_t * const pipe = regs->pipe + from;
    mailbox_peer_t to = mailbox->initcfg.self;

    if (rcvd_it_count == 0 || rcvd_it_peer != from) {
        return -ENODATA;
    }

    if (data) {
        *data = rcvd_it_data;
    }
    
    return 0;
}

int mailbox_multicast(mailbox_handle_t *mailbox, uint32_t peers_mask, uint32_t data)
{
    return mailbox_send_sync(mailbox, peers_mask, data, 0);
}

int mailbox_multicast_sync(mailbox_handle_t *mailbox, uint32_t peers_mask, uint32_t data, uint32_t timeout_ms)
{
    return mailbox_send_sync(mailbox, peers_mask, data, timeout_ms);
}

#endif /* HAL_MAILBOX_ENABLED && HAL_MAILBOX_SFT_JH7110 */
