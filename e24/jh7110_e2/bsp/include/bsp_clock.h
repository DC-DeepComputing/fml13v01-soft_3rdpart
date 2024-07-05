/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_clock.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_CLOCK_H_
#define __BSP_CLOCK_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum
{
    CLK_OSC,
    CLK_PLL0,
    CLK_PLL1,
    CLK_PLL2,
    CLK_MCLK_EXT,       //gpio input
    CLK_CPU_ROOT,
    CLK_CPU_CORE,
    CLK_CPU_BUS,
    CLK_DDR_ROOT,
    CLK_VENC_ROOT,
    CLK_VDEC_ROOT,
    CLK_GPU_ROOT,
    CLK_VOUT_ROOT,
    CLK_PERH_ROOT,
    CLK_GMACUSB_ROOT,
    CLK_BUS_ROOT,
    CLK_NOCSTG_BUS,
    CLK_AXI_CFG0,
    CLK_STG_AXIAHB,
    CLK_AHB0,
    CLK_AHB1,
    CLK_APB_BUS_FUNC,
    CLK_U2_PCLK_MUX_FUNC_PCLK,
    CLK_APB_BUS,
    CLK_APB0,
    CLK_APB12,
    CLK_PLL0_DIV2,
    CLK_PLL1_DIV2,
    CLK_PLL2_DIV2,
    CLK_AUDIO_ROOT,
    CLK_MCLK_INNER,
    CLK_MCLK,
    CLK_MCLK_OUT,       //gpio out
    CLK_ISP_2X,
    CLK_ISP_AXI,
    CLK_AXI_CFG1,
    CLK_GCLK0,          //gpio out
    CLK_GCLK1,          //gpio out
    CLK_GCLK2,          //gpio out

    CLK_CPU_RTC_TOGGLE, //U7MC.rtc_toggle

    CLK_UART0_CORE,
    CLK_UART1_CORE,
    CLK_UART2_CORE,
    CLK_UART3_CORE,
    CLK_UART4_CORE,
    CLK_UART5_CORE,

    CLK_CAN_CLK,
    CLK_CAN0_CLK,
    CLK_CAN1_CLK,

    CLK_PWM_8CH_APB,
    CLK_DSKIT_WDT,
    CLK_SI5_TIMER_TIMER0,
    CLK_SI5_TIMER_TIMER1,
    CLK_SI5_TIMER_TIMER2,
    CLK_SI5_TIMER_TIMER3,
    CLK_SSP0_CORE,
    CLK_SSP1_CORE,
    CLK_SSP2_CORE,
    CLK_SSP3_CORE,
    CLK_SSP4_CORE,
    CLK_SSP5_CORE,
    CLK_SSP6_CORE,

    CLK_GPU_CORE,
    CLK_GPU_CORE_CLK,
    CLK_GPU_SYS_CLK,
    CLK_GPU_CLK_APB,
    CLK_GPU_RTC_TOGGLE,

    CLK_OSC_DIV4,
    CLK_AON_APB_FUNC,
    CLK_U1_PCLK_MUX_PCLK,
    CLK_AON_APB,
    CLK_OTPC_CLK_APB,
    CLK_GMAC_SRC,
    CLK_GMAC0_AXIAHB,
    CLK_GMAC0_GTXCLK,
    CLK_GMAC0_PTP,
    CLK_GMAC_PHY,
    CLK_GMAC0_GTXC,

    CLK_I2C0_CORE,
    CLK_I2C1_CORE,
    CLK_I2C2_CORE,
    CLK_I2C3_CORE,
    CLK_I2C4_CORE,
    CLK_I2C5_CORE,
    CLK_I2C6_CORE,

    CLK_VOUT_SRC,
    CLK_VOUT_AXI,
    CLK_DISP_ROOT,
    CLK_DSI_SYS,
    CLK_DSITX_CLK_SYS,
    CLK_PPI_TX_ESC,

    CLK_MIPIPHY_REF,
    CLK_HDMIPHY_REF,
	CLK_SPDIF,

    CLK_PWMDAC_CORE,
    CLK_PDM_CORE,
    CLK_TDM_CORE,

    //add new clocks here, check clkrst_asic table

    CLK_NUM,
    CLK_NONE=CLK_NUM
} sys_clock_t;

typedef uint32_t clock_freq_t;

int sys_clock_select_src(sys_clock_t clk, sys_clock_t src);
int sys_clock_divide(sys_clock_t clk, uint32_t div);
int sys_clock_set_enable(sys_clock_t clk, int enable);
clock_freq_t sys_clock_freq(sys_clock_t clk);
int sys_init_clocks(void);
clock_freq_t sys_get_clk_mclk_ext(void);
clock_freq_t sys_set_clk_mclk_ext(clock_freq_t freq);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_CLOCK_H_ */

