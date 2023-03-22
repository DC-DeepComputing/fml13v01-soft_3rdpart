/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_hal_mailbox.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_HAL_MAILBOX_H_
#define __BSP_HAL_MAILBOX_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum
{
    MAILBOX_CLIENT=0,
    MAILBOX_HOST,
} mailbox_peer_role_t;

typedef enum
{
    MAILBOX_CORE_U7 = 0,
    MAILBOX_CORE_HIFI4,
    MAILBOX_CORE_E2,
    MAILBOX_CORE_RSVD,
    MAILBOX_CORE_NUM,
} mailbox_peer_t;

typedef struct
{
    int irq;
    mailbox_peer_t peer;
} mailbox_irq_peer_t;

const char * sys_mailbox_peer_name(mailbox_peer_t peer);
const mailbox_irq_peer_t * sys_get_irq_peer_map(int id, int *count);
void *sys_mailbox_init(int id, mailbox_peer_t self);
int sys_mailbox_deinit(int id, mailbox_peer_t self);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_HAL_MAILBOX_H_ */

