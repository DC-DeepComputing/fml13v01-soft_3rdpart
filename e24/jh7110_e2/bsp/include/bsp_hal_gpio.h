/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * 
 * @file bsp_hal_gpio.h
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#ifndef __BSP_HAL_GPIO_H
#define __BSP_HAL_GPIO_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define SYS_GPIO_NUM    64

/* GPIO pinout */
typedef enum
{
    GPIO0,
    GPIO1,
    GPIO2,
    GPIO3,
    GPIO4,
    GPIO5,
    GPIO6,
    GPIO7,
    GPIO8,
    GPIO9,
    GPIO10,
    GPIO11,
    GPIO12,
    GPIO13,
    GPIO14,
    GPIO15,
    GPIO16,
    GPIO17,
    GPIO18,
    GPIO19,
    GPIO20,
    GPIO21,
    GPIO22,
    GPIO23,
    GPIO24,
    GPIO25,
    GPIO26,
    GPIO27,
    GPIO28,
    GPIO29,
    GPIO30,
    GPIO31,
    GPIO32,
    GPIO33,
    GPIO34,
    GPIO35,
    GPIO36,
    GPIO37,
    GPIO38,
    GPIO39,
    GPIO40,
    GPIO41,
    GPIO42,
    GPIO43,
    GPIO44,
    GPIO45,
    GPIO46,
    GPIO47,
    GPIO48,
    GPIO49,
    GPIO50,
    GPIO51,
    GPIO52,
    GPIO53,
    GPIO54,
    GPIO55,
    GPIO56,
    GPIO57,
    GPIO58,
    GPIO59,
    GPIO60,
    GPIO61,
    GPIO62,
    GPIO63,
} sys_gpio_port_t;

