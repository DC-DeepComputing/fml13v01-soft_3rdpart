/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_board.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_BOARD_H_
#define __BSP_BOARD_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define DECLARE_UART_PINMUX                     int rxd,txd,cts,rts
#define DEFINE_UART_PINMUX(rxd,txd,cts,rts)     (rxd),(txd),(cts),(rts)

#define DECLARE_I2C_PINMUX                      int scl,sda
#define DEFINE_I2C_PINMUX(scl,sda)              (scl),(sda)

#define DECLARE_SPI_PINMUX                      int cs_num,clk_num,tx_num,rx_num
#define DEFINE_SPI_PINMUX(cs_num,clk_num,tx_num,rx_num)    (cs_num),(clk_num),(tx_num),(rx_num)

#define DECLARE_PDM_PINMUX                      int mclk,sdin
#define DEFINE_PDM_PINMUX(mclk,sdin)            (mclk),(sdin)

#define DECLARE_I2S_PINMUX                      int mclk,bclk,lrclk,sd0,sd1,sd2, sd3
#define DEFINE_I2S_PINMUX(mclk,bclk,lrclk,sd0,sd1,sd2,sd3)     (mclk),(bclk),(lrclk),(sd0),(sd1),(sd2),(sd3)

#define DECLARE_PWMDAC_PINMUX                    int pwml,pwmr
#define DEFINE_PWMDAC_PINMUX(pwml,pwmr)          (pwml),(pwmr)
#define DECLARE_TDM_PINMUX                       int tdm_tx,tdm_rx,tmd_sync,tmd_mast_clk,tmd_pcm_clk
#define DEFINE_TDM_PINMUX(tdm_tx,tdm_rx,tmd_sync,tmd_mast_clk,tmd_pcm_clk)          (tdm_tx),(tdm_rx),(tmd_sync),(tmd_mast_clk),(tmd_pcm_clk)

#define DEFINE_GMAC_BOARD_CFG(reset_pin,phy_addr,interface,speed,duplex)    {(reset_pin),(phy_addr),(interface),(speed),(duplex)}

#define DECLARE_OTP_PINMUX                      int vdd2pen
#define DEFINE_OTP_PINMUX(vdd2pen)              (vdd2pen)

#define DECLARE_SDIO_PINMUX     int rst,clk,cmd,data0,data1,data2,data3
#define DEFINE_SDIO_PINMUX(rst,clk,cmd,data0,data1,data2,data3)    (rst),(clk),(cmd),(data0),(data1),(data2),(data3)

#define DECLARE_PWM_PINMUX                      int ch_gpio_array[4]
#define DEFINE_PWM_PINMUX(ch0,ch1,ch2,ch3)              (ch0),(ch1),(ch2),(ch3)

#define DECLARE_CAN_PINMUX                      int txd,rxd,stby
#define DEFINE_CAN_PINMUX(txd,rxd,stby)          (txd),(rxd),(stby)


#if defined(BSP_BOARD_FPGA)
    //BOARD_FPGA types are expected to have many in common, a "default" config will do for most types
    #include "bsp_board_fpga_default.h"
    #if defined(BSP_BOARD_FPGA_ISP)
        #include "bsp_board_fpga_isp.h"
    #elif defined(BSP_BOARD_FPGA_MISC)
        #include "bsp_board_fpga_misc.h"
    #elif defined(BSP_BOARD_FPGA_AIC)
        #include "bsp_board_fpga_aic.h"
    #elif defined(BSP_BOARD_FPGA_PERIPHERAL)
        #include "bsp_board_fpga_peripheral.h"
    #elif defined(BSP_BOARD_FPGA_VIDEO)
        #include "bsp_board_fpga_video.h"
    #else
        #error select BOARD_FPGA type in bsp_conf.h.
    #endif
#else
    //BOARD_EVB types are expected to have rare in common, no "default" config
    #if defined(BSP_BOARD_EVB_V1)
        #include "bsp_board_evb_v1.h"
    #else
        #error select BOARD_EVB type in bsp_conf.h.
    #endif
#endif /* BSP_BOARD_FPGA */

int sys_board_init(void);
//Components Initialization for board.
//This function must be called after sys_cpu_init(),sys_board_init(),sys_init_clocks(),sys_gpio_init(),sys_console_init().
int sys_board_components_init(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_BOARD_H_ */

