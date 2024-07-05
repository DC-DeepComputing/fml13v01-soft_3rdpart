/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file bsp_hal_conf.h
 * @author StarFive FW Team
 * @brief  config hal ip model
 ******************************************************************************
 */
#ifndef __BSP_HAL_CONF_H
#define __BSP_HAL_CONF_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

//chip-dependent module selection
#define HAL_MAILBOX_SFT_JH7110
#define HAL_UART_DW_APB_UART
#define HAL_GPIO_SFT_JH7110_GPIO
#define HAL_INTC_SFT_AIC1

/**
 * instance numeric consts
 */
#define SYS_UART_NUM        6
#define SYS_PDM_NUM         2
#define SYS_I2S_NUM         4
#define SYS_PWMDAC_NUM      1
#define SYS_OTP_NUM         1

#define SPI_CONTROLLER_NUM 8
#define    CONFIG_SYS_CACHELINE_SIZE 64

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_HAL_CONF_H */