typedef enum
{
    GPO_LOW,
    GPO_HIGH,

    GPO_CAN0_CTRL_STBY             = GPO_SYS_IOMUX_U0_CAN_CTRL_STBY                           ,
    GPO_CAN0_CTRL_TST_NEXT_BIT     = GPO_SYS_IOMUX_U0_CAN_CTRL_TST_NEXT_BIT                   ,
    GPO_CAN0_CTRL_TST_SAMPLE_POINT = GPO_SYS_IOMUX_U0_CAN_CTRL_TST_SAMPLE_POINT               ,
    GPO_CAN0_CTRL_TXD              = GPO_SYS_IOMUX_U0_CAN_CTRL_TXD                            ,
    GPO_CAN1_CTRL_STBY             = GPO_SYS_IOMUX_U1_CAN_CTRL_STBY                           ,
    GPO_CAN1_CTRL_TST_NEXT_BIT     = GPO_SYS_IOMUX_U1_CAN_CTRL_TST_NEXT_BIT                   ,
    GPO_CAN1_CTRL_TST_SAMPLE_POINT = GPO_SYS_IOMUX_U1_CAN_CTRL_TST_SAMPLE_POINT               ,
    GPO_CAN1_CTRL_TXD              = GPO_SYS_IOMUX_U1_CAN_CTRL_TXD                            ,
    GPO_CRG0_MCLK_OUT              = GPO_SYS_IOMUX_U0_SYS_CRG_MCLK_OUT                        ,
    GPO_GMAC0_CLK_PHY              = GPO_SYS_IOMUX_U0_SYS_CRG_CLK_GMAC_PHY                    ,
    GPO_HDMI0_CEC_SDA_OUT          = GPO_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_CEC_SDA_OUT ,
    GPO_HDMI0_DDC_SCL_OUT          = GPO_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_DDC_SCL_OUT ,
    GPO_HDMI0_DDC_SDA_OUT          = GPO_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_DDC_SDA_OUT ,
    GPO_I2C0_IC_CLK_OUT_A          = GPO_SYS_IOMUX_U0_DW_I2C_IC_CLK_OUT_A                     ,
    GPO_I2C0_IC_DATA_OUT_A         = GPO_SYS_IOMUX_U0_DW_I2C_IC_DATA_OUT_A                    ,
    GPO_I2C1_IC_CLK_OUT_A          = GPO_SYS_IOMUX_U1_DW_I2C_IC_CLK_OUT_A                     ,
    GPO_I2C1_IC_DATA_OUT_A         = GPO_SYS_IOMUX_U1_DW_I2C_IC_DATA_OUT_A                    ,
    GPO_I2C2_IC_CLK_OUT_A          = GPO_SYS_IOMUX_U2_DW_I2C_IC_CLK_OUT_A                     ,
    GPO_I2C2_IC_DATA_OUT_A         = GPO_SYS_IOMUX_U2_DW_I2C_IC_DATA_OUT_A                    ,
    GPO_I2C3_IC_CLK_OUT_A          = GPO_SYS_IOMUX_U3_DW_I2C_IC_CLK_OUT_A                     ,
    GPO_I2C3_IC_DATA_OUT_A         = GPO_SYS_IOMUX_U3_DW_I2C_IC_DATA_OUT_A                    ,
    GPO_I2C4_IC_CLK_OUT_A          = GPO_SYS_IOMUX_U4_DW_I2C_IC_CLK_OUT_A                     ,
    GPO_I2C4_IC_DATA_OUT_A         = GPO_SYS_IOMUX_U4_DW_I2C_IC_DATA_OUT_A                    ,
    GPO_I2C5_IC_CLK_OUT_A          = GPO_SYS_IOMUX_U5_DW_I2C_IC_CLK_OUT_A                     ,
    GPO_I2C5_IC_DATA_OUT_A         = GPO_SYS_IOMUX_U5_DW_I2C_IC_DATA_OUT_A                    ,
    GPO_I2C6_IC_CLK_OUT_A          = GPO_SYS_IOMUX_U6_DW_I2C_IC_CLK_OUT_A                     ,
    GPO_I2C6_IC_DATA_OUT_A         = GPO_SYS_IOMUX_U6_DW_I2C_IC_DATA_OUT_A                    ,
    GPO_I2SRX0_BCLK_MST            = GPO_SYS_IOMUX_U0_SYS_CRG_I2SRX_BCLK_MST                  ,
    GPO_I2SRX0_LRCK_MST            = GPO_SYS_IOMUX_U0_SYS_CRG_I2SRX_LRCK_MST                  ,
    GPO_I2STX_4CH1_SDO0            = GPO_SYS_IOMUX_U1_I2STX_4CH_SDO0                          ,
    GPO_I2STX_4CH1_SDO1            = GPO_SYS_IOMUX_U1_I2STX_4CH_SDO1                          ,
    GPO_I2STX_4CH1_SDO2            = GPO_SYS_IOMUX_U1_I2STX_4CH_SDO2                          ,
    GPO_I2STX_4CH1_SDO3            = GPO_SYS_IOMUX_U1_I2STX_4CH_SDO3                          ,
    GPO_I2STX0_BCLK_MST            = GPO_SYS_IOMUX_U0_SYS_CRG_I2STX_BCLK_MST                  ,
    GPO_I2STX0_LRCK_MST            = GPO_SYS_IOMUX_U0_SYS_CRG_I2STX_LRCK_MST                  ,
    GPO_JTAG_CPU_CERTIFICATION_TDO = GPO_SYS_IOMUX_U0_JTAG_CERTIFICATION_TDO                  ,
    GPO_JTAG_DSP_TDO               = GPO_SYS_IOMUX_U0_HIFI4_JTDO                              ,
    GPO_PDM_4MIC0_DMIC_MCLK        = GPO_SYS_IOMUX_U0_PDM_4MIC_DMIC_MCLK                      ,
    GPO_PTC0_PWM_0                 = GPO_SYS_IOMUX_U0_PWM_8CH_PTC_PWM_0                       ,
    GPO_PTC0_PWM_1                 = GPO_SYS_IOMUX_U0_PWM_8CH_PTC_PWM_1                       ,
    GPO_PTC0_PWM_2                 = GPO_SYS_IOMUX_U0_PWM_8CH_PTC_PWM_2                       ,
    GPO_PTC0_PWM_3                 = GPO_SYS_IOMUX_U0_PWM_8CH_PTC_PWM_3                       ,
    GPO_PWMDAC0_LEFT_OUTPUT        = GPO_SYS_IOMUX_U0_PWMDAC_PWMDAC_LEFT_OUTPUT               ,
    GPO_PWMDAC0_RIGHT_OUTPUT       = GPO_SYS_IOMUX_U0_PWMDAC_PWMDAC_RIGHT_OUTPUT              ,
    GPO_QSPI0_CSN1                 = GPO_SYS_IOMUX_U0_CDNS_QSPI_CSN1                          ,
    GPO_SDIO0_BACK_END_POWER       = GPO_SYS_IOMUX_U0_DW_SDIO_BACK_END_POWER                  ,
    GPO_SDIO0_CARD_POWER_EN        = GPO_SYS_IOMUX_U0_DW_SDIO_CARD_POWER_EN                   ,
    GPO_SDIO0_CCMD_OD_PULLUP_EN_N  = GPO_SYS_IOMUX_U0_DW_SDIO_CCMD_OD_PULLUP_EN_N             ,
    GPO_SDIO0_RST_N                = GPO_SYS_IOMUX_U0_DW_SDIO_RST_N                           ,
    GPO_SDIO1_BACK_END_POWER       = GPO_SYS_IOMUX_U1_DW_SDIO_BACK_END_POWER                  ,
    GPO_SDIO1_CARD_POWER_EN        = GPO_SYS_IOMUX_U1_DW_SDIO_CARD_POWER_EN                   ,
    GPO_SDIO1_CCLK_OUT             = GPO_SYS_IOMUX_U1_DW_SDIO_CCLK_OUT                        ,
    GPO_SDIO1_CCMD_OD_PULLUP_EN_N  = GPO_SYS_IOMUX_U1_DW_SDIO_CCMD_OD_PULLUP_EN_N             ,
    GPO_SDIO1_CCMD_OUT             = GPO_SYS_IOMUX_U1_DW_SDIO_CCMD_OUT                        ,
    GPO_SDIO1_CDATA_OUT_0          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_0                     ,
    GPO_SDIO1_CDATA_OUT_1          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_1                     ,
    GPO_SDIO1_CDATA_OUT_2          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_2                     ,
    GPO_SDIO1_CDATA_OUT_3          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_3                     ,
    GPO_SDIO1_CDATA_OUT_4          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_4                     ,
    GPO_SDIO1_CDATA_OUT_5          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_5                     ,
    GPO_SDIO1_CDATA_OUT_6          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_6                     ,
    GPO_SDIO1_CDATA_OUT_7          = GPO_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_7                     ,
    GPO_SDIO1_RST_N                = GPO_SYS_IOMUX_U1_DW_SDIO_RST_N                           ,
    GPO_SPDIF0_SPDIFO              = GPO_SYS_IOMUX_U0_CDNS_SPDIF_SPDIFO                       ,
    GPO_SPI0_SSPCLKOUT             = GPO_SYS_IOMUX_U0_SSP_SPI_SSPCLKOUT                       ,
    GPO_SPI0_SSPFSSOUT             = GPO_SYS_IOMUX_U0_SSP_SPI_SSPFSSOUT                       ,
    GPO_SPI0_SSPTXD                = GPO_SYS_IOMUX_U0_SSP_SPI_SSPTXD                          ,
    GPO_SPI1_SSPCLKOUT             = GPO_SYS_IOMUX_U1_SSP_SPI_SSPCLKOUT                       ,
    GPO_SPI1_SSPFSSOUT             = GPO_SYS_IOMUX_U1_SSP_SPI_SSPFSSOUT                       ,
    GPO_SPI1_SSPTXD                = GPO_SYS_IOMUX_U1_SSP_SPI_SSPTXD                          ,
    GPO_SPI2_SSPCLKOUT             = GPO_SYS_IOMUX_U2_SSP_SPI_SSPCLKOUT                       ,
    GPO_SPI2_SSPFSSOUT             = GPO_SYS_IOMUX_U2_SSP_SPI_SSPFSSOUT                       ,
    GPO_SPI2_SSPTXD                = GPO_SYS_IOMUX_U2_SSP_SPI_SSPTXD                          ,
    GPO_SPI3_SSPCLKOUT             = GPO_SYS_IOMUX_U3_SSP_SPI_SSPCLKOUT                       ,
    GPO_SPI3_SSPFSSOUT             = GPO_SYS_IOMUX_U3_SSP_SPI_SSPFSSOUT                       ,
    GPO_SPI3_SSPTXD                = GPO_SYS_IOMUX_U3_SSP_SPI_SSPTXD                          ,
    GPO_SPI4_SSPCLKOUT             = GPO_SYS_IOMUX_U4_SSP_SPI_SSPCLKOUT                       ,
    GPO_SPI4_SSPFSSOUT             = GPO_SYS_IOMUX_U4_SSP_SPI_SSPFSSOUT                       ,
    GPO_SPI4_SSPTXD                = GPO_SYS_IOMUX_U4_SSP_SPI_SSPTXD                          ,
    GPO_SPI5_SSPCLKOUT             = GPO_SYS_IOMUX_U5_SSP_SPI_SSPCLKOUT                       ,
    GPO_SPI5_SSPFSSOUT             = GPO_SYS_IOMUX_U5_SSP_SPI_SSPFSSOUT                       ,
    GPO_SPI5_SSPTXD                = GPO_SYS_IOMUX_U5_SSP_SPI_SSPTXD                          ,
    GPO_SPI6_SSPCLKOUT             = GPO_SYS_IOMUX_U6_SSP_SPI_SSPCLKOUT                       ,
    GPO_SPI6_SSPFSSOUT             = GPO_SYS_IOMUX_U6_SSP_SPI_SSPFSSOUT                       ,
    GPO_SPI6_SSPTXD                = GPO_SYS_IOMUX_U6_SSP_SPI_SSPTXD                          ,
    GPO_TDM0_CLK_MST               = GPO_SYS_IOMUX_U0_SYS_CRG_TDM_CLK_MST                     ,
    GPO_TDM0_PCM_SYNCOUT           = GPO_SYS_IOMUX_U0_TDM16SLOT_PCM_SYNCOUT                   ,
    GPO_TDM0_PCM_TXD               = GPO_SYS_IOMUX_U0_TDM16SLOT_PCM_TXD                       ,
    GPO_U7MC_TRACE0_TDATA_0        = GPO_SYS_IOMUX_U0_U7MC_SFT7110_TRACE_COM_PIB_TDATA_0      ,
    GPO_U7MC_TRACE0_TDATA_1        = GPO_SYS_IOMUX_U0_U7MC_SFT7110_TRACE_COM_PIB_TDATA_1      ,
    GPO_U7MC_TRACE0_TDATA_2        = GPO_SYS_IOMUX_U0_U7MC_SFT7110_TRACE_COM_PIB_TDATA_2      ,
    GPO_U7MC_TRACE0_TDATA_3        = GPO_SYS_IOMUX_U0_U7MC_SFT7110_TRACE_COM_PIB_TDATA_3      ,
    GPO_U7MC_TRACE0_TREF           = GPO_SYS_IOMUX_U0_U7MC_SFT7110_TRACE_COM_PIB_TREF         ,
    GPO_UART0_SOUT                 = GPO_SYS_IOMUX_U0_DW_UART_SOUT                            ,
    GPO_UART1_RTS_N                = GPO_SYS_IOMUX_U1_DW_UART_RTS_N                           ,
    GPO_UART1_SOUT                 = GPO_SYS_IOMUX_U1_DW_UART_SOUT                            ,
    GPO_UART2_RTS_N                = GPO_SYS_IOMUX_U2_DW_UART_RTS_N                           ,
    GPO_UART2_SOUT                 = GPO_SYS_IOMUX_U2_DW_UART_SOUT                            ,
    GPO_UART3_SOUT                 = GPO_SYS_IOMUX_U3_DW_UART_SOUT                            ,
    GPO_UART4_RTS_N                = GPO_SYS_IOMUX_U4_DW_UART_RTS_N                           ,
    GPO_UART4_SOUT                 = GPO_SYS_IOMUX_U4_DW_UART_SOUT                            ,
    GPO_UART5_RTS_N                = GPO_SYS_IOMUX_U5_DW_UART_RTS_N                           ,
    GPO_UART5_SOUT                 = GPO_SYS_IOMUX_U5_DW_UART_SOUT                            ,
    GPO_USB0_DRIVE_VBUS_IO         = GPO_SYS_IOMUX_U0_CDN_USB_DRIVE_VBUS_IO                   ,
    GPO_WAVE511_0_O_UART_TXSOUT    = GPO_SYS_IOMUX_U0_WAVE511_O_UART_TXSOUT                   ,
    GPO_WDT0_WDOGRES               = GPO_SYS_IOMUX_U0_DSKIT_WDT_WDOGRES                       ,

    GPO_NONE = GPO_SYS_IOMUX_U6_SSP_SPI_SSPTXD + 1,
    GPO_NUM  = GPO_NONE,
} sys_gpio_gpo_t;

