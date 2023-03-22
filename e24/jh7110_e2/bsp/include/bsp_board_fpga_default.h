/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_board_fpga_default.h
 * @author StarFive FW Team
 * @brief FPGA default configurations, which specific type shall #undef then #define to override.
 ******************************************************************************
 */
#ifndef __BSP_BOARD_FPGA_DEFAULT_H_
#define __BSP_BOARD_FPGA_DEFAULT_H_

/**
 * default configurations
 */
#define SYS_BOARD_NAME          "JH7110-FPGA"
#define CONSOLE_UART_ID         0
#define CONSOLE_UART_INITCFG            \
    .baudrate  = 115200,                \
    .data_len  = 8,                     \
    .parity    = UART_PARITY_NONE,      \
    .stopbits  = UART_STOPBITS_1,       \
    .flow_ctrl = UART_FLOWCTRL_NONE,    \

//depends on the freq of the osc
#define CPU_RTC_TOGGLE_HZ       2000000UL

#define SYS_UART0_PINMUX    DEFINE_UART_PINMUX(GPIO6,GPIO5,-1,-1)
#define SYS_UART1_PINMUX    DEFINE_UART_PINMUX(GPIO25,GPIO8,-1,-1)
#define SYS_UART2_PINMUX    DEFINE_UART_PINMUX(GPIO25,GPIO8,GPIO7,GPIO1)
#define SYS_UART3_PINMUX    DEFINE_UART_PINMUX(UART_RX_PIN,UART_TX_PIN,-1,-1)

/*ssp*/
#define SSP_TXNUM           GPIO30
#define SSP_RXNUM           GPIO34
#define SSP_CLKNUM          GPIO31
#define SSP_CSNUM           GPIO33
#define SYS_SSP0_PINMUX     DEFINE_SPI_PINMUX(GPIO33,GPIO34,GPIO36,GPIO35)

//PDM pinmux: mclk, din
#define SYS_PDM0_PINMUX     DEFINE_PDM_PINMUX(GPIO25,GPIO26)
#define SYS_PDM1_PINMUX     DEFINE_PDM_PINMUX(GPIO25,GPIO27)

//I2C pinmux
#define SYS_I2C0_PINMUX    DEFINE_I2C_PINMUX(GPIO24, GPIO25)
#define SYS_I2C1_PINMUX    DEFINE_I2C_PINMUX(GPIO20, GPIO19)
#define SYS_I2C2_PINMUX    DEFINE_I2C_PINMUX(GPIO24, GPIO25)
#define SYS_I2C3_PINMUX    DEFINE_I2C_PINMUX(GPIO24, GPIO25)
#define SYS_I2C4_PINMUX    DEFINE_I2C_PINMUX(GPIO24, GPIO25)
#define SYS_I2C5_PINMUX    DEFINE_I2C_PINMUX(GPIO24, GPIO25)
#define SYS_I2C6_PINMUX    DEFINE_I2C_PINMUX(GPIO13, GPIO14)

//EMMC pinmux
#define SYS_SDIO0_PINMUX    DEFINE_SDIO_PINMUX(GPIO62,-1,-1,-1,-1,-1,-1)
#define SYS_SDIO1_PINMUX    DEFINE_SDIO_PINMUX(GPIO62,GPIO20,GPIO23,GPIO21,GPIO22,GPIO25,GPIO24)

//i2sadc pinmux: mclk, din
#define SYS_I2SADC_3CH_PINMUX   DEFINE_I2S_PINMUX(GPIO43,GPIO38,GPIO57,GPIO39,GPIO40,GPIO41,-1)
#define SYS_I2SDAC_PINMUX       DEFINE_I2S_PINMUX(GPIO39,GPIO23,GPIO24,GPIO25,-1,-1,-1)
#define SYS_I2S_1_PINMUX        DEFINE_I2S_PINMUX(-1,-1,-1,-1,-1,-1,-1)
#define SYS_I2SVAD_PINMUX       DEFINE_I2S_PINMUX(-1,-1,-1,-1,-1,-1,-1)
#define SYS_I2SADC16K_PINMUX    DEFINE_I2S_PINMUX(-1,-1,-1,-1,-1,-1,-1)
#define SYS_I2STX_4CH_0_PINMUX  DEFINE_I2S_PINMUX(GPIO43,GPIO17,GPIO18,GPIO19,-1,-1,-1)

//pwmdac pinmux: pwml, pwmr
#define SYS_PWMDAC_PINMUX       DEFINE_PWMDAC_PINMUX(GPIO50,GPIO51)

//GMACx board cfg: reset_pin, phy_addr,interface_t
#define SYS_GMAC0_BOARD_CFG    DEFINE_GMAC_BOARD_CFG(GPIO63, 0, 1)
#define SYS_GMAC1_BOARD_CFG    DEFINE_GMAC_BOARD_CFG(GPIO63, 0, 1)

//OTP pinmux:vdd2pen(defualt is ok,don't need config)
#define SYS_OTP0_PINMUX     DEFINE_OTP_PINMUX(-1)
#define SYS_OTP_NUM         1
#define SYS_OTP_MEM_SIZE    0x800

//pwm:ch0~ch7
#define SYS_PWM_PINMUX     DEFINE_PWM_PINMUX(GPIO36,GPIO36,GPIO36,GPIO36)//ch 0-3 is gpio,4-7 is rgpio in aon domain;aon defined in bsp_hal_pwm.c

//can pinmux:txd rtx stby
#define SYS_CAN0_PINMUX     DEFINE_CAN_PINMUX(-1,-1,-1)
#define SYS_CAN1_PINMUX     DEFINE_CAN_PINMUX(-1,-1,-1)

//sc2235 pin
#define SC2235_1V8      GPIO11
#define SC2235_1V5      GPIO12
#define SC2235_2V8      GPIO10
#define SC2235_RESETN   GPIO16
#define SC2235_PWDN     GPIO15
#define SC2235_ESYNC    GPIO17
#define SC2235_OEN      GPIO18

#endif /* __BSP_BOARD_FPGA_DEFAULT_H_ */
