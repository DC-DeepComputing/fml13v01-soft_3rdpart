/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_uart_dw_apb_uart.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#ifdef HAL_UART_ENABLED

__WEAK uart_handle_t * uart_open(int id, const uart_initcfg_t *cfg)
{
    return NULL;
}

__WEAK int uart_initcfg(uart_handle_t *uart, const uart_initcfg_t *cfg)
{
    return 0;
}

__WEAK int uart_close(uart_handle_t *uart)
{
    return 0;
}

__WEAK int uart_putc(uart_handle_t *uart, char c)
{
    return 0;
}

__WEAK int uart_getc(uart_handle_t *uart)
{
    return 0;
}

__WEAK int uart_tstc(uart_handle_t *uart)
{
    return 0;
}

#endif /* HAL_UART_ENABLED */