typedef enum
{
    GPI_CAN0_CTRL_RXD                       = GPI_SYS_IOMUX_U0_CAN_CTRL_RXD                           ,
    GPI_CAN1_CTRL_RXD                       = GPI_SYS_IOMUX_U1_CAN_CTRL_RXD                           ,
    GPI_CRG0_EXT_MCLK                       = GPI_SYS_IOMUX_U0_SYS_CRG_EXT_MCLK                       ,
    GPI_HDMI0_CEC_SDA_IN                    = GPI_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_CEC_SDA_IN ,
    GPI_HDMI0_DDC_SCL_IN                    = GPI_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_DDC_SCL_IN ,
    GPI_HDMI0_DDC_SDA_IN                    = GPI_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_DDC_SDA_IN ,
    GPI_HDMI0_HPD                           = GPI_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_HPD        ,
    GPI_I2C0_IC_CLK_IN_A                    = GPI_SYS_IOMUX_U0_DW_I2C_IC_CLK_IN_A                     ,
    GPI_I2C0_IC_DATA_IN_A                   = GPI_SYS_IOMUX_U0_DW_I2C_IC_DATA_IN_A                    ,
    GPI_I2C1_IC_CLK_IN_A                    = GPI_SYS_IOMUX_U1_DW_I2C_IC_CLK_IN_A                     ,
    GPI_I2C1_IC_DATA_IN_A                   = GPI_SYS_IOMUX_U1_DW_I2C_IC_DATA_IN_A                    ,
    GPI_I2C2_IC_CLK_IN_A                    = GPI_SYS_IOMUX_U2_DW_I2C_IC_CLK_IN_A                     ,
    GPI_I2C2_IC_DATA_IN_A                   = GPI_SYS_IOMUX_U2_DW_I2C_IC_DATA_IN_A                    ,
    GPI_I2C3_IC_CLK_IN_A                    = GPI_SYS_IOMUX_U3_DW_I2C_IC_CLK_IN_A                     ,
    GPI_I2C3_IC_DATA_IN_A                   = GPI_SYS_IOMUX_U3_DW_I2C_IC_DATA_IN_A                    ,
    GPI_I2C4_IC_CLK_IN_A                    = GPI_SYS_IOMUX_U4_DW_I2C_IC_CLK_IN_A                     ,
    GPI_I2C4_IC_DATA_IN_A                   = GPI_SYS_IOMUX_U4_DW_I2C_IC_DATA_IN_A                    ,
    GPI_I2C5_IC_CLK_IN_A                    = GPI_SYS_IOMUX_U5_DW_I2C_IC_CLK_IN_A                     ,
    GPI_I2C5_IC_DATA_IN_A                   = GPI_SYS_IOMUX_U5_DW_I2C_IC_DATA_IN_A                    ,
    GPI_I2C6_IC_CLK_IN_A                    = GPI_SYS_IOMUX_U6_DW_I2C_IC_CLK_IN_A                     ,
    GPI_I2C6_IC_DATA_IN_A                   = GPI_SYS_IOMUX_U6_DW_I2C_IC_DATA_IN_A                    ,
    GPI_I2SRX0_BCLK_SLV                     = GPI_SYS_IOMUX_U0_SYS_CRG_I2SRX_BCLK_SLV                 ,
    GPI_I2SRX0_EXT_SDIN0                    = GPI_SYS_IOMUX_U0_SAIF_AUDIO_SDIN_MUX_I2SRX_EXT_SDIN0    ,
    GPI_I2SRX0_EXT_SDIN1                    = GPI_SYS_IOMUX_U0_SAIF_AUDIO_SDIN_MUX_I2SRX_EXT_SDIN1    ,
    GPI_I2SRX0_EXT_SDIN2                    = GPI_SYS_IOMUX_U0_SAIF_AUDIO_SDIN_MUX_I2SRX_EXT_SDIN2    ,
    GPI_I2SRX0_LRCK_SLV                     = GPI_SYS_IOMUX_U0_SYS_CRG_I2SRX_LRCK_SLV                 ,
    GPI_I2STX0_BCLK_SLV                     = GPI_SYS_IOMUX_U0_SYS_CRG_I2STX_BCLK_SLV                 ,
    GPI_I2STX0_LRCK_SLV                     = GPI_SYS_IOMUX_U0_SYS_CRG_I2STX_LRCK_SLV                 ,
    GPI_JTAG_CPU_CERTIFICATION_BYPASS_TRSTN = GPI_SYS_IOMUX_U0_CLKRST_SRC_BYPASS_JTAG_TRSTN           ,
    GPI_JTAG_CPU_CERTIFICATION_TCK          = GPI_SYS_IOMUX_U0_SYS_CRG_CLK_JTAG_TCK                   ,
    GPI_JTAG_CPU_CERTIFICATION_TDI          = GPI_SYS_IOMUX_U0_JTAG_CERTIFICATION_TDI                 ,
    GPI_JTAG_CPU_CERTIFICATION_TMS          = GPI_SYS_IOMUX_U0_JTAG_CERTIFICATION_TMS                 ,
    GPI_JTAG_DSP_TCK                        = GPI_SYS_IOMUX_U0_HIFI4_JTCK                             ,
    GPI_JTAG_DSP_TDI                        = GPI_SYS_IOMUX_U0_HIFI4_JTDI                             ,
    GPI_JTAG_DSP_TMS                        = GPI_SYS_IOMUX_U0_HIFI4_JTMS                             ,
    GPI_JTAG_DSP_TRST_N                     = GPI_SYS_IOMUX_U0_HIFI4_JTRSTN                           ,
    GPI_PDM_4MIC0_DMIC0_DIN                 = GPI_SYS_IOMUX_U0_PDM_4MIC_DMIC0_DIN                     ,
    GPI_PDM_4MIC0_DMIC1_DIN                 = GPI_SYS_IOMUX_U0_PDM_4MIC_DMIC1_DIN                     ,
    GPI_SDIO0_CARD_DETECT_N                 = GPI_SYS_IOMUX_U0_DW_SDIO_CARD_DETECT_N                  ,
    GPI_SDIO0_CARD_INT_N                    = GPI_SYS_IOMUX_U0_DW_SDIO_CARD_INT_N                     ,
    GPI_SDIO0_CARD_WRITE_PRT                = GPI_SYS_IOMUX_U0_DW_SDIO_CARD_WRITE_PRT                 ,
    GPI_SDIO1_CARD_DETECT_N                 = GPI_SYS_IOMUX_U1_DW_SDIO_CARD_DETECT_N                  ,
    GPI_SDIO1_CARD_INT_N                    = GPI_SYS_IOMUX_U1_DW_SDIO_CARD_INT_N                     ,
    GPI_SDIO1_CARD_WRITE_PRT                = GPI_SYS_IOMUX_U1_DW_SDIO_CARD_WRITE_PRT                 ,
    GPI_SDIO1_CCMD_IN                       = GPI_SYS_IOMUX_U1_DW_SDIO_CCMD_IN                        ,
    GPI_SDIO1_CDATA_IN_0                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_0                     ,
    GPI_SDIO1_CDATA_IN_1                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_1                     ,
    GPI_SDIO1_CDATA_IN_2                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_2                     ,
    GPI_SDIO1_CDATA_IN_3                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_3                     ,
    GPI_SDIO1_CDATA_IN_4                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_4                     ,
    GPI_SDIO1_CDATA_IN_5                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_5                     ,
    GPI_SDIO1_CDATA_IN_6                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_6                     ,
    GPI_SDIO1_CDATA_IN_7                    = GPI_SYS_IOMUX_U1_DW_SDIO_CDATA_IN_7                     ,
    GPI_SDIO1_DATA_STROBE                   = GPI_SYS_IOMUX_U1_DW_SDIO_DATA_STROBE                    ,
    GPI_SPDIF0_SPDIFI                       = GPI_SYS_IOMUX_U0_CDNS_SPDIF_SPDIFI                      ,
    GPI_SPI0_SSPCLKIN                       = GPI_SYS_IOMUX_U0_SSP_SPI_SSPCLKIN                       ,
    GPI_SPI0_SSPFSSIN                       = GPI_SYS_IOMUX_U0_SSP_SPI_SSPFSSIN                       ,
    GPI_SPI0_SSPRXD                         = GPI_SYS_IOMUX_U0_SSP_SPI_SSPRXD                         ,
    GPI_SPI1_SSPCLKIN                       = GPI_SYS_IOMUX_U1_SSP_SPI_SSPCLKIN                       ,
    GPI_SPI1_SSPFSSIN                       = GPI_SYS_IOMUX_U1_SSP_SPI_SSPFSSIN                       ,
    GPI_SPI1_SSPRXD                         = GPI_SYS_IOMUX_U1_SSP_SPI_SSPRXD                         ,
    GPI_SPI2_SSPCLKIN                       = GPI_SYS_IOMUX_U2_SSP_SPI_SSPCLKIN                       ,
    GPI_SPI2_SSPFSSIN                       = GPI_SYS_IOMUX_U2_SSP_SPI_SSPFSSIN                       ,
    GPI_SPI2_SSPRXD                         = GPI_SYS_IOMUX_U2_SSP_SPI_SSPRXD                         ,
    GPI_SPI3_SSPCLKIN                       = GPI_SYS_IOMUX_U3_SSP_SPI_SSPCLKIN                       ,
    GPI_SPI3_SSPFSSIN                       = GPI_SYS_IOMUX_U3_SSP_SPI_SSPFSSIN                       ,
    GPI_SPI3_SSPRXD                         = GPI_SYS_IOMUX_U3_SSP_SPI_SSPRXD                         ,
    GPI_SPI4_SSPCLKIN                       = GPI_SYS_IOMUX_U4_SSP_SPI_SSPCLKIN                       ,
    GPI_SPI4_SSPFSSIN                       = GPI_SYS_IOMUX_U4_SSP_SPI_SSPFSSIN                       ,
    GPI_SPI4_SSPRXD                         = GPI_SYS_IOMUX_U4_SSP_SPI_SSPRXD                         ,
    GPI_SPI5_SSPCLKIN                       = GPI_SYS_IOMUX_U5_SSP_SPI_SSPCLKIN                       ,
    GPI_SPI5_SSPFSSIN                       = GPI_SYS_IOMUX_U5_SSP_SPI_SSPFSSIN                       ,
    GPI_SPI5_SSPRXD                         = GPI_SYS_IOMUX_U5_SSP_SPI_SSPRXD                         ,
    GPI_SPI6_SSPCLKIN                       = GPI_SYS_IOMUX_U6_SSP_SPI_SSPCLKIN                       ,
    GPI_SPI6_SSPFSSIN                       = GPI_SYS_IOMUX_U6_SSP_SPI_SSPFSSIN                       ,
    GPI_SPI6_SSPRXD                         = GPI_SYS_IOMUX_U6_SSP_SPI_SSPRXD                         ,
    GPI_TDM0_CLK_SLV                        = GPI_SYS_IOMUX_U0_SYS_CRG_TDM_CLK_SLV                    ,
    GPI_TDM0_PCM_RXD                        = GPI_SYS_IOMUX_U0_TDM16SLOT_PCM_RXD                      ,
    GPI_TDM0_PCM_SYNCIN                     = GPI_SYS_IOMUX_U0_TDM16SLOT_PCM_SYNCIN                   ,
    GPI_UART0_SIN                           = GPI_SYS_IOMUX_U0_DW_UART_SIN                            ,
    GPI_UART1_CTS_N                         = GPI_SYS_IOMUX_U1_DW_UART_CTS_N                          ,
    GPI_UART1_SIN                           = GPI_SYS_IOMUX_U1_DW_UART_SIN                            ,
    GPI_UART2_CTS_N                         = GPI_SYS_IOMUX_U2_DW_UART_CTS_N                          ,
    GPI_UART2_SIN                           = GPI_SYS_IOMUX_U2_DW_UART_SIN                            ,
    GPI_UART3_SIN                           = GPI_SYS_IOMUX_U3_DW_UART_SIN                            ,
    GPI_UART4_CTS_N                         = GPI_SYS_IOMUX_U4_DW_UART_CTS_N                          ,
    GPI_UART4_SIN                           = GPI_SYS_IOMUX_U4_DW_UART_SIN                            ,
    GPI_UART5_CTS_N                         = GPI_SYS_IOMUX_U5_DW_UART_CTS_N                          ,
    GPI_UART5_SIN                           = GPI_SYS_IOMUX_U5_DW_UART_SIN                            ,
    GPI_USB0_OVERCURRENT_N_IO               = GPI_SYS_IOMUX_U0_CDN_USB_OVERCURRENT_N_IO               ,
    GPI_WAVE511_0_I_UART_RXSIN              = GPI_SYS_IOMUX_U0_WAVE511_I_UART_RXSIN                   ,

    GPI_NONE = GPI_SYS_IOMUX_U6_SSP_SPI_SSPRXD + 1,
    GPI_NUM  = GPI_NONE,
} sys_gpio_gpi_t;

