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

static clock_freq_t sys_pll0_freq(clock_freq_t refclk)
{
    const uint32_t dacpd = GET_U0_PLL_WRAP_PLL0_DACPD;
    const uint32_t dsmpd = GET_U0_PLL_WRAP_PLL0_DSMPD;
    const uint32_t NI    = GET_U0_PLL_WRAP_PLL0_FBDIV;
    const uint32_t M     = GET_U0_PLL_WRAP_PLL0_PREDIV;
    const uint32_t Q1    = 1 << (GET_U0_PLL_WRAP_PLL0_POSTDIV1);
    const uint32_t Q2    = 1 << (GET_U0_PLL_WRAP_PLL0_POSTDIV2);

    if (dacpd == 1 && dsmpd == 1) {
        //Integer Multiple Mode
        const clock_freq_t Fvco = M ? refclk / M * NI : 0;
        const clock_freq_t Fclko1 = Fvco / Q1;
        return Fclko1;
    } else if (dacpd == 0 && dsmpd == 0) {
        //Fraction Multiple Mode
        const double NF = (double)GET_U0_PLL_WRAP_PLL0_FRAC / (1<<24);
        const clock_freq_t Fvco = M ? (clock_freq_t)((double)refclk * ((double)NI + NF) / M + 0.5f) : 0;
        const clock_freq_t Fclko1 = Fvco / Q1;
        return Fclko1;
    } else {
        //invalid
        return 0;
    }
}

static clock_freq_t sys_pll1_freq(clock_freq_t refclk)
{
    const uint32_t dacpd = GET_U0_PLL_WRAP_PLL1_DACPD;
    const uint32_t dsmpd = GET_U0_PLL_WRAP_PLL1_DSMPD;
    const uint32_t NI    = GET_U0_PLL_WRAP_PLL1_FBDIV;
    const uint32_t M     = GET_U0_PLL_WRAP_PLL1_PREDIV;
    const uint32_t Q1    = 1 << (GET_U0_PLL_WRAP_PLL1_POSTDIV1);
    const uint32_t Q2    = 1 << (GET_U0_PLL_WRAP_PLL1_POSTDIV2);

    if (dacpd == 1 && dsmpd == 1) {
        //Integer Multiple Mode
        const clock_freq_t Fvco = M ? refclk * NI / M : 0;
        const clock_freq_t Fclko1 = Fvco / Q1;
        return Fclko1;
    } else if (dacpd == 0 && dsmpd == 0) {
        //Fraction Multiple Mode
        const double NF = (double)GET_U0_PLL_WRAP_PLL1_FRAC / (1<<24);
        const clock_freq_t Fvco = M ? (clock_freq_t)((double)refclk * ((double)NI + NF) / M + 0.5f) : 0;
        const clock_freq_t Fclko1 = Fvco / Q1;
        return Fclko1;
    } else {
        //invalid
        return 0;
    }
}


static clock_freq_t sys_pll2_freq(clock_freq_t refclk)
{
    const uint32_t dacpd = GET_U0_PLL_WRAP_PLL2_DACPD;
    const uint32_t dsmpd = GET_U0_PLL_WRAP_PLL2_DSMPD;
    const uint32_t NI    = GET_U0_PLL_WRAP_PLL2_FBDIV;
    const uint32_t M     = GET_U0_PLL_WRAP_PLL2_PREDIV;
    const uint32_t Q1    = 1 << (GET_U0_PLL_WRAP_PLL2_POSTDIV1);
    const uint32_t Q2    = 1 << (GET_U0_PLL_WRAP_PLL2_POSTDIV2);

    if (dacpd == 1 && dsmpd == 1) {
        //Integer Multiple Mode
        const clock_freq_t Fvco = M ? refclk * NI / M : 0;
        const clock_freq_t Fclko1 = Fvco / Q1;
        return Fclko1;
    } else if (dacpd == 0 && dsmpd == 0) {
        //Fraction Multiple Mode
        const double NF = (double)GET_U0_PLL_WRAP_PLL2_FRAC / (1<<24);
        const clock_freq_t Fvco = M ? (clock_freq_t)((double)refclk * ((double)NI + NF) / M + 0.5f) : 0;
        const clock_freq_t Fclko1 = Fvco / Q1;
        return Fclko1;
    } else {
        //invalid
        return 0;
    }
}

