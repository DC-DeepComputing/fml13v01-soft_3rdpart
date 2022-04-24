/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_mailbox_sft_jh7110_tests.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

#define PRINT       printf
//#define PRINT(...)

#if defined(HAL_MAILBOX_ENABLED) && defined(HAL_MAILBOX_SFT_JH7110)

#include "hal_mailbox_tests.inc"

int run_mailbox_unicast_recv_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    int mailbox_id = (int)p0;
    mailbox_initcfg_t initcfg = {
        .self = (mailbox_peer_t)p1,
        .role = MAILBOX_HOST,
    };
    mailbox_peer_t peer = (mailbox_peer_t)p2;
    int result = test_mailbox_unicast_recv(mailbox_id, &initcfg, peer);
    return result;
}

int run_mailbox_unicast_recv_it_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    int mailbox_id = (int)p0;
    mailbox_initcfg_t initcfg = {
        .self = (mailbox_peer_t)p1,
        .role = MAILBOX_HOST,
    };
    mailbox_peer_t peer = (mailbox_peer_t)p2;
    int result = test_mailbox_unicast_recv_it(mailbox_id, &initcfg, peer);
    return result;
}

int run_mailbox_multicast_recv_it_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    int mailbox_id = (int)p0;
    mailbox_initcfg_t initcfg = {
        .self = (mailbox_peer_t)p1,
        .role = MAILBOX_HOST,
    };
    uint32_t peers_mask = (uint32_t)p2;
    int result = test_mailbox_multicast_recv_it(mailbox_id, &initcfg, peers_mask);
    return result;
}

#endif /* HAL_MAILBOX_ENABLED && HAL_MAILBOX_SFT_JH7110 */