typedef enum
{
    OEN_LOW,
    OEN_HIGH,

    OEN_HDMI0_CEC_SDA_OEN             = GPEN_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_CEC_SDA_OEN ,
    OEN_HDMI0_DDC_SCL_OEN             = GPEN_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_DDC_SCL_OEN ,
    OEN_HDMI0_DDC_SDA_OEN             = GPEN_SYS_IOMUX_U0_DOM_VOUT_TOP_U0_HDMI_TX_PIN_DDC_SDA_OEN ,
    OEN_I2C0_IC_CLK_OE                = GPEN_SYS_IOMUX_U0_DW_I2C_IC_CLK_OE                        ,
    OEN_I2C0_IC_DATA_OE               = GPEN_SYS_IOMUX_U0_DW_I2C_IC_DATA_OE                       ,
    OEN_I2C1_IC_CLK_OE                = GPEN_SYS_IOMUX_U1_DW_I2C_IC_CLK_OE                        ,
    OEN_I2C1_IC_DATA_OE               = GPEN_SYS_IOMUX_U1_DW_I2C_IC_DATA_OE                       ,
    OEN_I2C2_IC_CLK_OE                = GPEN_SYS_IOMUX_U2_DW_I2C_IC_CLK_OE                        ,
    OEN_I2C2_IC_DATA_OE               = GPEN_SYS_IOMUX_U2_DW_I2C_IC_DATA_OE                       ,
    OEN_I2C3_IC_CLK_OE                = GPEN_SYS_IOMUX_U3_DW_I2C_IC_CLK_OE                        ,
    OEN_I2C3_IC_DATA_OE               = GPEN_SYS_IOMUX_U3_DW_I2C_IC_DATA_OE                       ,
    OEN_I2C4_IC_CLK_OE                = GPEN_SYS_IOMUX_U4_DW_I2C_IC_CLK_OE                        ,
    OEN_I2C4_IC_DATA_OE               = GPEN_SYS_IOMUX_U4_DW_I2C_IC_DATA_OE                       ,
    OEN_I2C5_IC_CLK_OE                = GPEN_SYS_IOMUX_U5_DW_I2C_IC_CLK_OE                        ,
    OEN_I2C5_IC_DATA_OE               = GPEN_SYS_IOMUX_U5_DW_I2C_IC_DATA_OE                       ,
    OEN_I2C6_IC_CLK_OE                = GPEN_SYS_IOMUX_U6_DW_I2C_IC_CLK_OE                        ,
    OEN_I2C6_IC_DATA_OE               = GPEN_SYS_IOMUX_U6_DW_I2C_IC_DATA_OE                       ,
    OEN_JTAG_CPU_CERTIFICATION_TDO_OE = GPEN_SYS_IOMUX_U0_JTAG_CERTIFICATION_TDO_OE               ,
    OEN_JTAG_DSP_TDO_OEN              = GPEN_SYS_IOMUX_U0_HIFI4_JTDOEN                            ,
    OEN_PTC0_PWM_0_OE_N               = GPEN_SYS_IOMUX_U0_PWM_8CH_PTC_OE_N_0                      ,
    OEN_PTC0_PWM_1_OE_N               = GPEN_SYS_IOMUX_U0_PWM_8CH_PTC_OE_N_1                      ,
    OEN_PTC0_PWM_2_OE_N               = GPEN_SYS_IOMUX_U0_PWM_8CH_PTC_OE_N_2                      ,
    OEN_PTC0_PWM_3_OE_N               = GPEN_SYS_IOMUX_U0_PWM_8CH_PTC_OE_N_3                      ,
    OEN_SDIO1_CCMD_OUT_EN             = GPEN_SYS_IOMUX_U1_DW_SDIO_CCMD_OUT_EN                     ,
    OEN_SDIO1_CDATA_OUT_EN_0          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_0                  ,
    OEN_SDIO1_CDATA_OUT_EN_1          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_1                  ,
    OEN_SDIO1_CDATA_OUT_EN_2          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_2                  ,
    OEN_SDIO1_CDATA_OUT_EN_3          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_3                  ,
    OEN_SDIO1_CDATA_OUT_EN_4          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_4                  ,
    OEN_SDIO1_CDATA_OUT_EN_5          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_5                  ,
    OEN_SDIO1_CDATA_OUT_EN_6          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_6                  ,
    OEN_SDIO1_CDATA_OUT_EN_7          = GPEN_SYS_IOMUX_U1_DW_SDIO_CDATA_OUT_EN_7                  ,
    OEN_SPI0_NSSPCTLOE                = GPEN_SYS_IOMUX_U0_SSP_SPI_NSSPCTLOE                       ,
    OEN_SPI0_NSSPOE                   = GPEN_SYS_IOMUX_U0_SSP_SPI_NSSPOE                          ,
    OEN_SPI1_NSSPCTLOE                = GPEN_SYS_IOMUX_U1_SSP_SPI_NSSPCTLOE                       ,
    OEN_SPI1_NSSPOE                   = GPEN_SYS_IOMUX_U1_SSP_SPI_NSSPOE                          ,
    OEN_SPI2_NSSPCTLOE                = GPEN_SYS_IOMUX_U2_SSP_SPI_NSSPCTLOE                       ,
    OEN_SPI2_NSSPOE                   = GPEN_SYS_IOMUX_U2_SSP_SPI_NSSPOE                          ,
    OEN_SPI3_NSSPCTLOE                = GPEN_SYS_IOMUX_U3_SSP_SPI_NSSPCTLOE                       ,
    OEN_SPI3_NSSPOE                   = GPEN_SYS_IOMUX_U3_SSP_SPI_NSSPOE                          ,
    OEN_SPI4_NSSPCTLOE                = GPEN_SYS_IOMUX_U4_SSP_SPI_NSSPCTLOE                       ,
    OEN_SPI4_NSSPOE                   = GPEN_SYS_IOMUX_U4_SSP_SPI_NSSPOE                          ,
    OEN_SPI5_NSSPCTLOE                = GPEN_SYS_IOMUX_U5_SSP_SPI_NSSPCTLOE                       ,
    OEN_SPI5_NSSPOE                   = GPEN_SYS_IOMUX_U5_SSP_SPI_NSSPOE                          ,
    OEN_SPI6_NSSPCTLOE                = GPEN_SYS_IOMUX_U6_SSP_SPI_NSSPCTLOE                       ,
    OEN_SPI6_NSSPOE                   = GPEN_SYS_IOMUX_U6_SSP_SPI_NSSPOE                          ,
    OEN_TDM0_NPCM_SYNCOE              = GPEN_SYS_IOMUX_U0_TDM16SLOT_NPCM_SYNCOE                   ,
    OEN_TDM0_NPCM_TXDOE               = GPEN_SYS_IOMUX_U0_TDM16SLOT_NPCM_TXDOE                    ,

    OEN_NONE = GPEN_SYS_IOMUX_U6_SSP_SPI_NSSPOE + 1,
    OEN_NUM  = OEN_NONE,
} sys_gpio_oen_t;