__WEAK clock_freq_t sys_clock_freq(sys_clock_t clk)
{
    uint32_t src, div;

    switch (clk) {
        case CLK_OSC: return 24000000UL;
        case CLK_PLL0: return sys_pll0_freq(sys_clock_freq(CLK_OSC));
        case CLK_PLL1: return sys_pll1_freq(sys_clock_freq(CLK_OSC));
        case CLK_PLL2: return sys_pll2_freq(sys_clock_freq(CLK_OSC));
        case CLK_MCLK_EXT: return sys_get_clk_mclk_ext();
        case CLK_CPU_ROOT:
            src = _GET_CLOCK_SOURCE_STATUS_CLK_CPU_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_OSC, CLK_PLL0}[src]);
        case CLK_CPU_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_CPU_CORE_;
            return div ? sys_clock_freq(CLK_CPU_ROOT) / div : 0;
        case CLK_CPU_BUS:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_CPU_BUS_;
            return div ? sys_clock_freq(CLK_CPU_CORE) / div : 0;
        case CLK_DDR_ROOT:
            return sys_clock_freq(CLK_PLL1);
        case CLK_VDEC_ROOT:
            return sys_clock_freq(CLK_PLL0);
        case CLK_VENC_ROOT:
            return sys_clock_freq(CLK_PLL2);
        case CLK_GPU_ROOT:
            src = _GET_CLOCK_SOURCE_STATUS_CLK_GPU_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_PLL2, CLK_PLL1}[src]);
        case CLK_VOUT_ROOT:
            return sys_clock_freq(CLK_PLL2);
        case CLK_PERH_ROOT:
            src = _GET_CLOCK_SOURCE_STATUS_CLK_PERH_ROOT_;
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PERH_ROOT_;
            return div ? sys_clock_freq((sys_clock_t[]){CLK_PLL0, CLK_PLL2}[src]) / div : 0;
        case CLK_GMACUSB_ROOT:
            return sys_clock_freq(CLK_PLL0);
        case CLK_BUS_ROOT:
            src = _GET_CLOCK_SOURCE_STATUS_CLK_BUS_ROOT_;
            return sys_clock_freq((sys_clock_t[]){CLK_OSC, CLK_PLL2}[src]);
        case CLK_NOCSTG_BUS:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_NOCSTG_BUS_;
            return div ? sys_clock_freq(CLK_BUS_ROOT) / div : 0;
        case CLK_AXI_CFG0:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_AXI_CFG0_;
            return div ? sys_clock_freq(CLK_BUS_ROOT) / div : 0;
        case CLK_STG_AXIAHB:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_STG_AXIAHB_;
            return div ? sys_clock_freq(CLK_AXI_CFG0) / div : 0;
        case CLK_AHB0 ... CLK_AHB1:
            return sys_clock_freq(CLK_STG_AXIAHB);
        case CLK_APB_BUS_FUNC:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_APB_BUS_FUNC_;
            return div ? sys_clock_freq(CLK_STG_AXIAHB) / div : 0;
        case CLK_U2_PCLK_MUX_FUNC_PCLK:
            return sys_clock_freq(CLK_APB_BUS_FUNC);
        case CLK_APB_BUS:
            return sys_clock_freq(CLK_U2_PCLK_MUX_FUNC_PCLK);
        case CLK_APB0:
            return sys_clock_freq(CLK_APB_BUS);
        case CLK_APB12:
            return sys_clock_freq(CLK_APB_BUS);
        case CLK_PLL0_DIV2:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PLL0_DIV2_;
            return div ? sys_clock_freq(CLK_PLL0) / div : 0;
        case CLK_PLL1_DIV2:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PLL1_DIV2_;
            return div ? sys_clock_freq(CLK_PLL1) / div : 0;
        case CLK_PLL2_DIV2:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_PLL2_DIV2_;
            return div ? sys_clock_freq(CLK_PLL2) / div : 0;
        case CLK_AUDIO_ROOT:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_AUDIO_ROOT_;
            return div ? sys_clock_freq(CLK_PLL2) / div : 0;
        case CLK_PWMDAC_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U0_PWMDAC_CLK_CORE_;
            return div ? sys_clock_freq(CLK_AUDIO_ROOT) / div : 0;
        case CLK_PDM_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U0_PDM_4MIC_CLK_DMIC_;
            return div ? sys_clock_freq(CLK_MCLK) / div : 0;
        case CLK_TDM_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_TDM_INTERNAL_;
            return div ? sys_clock_freq(CLK_MCLK) / div : 0;
        case CLK_MCLK_INNER:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_MCLK_INNER_;
            return div ? sys_clock_freq(CLK_AUDIO_ROOT) / div : 0;
        case CLK_MCLK:
            src = _GET_CLOCK_SOURCE_STATUS_CLK_MCLK_;
            return sys_clock_freq((sys_clock_t[]){CLK_MCLK_INNER, CLK_MCLK_EXT}[src]);
        case CLK_MCLK_OUT:
            return sys_clock_freq(CLK_MCLK_INNER);
        case CLK_ISP_2X:
            src = _GET_CLOCK_SOURCE_STATUS_CLK_ISP_2X_;
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_ISP_2X_;
            return div ? sys_clock_freq((sys_clock_t[]){CLK_PLL2, CLK_PLL1}[src]) / div : 0;
        case CLK_ISP_AXI:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_ISP_AXI_;
            return div ? sys_clock_freq(CLK_ISP_2X) / div : 0;
        case CLK_AXI_CFG1:
            return sys_clock_freq(CLK_ISP_AXI);
        case CLK_GCLK0:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK0_;
            return div ? sys_clock_freq(CLK_PLL0_DIV2) / div : 0;
        case CLK_GCLK1:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK1_;
            return div ? sys_clock_freq(CLK_PLL1_DIV2) / div : 0;
        case CLK_GCLK2:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK2_;
            return div ? sys_clock_freq(CLK_PLL2_DIV2) / div : 0;
        case CLK_CPU_RTC_TOGGLE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U0_U7MC_SFT7110_RTC_TOGGLE_;
            return div ? sys_clock_freq(CLK_OSC) / div : 0;

        case CLK_UART0_CORE ... CLK_UART2_CORE:
            return sys_clock_freq(CLK_OSC);
        case CLK_UART3_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U3_DW_UART_CLK_CORE_;
            return (div >> 8) ? sys_clock_freq(CLK_PERH_ROOT) / (div >> 8) : 0; //shift 8bit before calculate
        case CLK_UART4_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U4_DW_UART_CLK_CORE_;
            return (div >> 8) ? sys_clock_freq(CLK_PERH_ROOT) / (div >> 8) : 0; //shift 8bit before calculate
        case CLK_UART5_CORE:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U5_DW_UART_CLK_CORE_;
            return (div >> 8) ? sys_clock_freq(CLK_PERH_ROOT) / (div >> 8) : 0; //shift 8bit before calculate

        case CLK_SI5_TIMER_TIMER0 ... CLK_SI5_TIMER_TIMER3:
            return sys_clock_freq(CLK_OSC);

        case CLK_GPU_CORE:
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

        case CLK_CAN_CLK:
        case CLK_CAN0_CLK:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U0_CAN_CTRL_CLK_CAN_;
            return div ? sys_clock_freq(CLK_PERH_ROOT) / div : 0;
        case CLK_CAN1_CLK:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U1_CAN_CTRL_CLK_CAN_;
            return div ? sys_clock_freq(CLK_PERH_ROOT) / div : 0;
        case CLK_PWM_8CH_APB:
            return sys_clock_freq(CLK_APB12);
        case CLK_DSKIT_WDT:
            return sys_clock_freq(CLK_OSC);

        case CLK_SSP0_CORE ... CLK_SSP2_CORE:
            return sys_clock_freq(CLK_APB0);
        case CLK_SSP3_CORE ... CLK_SSP6_CORE:
            return sys_clock_freq(CLK_APB12);

        case CLK_I2C0_CORE ... CLK_I2C2_CORE:
            return sys_clock_freq(CLK_APB0);
        case CLK_I2C3_CORE ... CLK_I2C6_CORE:
            return sys_clock_freq(CLK_APB12);

        case CLK_OSC_DIV4:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_OSC_DIV4_;
            return div ? sys_clock_freq(CLK_OSC) / div : 0;
        case CLK_AON_APB_FUNC:
            src = _GET_CLOCK_SOURCE_STATUS_CLK_AON_APB_FUNC_;
            return sys_clock_freq((sys_clock_t[]){CLK_OSC_DIV4, CLK_OSC}[src]);
        case CLK_U1_PCLK_MUX_PCLK:
            return sys_clock_freq(CLK_AON_APB_FUNC);
        case CLK_AON_APB:
            return sys_clock_freq(CLK_U1_PCLK_MUX_PCLK);
        case CLK_OTPC_CLK_APB:
            return sys_clock_freq(CLK_AON_APB);

        case CLK_VOUT_SRC:
            return sys_clock_freq(CLK_VOUT_ROOT);
        case CLK_DISP_ROOT:
            return sys_clock_freq(CLK_VOUT_SRC);
        case CLK_DSI_SYS:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_DSI_SYS_;
            return div ? sys_clock_freq(CLK_DISP_ROOT) / div : 0;
        case CLK_DSITX_CLK_SYS:
            return sys_clock_freq(CLK_DSI_SYS);

        case CLK_MIPIPHY_REF:
            div = _GET_CLOCK_DIVIDE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_;
            return div ? sys_clock_freq(CLK_OSC) / div : 0;
        case CLK_HDMIPHY_REF:
            return sys_clock_freq(CLK_OSC);
        case CLK_SPDIF:
            return sys_clock_freq(CLK_MCLK);
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
        "CLK_PERH_ROOT",
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

    for (i = 0; i < 57; i++) {//CLK_NUM
        freq_hz = sys_clock_freq(i);
        if (freq_hz) {
            printf("%32s: %d(%.2fMHz)\n", CLOCK_NAMES[i], freq_hz, (float)freq_hz/1000000UL);
        }
    }
}
