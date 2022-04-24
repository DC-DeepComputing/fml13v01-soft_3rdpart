/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_clock.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"

/* external clocks need set by their's setter manually */
static clock_freq_t s_clk_mclk_ext = 0;

__WEAK clock_freq_t sys_get_clk_mclk_ext(void)
{
    return s_clk_mclk_ext;
}

__WEAK clock_freq_t sys_set_clk_mclk_ext(clock_freq_t freq)
{
    clock_freq_t old = s_clk_mclk_ext;
    s_clk_mclk_ext = freq;
    return old;
}

#ifdef BSP_BOARD_FPGA

__WEAK clock_freq_t sys_clock_freq(sys_clock_t clk)
{
    return 0;
}

#else /* BSP_BOARD_FPGA */

__WEAK clock_freq_t sys_clock_freq(sys_clock_t clk)
{
    uint32_t src, div;

    //FIXME: need update for final evb
    switch (clk) {
        case CLK_OSC: return 24000000UL;
        case CLK_PLL0: return 1500000000UL;
        case CLK_PLL1: return 1600000000UL;
        case CLK_PLL2: return 1188000000UL;
        case CLK_MCLK_EXT: return sys_get_clk_mclk_ext();
        case CLK_CPU_ROOT:       //CLK_OSC, CLK_PLL0
            src = _GET_CLOCK_SOURCE_STATUS_CLK_CPU_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_OSC, CLK_PLL0}[src]);
        case CLK_CPU_CORE:       //CLK_CPU_ROOT
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_CPU_CORE_;
            return div ? sys_clock_freq(CLK_CPU_ROOT) / div : 0;
        case CLK_CPU_BUS:        //CLK_CPU_CORE
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_CPU_BUS_;
            return div ? sys_clock_freq(CLK_CPU_CORE) / div : 0;
        case CLK_VCDEC_ROOT:     //CLK_PLL0, CLK_PLL2
            src = _GET_CLOCK_SOURCE_STATUS_CLK_VCDEC_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_PLL0, CLK_PLL2}[src]);
        case CLK_GPU_ROOT:       //CLK_PLL2, CLK_PLL0
            src = _GET_CLOCK_SOURCE_STATUS_CLK_GPU_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_PLL2, CLK_PLL0}[src]);
        case CLK_DSP_ROOT:       //CLK_PLL2, CLK_PLL0
            src = _GET_CLOCK_SOURCE_STATUS_CLK_DSP_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_PLL2, CLK_PLL0}[src]);
        case CLK_VOUT_ROOT:      //CLK_PLL2
            return sys_clock_freq(CLK_PLL2);
        case CLK_BUS_ROOT:       //CLK_OSC, CLK_PLL2
            src = _GET_CLOCK_SOURCE_STATUS_CLK_BUS_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_OSC, CLK_PLL2}[src]);
        case CLK_GMACUSB_ROOT:   //CLK_PLL0
            return sys_clock_freq(CLK_PLL0);
        case CLK_PLL0DIV_PERH:   //CLK_PLL0
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PLL0DIV_PERH_;
            return div ? sys_clock_freq(CLK_PLL0) / div : 0;
        case CLK_PERH_ROOT:      //CLK_OSC, CLK_PLL0DIV_PERH
            src = _GET_CLOCK_SOURCE_STATUS_CLK_PERH_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_OSC, CLK_PLL0DIV_PERH}[src]);
        case CLK_STGM1_BUS:      //CLK_BUS_ROOT
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_STGM1_BUS_;
            return div ? sys_clock_freq(CLK_BUS_ROOT) / div : 0;
        case CLK_AXI_CFG0:       //CLK_BUS_ROOT
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_AXI_CFG0_;
            return div ? sys_clock_freq(CLK_BUS_ROOT) / div : 0;
        case CLK_STG_AXIAHB:     //CLK_AXI_CFG0
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_STG_AXIAHB_;
            return div ? sys_clock_freq(CLK_AXI_CFG0) / div : 0;
        case CLK_AHB0:           //CLK_STG_AXIAHB
            return sys_clock_freq(CLK_STG_AXIAHB);
        case CLK_AHB1:           //CLK_STG_AXIAHB
            return sys_clock_freq(CLK_STG_AXIAHB);
        case CLK_APB_BUS:        //CLK_STG_AXIAHB
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_APB_BUS_;
            return div ? sys_clock_freq(CLK_STG_AXIAHB) / div : 0;
        case CLK_APB0:           //CLK_APB_BUS
            return sys_clock_freq(CLK_APB_BUS);
        case CLK_APB12:          //CLK_APB_BUS
            return sys_clock_freq(CLK_APB_BUS);
        case CLK_PLL0DIV_MCLK:   //CLK_PLL0
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PLL0DIV_MCLK_;
            return div ? sys_clock_freq(CLK_PLL0) / div : 0;
        case CLK_MCLK_INNER:     //CLK_PLL0DIV_MCLK
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_MCLK_INNER_;
            return div ? sys_clock_freq(CLK_PLL0DIV_MCLK) / div : 0;
        case CLK_MCLK:           //CLK_MCLK_INNER, CLK_MCLK_EXT
            src = _GET_CLOCK_SOURCE_STATUS_CLK_MCLK_;
            return sys_clock_freq((sys_clock_t[]){CLK_MCLK_INNER, CLK_MCLK_EXT}[src]);
        case CLK_MCLK_OUT:       //CLK_MCLK_INNER (gpio out)
            return sys_clock_freq(CLK_MCLK_INNER);
        case CLK_ISP_2X:         //CLK_PLL1, CLK_PLL0
            src = _GET_CLOCK_SOURCE_STATUS_CLK_ISP_2X_;
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_ISP_2X_;
            return div ? sys_clock_freq((sys_clock_t[]){CLK_PLL1, CLK_PLL0}[src]) / div : 0;
        case CLK_AXI_CFG1:       //CLK_ISP_2X
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_AXI_CFG1_;
            return div ? sys_clock_freq(CLK_ISP_2X) / div : 0;
        case CLK_PLL1_DIV2_GCLK: //CLK_PLL1
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PLL1_DIV2_GCLK_;
            return div ? sys_clock_freq(CLK_PLL1) / div : 0;
        case CLK_PLL2_DIV2:      //CLK_PLL2
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PLL2_DIV2_;
            return div ? sys_clock_freq(CLK_PLL2) / div : 0;
        case CLK_GCLK0:          //CLK_PLL0DIV_MCLK (gpio out)
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK0_;
            return div ? sys_clock_freq(CLK_PLL0DIV_MCLK) / div : 0;
        case CLK_GCLK1:          //CLK_PLL1_DIV2_GCLK (gpio out)
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK1_;
            return div ? sys_clock_freq(CLK_PLL1_DIV2_GCLK) / div : 0;
        case CLK_GCLK2:          //CLK_PLL2_DIV2 (gpio out)
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK2_;
            return div ? sys_clock_freq(CLK_PLL2_DIV2) / div : 0;

        case CLK_CPU_RTC_TOGGLE: //CLK_OSC
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U0_U7MC_SFT7110_RTC_TOGGLE_;
            return div ? sys_clock_freq(CLK_OSC) / div : 0;

        case CLK_UART0_CORE:
        case CLK_UART1_CORE:
        case CLK_UART2_CORE:
            return sys_clock_freq(CLK_OSC);
        case CLK_UART3_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U3_DW_UART_CLK_CORE_;
            return div ? sys_clock_freq(CLK_PERH_ROOT) / div : 0;
        case CLK_UART4_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U4_DW_UART_CLK_CORE_;
            return div ? sys_clock_freq(CLK_PERH_ROOT) / div : 0;
        case CLK_UART5_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U5_DW_UART_CLK_CORE_;
            return div ? sys_clock_freq(CLK_PERH_ROOT) / div : 0;

        case CLK_SI5_TIMER_TIMER0:
        case CLK_SI5_TIMER_TIMER1:
        case CLK_SI5_TIMER_TIMER2:
        case CLK_SI5_TIMER_TIMER3:
            return sys_clock_freq(CLK_OSC);

        case CLK_GPU_CORE:           //CLK_GPU_ROOT
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GPU_CORE_;
            return div ? sys_clock_freq(CLK_GPU_ROOT) / div : 0;
        case CLK_GPU_CORE_CLK:    //CLK_GPU_CORE
            return sys_clock_freq(CLK_GPU_CORE);
        case CLK_GPU_SYS_CLK:     //CLK_AXI_CFG1
            return sys_clock_freq(CLK_AXI_CFG1);
        case CLK_GPU_CLK_APB:     //CLK_APB12
            return sys_clock_freq(CLK_APB12);
        case CLK_GPU_RTC_TOGGLE:  //CLK_OSC
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U0_IMG_GPU_RTC_TOGGLE_;
            return div ? sys_clock_freq(CLK_OSC) / div : 0;
        
        case CLK_GMAC_SRC:      //CLK_GMACUSB_ROOT
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC_SRC_;
            return div ? sys_clock_freq(CLK_GMACUSB_ROOT) / div : 0;
        case CLK_GMAC0_AXIAHB:  //CLK_STG_AXIAHB
            return sys_clock_freq(CLK_STG_AXIAHB);
        case CLK_GMAC0_GTXCLK:  //CLK_GMACUSB_ROOT
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC0_GTXCLK_;
            return div ? sys_clock_freq(CLK_GMACUSB_ROOT) / div : 0;
        case CLK_GMAC0_PTP:     //CLK_GMAC_SRC
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC0_PTP_;
            return div ? sys_clock_freq(CLK_GMAC_SRC) / div : 0;
        case CLK_GMAC_PHY:      //CLK_GMAC_SRC
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC_PHY_;
            return div ? sys_clock_freq(CLK_GMAC_SRC) / div : 0;
        case CLK_GMAC0_GTXC:    //CLK_GMAC0_GTXCLK
            return sys_clock_freq(CLK_GMAC0_GTXCLK);
    }
    return 0;
}