//gpio irq trigger mode
typedef enum
{
    SYS_GPIO_TRIG_HIGH,
    SYS_GPIO_TRIG_LOW,
    SYS_GPIO_TRIG_POSEDGE,
    SYS_GPIO_TRIG_NEGEDGE,
    SYS_GPIO_TRIG_BOTHEDGE,
} sys_gpio_trig_t;

int sys_gpio_init(void);

/**
  * @brief  Set gpio with 2 or all of full-mux signals (gpi, gpo and oen).
  * @param  gpio GPIO port number, shall < SYS_GPIO_NUM.
  * @param  gpo  GPO_LOW/GPO_HIGH for general purpose output, or specific signal of type sys_gpio_gpo_t.
  * @param  oen OEN_LOW for normal output, OEN_HIGH for normal input, or other value for specific signal.
  * @retval 0 for success, else for error.
  */
int sys_gpio_complex(int gpio, sys_gpio_gpi_t gpi, sys_gpio_gpo_t gpo, sys_gpio_oen_t oen);

/**
  * @brief  Set gpio as input (general purpose or controlled by specific signal).
  * @param  gpio GPIO port number, shall < SYS_GPIO_NUM.
  * @param  gpi  GPI_NONE for general purpose input, or specific signal of type sys_gpio_gpi_t.
  * @retval 0 for success, else for error.
  */
