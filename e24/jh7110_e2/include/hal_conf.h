/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file hal_conf.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __HAL_CONF_H
#define __HAL_CONF_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

//chip-independent module selection
#define HAL_MAILBOX_ENABLED
#define HAL_INTC_ENABLED
#define HAL_UART_ENABLED
#define HAL_GPIO_ENABLED

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_CONF_H */