#endif /* BSP_BOARD_FPGA */

__WEAK int sys_init_clocks(void)
{
    //2ndboot has done most clock switch and divide
    return 0;
}

int sys_clock_debug_print(void)
{
    const static char *CLOCK_NAMES[] = {
        "CLK_OSC",
        "CLK_PLL0",
        "CLK_PLL1",
        "CLK_PLL2",
        "CLK_MCLK_EXT",       //gpio input
        "CLK_CPU_ROOT",
        "CLK_CPU_CORE",
        "CLK_CPU_BUS",
        "CLK_VCDEC_ROOT",
        "CLK_GPU_ROOT",
        "CLK_DSP_ROOT",
        "CLK_VOUT_ROOT",
        "CLK_BUS_ROOT",
        "CLK_GMACUSB_ROOT",
        "CLK_PLL0DIV_PERH",
        "CLK_PERH_ROOT",
        "CLK_STGM1_BUS",
        "CLK_AXI_CFG0",
        "CLK_STG_AXIAHB",
        "CLK_AHB0",
        "CLK_AHB1",
        "CLK_APB_BUS",
        "CLK_APB0",
        "CLK_APB12",
        "CLK_PLL0DIV_MCLK",
        "CLK_MCLK_INNER",
        "CLK_MCLK",
        "CLK_MCLK_OUT",       //gpio out
        "CLK_ISP_2X",
        "CLK_AXI_CFG1",
        "CLK_PLL1_DIV2_GCLK",
        "CLK_PLL2_DIV2",
        "CLK_GCLK0",          //gpio out
        "CLK_GCLK1",          //gpio out
        "CLK_GCLK2",          //gpio out

        "CLK_CPU_RTC_TOGGLE",

        "CLK_UART0_CORE",
        "CLK_UART1_CORE",
        "CLK_UART2_CORE",
        "CLK_UART3_CORE",
        "CLK_UART4_CORE",
        "CLK_UART5_CORE",

        "CLK_SI5_TIMER_TIMER0",
        "CLK_SI5_TIMER_TIMER1",
        "CLK_SI5_TIMER_TIMER2",
        "CLK_SI5_TIMER_TIMER3",

        "CLK_GPU_CORE",
        "CLK_GPU_CORE_CLK",
        "CLK_GPU_SYS_CLK",
        "CLK_GPU_CLK_APB",
        "CLK_GPU_RTC_TOGGLE",

        "CLK_GMAC_SRC",
        "CLK_GMAC0_AXIAHB",
        "CLK_GMAC0_GTXCLK",
        "CLK_GMAC0_PTP",
        "CLK_GMAC_PHY",
        "CLK_GMAC0_GTXC",
    };

    int i;
    uint32_t freq_hz;

    for (i = 0; i < CLK_NUM; i++) {
        freq_hz = sys_clock_freq(i);
        if (freq_hz) {
            printf("%32s: %d(%.2fMHz)\n", CLOCK_NAMES[i], freq_hz, (float)freq_hz/1000000UL);
        }
    }
}