static inline int sys_gpio_input(int gpio, sys_gpio_gpi_t gpi)
{
    return sys_gpio_complex(gpio, gpi, GPO_NONE, OEN_HIGH);
}

/**
  * @brief  Set gpio as output (general purpose or controlled by specific signal).
  * @param  gpio GPIO port number, shall < SYS_GPIO_NUM.
  * @param  gpo  GPO_LOW/GPO_HIGH for general purpose output, or specific signal of type sys_gpio_gpo_t.
  * @retval 0 for success, else for error.
  */
static inline int sys_gpio_output(int gpio, sys_gpio_gpo_t gpo)
{
    return sys_gpio_complex(gpio, GPI_NONE, gpo, OEN_LOW);
}

/**
  * @brief  invert output or not.
  * @param  gpio GPIO port number, shall < SYS_GPIO_NUM.
  * @param  invert None zero to invert the signal.
  * @retval 0 for success, else for error.
  */
int sys_gpio_output_invert(int gpio, int invert);

/**
  * @brief  invert oen or not.
  * @param  gpio GPIO port number, shall < SYS_GPIO_NUM.
  * @param  invert None zero to invert the signal.
  * @retval 0 for success, else for error.
  */
int sys_gpio_oen_invert(int gpio, int invert);

int sys_gpio_set_value(int gpio, int value);
int sys_gpio_get_value(int gpio);

int sys_gpio_irq_set_trig(int gpio, sys_gpio_trig_t trig);
int sys_gpio_irq_enable(int gpio);
int sys_gpio_irq_disable(int gpio);
int sys_gpio_irq_register(int gpio, void (*handler)(int, void*), void *priv);
int sys_gpio_irq_unregister(int gpio);

int sys_gpio_pin(int gpio);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_HAL_GPIO_H */
