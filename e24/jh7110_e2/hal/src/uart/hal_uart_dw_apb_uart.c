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

#if defined(HAL_UART_ENABLED) && defined(HAL_UART_DW_APB_UART)

#include "hal_uart_dw_apb_uart.h"

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
    
    regs->r_mcr = (cfg->flow_ctrl == UART_FLOWCTRL_NONE) ? 0 : (MCR_RTS|MCR_AFCE);
    regs->r_lcr = LCR_DLAB;
    uint32_t ibrd, fbrd;
    sys_uart_calc_baudrate_divsor(uart->id, cfg->baudrate, &ibrd, &fbrd);
    regs->r_dll = (ibrd>>0)&0xff;
    regs->r_dlh = (ibrd>>8)&0xff;
    //FIXME: uncomment if the ip set FRACTIONAL_BAUD_DIVISOR_EN to 1.
    //regs->r_dlf = fbrd;
    uint32_t eps_pen = (cfg->parity == UART_PARITY_NONE) ? 0 :
        (cfg->parity == UART_PARITY_ODD ? LCR_PE : (LCR_EPS | LCR_PE));
    uint32_t stop = (cfg->stopbits == UART_STOPBITS_1) ? LCR_STOP_1BIT : LCR_STOP_2BIT;
    uint32_t dls = cfg->data_len - 5;
    regs->r_lcr = eps_pen|stop|dls;
    //enable fifo and reset fifo, 1-byte int trig!
    regs->r_fcr = RCVR_TRIG_1C|TXEM_TRIG_EMT|TXFIFO_RST|RXFIFO_RST|FIFO_ENA;
    regs->r_ier = 0;
    
    return 0;
}

int uart_close(uart_handle_t *uart)
{
    int err = 0;
    
    if (uart) {
        if (uart->priv) {
            err = sys_uart_deinit(uart->id);
            free(uart->priv);
            uart->priv = NULL;
        }
        free(uart);
    }
    return 0;
}

int uart_putc(uart_handle_t *uart, char c)
{
    uart_regs_t *regs = (uart_regs_t *)uart->base;

    while (!(regs->r_lsr & ID_TEMT)) {
        // blank
    }
    regs->r_thr = (uint32_t)c;
    
    return 0;
}

int uart_getc(uart_handle_t *uart)
{
    uart_regs_t *regs = (uart_regs_t *)uart->base;
    int c;
    
    while (!(regs->r_lsr & DATA_RDY)) {
        // blank
    }
    c = (int)regs->r_rbr;

    return c;
}

int uart_tstc(uart_handle_t *uart)
{
    uart_regs_t *regs = (uart_regs_t *)uart->base;
    
    sys_udelay(200); //FIXME: check this delay according to the spec 
    if (!(regs->r_lsr & DATA_RDY)) {
        return 0;
    }
    return 1;
}

#endif /* HAL_UART_ENABLED && HAL_UART_DW_APB_UART */

