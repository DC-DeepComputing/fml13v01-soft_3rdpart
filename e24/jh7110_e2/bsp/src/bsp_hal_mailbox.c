/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_hal_mailbox.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"

static const mailbox_irq_peer_t irq_peer_map[] = {
    {U0_E2_SFT7110_LOCAL_INTERRUPTS_0__U0_MAILBOX_C0_TO_C2_IRQ, MAILBOX_CORE_U7},
    {U0_E2_SFT7110_LOCAL_INTERRUPTS_0__U0_MAILBOX_C1_TO_C2_IRQ, MAILBOX_CORE_HIFI4},
};


const char * sys_mailbox_peer_name(mailbox_peer_t peer)
{
    switch (peer) {
        case MAILBOX_CORE_U7:   return "U7";
        case MAILBOX_CORE_HIFI4:  return "HIFI4";
        case MAILBOX_CORE_E2:   return "E2";
    }
    return NULL;
}

const mailbox_irq_peer_t * sys_get_irq_peer_map(int id, int *count)
{
    *count = ARRAY_SIZE(irq_peer_map);
    return irq_peer_map;
}

void *sys_mailbox_init(int id, mailbox_peer_t self)
{
    switch (id) {
        case 0:
            u0_mailbox_enable();
            return (void*)U0_MAILBOX__SAIF_BD_APB__BASE_ADDR;
        default:
            break;
    }
    return NULL;
}

int sys_mailbox_deinit(int id, mailbox_peer_t self)
{
    switch (id) {
        case 0:
            u0_mailbox_disable();
            return 0;
        default:
            break;
    }
    return -EINVAL;
}
