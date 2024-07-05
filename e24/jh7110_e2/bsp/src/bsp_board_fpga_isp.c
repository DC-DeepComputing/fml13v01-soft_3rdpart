/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_board_fpga_isp.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"

#ifdef BSP_BOARD_FPGA_ISP

//On FPGA, all clocks are assigned manually by bitfile author,
//whom you shall confirm with if any clock wrong, ex. uart output can't read.
#define FPGA_CLK_DDR    200000000UL
#define FPGA_CLK_OSC     24000000UL
#define FPGA_CLK_CPU     24000000UL
#define FPGA_CLK_AXI     12000000UL
#define FPGA_CLK_AHB      4000000UL
#define FPGA_CLK_APB      2000000UL
#define FPGA_CLK_VOUT    96000000UL
#define FPGA_CLK_GMAC    10000000UL

int sys_init_clocks(void)
{
    //do nothing for FPGA
    return 0;
}

clock_freq_t sys_clock_freq(sys_clock_t clk)
{
    uint32_t src, div;

    switch (clk) {
        case CLK_CPU_ROOT: return FPGA_CLK_CPU;
        case CLK_UART0_CORE:        return FPGA_CLK_OSC;
        case CLK_UART1_CORE:        return FPGA_CLK_OSC;
        case CLK_UART2_CORE:        return FPGA_CLK_OSC;
        case CLK_UART3_CORE:        return FPGA_CLK_OSC;
        case CLK_UART4_CORE:        return FPGA_CLK_OSC;
        case CLK_UART5_CORE:        return FPGA_CLK_OSC;

        case CLK_CAN_CLK:           return FPGA_CLK_OSC;
        case CLK_PWM_8CH_APB:       return FPGA_CLK_APB;
        case CLK_DSKIT_WDT:         return FPGA_CLK_OSC / 6;
        case CLK_SI5_TIMER_TIMER0:  return FPGA_CLK_OSC / 6;
        case CLK_SI5_TIMER_TIMER1:  return FPGA_CLK_OSC / 6;
        case CLK_SI5_TIMER_TIMER2:  return FPGA_CLK_OSC / 6;
        case CLK_SI5_TIMER_TIMER3:  return FPGA_CLK_OSC / 6;
        case CLK_SSP0_CORE: return FPGA_CLK_APB;
        case CLK_SSP1_CORE: return FPGA_CLK_APB;
        case CLK_SSP2_CORE: return FPGA_CLK_APB;
        case CLK_SSP3_CORE: return FPGA_CLK_APB;
        case CLK_SSP4_CORE: return FPGA_CLK_APB;
        case CLK_SSP5_CORE: return FPGA_CLK_APB;
        case CLK_SSP6_CORE: return FPGA_CLK_APB;

        case CLK_GPU_CORE:          return 0;
        case CLK_GPU_CORE_CLK:      return 0;
        case CLK_GPU_SYS_CLK:       return 0;
        case CLK_GPU_CLK_APB:       return 0;
        case CLK_GPU_RTC_TOGGLE:    return 0;

        case CLK_OTPC_CLK_APB:           return FPGA_CLK_AHB;
        case CLK_GMAC_SRC:          return sys_clock_freq(CLK_GMAC0_AXIAHB);
        case CLK_GMAC0_AXIAHB:      return FPGA_CLK_AHB;
        case CLK_GMAC0_GTXCLK:      return 0;
        case CLK_GMAC0_PTP:         return 0;
        case CLK_GMAC_PHY:          return 0;
        case CLK_GMAC0_GTXC:        return 0;

        case CLK_I2C0_CORE ... CLK_I2C2_CORE:
            return FPGA_CLK_APB;
        case CLK_I2C3_CORE ... CLK_I2C6_CORE:
            return FPGA_CLK_APB;

        case CLK_CPU_RTC_TOGGLE:    return CPU_RTC_TOGGLE_HZ;
        case CLK_DSITX_CLK_SYS:
            return 0; //FIXME: to be define
        case CLK_PPI_TX_ESC:
            return 0; //FIXME: to be define
    }
    return 0;
}

#endif /* BSP_BOARD_FPGA_ISP */

