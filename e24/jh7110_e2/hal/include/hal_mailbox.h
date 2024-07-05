/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_mailbox.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_MAILBOX_H_
#define __HAL_MAILBOX_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef void (*recv_it_callback)(mailbox_peer_t peer, uint32_t data);

typedef struct
{
    mailbox_peer_t self;
    mailbox_peer_role_t role;
    recv_it_callback cb;
} mailbox_initcfg_t;

typedef struct
{
    int id;
    void *base;
    mailbox_initcfg_t initcfg;
    void *priv;
} mailbox_handle_t;

mailbox_handle_t *mailbox_open(int id, const mailbox_initcfg_t *initcfg);
int mailbox_close(mailbox_handle_t *mailbox);
int mailbox_unicast(mailbox_handle_t *mailbox, mailbox_peer_t to, uint32_t data);
int mailbox_unicast_sync(mailbox_handle_t *mailbox, mailbox_peer_t to, uint32_t data, uint32_t timeout_ms);
int mailbox_recv(mailbox_handle_t *mailbox, mailbox_peer_t from, uint32_t *data);
int mailbox_multicast(mailbox_handle_t *mailbox, uint32_t peers_mask, uint32_t data);
int mailbox_multicast_sync(mailbox_handle_t *mailbox, uint32_t peers_mask, uint32_t data, uint32_t timeout_ms);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_MAILBOX_H_ */

