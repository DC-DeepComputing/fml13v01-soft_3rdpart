/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_uart_primecell_pl011.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#if defined(HAL_UART_ENABLED) && defined(HAL_UART_PRIMECELL_PL011)

#include "hal_uart_primecell_pl011.h"

uart_handle_t *uart_open(int id, const uart_initcfg_t *cfg)
{
    if (id < 0 || id >= HAL_UART_NUM) {
        return NULL;
    }

    uart_handle_t *uart = (uart_handle_t *)malloc(sizeof(uart_handle_t));
    if (!uart) {
        return NULL;
    }
    memset(uart, 0, sizeof(uart_handle_t));

    uart_priv_t *priv = (uart_priv_t *)malloc(sizeof(uart_priv_t));
    if (!priv) {
        free(uart);
        return NULL;
    }
    memset(priv, 0, sizeof(uart_priv_t));
    
    uart->priv = (void*)priv;
    uart->base = sys_uart_init(id);
    if (!uart->base) {
        free(uart->priv);
        free(uart);
        return NULL;
    }
    uart->id   = id;

    if (cfg) {
        uart_initcfg(uart, cfg);
    }

    return uart;
}

int uart_initcfg(uart_handle_t *uart, const uart_initcfg_t *cfg)
{
    uart_regs_t *regs = (uart_regs_t *)uart->base;
    uint32_t ibrd, fbrd;
    uint32_t pen = (cfg->parity==UART_PARITY_NONE ? 0 : LCRH_PEN);
    uint32_t eps = (cfg->parity==UART_PARITY_EVEN ? LCRH_EPS : 0);
    sys_uart_calc_baudrate_divsor(uart->id, cfg->baudrate, &ibrd, &fbrd);
    regs->cr    = 0;
    regs->ibrd  = ibrd;
    regs->fbrd  = fbrd;
    regs->lcr_h = LCRH_WLEN_8 | LCRH_FEN | pen | eps;
    regs->cr    = CR_UARTEN | CR_TXE | CR_RXE;
    return 0;
}

int uart_close(uart_handle_t *uart)
{
    int err = 0;
    
    if (uart) {
        if (uart->priv) {
            err = sys_uart_deinit(uart->id);
            uart->priv = NULL;
        }
        free(uart);
    }
    return 0;
}

int uart_putc(uart_handle_t *uart, char c)
{
    uart_regs_t *regs = (uart_regs_t *)uart->base;

    while (regs->fr & FR_TXFF) {
        // blank
    }
    regs->dr = (uint32_t)c;
    
    return 0;
}

int uart_getc(uart_handle_t *uart)
{
    uart_regs_t *regs = (uart_regs_t *)uart->base;
    int c;

    while (regs->fr & FR_RXFE) {
        // blank
    }
    c = (int)regs->dr;

    return c;
}

#endif /* HAL_UART_ENABLED && HAL_UART_PRIMECELL_PL011 */

