/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file hal_tests_conf.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __HAL_TESTS_CONF_H
#define __HAL_TESTS_CONF_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

//uncomment this line to enable all HAL tests
//#define HAL_ALL_TESTS_ENABLED

//or uncomment lines below to enable specific HAL tests
#ifndef HAL_ALL_TESTS_ENABLED
//#define HAL_MAILBOX_TESTS_ENABLED
//#define HAL_INTC_TESTS_ENABLED
//#define HAL_UART_TESTS_ENABLED
//#define HAL_GPIO_TESTS_ENABLED
#endif /* HAL_ALL_TESTS_ENABLED */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_TESTS_CONF_H */

