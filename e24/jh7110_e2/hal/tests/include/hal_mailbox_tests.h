/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_mailbox_tests.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_MAILBOX_TESTS_H_
#define __HAL_MAILBOX_TESTS_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int run_mailbox_unicast_tests(void *dev, void *p0, void *p1, void *p2, void *p3);
int run_mailbox_unicast_wait_ack_tests(void *dev, void *p0, void *p1, void *p2, void *p3);
int run_mailbox_unicast_recv_tests(void *dev, void *p0, void *p1, void *p2, void *p3);
int run_mailbox_unicast_recv_it_tests(void *dev, void *p0, void *p1, void *p2, void *p3);
int run_mailbox_multicast_recv_it_tests(void *dev, void *p0, void *p1, void *p2, void *p3);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_MAILBOX_TESTS_H_ */

