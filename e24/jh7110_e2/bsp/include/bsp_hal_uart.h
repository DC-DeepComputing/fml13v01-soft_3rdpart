/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file bsp_hal_uart.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_HAL_UART_H
#define __BSP_HAL_UART_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void *sys_uart_init(int id);
int sys_uart_deinit(int id);
void sys_uart_calc_baudrate_divsor(int id, uint32_t baudrate, uint32_t *ibrd, uint32_t *fbrd);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_HAL_UART_H */

