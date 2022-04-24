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

#define DECLARE_SPI_PINMUX                      int cs,sclk,mosi,miso
#define DEFINE_SPI_PINMUX(cs,sclk,mosi,miso)    (cs),(sclk),(mosi),(miso)

#define DECLARE_PDM_PINMUX                      int mclk,sdin
#define DEFINE_PDM_PINMUX(mclk,sdin)            (mclk),(sdin)

#define DECLARE_I2S_PINMUX                      int mclk,bclk,lrclk,sd0,sd1,sd2, sd3
#define DEFINE_I2S_PINMUX(mclk,bclk,lrclk,sd0,sd1,sd2,sd3)     (mclk),(bclk),(lrclk),(sd0),(sd1),(sd2),(sd3)

#define DECLARE_PWMDAC_PINMUX                    int pwml,pwmr
#define DEFINE_PWMDAC_PINMUX(pwml,pwmr)          (pwml),(pwmr)

#define DECLARE_GMAC_BOARD_CFG                   int reset_pin,phy_addr,interface_t
#define DEFINE_GMAC_BOARD_CFG(reset_pin,phy_addr,interface_t)    (reset_pin),(phy_addr),(interface_t)

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
#error select BOARD type in bsp_conf.h.
#endif

int sys_board_init(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_BOARD_H_ */

