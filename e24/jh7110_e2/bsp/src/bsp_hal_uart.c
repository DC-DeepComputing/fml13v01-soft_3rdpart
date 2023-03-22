/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file bsp_hal_uart.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"

typedef struct
{
    void *base;
    DECLARE_UART_PINMUX;
} sys_uart_hwinfo_t;

//TBD
static const sys_uart_hwinfo_t S_UART_HWINFO[SYS_UART_NUM] = {
    {.base = (void *)U0_DW_UART__SAIF_BD_APB__BASE_ADDR,  SYS_UART0_PINMUX },
    {.base = (void *)U1_DW_UART__SAIF_BD_APB__BASE_ADDR,  SYS_UART1_PINMUX },
    {.base = (void *)U2_DW_UART__SAIF_BD_APB__BASE_ADDR,  SYS_UART2_PINMUX },
    {.base = (void *)U3_DW_UART__SAIF_BD_APB__BASE_ADDR,  SYS_UART3_PINMUX },
    {.base = (void *)U4_DW_UART__SAIF_BD_APB__BASE_ADDR,  SYS_UART4_PINMUX },
    {.base = (void *)U5_DW_UART__SAIF_BD_APB__BASE_ADDR,  SYS_UART5_PINMUX },
};

static int sys_uart_enable(int id, const sys_uart_hwinfo_t *hw)
{
    switch (id)
    {
        case 0:
            u0_dw_uart_enable();
            break;
        case 1:
            u1_dw_uart_enable();
            break;
        case 2:
            u2_dw_uart_enable();
            break;
        case 3:
            _DIVIDE_CLOCK_CLK_U3_DW_UART_CLK_CORE_(0xa00);  // div=8 core_clk=62.5M
            u3_dw_uart_enable();
            break;
        case 4:
            _DIVIDE_CLOCK_CLK_U4_DW_UART_CLK_CORE_(0x800);  // div=8 core_clk=62.5M
            u4_dw_uart_enable();
            break;
        case 5:
            _DIVIDE_CLOCK_CLK_U5_DW_UART_CLK_CORE_(0x800);  // div=8 core_clk=62.5M
            u5_dw_uart_enable();
            break;
        default:
            return -EINVAL;
    }
    return 0;
}

static int sys_uart_disable(int id, const sys_uart_hwinfo_t *hw)
{
    switch (id)
    {
        case 0:
            u0_dw_uart_disable();
            break;
        case 1:
            u1_dw_uart_disable();
            break;
        case 2:
            u2_dw_uart_disable();
            break;
        case 3:
            u3_dw_uart_disable();
            break;
        case 4:
            u4_dw_uart_disable();
            break;
        case 5:
            u5_dw_uart_disable();
            break;
        default:
            return -EINVAL;
    }
    return 0;
}

static int sys_uart_pinmux(int id, const sys_uart_hwinfo_t *hw)
{
#if 0
	switch (id)
	{
		case 0:
    	SET_SYS_IOMUX_U0_DW_UART_UART_TXD_GPIO(UART0_TX_GPIO);
    	SET_SYS_IOMUX_U0_DW_UART_UART_RXD_GPIO(UART0_RX_GPIO);
		break;
		default:
			break;
	}
#else
    //FIXME: replace with signal number from future c_macro
    const struct {
        sys_gpio_gpi_t sin;
        sys_gpio_gpo_t sout;
        sys_gpio_gpi_t ctsn;
        sys_gpio_gpo_t rtsn;
    } SIGNALS[] = {
        {GPI_UART0_SIN, GPO_UART0_SOUT, GPI_NONE       , GPO_NONE       },
        {GPI_UART1_SIN, GPO_UART1_SOUT, GPI_UART1_CTS_N, GPO_UART1_RTS_N},
        {GPI_UART2_SIN, GPO_UART2_SOUT, GPI_UART2_CTS_N, GPO_UART2_RTS_N},
        {GPI_UART3_SIN, GPO_UART3_SOUT, GPI_NONE       , GPO_NONE       },
        {GPI_UART4_SIN, GPO_UART4_SOUT, GPI_UART4_CTS_N, GPO_UART4_RTS_N},
        {GPI_UART5_SIN, GPO_UART5_SOUT, GPI_UART5_CTS_N, GPO_UART5_RTS_N},
    };

    sys_gpio_input(hw->rxd, SIGNALS[id].sin);
    sys_gpio_output(hw->txd, SIGNALS[id].sout);
    if ((hw->cts != -1) && (SIGNALS[id].ctsn != GPI_NONE)) {
        sys_gpio_input(hw->cts, SIGNALS[id].ctsn);
    }
    if ((hw->rts != -1) && (SIGNALS[id].rtsn != GPO_NONE)) {
        sys_gpio_output(hw->rts, SIGNALS[id].rtsn);
    }
#endif
    return 0;
}

void *sys_uart_init(int id)
{
    const sys_uart_hwinfo_t *hw = S_UART_HWINFO + id;

    sys_uart_enable(id, hw);
    sys_uart_pinmux(id, hw);
    return hw->base;
}

int sys_uart_deinit(int id)
{
    const sys_uart_hwinfo_t *hw = S_UART_HWINFO + id;
    return sys_uart_disable(id, hw);
}

void sys_uart_calc_baudrate_divsor(int id, uint32_t baudrate, uint32_t *ibrd, uint32_t *fbrd)
{
    uint32_t uart_clock = sys_clock_freq(CLK_UART0_CORE + id);
    const uint32_t DLF_SIZE = 4; // set to "Fractional Divisor Width" of the IP configuration
    uint32_t idivisor, fdivisor, reminder, temp;
    
    idivisor = uart_clock / (16 * baudrate);
    reminder = uart_clock % (16 * baudrate);
    temp     = (1<<DLF_SIZE) * reminder / (8 * baudrate); // 2*2^DLF_SIZE*reminder/(16*baudrate)
    fdivisor = (temp>>1) + (temp&1); // round up

    if (ibrd) *ibrd = idivisor;
    if (fbrd) *fbrd = fdivisor;
}

