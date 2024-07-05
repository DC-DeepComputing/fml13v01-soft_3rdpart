/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_mailbox.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#ifdef HAL_MAILBOX_ENABLED

__WEAK mailbox_handle_t *mailbox_open(int id, const mailbox_initcfg_t *initcfg)
{
    return NULL;
}

__WEAK int mailbox_close(mailbox_handle_t *mailbox)
{
    return -ENOSYS;
}

__WEAK int mailbox_unicast(mailbox_handle_t *mailbox, mailbox_peer_t to, uint32_t data)
{
    return -ENOSYS;
}

__WEAK int mailbox_unicast_sync(mailbox_handle_t *mailbox, mailbox_peer_t to, uint32_t data, uint32_t timeout_ms)
{
    return -ENOSYS;
}

__WEAK int mailbox_recv(mailbox_handle_t *mailbox, mailbox_peer_t from, uint32_t *data)
{
    return -ENOSYS;
}

__WEAK int mailbox_multicast(mailbox_handle_t *mailbox, uint32_t peers_mask, uint32_t data)
{
    return -ENOSYS;
}

__WEAK int mailbox_multicast_sync(mailbox_handle_t *mailbox, uint32_t peers_mask, uint32_t data, uint32_t timeout_ms)
{
    return -ENOSYS;
}

#endif /* HAL_MAILBOX_ENABLED */
