
#ifndef _SYS_CRG_MACRO_H_
#define _SYS_CRG_MACRO_H_

//#define SYS_CRG_BASE_ADDR 0x0
#define CLK_CPU_ROOT_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x0U)
#define CLK_CPU_CORE_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x4U)
#define CLK_CPU_BUS_CTRL_REG_ADDR                                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x8U)
#define CLK_GPU_ROOT_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xCU)
#define CLK_PERH_ROOT_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x10U)
#define CLK_BUS_ROOT_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x14U)
#define CLK_NOCSTG_BUS_CTRL_REG_ADDR                                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x18U)
#define CLK_AXI_CFG0_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1CU)
#define CLK_STG_AXIAHB_CTRL_REG_ADDR                                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x20U)
#define CLK_AHB0_CTRL_REG_ADDR                                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x24U)
#define CLK_AHB1_CTRL_REG_ADDR                                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x28U)
#define CLK_APB_BUS_FUNC_CTRL_REG_ADDR                               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2CU)
#define CLK_APB0_CTRL_REG_ADDR                                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x30U)
#define CLK_PLL0_DIV2_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x34U)
#define CLK_PLL1_DIV2_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x38U)
#define CLK_PLL2_DIV2_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x3CU)
#define CLK_AUDIO_ROOT_CTRL_REG_ADDR                                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x40U)
#define CLK_MCLK_INNER_CTRL_REG_ADDR                                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x44U)
#define CLK_MCLK_CTRL_REG_ADDR                                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x48U)
#define MCLK_OUT_CTRL_REG_ADDR                                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x4CU)
#define CLK_ISP_2X_CTRL_REG_ADDR                                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x50U)
#define CLK_ISP_AXI_CTRL_REG_ADDR                                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x54U)
#define CLK_GCLK0_CTRL_REG_ADDR                                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x58U)
#define CLK_GCLK1_CTRL_REG_ADDR                                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x5CU)
#define CLK_GCLK2_CTRL_REG_ADDR                                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x60U)
#define CLK_U0_U7MC_SFT7110_CORE_CLK_CTRL_REG_ADDR                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x64U)
#define CLK_U0_U7MC_SFT7110_CORE_CLK1_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x68U)
#define CLK_U0_U7MC_SFT7110_CORE_CLK2_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x6CU)
#define CLK_U0_U7MC_SFT7110_CORE_CLK3_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x70U)
#define CLK_U0_U7MC_SFT7110_CORE_CLK4_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x74U)
#define CLK_U0_U7MC_SFT7110_DEBUG_CLK_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x78U)
#define CLK_U0_U7MC_SFT7110_RTC_TOGGLE_CTRL_REG_ADDR                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x7CU)
#define CLK_U0_U7MC_SFT7110_TRACE_CLK0_CTRL_REG_ADDR                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x80U)
#define CLK_U0_U7MC_SFT7110_TRACE_CLK1_CTRL_REG_ADDR                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x84U)
#define CLK_U0_U7MC_SFT7110_TRACE_CLK2_CTRL_REG_ADDR                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x88U)
#define CLK_U0_U7MC_SFT7110_TRACE_CLK3_CTRL_REG_ADDR                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x8CU)
#define CLK_U0_U7MC_SFT7110_TRACE_CLK4_CTRL_REG_ADDR                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x90U)
#define CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_CTRL_REG_ADDR              (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x94U)
#define CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_CTRL_REG_ADDR             (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x98U)
#define CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_CTRL_REG_ADDR         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x9CU)
#define CLK_OSC_DIV2_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xA0U)
#define CLK_PLL1_DIV4_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xA4U)
#define CLK_PLL1_DIV8_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xA8U)
#define CLK_DDR_BUS_CTRL_REG_ADDR                                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xACU)
#define CLK_U0_DDR_SFT7110_CLK_AXI_CTRL_REG_ADDR                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xB0U)
#define CLK_GPU_CORE_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xB4U)
#define CLK_U0_IMG_GPU_CORE_CLK_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xB8U)
#define CLK_U0_IMG_GPU_SYS_CLK_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xBCU)
#define CLK_U0_IMG_GPU_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xC0U)
#define CLK_U0_IMG_GPU_RTC_TOGGLE_CTRL_REG_ADDR                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xC4U)
#define CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_CTRL_REG_ADDR             (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xC8U)
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_CTRL_REG_ADDR (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xCCU)
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_CTRL_REG_ADDR (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xD0U)
#define CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_CTRL_REG_ADDR             (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xD4U)
#define CLK_HIFI4_CORE_CTRL_REG_ADDR                                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xD8U)
#define CLK_HIFI4_AXI_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xDCU)
#define CLK_U0_AXI_CFG1_DEC_CLK_MAIN_CTRL_REG_ADDR                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xE0U)
#define CLK_U0_AXI_CFG1_DEC_CLK_AHB_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xE4U)
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_CTRL_REG_ADDR (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xE8U)
#define CLK_VOUT_AXI_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xECU)
#define CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_CTRL_REG_ADDR            (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xF0U)
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_CTRL_REG_ADDR (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xF4U)
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_CTRL_REG_ADDR (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xF8U)
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_CTRL_REG_ADDR (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0xFCU)
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_CTRL_REG_ADDR (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x100U)
#define CLK_JPEGC_AXI_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x104U)
#define CLK_U0_CODAJ12_CLK_AXI_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x108U)
#define CLK_U0_CODAJ12_CLK_CORE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x10CU)
#define CLK_U0_CODAJ12_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x110U)
#define CLK_VDEC_AXI_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x114U)
#define CLK_U0_WAVE511_CLK_AXI_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x118U)
#define CLK_U0_WAVE511_CLK_BPU_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x11CU)
#define CLK_U0_WAVE511_CLK_VCE_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x120U)
#define CLK_U0_WAVE511_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x124U)
#define CLK_U0_VDEC_JPG_ARB_JPGCLK_CTRL_REG_ADDR                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x128U)
#define CLK_U0_VDEC_JPG_ARB_MAINCLK_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x12CU)
#define CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_CTRL_REG_ADDR            (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x130U)
#define CLK_VENC_AXI_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x134U)
#define CLK_U0_WAVE420L_CLK_AXI_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x138U)
#define CLK_U0_WAVE420L_CLK_BPU_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x13CU)
#define CLK_U0_WAVE420L_CLK_VCE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x140U)
#define CLK_U0_WAVE420L_CLK_APB_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x144U)
#define CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_CTRL_REG_ADDR            (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x148U)
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_CTRL_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x14CU)
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_CTRL_REG_ADDR                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x150U)
#define CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x154U)
#define CLK_U2_AXIMEM_128B_CLK_AXI_CTRL_REG_ADDR                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x158U)
#define CLK_U0_CDNS_QSPI_CLK_AHB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x15CU)
#define CLK_U0_CDNS_QSPI_CLK_APB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x160U)
#define CLK_QSPI_REF_SRC_CTRL_REG_ADDR                               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x164U)
#define CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x168U)
#define CLK_U0_DW_SDIO_CLK_AHB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x16CU)
#define CLK_U1_DW_SDIO_CLK_AHB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x170U)
#define CLK_U0_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x174U)
#define CLK_U1_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x178U)
#define CLK_USB_125M_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x17CU)
#define CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_CTRL_REG_ADDR             (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x180U)
#define CLK_U1_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x184U)
#define CLK_U1_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x188U)
#define CLK_GMAC_SRC_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x18CU)
#define CLK_GMAC1_GTXCLK_CTRL_REG_ADDR                               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x190U)
#define CLK_GMAC1_RMII_RTX_CTRL_REG_ADDR                             (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x194U)
#define CLK_U1_DW_GMAC5_AXI64_CLK_PTP_CTRL_REG_ADDR                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x198U)
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x19CU)
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1A0U)
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1A4U)
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1A8U)
#define CLK_GMAC1_GTXC_CTRL_REG_ADDR                                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1ACU)
#define CLK_GMAC0_GTXCLK_CTRL_REG_ADDR                               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1B0U)
#define CLK_GMAC0_PTP_CTRL_REG_ADDR                                  (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1B4U)
#define CLK_GMAC_PHY_CTRL_REG_ADDR                                   (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1B8U)
#define CLK_GMAC0_GTXC_CTRL_REG_ADDR                                 (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1BCU)
#define CLK_U0_SYS_IOMUX_PCLK_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1C0U)
#define CLK_U0_MAILBOX_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1C4U)
#define CLK_U0_INT_CTRL_CLK_APB_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1C8U)
#define CLK_U0_CAN_CTRL_CLK_APB_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1CCU)
#define CLK_U0_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1D0U)
#define CLK_U0_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1D4U)
#define CLK_U1_CAN_CTRL_CLK_APB_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1D8U)
#define CLK_U1_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1DCU)
#define CLK_U1_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1E0U)
#define CLK_U0_PWM_8CH_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1E4U)
#define CLK_U0_DSKIT_WDT_CLK_APB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1E8U)
#define CLK_U0_DSKIT_WDT_CLK_WDT_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1ECU)
#define CLK_U0_SI5_TIMER_CLK_APB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1F0U)
#define CLK_U0_SI5_TIMER_CLK_TIMER0_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1F4U)
#define CLK_U0_SI5_TIMER_CLK_TIMER1_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1F8U)
#define CLK_U0_SI5_TIMER_CLK_TIMER2_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x1FCU)
#define CLK_U0_SI5_TIMER_CLK_TIMER3_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x200U)
#define CLK_U0_TEMP_SENSOR_CLK_APB_CTRL_REG_ADDR                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x204U)
#define CLK_U0_TEMP_SENSOR_CLK_TEMP_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x208U)
#define CLK_U0_SSP_SPI_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x20CU)
#define CLK_U1_SSP_SPI_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x210U)
#define CLK_U2_SSP_SPI_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x214U)
#define CLK_U3_SSP_SPI_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x218U)
#define CLK_U4_SSP_SPI_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x21CU)
#define CLK_U5_SSP_SPI_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x220U)
#define CLK_U6_SSP_SPI_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x224U)
#define CLK_U0_DW_I2C_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x228U)
#define CLK_U1_DW_I2C_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x22CU)
#define CLK_U2_DW_I2C_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x230U)
#define CLK_U3_DW_I2C_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x234U)
#define CLK_U4_DW_I2C_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x238U)
#define CLK_U5_DW_I2C_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x23CU)
#define CLK_U6_DW_I2C_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x240U)
#define CLK_U0_DW_UART_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x244U)
#define CLK_U0_DW_UART_CLK_CORE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x248U)
#define CLK_U1_DW_UART_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x24CU)
#define CLK_U1_DW_UART_CLK_CORE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x250U)
#define CLK_U2_DW_UART_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x254U)
#define CLK_U2_DW_UART_CLK_CORE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x258U)
#define CLK_U3_DW_UART_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x25CU)
#define CLK_U3_DW_UART_CLK_CORE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x260U)
#define CLK_U4_DW_UART_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x264U)
#define CLK_U4_DW_UART_CLK_CORE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x268U)
#define CLK_U5_DW_UART_CLK_APB_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x26CU)
#define CLK_U5_DW_UART_CLK_CORE_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x270U)
#define CLK_U0_PWMDAC_CLK_APB_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x274U)
#define CLK_U0_PWMDAC_CLK_CORE_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x278U)
#define CLK_U0_CDNS_SPDIF_CLK_APB_CTRL_REG_ADDR                      (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x27CU)
#define CLK_U0_CDNS_SPDIF_CLK_CORE_CTRL_REG_ADDR                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x280U)
#define CLK_U0_I2STX_4CH_CLK_APB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x284U)
#define CLK_I2STX_4CH0_BCLK_MST_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x288U)
#define CLK_I2STX_4CH0_BCLK_MST_INV_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x28CU)
#define CLK_I2STX_4CH0_LRCK_MST_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x290U)
#define CLK_U0_I2STX_4CH_BCLK_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x294U)
#define CLK_U0_I2STX_4CH_BCLK_N_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x298U)
#define CLK_U0_I2STX_4CH_LRCK_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x29CU)
#define CLK_U1_I2STX_4CH_CLK_APB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2A0U)
#define CLK_I2STX_4CH1_BCLK_MST_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2A4U)
#define CLK_I2STX_4CH1_BCLK_MST_INV_CTRL_REG_ADDR                    (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2A8U)
#define CLK_I2STX_4CH1_LRCK_MST_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2ACU)
#define CLK_U1_I2STX_4CH_BCLK_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2B0U)
#define CLK_U1_I2STX_4CH_BCLK_N_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2B4U)
#define CLK_U1_I2STX_4CH_LRCK_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2B8U)
#define CLK_U0_I2SRX_3CH_CLK_APB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2BCU)
#define CLK_I2SRX_3CH_BCLK_MST_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2C0U)
#define CLK_I2SRX_3CH_BCLK_MST_INV_CTRL_REG_ADDR                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2C4U)
#define CLK_I2SRX_3CH_LRCK_MST_CTRL_REG_ADDR                         (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2C8U)
#define CLK_U0_I2SRX_3CH_BCLK_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2CCU)
#define CLK_U0_I2SRX_3CH_BCLK_N_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2D0U)
#define CLK_U0_I2SRX_3CH_LRCK_CTRL_REG_ADDR                          (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2D4U)
#define CLK_U0_PDM_4MIC_CLK_DMIC_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2D8U)
#define CLK_U0_PDM_4MIC_CLK_APB_CTRL_REG_ADDR                        (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2DCU)
#define CLK_U0_TDM16SLOT_CLK_AHB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2E0U)
#define CLK_U0_TDM16SLOT_CLK_APB_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2E4U)
#define CLK_TDM_INTERNAL_CTRL_REG_ADDR                               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2E8U)
#define CLK_U0_TDM16SLOT_CLK_TDM_CTRL_REG_ADDR                       (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2ECU)
#define CLK_U0_TDM16SLOT_CLK_TDM_N_CTRL_REG_ADDR                     (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2F0U)
#define CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_CTRL_REG_ADDR             (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2F4U)


#define SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2F8U)
#define SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x2FCU)
#define SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x300U)
#define SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x304U)

#define SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x308U)
#define SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x30CU)
#define SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x310U)
#define SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR               (U0_SYS_CRG__SAIF_BD_APBS__BASE_ADDR + 0x314U)


#define CLK_CPU_ROOT_SW_SHIFT                                        24
#define CLK_CPU_ROOT_SW_MASK                                         0x1000000U
#define CLK_CPU_ROOT_SW_CLK_OSC_DATA                                 0
#define CLK_CPU_ROOT_SW_CLK_PLL0_DATA                                1
#define CLK_CPU_CORE_DIV_SHIFT                                       0
#define CLK_CPU_CORE_DIV_MASK                                        0x7U
#define CLK_CPU_BUS_DIV_SHIFT                                        0
#define CLK_CPU_BUS_DIV_MASK                                         0x3U
#define CLK_GPU_ROOT_SW_SHIFT                                        24
#define CLK_GPU_ROOT_SW_MASK                                         0x1000000U
#define CLK_GPU_ROOT_SW_CLK_PLL2_DATA                                0
#define CLK_GPU_ROOT_SW_CLK_PLL1_DATA                                1
#define CLK_PERH_ROOT_SW_SHIFT                                       24
#define CLK_PERH_ROOT_SW_MASK                                        0x1000000U
#define CLK_PERH_ROOT_SW_CLK_PLL0_DATA                               0
#define CLK_PERH_ROOT_SW_CLK_PLL2_DATA                               1
#define CLK_PERH_ROOT_DIV_SHIFT                                      0
#define CLK_PERH_ROOT_DIV_MASK                                       0x3U
#define CLK_BUS_ROOT_SW_SHIFT                                        24
#define CLK_BUS_ROOT_SW_MASK                                         0x1000000U
#define CLK_BUS_ROOT_SW_CLK_OSC_DATA                                 0
#define CLK_BUS_ROOT_SW_CLK_PLL2_DATA                                1
#define CLK_NOCSTG_BUS_DIV_SHIFT                                     0
#define CLK_NOCSTG_BUS_DIV_MASK                                      0x3U
#define CLK_AXI_CFG0_DIV_SHIFT                                       0
#define CLK_AXI_CFG0_DIV_MASK                                        0x3U
#define CLK_STG_AXIAHB_DIV_SHIFT                                     0
#define CLK_STG_AXIAHB_DIV_MASK                                      0x3U
#define CLK_AHB0_ENABLE_DATA                                         1
#define CLK_AHB0_DISABLE_DATA                                        0
#define CLK_AHB0_EN_SHIFT                                            31
#define CLK_AHB0_EN_MASK                                             0x80000000U
#define CLK_AHB1_ENABLE_DATA                                         1
#define CLK_AHB1_DISABLE_DATA                                        0
#define CLK_AHB1_EN_SHIFT                                            31
#define CLK_AHB1_EN_MASK                                             0x80000000U
#define CLK_APB_BUS_FUNC_DIV_SHIFT                                   0
#define CLK_APB_BUS_FUNC_DIV_MASK                                    0xFU
#define CLK_APB0_ENABLE_DATA                                         1
#define CLK_APB0_DISABLE_DATA                                        0
#define CLK_APB0_EN_SHIFT                                            31
#define CLK_APB0_EN_MASK                                             0x80000000U
#define CLK_PLL0_DIV2_DIV_SHIFT                                      0
#define CLK_PLL0_DIV2_DIV_MASK                                       0x3U
#define CLK_PLL1_DIV2_DIV_SHIFT                                      0
#define CLK_PLL1_DIV2_DIV_MASK                                       0x3U
#define CLK_PLL2_DIV2_DIV_SHIFT                                      0
#define CLK_PLL2_DIV2_DIV_MASK                                       0x3U
#define CLK_AUDIO_ROOT_DIV_SHIFT                                     0
#define CLK_AUDIO_ROOT_DIV_MASK                                      0xFU
#define CLK_MCLK_INNER_DIV_SHIFT                                     0
#define CLK_MCLK_INNER_DIV_MASK                                      0x7FU
#define CLK_MCLK_SW_SHIFT                                            24
#define CLK_MCLK_SW_MASK                                             0x1000000U
#define CLK_MCLK_SW_CLK_MCLK_INNER_DATA                              0
#define CLK_MCLK_SW_CLK_MCLK_EXT_DATA                                1
#define MCLK_OUT_ENABLE_DATA                                         1
#define MCLK_OUT_DISABLE_DATA                                        0
#define MCLK_OUT_EN_SHIFT                                            31
#define MCLK_OUT_EN_MASK                                             0x80000000U
#define CLK_ISP_2X_SW_SHIFT                                          24
#define CLK_ISP_2X_SW_MASK                                           0x1000000U
#define CLK_ISP_2X_SW_CLK_PLL2_DATA                                  0
#define CLK_ISP_2X_SW_CLK_PLL1_DATA                                  1
#define CLK_ISP_2X_DIV_SHIFT                                         0
#define CLK_ISP_2X_DIV_MASK                                          0xFU
#define CLK_ISP_AXI_DIV_SHIFT                                        0
#define CLK_ISP_AXI_DIV_MASK                                         0x7U
#define CLK_GCLK0_ENABLE_DATA                                        1
#define CLK_GCLK0_DISABLE_DATA                                       0
#define CLK_GCLK0_EN_SHIFT                                           31
#define CLK_GCLK0_EN_MASK                                            0x80000000U
#define CLK_GCLK0_DIV_SHIFT                                          0
#define CLK_GCLK0_DIV_MASK                                           0x3FU
#define CLK_GCLK1_ENABLE_DATA                                        1
#define CLK_GCLK1_DISABLE_DATA                                       0
#define CLK_GCLK1_EN_SHIFT                                           31
#define CLK_GCLK1_EN_MASK                                            0x80000000U
#define CLK_GCLK1_DIV_SHIFT                                          0
#define CLK_GCLK1_DIV_MASK                                           0x3FU
#define CLK_GCLK2_ENABLE_DATA                                        1
#define CLK_GCLK2_DISABLE_DATA                                       0
#define CLK_GCLK2_EN_SHIFT                                           31
#define CLK_GCLK2_EN_MASK                                            0x80000000U
#define CLK_GCLK2_DIV_SHIFT                                          0
#define CLK_GCLK2_DIV_MASK                                           0x3FU
#define CLK_U0_U7MC_SFT7110_CORE_CLK_ENABLE_DATA                     1
#define CLK_U0_U7MC_SFT7110_CORE_CLK_DISABLE_DATA                    0
#define CLK_U0_U7MC_SFT7110_CORE_CLK_EN_SHIFT                        31
#define CLK_U0_U7MC_SFT7110_CORE_CLK_EN_MASK                         0x80000000U
#define CLK_U0_U7MC_SFT7110_CORE_CLK1_ENABLE_DATA                    1
#define CLK_U0_U7MC_SFT7110_CORE_CLK1_DISABLE_DATA                   0
#define CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_SHIFT                       31
#define CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_MASK                        0x80000000U
#define CLK_U0_U7MC_SFT7110_CORE_CLK2_ENABLE_DATA                    1
#define CLK_U0_U7MC_SFT7110_CORE_CLK2_DISABLE_DATA                   0
#define CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_SHIFT                       31
#define CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_MASK                        0x80000000U
#define CLK_U0_U7MC_SFT7110_CORE_CLK3_ENABLE_DATA                    1
#define CLK_U0_U7MC_SFT7110_CORE_CLK3_DISABLE_DATA                   0
#define CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_SHIFT                       31
#define CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_MASK                        0x80000000U
#define CLK_U0_U7MC_SFT7110_CORE_CLK4_ENABLE_DATA                    1
#define CLK_U0_U7MC_SFT7110_CORE_CLK4_DISABLE_DATA                   0
#define CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_SHIFT                       31
#define CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_MASK                        0x80000000U
#define CLK_U0_U7MC_SFT7110_DEBUG_CLK_ENABLE_DATA                    1
#define CLK_U0_U7MC_SFT7110_DEBUG_CLK_DISABLE_DATA                   0
#define CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_SHIFT                       31
#define CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_MASK                        0x80000000U
#define CLK_U0_U7MC_SFT7110_RTC_TOGGLE_DIV_SHIFT                     0
#define CLK_U0_U7MC_SFT7110_RTC_TOGGLE_DIV_MASK                      0x7U
#define CLK_U0_U7MC_SFT7110_TRACE_CLK0_ENABLE_DATA                   1
#define CLK_U0_U7MC_SFT7110_TRACE_CLK0_DISABLE_DATA                  0
#define CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_SHIFT                      31
#define CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_MASK                       0x80000000U
#define CLK_U0_U7MC_SFT7110_TRACE_CLK1_ENABLE_DATA                   1
#define CLK_U0_U7MC_SFT7110_TRACE_CLK1_DISABLE_DATA                  0
#define CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_SHIFT                      31
#define CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_MASK                       0x80000000U
#define CLK_U0_U7MC_SFT7110_TRACE_CLK2_ENABLE_DATA                   1
#define CLK_U0_U7MC_SFT7110_TRACE_CLK2_DISABLE_DATA                  0
#define CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_SHIFT                      31
#define CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_MASK                       0x80000000U
#define CLK_U0_U7MC_SFT7110_TRACE_CLK3_ENABLE_DATA                   1
#define CLK_U0_U7MC_SFT7110_TRACE_CLK3_DISABLE_DATA                  0
#define CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_SHIFT                      31
#define CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_MASK                       0x80000000U
#define CLK_U0_U7MC_SFT7110_TRACE_CLK4_ENABLE_DATA                   1
#define CLK_U0_U7MC_SFT7110_TRACE_CLK4_DISABLE_DATA                  0
#define CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_SHIFT                      31
#define CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_MASK                       0x80000000U
#define CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_ENABLE_DATA                1
#define CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_DISABLE_DATA               0
#define CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_SHIFT                   31
#define CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_MASK                    0x80000000U
#define CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_ENABLE_DATA               1
#define CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_DISABLE_DATA              0
#define CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_SHIFT                  31
#define CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_MASK                   0x80000000U
#define CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_ENABLE_DATA           1
#define CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_DISABLE_DATA          0
#define CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_SHIFT              31
#define CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_MASK               0x80000000U
#define CLK_OSC_DIV2_DIV_SHIFT                                       0
#define CLK_OSC_DIV2_DIV_MASK                                        0x3U
#define CLK_PLL1_DIV4_DIV_SHIFT                                      0
#define CLK_PLL1_DIV4_DIV_MASK                                       0x3U
#define CLK_PLL1_DIV8_DIV_SHIFT                                      0
#define CLK_PLL1_DIV8_DIV_MASK                                       0x3U
#define CLK_DDR_BUS_SW_SHIFT                                         24
#define CLK_DDR_BUS_SW_MASK                                          0x3000000U
#define CLK_DDR_BUS_SW_CLK_OSC_DIV2_DATA                             0
#define CLK_DDR_BUS_SW_CLK_PLL1_DIV2_DATA                            1
#define CLK_DDR_BUS_SW_CLK_PLL1_DIV4_DATA                            2
#define CLK_DDR_BUS_SW_CLK_PLL1_DIV8_DATA                            3
#define CLK_U0_DDR_SFT7110_CLK_AXI_ENABLE_DATA                       1
#define CLK_U0_DDR_SFT7110_CLK_AXI_DISABLE_DATA                      0
#define CLK_U0_DDR_SFT7110_CLK_AXI_EN_SHIFT                          31
#define CLK_U0_DDR_SFT7110_CLK_AXI_EN_MASK                           0x80000000U
#define CLK_GPU_CORE_DIV_SHIFT                                       0
#define CLK_GPU_CORE_DIV_MASK                                        0x7U
#define CLK_U0_IMG_GPU_CORE_CLK_ENABLE_DATA                          1
#define CLK_U0_IMG_GPU_CORE_CLK_DISABLE_DATA                         0
#define CLK_U0_IMG_GPU_CORE_CLK_EN_SHIFT                             31
#define CLK_U0_IMG_GPU_CORE_CLK_EN_MASK                              0x80000000U
#define CLK_U0_IMG_GPU_SYS_CLK_ENABLE_DATA                           1
#define CLK_U0_IMG_GPU_SYS_CLK_DISABLE_DATA                          0
#define CLK_U0_IMG_GPU_SYS_CLK_EN_SHIFT                              31
#define CLK_U0_IMG_GPU_SYS_CLK_EN_MASK                               0x80000000U
#define CLK_U0_IMG_GPU_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_IMG_GPU_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_IMG_GPU_CLK_APB_EN_SHIFT                              31
#define CLK_U0_IMG_GPU_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U0_IMG_GPU_RTC_TOGGLE_ENABLE_DATA                        1
#define CLK_U0_IMG_GPU_RTC_TOGGLE_DISABLE_DATA                       0
#define CLK_U0_IMG_GPU_RTC_TOGGLE_EN_SHIFT                           31
#define CLK_U0_IMG_GPU_RTC_TOGGLE_EN_MASK                            0x80000000U
#define CLK_U0_IMG_GPU_RTC_TOGGLE_DIV_SHIFT                          0
#define CLK_U0_IMG_GPU_RTC_TOGGLE_DIV_MASK                           0xFU
#define CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_ENABLE_DATA               1
#define CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_DISABLE_DATA              0
#define CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_SHIFT                  31
#define CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_MASK                   0x80000000U
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_ENABLE_DATA 1
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_DISABLE_DATA 0
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_SHIFT   31
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_MASK    0x80000000U
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_ENABLE_DATA   1
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_DISABLE_DATA  0
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_SHIFT      31
#define CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_MASK       0x80000000U
#define CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_ENABLE_DATA               1
#define CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_DISABLE_DATA              0
#define CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_SHIFT                  31
#define CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_MASK                   0x80000000U
#define CLK_HIFI4_CORE_DIV_SHIFT                                     0
#define CLK_HIFI4_CORE_DIV_MASK                                      0xFU
#define CLK_HIFI4_AXI_DIV_SHIFT                                      0
#define CLK_HIFI4_AXI_DIV_MASK                                       0x3U
#define CLK_U0_AXI_CFG1_DEC_CLK_MAIN_ENABLE_DATA                     1
#define CLK_U0_AXI_CFG1_DEC_CLK_MAIN_DISABLE_DATA                    0
#define CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_SHIFT                        31
#define CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_MASK                         0x80000000U
#define CLK_U0_AXI_CFG1_DEC_CLK_AHB_ENABLE_DATA                      1
#define CLK_U0_AXI_CFG1_DEC_CLK_AHB_DISABLE_DATA                     0
#define CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_SHIFT                         31
#define CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_MASK                          0x80000000U
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_ENABLE_DATA 1
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_DISABLE_DATA 0
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_SHIFT   31
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_MASK    0x80000000U
#define CLK_VOUT_AXI_DIV_SHIFT                                       0
#define CLK_VOUT_AXI_DIV_MASK                                        0x7U
#define CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_ENABLE_DATA              1
#define CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_DISABLE_DATA             0
#define CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_SHIFT                 31
#define CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_MASK                  0x80000000U
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_ENABLE_DATA 1
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_DISABLE_DATA 0
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_SHIFT   31
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_MASK    0x80000000U
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_ENABLE_DATA 1
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_DISABLE_DATA 0
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_SHIFT   31
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_MASK    0x80000000U
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_ENABLE_DATA 1
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_DISABLE_DATA 0
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_SHIFT 31
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_MASK 0x80000000U
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_DIV_SHIFT 0
#define CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_DIV_MASK 0x3U
#define CLK_JPEGC_AXI_DIV_SHIFT                                      0
#define CLK_JPEGC_AXI_DIV_MASK                                       0x1FU
#define CLK_U0_CODAJ12_CLK_AXI_ENABLE_DATA                           1
#define CLK_U0_CODAJ12_CLK_AXI_DISABLE_DATA                          0
#define CLK_U0_CODAJ12_CLK_AXI_EN_SHIFT                              31
#define CLK_U0_CODAJ12_CLK_AXI_EN_MASK                               0x80000000U
#define CLK_U0_CODAJ12_CLK_CORE_ENABLE_DATA                          1
#define CLK_U0_CODAJ12_CLK_CORE_DISABLE_DATA                         0
#define CLK_U0_CODAJ12_CLK_CORE_EN_SHIFT                             31
#define CLK_U0_CODAJ12_CLK_CORE_EN_MASK                              0x80000000U
#define CLK_U0_CODAJ12_CLK_CORE_DIV_SHIFT                            0
#define CLK_U0_CODAJ12_CLK_CORE_DIV_MASK                             0x1FU
#define CLK_U0_CODAJ12_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_CODAJ12_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_CODAJ12_CLK_APB_EN_SHIFT                              31
#define CLK_U0_CODAJ12_CLK_APB_EN_MASK                               0x80000000U
#define CLK_VDEC_AXI_DIV_SHIFT                                       0
#define CLK_VDEC_AXI_DIV_MASK                                        0x7U
#define CLK_U0_WAVE511_CLK_AXI_ENABLE_DATA                           1
#define CLK_U0_WAVE511_CLK_AXI_DISABLE_DATA                          0
#define CLK_U0_WAVE511_CLK_AXI_EN_SHIFT                              31
#define CLK_U0_WAVE511_CLK_AXI_EN_MASK                               0x80000000U
#define CLK_U0_WAVE511_CLK_BPU_ENABLE_DATA                           1
#define CLK_U0_WAVE511_CLK_BPU_DISABLE_DATA                          0
#define CLK_U0_WAVE511_CLK_BPU_EN_SHIFT                              31
#define CLK_U0_WAVE511_CLK_BPU_EN_MASK                               0x80000000U
#define CLK_U0_WAVE511_CLK_BPU_DIV_SHIFT                             0
#define CLK_U0_WAVE511_CLK_BPU_DIV_MASK                              0x7U
#define CLK_U0_WAVE511_CLK_VCE_ENABLE_DATA                           1
#define CLK_U0_WAVE511_CLK_VCE_DISABLE_DATA                          0
#define CLK_U0_WAVE511_CLK_VCE_EN_SHIFT                              31
#define CLK_U0_WAVE511_CLK_VCE_EN_MASK                               0x80000000U
#define CLK_U0_WAVE511_CLK_VCE_DIV_SHIFT                             0
#define CLK_U0_WAVE511_CLK_VCE_DIV_MASK                              0x7U
#define CLK_U0_WAVE511_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_WAVE511_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_WAVE511_CLK_APB_EN_SHIFT                              31
#define CLK_U0_WAVE511_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U0_VDEC_JPG_ARB_JPGCLK_ENABLE_DATA                       1
#define CLK_U0_VDEC_JPG_ARB_JPGCLK_DISABLE_DATA                      0
#define CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_SHIFT                          31
#define CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_MASK                           0x80000000U
#define CLK_U0_VDEC_JPG_ARB_MAINCLK_ENABLE_DATA                      1
#define CLK_U0_VDEC_JPG_ARB_MAINCLK_DISABLE_DATA                     0
#define CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_SHIFT                         31
#define CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_MASK                          0x80000000U
#define CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_ENABLE_DATA              1
#define CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_DISABLE_DATA             0
#define CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_SHIFT                 31
#define CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_MASK                  0x80000000U
#define CLK_VENC_AXI_DIV_SHIFT                                       0
#define CLK_VENC_AXI_DIV_MASK                                        0xFU
#define CLK_U0_WAVE420L_CLK_AXI_ENABLE_DATA                          1
#define CLK_U0_WAVE420L_CLK_AXI_DISABLE_DATA                         0
#define CLK_U0_WAVE420L_CLK_AXI_EN_SHIFT                             31
#define CLK_U0_WAVE420L_CLK_AXI_EN_MASK                              0x80000000U
#define CLK_U0_WAVE420L_CLK_BPU_ENABLE_DATA                          1
#define CLK_U0_WAVE420L_CLK_BPU_DISABLE_DATA                         0
#define CLK_U0_WAVE420L_CLK_BPU_EN_SHIFT                             31
#define CLK_U0_WAVE420L_CLK_BPU_EN_MASK                              0x80000000U
#define CLK_U0_WAVE420L_CLK_BPU_DIV_SHIFT                            0
#define CLK_U0_WAVE420L_CLK_BPU_DIV_MASK                             0xFU
#define CLK_U0_WAVE420L_CLK_VCE_ENABLE_DATA                          1
#define CLK_U0_WAVE420L_CLK_VCE_DISABLE_DATA                         0
#define CLK_U0_WAVE420L_CLK_VCE_EN_SHIFT                             31
#define CLK_U0_WAVE420L_CLK_VCE_EN_MASK                              0x80000000U
#define CLK_U0_WAVE420L_CLK_VCE_DIV_SHIFT                            0
#define CLK_U0_WAVE420L_CLK_VCE_DIV_MASK                             0xFU
#define CLK_U0_WAVE420L_CLK_APB_ENABLE_DATA                          1
#define CLK_U0_WAVE420L_CLK_APB_DISABLE_DATA                         0
#define CLK_U0_WAVE420L_CLK_APB_EN_SHIFT                             31
#define CLK_U0_WAVE420L_CLK_APB_EN_MASK                              0x80000000U
#define CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_ENABLE_DATA              1
#define CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_DISABLE_DATA             0
#define CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_SHIFT                 31
#define CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_MASK                  0x80000000U
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_ENABLE_DATA                 1
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_DISABLE_DATA                0
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_SHIFT                    31
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_MASK                     0x80000000U
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_ENABLE_DATA                     1
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DISABLE_DATA                    0
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_SHIFT                        31
#define CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_MASK                         0x80000000U
#define CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_ENABLE_DATA                    1
#define CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_DISABLE_DATA                   0
#define CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_SHIFT                       31
#define CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_MASK                        0x80000000U
#define CLK_U2_AXIMEM_128B_CLK_AXI_ENABLE_DATA                       1
#define CLK_U2_AXIMEM_128B_CLK_AXI_DISABLE_DATA                      0
#define CLK_U2_AXIMEM_128B_CLK_AXI_EN_SHIFT                          31
#define CLK_U2_AXIMEM_128B_CLK_AXI_EN_MASK                           0x80000000U
#define CLK_U0_CDNS_QSPI_CLK_AHB_ENABLE_DATA                         1
#define CLK_U0_CDNS_QSPI_CLK_AHB_DISABLE_DATA                        0
#define CLK_U0_CDNS_QSPI_CLK_AHB_EN_SHIFT                            31
#define CLK_U0_CDNS_QSPI_CLK_AHB_EN_MASK                             0x80000000U
#define CLK_U0_CDNS_QSPI_CLK_APB_ENABLE_DATA                         1
#define CLK_U0_CDNS_QSPI_CLK_APB_DISABLE_DATA                        0
#define CLK_U0_CDNS_QSPI_CLK_APB_EN_SHIFT                            31
#define CLK_U0_CDNS_QSPI_CLK_APB_EN_MASK                             0x80000000U
#define CLK_QSPI_REF_SRC_DIV_SHIFT                                   0
#define CLK_QSPI_REF_SRC_DIV_MASK                                    0x1FU
#define CLK_U0_CDNS_QSPI_CLK_REF_ENABLE_DATA                         1
#define CLK_U0_CDNS_QSPI_CLK_REF_DISABLE_DATA                        0
#define CLK_U0_CDNS_QSPI_CLK_REF_EN_SHIFT                            31
#define CLK_U0_CDNS_QSPI_CLK_REF_EN_MASK                             0x80000000U
#define CLK_U0_CDNS_QSPI_CLK_REF_SW_SHIFT                            24
#define CLK_U0_CDNS_QSPI_CLK_REF_SW_MASK                             0x1000000U
#define CLK_U0_CDNS_QSPI_CLK_REF_SW_CLK_OSC_DATA                     0
#define CLK_U0_CDNS_QSPI_CLK_REF_SW_CLK_QSPI_REF_SRC_DATA            1
#define CLK_U0_DW_SDIO_CLK_AHB_ENABLE_DATA                           1
#define CLK_U0_DW_SDIO_CLK_AHB_DISABLE_DATA                          0
#define CLK_U0_DW_SDIO_CLK_AHB_EN_SHIFT                              31
#define CLK_U0_DW_SDIO_CLK_AHB_EN_MASK                               0x80000000U
#define CLK_U1_DW_SDIO_CLK_AHB_ENABLE_DATA                           1
#define CLK_U1_DW_SDIO_CLK_AHB_DISABLE_DATA                          0
#define CLK_U1_DW_SDIO_CLK_AHB_EN_SHIFT                              31
#define CLK_U1_DW_SDIO_CLK_AHB_EN_MASK                               0x80000000U
#define CLK_U0_DW_SDIO_CLK_SDCARD_ENABLE_DATA                        1
#define CLK_U0_DW_SDIO_CLK_SDCARD_DISABLE_DATA                       0
#define CLK_U0_DW_SDIO_CLK_SDCARD_EN_SHIFT                           31
#define CLK_U0_DW_SDIO_CLK_SDCARD_EN_MASK                            0x80000000U
#define CLK_U0_DW_SDIO_CLK_SDCARD_DIV_SHIFT                          0
#define CLK_U0_DW_SDIO_CLK_SDCARD_DIV_MASK                           0xFU
#define CLK_U1_DW_SDIO_CLK_SDCARD_ENABLE_DATA                        1
#define CLK_U1_DW_SDIO_CLK_SDCARD_DISABLE_DATA                       0
#define CLK_U1_DW_SDIO_CLK_SDCARD_EN_SHIFT                           31
#define CLK_U1_DW_SDIO_CLK_SDCARD_EN_MASK                            0x80000000U
#define CLK_U1_DW_SDIO_CLK_SDCARD_DIV_SHIFT                          0
#define CLK_U1_DW_SDIO_CLK_SDCARD_DIV_MASK                           0xFU
#define CLK_USB_125M_DIV_SHIFT                                       0
#define CLK_USB_125M_DIV_MASK                                        0xFU
#define CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_ENABLE_DATA               1
#define CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_DISABLE_DATA              0
#define CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_SHIFT                  31
#define CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_MASK                   0x80000000U
#define CLK_U1_DW_GMAC5_AXI64_CLK_AHB_ENABLE_DATA                    1
#define CLK_U1_DW_GMAC5_AXI64_CLK_AHB_DISABLE_DATA                   0
#define CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT                       31
#define CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_MASK                        0x80000000U
#define CLK_U1_DW_GMAC5_AXI64_CLK_AXI_ENABLE_DATA                    1
#define CLK_U1_DW_GMAC5_AXI64_CLK_AXI_DISABLE_DATA                   0
#define CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT                       31
#define CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_MASK                        0x80000000U
#define CLK_GMAC_SRC_DIV_SHIFT                                       0
#define CLK_GMAC_SRC_DIV_MASK                                        0x7U
#define CLK_GMAC1_GTXCLK_DIV_SHIFT                                   0
#define CLK_GMAC1_GTXCLK_DIV_MASK                                    0xFU
#define CLK_GMAC1_RMII_RTX_DIV_SHIFT                                 0
#define CLK_GMAC1_RMII_RTX_DIV_MASK                                  0x1FU
#define CLK_U1_DW_GMAC5_AXI64_CLK_PTP_ENABLE_DATA                    1
#define CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DISABLE_DATA                   0
#define CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_SHIFT                       31
#define CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_MASK                        0x80000000U
#define CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DIV_SHIFT                      0
#define CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DIV_MASK                       0x1FU
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT                        24
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_MASK                         0x1000000U
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC1_RGMII_RXIN_DATA    0
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC1_RMII_RTX_DATA      1
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_DLY_SHIFT                       0
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_DLY_MASK                        0x3FU
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_DATA               1
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_UN_POLARITY_DATA            0
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT              30
#define CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK               0x40000000U
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_ENABLE_DATA                     1
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_DISABLE_DATA                    0
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT                        31
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_MASK                         0x80000000U
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT                        24
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_MASK                         0x1000000U
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_CLK_GMAC1_GTXCLK_DATA        0
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_CLK_GMAC1_RMII_RTX_DATA      1
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_DATA               1
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_UN_POLARITY_DATA            0
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT              30
#define CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK               0x40000000U
#define CLK_GMAC1_GTXC_ENABLE_DATA                                   1
#define CLK_GMAC1_GTXC_DISABLE_DATA                                  0
#define CLK_GMAC1_GTXC_EN_SHIFT                                      31
#define CLK_GMAC1_GTXC_EN_MASK                                       0x80000000U
#define CLK_GMAC1_GTXC_DLY_SHIFT                                     0
#define CLK_GMAC1_GTXC_DLY_MASK                                      0x3FU
#define CLK_GMAC0_GTXCLK_ENABLE_DATA                                 1
#define CLK_GMAC0_GTXCLK_DISABLE_DATA                                0
#define CLK_GMAC0_GTXCLK_EN_SHIFT                                    31
#define CLK_GMAC0_GTXCLK_EN_MASK                                     0x80000000U
#define CLK_GMAC0_GTXCLK_DIV_SHIFT                                   0
#define CLK_GMAC0_GTXCLK_DIV_MASK                                    0xFU
#define CLK_GMAC0_PTP_ENABLE_DATA                                    1
#define CLK_GMAC0_PTP_DISABLE_DATA                                   0
#define CLK_GMAC0_PTP_EN_SHIFT                                       31
#define CLK_GMAC0_PTP_EN_MASK                                        0x80000000U
#define CLK_GMAC0_PTP_DIV_SHIFT                                      0
#define CLK_GMAC0_PTP_DIV_MASK                                       0x1FU
#define CLK_GMAC_PHY_ENABLE_DATA                                     1
#define CLK_GMAC_PHY_DISABLE_DATA                                    0
#define CLK_GMAC_PHY_EN_SHIFT                                        31
#define CLK_GMAC_PHY_EN_MASK                                         0x80000000U
#define CLK_GMAC_PHY_DIV_SHIFT                                       0
#define CLK_GMAC_PHY_DIV_MASK                                        0x1FU
#define CLK_GMAC0_GTXC_ENABLE_DATA                                   1
#define CLK_GMAC0_GTXC_DISABLE_DATA                                  0
#define CLK_GMAC0_GTXC_EN_SHIFT                                      31
#define CLK_GMAC0_GTXC_EN_MASK                                       0x80000000U
#define CLK_GMAC0_GTXC_DLY_SHIFT                                     0
#define CLK_GMAC0_GTXC_DLY_MASK                                      0x3FU
#define CLK_U0_SYS_IOMUX_PCLK_ENABLE_DATA                            1
#define CLK_U0_SYS_IOMUX_PCLK_DISABLE_DATA                           0
#define CLK_U0_SYS_IOMUX_PCLK_EN_SHIFT                               31
#define CLK_U0_SYS_IOMUX_PCLK_EN_MASK                                0x80000000U
#define CLK_U0_MAILBOX_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_MAILBOX_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_MAILBOX_CLK_APB_EN_SHIFT                              31
#define CLK_U0_MAILBOX_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U0_INT_CTRL_CLK_APB_ENABLE_DATA                          1
#define CLK_U0_INT_CTRL_CLK_APB_DISABLE_DATA                         0
#define CLK_U0_INT_CTRL_CLK_APB_EN_SHIFT                             31
#define CLK_U0_INT_CTRL_CLK_APB_EN_MASK                              0x80000000U
#define CLK_U0_CAN_CTRL_CLK_APB_ENABLE_DATA                          1
#define CLK_U0_CAN_CTRL_CLK_APB_DISABLE_DATA                         0
#define CLK_U0_CAN_CTRL_CLK_APB_EN_SHIFT                             31
#define CLK_U0_CAN_CTRL_CLK_APB_EN_MASK                              0x80000000U
#define CLK_U0_CAN_CTRL_CLK_TIMER_ENABLE_DATA                        1
#define CLK_U0_CAN_CTRL_CLK_TIMER_DISABLE_DATA                       0
#define CLK_U0_CAN_CTRL_CLK_TIMER_EN_SHIFT                           31
#define CLK_U0_CAN_CTRL_CLK_TIMER_EN_MASK                            0x80000000U
#define CLK_U0_CAN_CTRL_CLK_TIMER_DIV_SHIFT                          0
#define CLK_U0_CAN_CTRL_CLK_TIMER_DIV_MASK                           0x1FU
#define CLK_U0_CAN_CTRL_CLK_CAN_ENABLE_DATA                          1
#define CLK_U0_CAN_CTRL_CLK_CAN_DISABLE_DATA                         0
#define CLK_U0_CAN_CTRL_CLK_CAN_EN_SHIFT                             31
#define CLK_U0_CAN_CTRL_CLK_CAN_EN_MASK                              0x80000000U
#define CLK_U0_CAN_CTRL_CLK_CAN_DIV_SHIFT                            0
#define CLK_U0_CAN_CTRL_CLK_CAN_DIV_MASK                             0x3FU
#define CLK_U1_CAN_CTRL_CLK_APB_ENABLE_DATA                          1
#define CLK_U1_CAN_CTRL_CLK_APB_DISABLE_DATA                         0
#define CLK_U1_CAN_CTRL_CLK_APB_EN_SHIFT                             31
#define CLK_U1_CAN_CTRL_CLK_APB_EN_MASK                              0x80000000U
#define CLK_U1_CAN_CTRL_CLK_TIMER_ENABLE_DATA                        1
#define CLK_U1_CAN_CTRL_CLK_TIMER_DISABLE_DATA                       0
#define CLK_U1_CAN_CTRL_CLK_TIMER_EN_SHIFT                           31
#define CLK_U1_CAN_CTRL_CLK_TIMER_EN_MASK                            0x80000000U
#define CLK_U1_CAN_CTRL_CLK_TIMER_DIV_SHIFT                          0
#define CLK_U1_CAN_CTRL_CLK_TIMER_DIV_MASK                           0x1FU
#define CLK_U1_CAN_CTRL_CLK_CAN_ENABLE_DATA                          1
#define CLK_U1_CAN_CTRL_CLK_CAN_DISABLE_DATA                         0
#define CLK_U1_CAN_CTRL_CLK_CAN_EN_SHIFT                             31
#define CLK_U1_CAN_CTRL_CLK_CAN_EN_MASK                              0x80000000U
#define CLK_U1_CAN_CTRL_CLK_CAN_DIV_SHIFT                            0
#define CLK_U1_CAN_CTRL_CLK_CAN_DIV_MASK                             0x3FU
#define CLK_U0_PWM_8CH_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_PWM_8CH_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_PWM_8CH_CLK_APB_EN_SHIFT                              31
#define CLK_U0_PWM_8CH_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U0_DSKIT_WDT_CLK_APB_ENABLE_DATA                         1
#define CLK_U0_DSKIT_WDT_CLK_APB_DISABLE_DATA                        0
#define CLK_U0_DSKIT_WDT_CLK_APB_EN_SHIFT                            31
#define CLK_U0_DSKIT_WDT_CLK_APB_EN_MASK                             0x80000000U
#define CLK_U0_DSKIT_WDT_CLK_WDT_ENABLE_DATA                         1
#define CLK_U0_DSKIT_WDT_CLK_WDT_DISABLE_DATA                        0
#define CLK_U0_DSKIT_WDT_CLK_WDT_EN_SHIFT                            31
#define CLK_U0_DSKIT_WDT_CLK_WDT_EN_MASK                             0x80000000U
#define CLK_U0_SI5_TIMER_CLK_APB_ENABLE_DATA                         1
#define CLK_U0_SI5_TIMER_CLK_APB_DISABLE_DATA                        0
#define CLK_U0_SI5_TIMER_CLK_APB_EN_SHIFT                            31
#define CLK_U0_SI5_TIMER_CLK_APB_EN_MASK                             0x80000000U
#define CLK_U0_SI5_TIMER_CLK_TIMER0_ENABLE_DATA                      1
#define CLK_U0_SI5_TIMER_CLK_TIMER0_DISABLE_DATA                     0
#define CLK_U0_SI5_TIMER_CLK_TIMER0_EN_SHIFT                         31
#define CLK_U0_SI5_TIMER_CLK_TIMER0_EN_MASK                          0x80000000U
#define CLK_U0_SI5_TIMER_CLK_TIMER1_ENABLE_DATA                      1
#define CLK_U0_SI5_TIMER_CLK_TIMER1_DISABLE_DATA                     0
#define CLK_U0_SI5_TIMER_CLK_TIMER1_EN_SHIFT                         31
#define CLK_U0_SI5_TIMER_CLK_TIMER1_EN_MASK                          0x80000000U
#define CLK_U0_SI5_TIMER_CLK_TIMER2_ENABLE_DATA                      1
#define CLK_U0_SI5_TIMER_CLK_TIMER2_DISABLE_DATA                     0
#define CLK_U0_SI5_TIMER_CLK_TIMER2_EN_SHIFT                         31
#define CLK_U0_SI5_TIMER_CLK_TIMER2_EN_MASK                          0x80000000U
#define CLK_U0_SI5_TIMER_CLK_TIMER3_ENABLE_DATA                      1
#define CLK_U0_SI5_TIMER_CLK_TIMER3_DISABLE_DATA                     0
#define CLK_U0_SI5_TIMER_CLK_TIMER3_EN_SHIFT                         31
#define CLK_U0_SI5_TIMER_CLK_TIMER3_EN_MASK                          0x80000000U
#define CLK_U0_TEMP_SENSOR_CLK_APB_ENABLE_DATA                       1
#define CLK_U0_TEMP_SENSOR_CLK_APB_DISABLE_DATA                      0
#define CLK_U0_TEMP_SENSOR_CLK_APB_EN_SHIFT                          31
#define CLK_U0_TEMP_SENSOR_CLK_APB_EN_MASK                           0x80000000U
#define CLK_U0_TEMP_SENSOR_CLK_TEMP_ENABLE_DATA                      1
#define CLK_U0_TEMP_SENSOR_CLK_TEMP_DISABLE_DATA                     0
#define CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_SHIFT                         31
#define CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_MASK                          0x80000000U
#define CLK_U0_TEMP_SENSOR_CLK_TEMP_DIV_SHIFT                        0
#define CLK_U0_TEMP_SENSOR_CLK_TEMP_DIV_MASK                         0x1FU
#define CLK_U0_SSP_SPI_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_SSP_SPI_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_SSP_SPI_CLK_APB_EN_SHIFT                              31
#define CLK_U0_SSP_SPI_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U1_SSP_SPI_CLK_APB_ENABLE_DATA                           1
#define CLK_U1_SSP_SPI_CLK_APB_DISABLE_DATA                          0
#define CLK_U1_SSP_SPI_CLK_APB_EN_SHIFT                              31
#define CLK_U1_SSP_SPI_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U2_SSP_SPI_CLK_APB_ENABLE_DATA                           1
#define CLK_U2_SSP_SPI_CLK_APB_DISABLE_DATA                          0
#define CLK_U2_SSP_SPI_CLK_APB_EN_SHIFT                              31
#define CLK_U2_SSP_SPI_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U3_SSP_SPI_CLK_APB_ENABLE_DATA                           1
#define CLK_U3_SSP_SPI_CLK_APB_DISABLE_DATA                          0
#define CLK_U3_SSP_SPI_CLK_APB_EN_SHIFT                              31
#define CLK_U3_SSP_SPI_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U4_SSP_SPI_CLK_APB_ENABLE_DATA                           1
#define CLK_U4_SSP_SPI_CLK_APB_DISABLE_DATA                          0
#define CLK_U4_SSP_SPI_CLK_APB_EN_SHIFT                              31
#define CLK_U4_SSP_SPI_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U5_SSP_SPI_CLK_APB_ENABLE_DATA                           1
#define CLK_U5_SSP_SPI_CLK_APB_DISABLE_DATA                          0
#define CLK_U5_SSP_SPI_CLK_APB_EN_SHIFT                              31
#define CLK_U5_SSP_SPI_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U6_SSP_SPI_CLK_APB_ENABLE_DATA                           1
#define CLK_U6_SSP_SPI_CLK_APB_DISABLE_DATA                          0
#define CLK_U6_SSP_SPI_CLK_APB_EN_SHIFT                              31
#define CLK_U6_SSP_SPI_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U0_DW_I2C_CLK_APB_ENABLE_DATA                            1
#define CLK_U0_DW_I2C_CLK_APB_DISABLE_DATA                           0
#define CLK_U0_DW_I2C_CLK_APB_EN_SHIFT                               31
#define CLK_U0_DW_I2C_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U1_DW_I2C_CLK_APB_ENABLE_DATA                            1
#define CLK_U1_DW_I2C_CLK_APB_DISABLE_DATA                           0
#define CLK_U1_DW_I2C_CLK_APB_EN_SHIFT                               31
#define CLK_U1_DW_I2C_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U2_DW_I2C_CLK_APB_ENABLE_DATA                            1
#define CLK_U2_DW_I2C_CLK_APB_DISABLE_DATA                           0
#define CLK_U2_DW_I2C_CLK_APB_EN_SHIFT                               31
#define CLK_U2_DW_I2C_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U3_DW_I2C_CLK_APB_ENABLE_DATA                            1
#define CLK_U3_DW_I2C_CLK_APB_DISABLE_DATA                           0
#define CLK_U3_DW_I2C_CLK_APB_EN_SHIFT                               31
#define CLK_U3_DW_I2C_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U4_DW_I2C_CLK_APB_ENABLE_DATA                            1
#define CLK_U4_DW_I2C_CLK_APB_DISABLE_DATA                           0
#define CLK_U4_DW_I2C_CLK_APB_EN_SHIFT                               31
#define CLK_U4_DW_I2C_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U5_DW_I2C_CLK_APB_ENABLE_DATA                            1
#define CLK_U5_DW_I2C_CLK_APB_DISABLE_DATA                           0
#define CLK_U5_DW_I2C_CLK_APB_EN_SHIFT                               31
#define CLK_U5_DW_I2C_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U6_DW_I2C_CLK_APB_ENABLE_DATA                            1
#define CLK_U6_DW_I2C_CLK_APB_DISABLE_DATA                           0
#define CLK_U6_DW_I2C_CLK_APB_EN_SHIFT                               31
#define CLK_U6_DW_I2C_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U0_DW_UART_CLK_APB_ENABLE_DATA                           1
#define CLK_U0_DW_UART_CLK_APB_DISABLE_DATA                          0
#define CLK_U0_DW_UART_CLK_APB_EN_SHIFT                              31
#define CLK_U0_DW_UART_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U0_DW_UART_CLK_CORE_ENABLE_DATA                          1
#define CLK_U0_DW_UART_CLK_CORE_DISABLE_DATA                         0
#define CLK_U0_DW_UART_CLK_CORE_EN_SHIFT                             31
#define CLK_U0_DW_UART_CLK_CORE_EN_MASK                              0x80000000U
#define CLK_U1_DW_UART_CLK_APB_ENABLE_DATA                           1
#define CLK_U1_DW_UART_CLK_APB_DISABLE_DATA                          0
#define CLK_U1_DW_UART_CLK_APB_EN_SHIFT                              31
#define CLK_U1_DW_UART_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U1_DW_UART_CLK_CORE_ENABLE_DATA                          1
#define CLK_U1_DW_UART_CLK_CORE_DISABLE_DATA                         0
#define CLK_U1_DW_UART_CLK_CORE_EN_SHIFT                             31
#define CLK_U1_DW_UART_CLK_CORE_EN_MASK                              0x80000000U
#define CLK_U2_DW_UART_CLK_APB_ENABLE_DATA                           1
#define CLK_U2_DW_UART_CLK_APB_DISABLE_DATA                          0
#define CLK_U2_DW_UART_CLK_APB_EN_SHIFT                              31
#define CLK_U2_DW_UART_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U2_DW_UART_CLK_CORE_ENABLE_DATA                          1
#define CLK_U2_DW_UART_CLK_CORE_DISABLE_DATA                         0
#define CLK_U2_DW_UART_CLK_CORE_EN_SHIFT                             31
#define CLK_U2_DW_UART_CLK_CORE_EN_MASK                              0x80000000U
#define CLK_U3_DW_UART_CLK_APB_ENABLE_DATA                           1
#define CLK_U3_DW_UART_CLK_APB_DISABLE_DATA                          0
#define CLK_U3_DW_UART_CLK_APB_EN_SHIFT                              31
#define CLK_U3_DW_UART_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U3_DW_UART_CLK_CORE_ENABLE_DATA                          1
#define CLK_U3_DW_UART_CLK_CORE_DISABLE_DATA                         0
#define CLK_U3_DW_UART_CLK_CORE_EN_SHIFT                             31
#define CLK_U3_DW_UART_CLK_CORE_EN_MASK                              0x80000000U
#define CLK_U3_DW_UART_CLK_CORE_DIV_SHIFT                            0
#define CLK_U3_DW_UART_CLK_CORE_DIV_MASK                             0x1FFFFU
#define CLK_U4_DW_UART_CLK_APB_ENABLE_DATA                           1
#define CLK_U4_DW_UART_CLK_APB_DISABLE_DATA                          0
#define CLK_U4_DW_UART_CLK_APB_EN_SHIFT                              31
#define CLK_U4_DW_UART_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U4_DW_UART_CLK_CORE_ENABLE_DATA                          1
#define CLK_U4_DW_UART_CLK_CORE_DISABLE_DATA                         0
#define CLK_U4_DW_UART_CLK_CORE_EN_SHIFT                             31
#define CLK_U4_DW_UART_CLK_CORE_EN_MASK                              0x80000000U
#define CLK_U4_DW_UART_CLK_CORE_DIV_SHIFT                            0
#define CLK_U4_DW_UART_CLK_CORE_DIV_MASK                             0x1FFFFU
#define CLK_U5_DW_UART_CLK_APB_ENABLE_DATA                           1
#define CLK_U5_DW_UART_CLK_APB_DISABLE_DATA                          0
#define CLK_U5_DW_UART_CLK_APB_EN_SHIFT                              31
#define CLK_U5_DW_UART_CLK_APB_EN_MASK                               0x80000000U
#define CLK_U5_DW_UART_CLK_CORE_ENABLE_DATA                          1
#define CLK_U5_DW_UART_CLK_CORE_DISABLE_DATA                         0
#define CLK_U5_DW_UART_CLK_CORE_EN_SHIFT                             31
#define CLK_U5_DW_UART_CLK_CORE_EN_MASK                              0x80000000U
#define CLK_U5_DW_UART_CLK_CORE_DIV_SHIFT                            0
#define CLK_U5_DW_UART_CLK_CORE_DIV_MASK                             0x1FFFFU
#define CLK_U0_PWMDAC_CLK_APB_ENABLE_DATA                            1
#define CLK_U0_PWMDAC_CLK_APB_DISABLE_DATA                           0
#define CLK_U0_PWMDAC_CLK_APB_EN_SHIFT                               31
#define CLK_U0_PWMDAC_CLK_APB_EN_MASK                                0x80000000U
#define CLK_U0_PWMDAC_CLK_CORE_ENABLE_DATA                           1
#define CLK_U0_PWMDAC_CLK_CORE_DISABLE_DATA                          0
#define CLK_U0_PWMDAC_CLK_CORE_EN_SHIFT                              31
#define CLK_U0_PWMDAC_CLK_CORE_EN_MASK                               0x80000000U
#define CLK_U0_PWMDAC_CLK_CORE_DIV_SHIFT                             0
#define CLK_U0_PWMDAC_CLK_CORE_DIV_MASK                              0x1FFU
#define CLK_U0_CDNS_SPDIF_CLK_APB_ENABLE_DATA                        1
#define CLK_U0_CDNS_SPDIF_CLK_APB_DISABLE_DATA                       0
#define CLK_U0_CDNS_SPDIF_CLK_APB_EN_SHIFT                           31
#define CLK_U0_CDNS_SPDIF_CLK_APB_EN_MASK                            0x80000000U
#define CLK_U0_CDNS_SPDIF_CLK_CORE_ENABLE_DATA                       1
#define CLK_U0_CDNS_SPDIF_CLK_CORE_DISABLE_DATA                      0
#define CLK_U0_CDNS_SPDIF_CLK_CORE_EN_SHIFT                          31
#define CLK_U0_CDNS_SPDIF_CLK_CORE_EN_MASK                           0x80000000U
#define CLK_U0_I2STX_4CH_CLK_APB_ENABLE_DATA                         1
#define CLK_U0_I2STX_4CH_CLK_APB_DISABLE_DATA                        0
#define CLK_U0_I2STX_4CH_CLK_APB_EN_SHIFT                            31
#define CLK_U0_I2STX_4CH_CLK_APB_EN_MASK                             0x80000000U
#define CLK_I2STX_4CH0_BCLK_MST_ENABLE_DATA                          1
#define CLK_I2STX_4CH0_BCLK_MST_DISABLE_DATA                         0
#define CLK_I2STX_4CH0_BCLK_MST_EN_SHIFT                             31
#define CLK_I2STX_4CH0_BCLK_MST_EN_MASK                              0x80000000U
#define CLK_I2STX_4CH0_BCLK_MST_DIV_SHIFT                            0
#define CLK_I2STX_4CH0_BCLK_MST_DIV_MASK                             0x3FU
#define CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_DATA                    1
#define CLK_I2STX_4CH0_BCLK_MST_INV_UN_POLARITY_DATA                 0
#define CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_SHIFT                   30
#define CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_MASK                    0x40000000U
#define CLK_I2STX_4CH0_LRCK_MST_SW_SHIFT                             24
#define CLK_I2STX_4CH0_LRCK_MST_SW_MASK                              0x1000000U
#define CLK_I2STX_4CH0_LRCK_MST_SW_CLK_I2STX_4CH0_BCLK_MST_INV_DATA  0
#define CLK_I2STX_4CH0_LRCK_MST_SW_CLK_I2STX_4CH0_BCLK_MST_DATA      1
#define CLK_I2STX_4CH0_LRCK_MST_DIV_SHIFT                            0
#define CLK_I2STX_4CH0_LRCK_MST_DIV_MASK                             0x7FU
#define CLK_U0_I2STX_4CH_BCLK_SW_SHIFT                               24
#define CLK_U0_I2STX_4CH_BCLK_SW_MASK                                0x1000000U
#define CLK_U0_I2STX_4CH_BCLK_SW_CLK_I2STX_4CH0_BCLK_MST_DATA        0
#define CLK_U0_I2STX_4CH_BCLK_SW_CLK_I2STX_BCLK_EXT_DATA             1
#define CLK_U0_I2STX_4CH_BCLK_N_POLARITY_DATA                        1
#define CLK_U0_I2STX_4CH_BCLK_N_UN_POLARITY_DATA                     0
#define CLK_U0_I2STX_4CH_BCLK_N_POLARITY_SHIFT                       30
#define CLK_U0_I2STX_4CH_BCLK_N_POLARITY_MASK                        0x40000000U
#define CLK_U0_I2STX_4CH_LRCK_SW_SHIFT                               24
#define CLK_U0_I2STX_4CH_LRCK_SW_MASK                                0x1000000U
#define CLK_U0_I2STX_4CH_LRCK_SW_CLK_I2STX_4CH0_LRCK_MST_DATA        0
#define CLK_U0_I2STX_4CH_LRCK_SW_CLK_I2STX_LRCK_EXT_DATA             1
#define CLK_U1_I2STX_4CH_CLK_APB_ENABLE_DATA                         1
#define CLK_U1_I2STX_4CH_CLK_APB_DISABLE_DATA                        0
#define CLK_U1_I2STX_4CH_CLK_APB_EN_SHIFT                            31
#define CLK_U1_I2STX_4CH_CLK_APB_EN_MASK                             0x80000000U
#define CLK_I2STX_4CH1_BCLK_MST_ENABLE_DATA                          1
#define CLK_I2STX_4CH1_BCLK_MST_DISABLE_DATA                         0
#define CLK_I2STX_4CH1_BCLK_MST_EN_SHIFT                             31
#define CLK_I2STX_4CH1_BCLK_MST_EN_MASK                              0x80000000U
#define CLK_I2STX_4CH1_BCLK_MST_DIV_SHIFT                            0
#define CLK_I2STX_4CH1_BCLK_MST_DIV_MASK                             0x3FU
#define CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_DATA                    1
#define CLK_I2STX_4CH1_BCLK_MST_INV_UN_POLARITY_DATA                 0
#define CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_SHIFT                   30
#define CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_MASK                    0x40000000U
#define CLK_I2STX_4CH1_LRCK_MST_SW_SHIFT                             24
#define CLK_I2STX_4CH1_LRCK_MST_SW_MASK                              0x1000000U
#define CLK_I2STX_4CH1_LRCK_MST_SW_CLK_I2STX_4CH1_BCLK_MST_INV_DATA  0
#define CLK_I2STX_4CH1_LRCK_MST_SW_CLK_I2STX_4CH1_BCLK_MST_DATA      1
#define CLK_I2STX_4CH1_LRCK_MST_DIV_SHIFT                            0
#define CLK_I2STX_4CH1_LRCK_MST_DIV_MASK                             0x7FU
#define CLK_U1_I2STX_4CH_BCLK_SW_SHIFT                               24
#define CLK_U1_I2STX_4CH_BCLK_SW_MASK                                0x1000000U
#define CLK_U1_I2STX_4CH_BCLK_SW_CLK_I2STX_4CH1_BCLK_MST_DATA        0
#define CLK_U1_I2STX_4CH_BCLK_SW_CLK_I2STX_BCLK_EXT_DATA             1
#define CLK_U1_I2STX_4CH_BCLK_N_POLARITY_DATA                        1
#define CLK_U1_I2STX_4CH_BCLK_N_UN_POLARITY_DATA                     0
#define CLK_U1_I2STX_4CH_BCLK_N_POLARITY_SHIFT                       30
#define CLK_U1_I2STX_4CH_BCLK_N_POLARITY_MASK                        0x40000000U
#define CLK_U1_I2STX_4CH_LRCK_SW_SHIFT                               24
#define CLK_U1_I2STX_4CH_LRCK_SW_MASK                                0x1000000U
#define CLK_U1_I2STX_4CH_LRCK_SW_CLK_I2STX_4CH1_LRCK_MST_DATA        0
#define CLK_U1_I2STX_4CH_LRCK_SW_CLK_I2STX_LRCK_EXT_DATA             1
#define CLK_U0_I2SRX_3CH_CLK_APB_ENABLE_DATA                         1
#define CLK_U0_I2SRX_3CH_CLK_APB_DISABLE_DATA                        0
#define CLK_U0_I2SRX_3CH_CLK_APB_EN_SHIFT                            31
#define CLK_U0_I2SRX_3CH_CLK_APB_EN_MASK                             0x80000000U
#define CLK_I2SRX_3CH_BCLK_MST_ENABLE_DATA                           1
#define CLK_I2SRX_3CH_BCLK_MST_DISABLE_DATA                          0
#define CLK_I2SRX_3CH_BCLK_MST_EN_SHIFT                              31
#define CLK_I2SRX_3CH_BCLK_MST_EN_MASK                               0x80000000U
#define CLK_I2SRX_3CH_BCLK_MST_DIV_SHIFT                             0
#define CLK_I2SRX_3CH_BCLK_MST_DIV_MASK                              0x3FU
#define CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_DATA                     1
#define CLK_I2SRX_3CH_BCLK_MST_INV_UN_POLARITY_DATA                  0
#define CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_SHIFT                    30
#define CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_MASK                     0x40000000U
#define CLK_I2SRX_3CH_LRCK_MST_SW_SHIFT                              24
#define CLK_I2SRX_3CH_LRCK_MST_SW_MASK                               0x1000000U
#define CLK_I2SRX_3CH_LRCK_MST_SW_CLK_I2SRX_3CH_BCLK_MST_INV_DATA    0
#define CLK_I2SRX_3CH_LRCK_MST_SW_CLK_I2SRX_3CH_BCLK_MST_DATA        1
#define CLK_I2SRX_3CH_LRCK_MST_DIV_SHIFT                             0
#define CLK_I2SRX_3CH_LRCK_MST_DIV_MASK                              0x7FU
#define CLK_U0_I2SRX_3CH_BCLK_SW_SHIFT                               24
#define CLK_U0_I2SRX_3CH_BCLK_SW_MASK                                0x1000000U
#define CLK_U0_I2SRX_3CH_BCLK_SW_CLK_I2SRX_3CH_BCLK_MST_DATA         0
#define CLK_U0_I2SRX_3CH_BCLK_SW_CLK_I2SRX_BCLK_EXT_DATA             1
#define CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_DATA                        1
#define CLK_U0_I2SRX_3CH_BCLK_N_UN_POLARITY_DATA                     0
#define CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_SHIFT                       30
#define CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_MASK                        0x40000000U
#define CLK_U0_I2SRX_3CH_LRCK_SW_SHIFT                               24
#define CLK_U0_I2SRX_3CH_LRCK_SW_MASK                                0x1000000U
#define CLK_U0_I2SRX_3CH_LRCK_SW_CLK_I2SRX_3CH_LRCK_MST_DATA         0
#define CLK_U0_I2SRX_3CH_LRCK_SW_CLK_I2SRX_LRCK_EXT_DATA             1
#define CLK_U0_PDM_4MIC_CLK_DMIC_ENABLE_DATA                         1
#define CLK_U0_PDM_4MIC_CLK_DMIC_DISABLE_DATA                        0
#define CLK_U0_PDM_4MIC_CLK_DMIC_EN_SHIFT                            31
#define CLK_U0_PDM_4MIC_CLK_DMIC_EN_MASK                             0x80000000U
#define CLK_U0_PDM_4MIC_CLK_DMIC_DIV_SHIFT                           0
#define CLK_U0_PDM_4MIC_CLK_DMIC_DIV_MASK                            0x7FU
#define CLK_U0_PDM_4MIC_CLK_APB_ENABLE_DATA                          1
#define CLK_U0_PDM_4MIC_CLK_APB_DISABLE_DATA                         0
#define CLK_U0_PDM_4MIC_CLK_APB_EN_SHIFT                             31
#define CLK_U0_PDM_4MIC_CLK_APB_EN_MASK                              0x80000000U
#define CLK_U0_TDM16SLOT_CLK_AHB_ENABLE_DATA                         1
#define CLK_U0_TDM16SLOT_CLK_AHB_DISABLE_DATA                        0
#define CLK_U0_TDM16SLOT_CLK_AHB_EN_SHIFT                            31
#define CLK_U0_TDM16SLOT_CLK_AHB_EN_MASK                             0x80000000U
#define CLK_U0_TDM16SLOT_CLK_APB_ENABLE_DATA                         1
#define CLK_U0_TDM16SLOT_CLK_APB_DISABLE_DATA                        0
#define CLK_U0_TDM16SLOT_CLK_APB_EN_SHIFT                            31
#define CLK_U0_TDM16SLOT_CLK_APB_EN_MASK                             0x80000000U
#define CLK_TDM_INTERNAL_ENABLE_DATA                                 1
#define CLK_TDM_INTERNAL_DISABLE_DATA                                0
#define CLK_TDM_INTERNAL_EN_SHIFT                                    31
#define CLK_TDM_INTERNAL_EN_MASK                                     0x80000000U
#define CLK_TDM_INTERNAL_DIV_SHIFT                                   0
#define CLK_TDM_INTERNAL_DIV_MASK                                    0x7FU
#define CLK_U0_TDM16SLOT_CLK_TDM_SW_SHIFT                            24
#define CLK_U0_TDM16SLOT_CLK_TDM_SW_MASK                             0x1000000U
#define CLK_U0_TDM16SLOT_CLK_TDM_SW_CLK_TDM_INTERNAL_DATA            0
#define CLK_U0_TDM16SLOT_CLK_TDM_SW_CLK_TDM_EXT_DATA                 1
#define CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_DATA                     1
#define CLK_U0_TDM16SLOT_CLK_TDM_N_UN_POLARITY_DATA                  0
#define CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_SHIFT                    30
#define CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_MASK                     0x40000000U
#define CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_DIV_SHIFT                 0
#define CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_DIV_MASK                  0x7U



#define RSTN_U0_JTAG2APB_PRESETN_SHIFT                               0
#define RSTN_U0_JTAG2APB_PRESETN_MASK                                (0x1 << 0)
#define RSTN_U0_JTAG2APB_PRESETN_ASSERT                              1
#define RSTN_U0_JTAG2APB_PRESETN_CLEAR                               0
#define RSTN_U0_SYS_SYSCON_PRESETN_SHIFT                             1
#define RSTN_U0_SYS_SYSCON_PRESETN_MASK                              (0x1 << 1)
#define RSTN_U0_SYS_SYSCON_PRESETN_ASSERT                            1
#define RSTN_U0_SYS_SYSCON_PRESETN_CLEAR                             0
#define RSTN_U0_SYS_IOMUX_PRESETN_SHIFT                              2
#define RSTN_U0_SYS_IOMUX_PRESETN_MASK                               (0x1 << 2)
#define RSTN_U0_SYS_IOMUX_PRESETN_ASSERT                             1
#define RSTN_U0_SYS_IOMUX_PRESETN_CLEAR                              0
#define RST_U0_U7MC_SFT7110_RST_BUS_SHIFT                            3
#define RST_U0_U7MC_SFT7110_RST_BUS_MASK                             (0x1 << 3)
#define RST_U0_U7MC_SFT7110_RST_BUS_ASSERT                           1
#define RST_U0_U7MC_SFT7110_RST_BUS_CLEAR                            0
#define RST_U0_U7MC_SFT7110_DEBUG_RESET_SHIFT                        4
#define RST_U0_U7MC_SFT7110_DEBUG_RESET_MASK                         (0x1 << 4)
#define RST_U0_U7MC_SFT7110_DEBUG_RESET_ASSERT                       1
#define RST_U0_U7MC_SFT7110_DEBUG_RESET_CLEAR                        0
#define RST_U0_U7MC_SFT7110_RST_CORE0_SHIFT                          5
#define RST_U0_U7MC_SFT7110_RST_CORE0_MASK                           (0x1 << 5)
#define RST_U0_U7MC_SFT7110_RST_CORE0_ASSERT                         1
#define RST_U0_U7MC_SFT7110_RST_CORE0_CLEAR                          0
#define RST_U0_U7MC_SFT7110_RST_CORE1_SHIFT                          6
#define RST_U0_U7MC_SFT7110_RST_CORE1_MASK                           (0x1 << 6)
#define RST_U0_U7MC_SFT7110_RST_CORE1_ASSERT                         1
#define RST_U0_U7MC_SFT7110_RST_CORE1_CLEAR                          0
#define RST_U0_U7MC_SFT7110_RST_CORE2_SHIFT                          7
#define RST_U0_U7MC_SFT7110_RST_CORE2_MASK                           (0x1 << 7)
#define RST_U0_U7MC_SFT7110_RST_CORE2_ASSERT                         1
#define RST_U0_U7MC_SFT7110_RST_CORE2_CLEAR                          0
#define RST_U0_U7MC_SFT7110_RST_CORE3_SHIFT                          8
#define RST_U0_U7MC_SFT7110_RST_CORE3_MASK                           (0x1 << 8)
#define RST_U0_U7MC_SFT7110_RST_CORE3_ASSERT                         1
#define RST_U0_U7MC_SFT7110_RST_CORE3_CLEAR                          0
#define RST_U0_U7MC_SFT7110_RST_CORE4_SHIFT                          9
#define RST_U0_U7MC_SFT7110_RST_CORE4_MASK                           (0x1 << 9)
#define RST_U0_U7MC_SFT7110_RST_CORE4_ASSERT                         1
#define RST_U0_U7MC_SFT7110_RST_CORE4_CLEAR                          0
#define RST_U0_U7MC_SFT7110_RST_CORE0_ST_SHIFT                       10
#define RST_U0_U7MC_SFT7110_RST_CORE0_ST_MASK                        (0x1 << 10)
#define RST_U0_U7MC_SFT7110_RST_CORE0_ST_ASSERT                      1
#define RST_U0_U7MC_SFT7110_RST_CORE0_ST_CLEAR                       0
#define RST_U0_U7MC_SFT7110_RST_CORE1_ST_SHIFT                       11
#define RST_U0_U7MC_SFT7110_RST_CORE1_ST_MASK                        (0x1 << 11)
#define RST_U0_U7MC_SFT7110_RST_CORE1_ST_ASSERT                      1
#define RST_U0_U7MC_SFT7110_RST_CORE1_ST_CLEAR                       0
#define RST_U0_U7MC_SFT7110_RST_CORE2_ST_SHIFT                       12
#define RST_U0_U7MC_SFT7110_RST_CORE2_ST_MASK                        (0x1 << 12)
#define RST_U0_U7MC_SFT7110_RST_CORE2_ST_ASSERT                      1
#define RST_U0_U7MC_SFT7110_RST_CORE2_ST_CLEAR                       0
#define RST_U0_U7MC_SFT7110_RST_CORE3_ST_SHIFT                       13
#define RST_U0_U7MC_SFT7110_RST_CORE3_ST_MASK                        (0x1 << 13)
#define RST_U0_U7MC_SFT7110_RST_CORE3_ST_ASSERT                      1
#define RST_U0_U7MC_SFT7110_RST_CORE3_ST_CLEAR                       0
#define RST_U0_U7MC_SFT7110_RST_CORE4_ST_SHIFT                       14
#define RST_U0_U7MC_SFT7110_RST_CORE4_ST_MASK                        (0x1 << 14)
#define RST_U0_U7MC_SFT7110_RST_CORE4_ST_ASSERT                      1
#define RST_U0_U7MC_SFT7110_RST_CORE4_ST_CLEAR                       0
#define RST_U0_U7MC_SFT7110_TRACE_RST0_SHIFT                         15
#define RST_U0_U7MC_SFT7110_TRACE_RST0_MASK                          (0x1 << 15)
#define RST_U0_U7MC_SFT7110_TRACE_RST0_ASSERT                        1
#define RST_U0_U7MC_SFT7110_TRACE_RST0_CLEAR                         0
#define RST_U0_U7MC_SFT7110_TRACE_RST1_SHIFT                         16
#define RST_U0_U7MC_SFT7110_TRACE_RST1_MASK                          (0x1 << 16)
#define RST_U0_U7MC_SFT7110_TRACE_RST1_ASSERT                        1
#define RST_U0_U7MC_SFT7110_TRACE_RST1_CLEAR                         0
#define RST_U0_U7MC_SFT7110_TRACE_RST2_SHIFT                         17
#define RST_U0_U7MC_SFT7110_TRACE_RST2_MASK                          (0x1 << 17)
#define RST_U0_U7MC_SFT7110_TRACE_RST2_ASSERT                        1
#define RST_U0_U7MC_SFT7110_TRACE_RST2_CLEAR                         0
#define RST_U0_U7MC_SFT7110_TRACE_RST3_SHIFT                         18
#define RST_U0_U7MC_SFT7110_TRACE_RST3_MASK                          (0x1 << 18)
#define RST_U0_U7MC_SFT7110_TRACE_RST3_ASSERT                        1
#define RST_U0_U7MC_SFT7110_TRACE_RST3_CLEAR                         0
#define RST_U0_U7MC_SFT7110_TRACE_RST4_SHIFT                         19
#define RST_U0_U7MC_SFT7110_TRACE_RST4_MASK                          (0x1 << 19)
#define RST_U0_U7MC_SFT7110_TRACE_RST4_ASSERT                        1
#define RST_U0_U7MC_SFT7110_TRACE_RST4_CLEAR                         0
#define RST_U0_U7MC_SFT7110_TRACE_COM_RST_SHIFT                      20
#define RST_U0_U7MC_SFT7110_TRACE_COM_RST_MASK                       (0x1 << 20)
#define RST_U0_U7MC_SFT7110_TRACE_COM_RST_ASSERT                     1
#define RST_U0_U7MC_SFT7110_TRACE_COM_RST_CLEAR                      0
#define RSTN_U0_IMG_GPU_RSTN_APB_SHIFT                               21
#define RSTN_U0_IMG_GPU_RSTN_APB_MASK                                (0x1 << 21)
#define RSTN_U0_IMG_GPU_RSTN_APB_ASSERT                              1
#define RSTN_U0_IMG_GPU_RSTN_APB_CLEAR                               0
#define RSTN_U0_IMG_GPU_RSTN_DOMA_SHIFT                              22
#define RSTN_U0_IMG_GPU_RSTN_DOMA_MASK                               (0x1 << 22)
#define RSTN_U0_IMG_GPU_RSTN_DOMA_ASSERT                             1
#define RSTN_U0_IMG_GPU_RSTN_DOMA_CLEAR                              0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_SHIFT                23
#define RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_MASK                 (0x1 << 23)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_ASSERT               1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_CLEAR                0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_SHIFT            24
#define RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_MASK             (0x1 << 24)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_ASSERT           1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_CLEAR            0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_SHIFT                25
#define RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_MASK                 (0x1 << 25)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_ASSERT               1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_CLEAR                0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_SHIFT               26
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_MASK                (0x1 << 26)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_ASSERT              1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_CLEAR               0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_SHIFT                27
#define RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_MASK                 (0x1 << 27)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_ASSERT               1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_CLEAR                0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_SHIFT                28
#define RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_MASK                 (0x1 << 28)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_ASSERT               1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_CLEAR                0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_SHIFT                   29
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_MASK                    (0x1 << 29)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_ASSERT                  1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_CLEAR                   0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_SHIFT                30
#define RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_MASK                 (0x1 << 30)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_ASSERT               1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_CLEAR                0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_SHIFT               31
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_MASK                (0x1 << 31)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_ASSERT              1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_CLEAR               0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_SHIFT               0
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_MASK                (0x1 << 0)
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_ASSERT              1
#define RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_CLEAR               0
#define RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_SHIFT                          1
#define RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_MASK                           (0x1 << 1)
#define RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_ASSERT                         1
#define RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_CLEAR                          0
#define RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_SHIFT                         2
#define RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_MASK                          (0x1 << 2)
#define RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_ASSERT                        1
#define RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_CLEAR                         0
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_SHIFT                         3
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_MASK                          (0x1 << 3)
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_ASSERT                        1
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_CLEAR                         0
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_SHIFT                     4
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_MASK                      (0x1 << 4)
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_ASSERT                    1
#define RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_CLEAR                     0
#define RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_SHIFT                        5
#define RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_MASK                         (0x1 << 5)
#define RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_ASSERT                       1
#define RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_CLEAR                        0
#define RSTN_U0_DDR_SFT7110_RSTN_AXI_SHIFT                           6
#define RSTN_U0_DDR_SFT7110_RSTN_AXI_MASK                            (0x1 << 6)
#define RSTN_U0_DDR_SFT7110_RSTN_AXI_ASSERT                          1
#define RSTN_U0_DDR_SFT7110_RSTN_AXI_CLEAR                           0
#define RSTN_U0_DDR_SFT7110_RSTN_OSC_SHIFT                           7
#define RSTN_U0_DDR_SFT7110_RSTN_OSC_MASK                            (0x1 << 7)
#define RSTN_U0_DDR_SFT7110_RSTN_OSC_ASSERT                          1
#define RSTN_U0_DDR_SFT7110_RSTN_OSC_CLEAR                           0
#define RSTN_U0_DDR_SFT7110_RSTN_APB_SHIFT                           8
#define RSTN_U0_DDR_SFT7110_RSTN_APB_MASK                            (0x1 << 8)
#define RSTN_U0_DDR_SFT7110_RSTN_APB_ASSERT                          1
#define RSTN_U0_DDR_SFT7110_RSTN_APB_CLEAR                           0
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_SHIFT    9
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_MASK     (0x1 << 9)
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_ASSERT   1
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_CLEAR    0
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_SHIFT      10
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_MASK       (0x1 << 10)
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_ASSERT     1
#define RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_CLEAR      0
#define RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_SHIFT   11
#define RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_MASK    (0x1 << 11)
#define RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_ASSERT  1
#define RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_CLEAR   0
#define RSTN_U0_CODAJ12_RSTN_AXI_SHIFT                               12
#define RSTN_U0_CODAJ12_RSTN_AXI_MASK                                (0x1 << 12)
#define RSTN_U0_CODAJ12_RSTN_AXI_ASSERT                              1
#define RSTN_U0_CODAJ12_RSTN_AXI_CLEAR                               0
#define RSTN_U0_CODAJ12_RSTN_CORE_SHIFT                              13
#define RSTN_U0_CODAJ12_RSTN_CORE_MASK                               (0x1 << 13)
#define RSTN_U0_CODAJ12_RSTN_CORE_ASSERT                             1
#define RSTN_U0_CODAJ12_RSTN_CORE_CLEAR                              0
#define RSTN_U0_CODAJ12_RSTN_APB_SHIFT                               14
#define RSTN_U0_CODAJ12_RSTN_APB_MASK                                (0x1 << 14)
#define RSTN_U0_CODAJ12_RSTN_APB_ASSERT                              1
#define RSTN_U0_CODAJ12_RSTN_APB_CLEAR                               0
#define RSTN_U0_WAVE511_RSTN_AXI_SHIFT                               15
#define RSTN_U0_WAVE511_RSTN_AXI_MASK                                (0x1 << 15)
#define RSTN_U0_WAVE511_RSTN_AXI_ASSERT                              1
#define RSTN_U0_WAVE511_RSTN_AXI_CLEAR                               0
#define RSTN_U0_WAVE511_RSTN_BPU_SHIFT                               16
#define RSTN_U0_WAVE511_RSTN_BPU_MASK                                (0x1 << 16)
#define RSTN_U0_WAVE511_RSTN_BPU_ASSERT                              1
#define RSTN_U0_WAVE511_RSTN_BPU_CLEAR                               0
#define RSTN_U0_WAVE511_RSTN_VCE_SHIFT                               17
#define RSTN_U0_WAVE511_RSTN_VCE_MASK                                (0x1 << 17)
#define RSTN_U0_WAVE511_RSTN_VCE_ASSERT                              1
#define RSTN_U0_WAVE511_RSTN_VCE_CLEAR                               0
#define RSTN_U0_WAVE511_RSTN_APB_SHIFT                               18
#define RSTN_U0_WAVE511_RSTN_APB_MASK                                (0x1 << 18)
#define RSTN_U0_WAVE511_RSTN_APB_ASSERT                              1
#define RSTN_U0_WAVE511_RSTN_APB_CLEAR                               0
#define RSTN_U0_VDEC_JPG_ARB_JPGRESETN_SHIFT                         19
#define RSTN_U0_VDEC_JPG_ARB_JPGRESETN_MASK                          (0x1 << 19)
#define RSTN_U0_VDEC_JPG_ARB_JPGRESETN_ASSERT                        1
#define RSTN_U0_VDEC_JPG_ARB_JPGRESETN_CLEAR                         0
#define RSTN_U0_VDEC_JPG_ARB_MAINRESETN_SHIFT                        20
#define RSTN_U0_VDEC_JPG_ARB_MAINRESETN_MASK                         (0x1 << 20)
#define RSTN_U0_VDEC_JPG_ARB_MAINRESETN_ASSERT                       1
#define RSTN_U0_VDEC_JPG_ARB_MAINRESETN_CLEAR                        0
#define RSTN_U0_AXIMEM_128B_RSTN_AXI_SHIFT                           21
#define RSTN_U0_AXIMEM_128B_RSTN_AXI_MASK                            (0x1 << 21)
#define RSTN_U0_AXIMEM_128B_RSTN_AXI_ASSERT                          1
#define RSTN_U0_AXIMEM_128B_RSTN_AXI_CLEAR                           0
#define RSTN_U0_WAVE420L_RSTN_AXI_SHIFT                              22
#define RSTN_U0_WAVE420L_RSTN_AXI_MASK                               (0x1 << 22)
#define RSTN_U0_WAVE420L_RSTN_AXI_ASSERT                             1
#define RSTN_U0_WAVE420L_RSTN_AXI_CLEAR                              0
#define RSTN_U0_WAVE420L_RSTN_BPU_SHIFT                              23
#define RSTN_U0_WAVE420L_RSTN_BPU_MASK                               (0x1 << 23)
#define RSTN_U0_WAVE420L_RSTN_BPU_ASSERT                             1
#define RSTN_U0_WAVE420L_RSTN_BPU_CLEAR                              0
#define RSTN_U0_WAVE420L_RSTN_VCE_SHIFT                              24
#define RSTN_U0_WAVE420L_RSTN_VCE_MASK                               (0x1 << 24)
#define RSTN_U0_WAVE420L_RSTN_VCE_ASSERT                             1
#define RSTN_U0_WAVE420L_RSTN_VCE_CLEAR                              0
#define RSTN_U0_WAVE420L_RSTN_APB_SHIFT                              25
#define RSTN_U0_WAVE420L_RSTN_APB_MASK                               (0x1 << 25)
#define RSTN_U0_WAVE420L_RSTN_APB_ASSERT                             1
#define RSTN_U0_WAVE420L_RSTN_APB_CLEAR                              0
#define RSTN_U1_AXIMEM_128B_RSTN_AXI_SHIFT                           26
#define RSTN_U1_AXIMEM_128B_RSTN_AXI_MASK                            (0x1 << 26)
#define RSTN_U1_AXIMEM_128B_RSTN_AXI_ASSERT                          1
#define RSTN_U1_AXIMEM_128B_RSTN_AXI_CLEAR                           0
#define RSTN_U2_AXIMEM_128B_RSTN_AXI_SHIFT                           27
#define RSTN_U2_AXIMEM_128B_RSTN_AXI_MASK                            (0x1 << 27)
#define RSTN_U2_AXIMEM_128B_RSTN_AXI_ASSERT                          1
#define RSTN_U2_AXIMEM_128B_RSTN_AXI_CLEAR                           0
#define RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_SHIFT                       28
#define RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_MASK                        (0x1 << 28)
#define RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_ASSERT                      1
#define RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_CLEAR                       0
#define RSTN_U0_CDNS_QSPI_RSTN_AHB_SHIFT                             29
#define RSTN_U0_CDNS_QSPI_RSTN_AHB_MASK                              (0x1 << 29)
#define RSTN_U0_CDNS_QSPI_RSTN_AHB_ASSERT                            1
#define RSTN_U0_CDNS_QSPI_RSTN_AHB_CLEAR                             0
#define RSTN_U0_CDNS_QSPI_RSTN_APB_SHIFT                             30
#define RSTN_U0_CDNS_QSPI_RSTN_APB_MASK                              (0x1 << 30)
#define RSTN_U0_CDNS_QSPI_RSTN_APB_ASSERT                            1
#define RSTN_U0_CDNS_QSPI_RSTN_APB_CLEAR                             0
#define RSTN_U0_CDNS_QSPI_RSTN_REF_SHIFT                             31
#define RSTN_U0_CDNS_QSPI_RSTN_REF_MASK                              (0x1 << 31)
#define RSTN_U0_CDNS_QSPI_RSTN_REF_ASSERT                            1
#define RSTN_U0_CDNS_QSPI_RSTN_REF_CLEAR                             0
#define RSTN_U0_DW_SDIO_RSTN_AHB_SHIFT                               0
#define RSTN_U0_DW_SDIO_RSTN_AHB_MASK                                (0x1 << 0)
#define RSTN_U0_DW_SDIO_RSTN_AHB_ASSERT                              1
#define RSTN_U0_DW_SDIO_RSTN_AHB_CLEAR                               0
#define RSTN_U1_DW_SDIO_RSTN_AHB_SHIFT                               1
#define RSTN_U1_DW_SDIO_RSTN_AHB_MASK                                (0x1 << 1)
#define RSTN_U1_DW_SDIO_RSTN_AHB_ASSERT                              1
#define RSTN_U1_DW_SDIO_RSTN_AHB_CLEAR                               0
#define RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_SHIFT                       2
#define RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_MASK                        (0x1 << 2)
#define RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_ASSERT                      1
#define RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_CLEAR                       0
#define RSTN_U1_DW_GMAC5_AXI64_HRESET_N_SHIFT                        3
#define RSTN_U1_DW_GMAC5_AXI64_HRESET_N_MASK                         (0x1 << 3)
#define RSTN_U1_DW_GMAC5_AXI64_HRESET_N_ASSERT                       1
#define RSTN_U1_DW_GMAC5_AXI64_HRESET_N_CLEAR                        0
#define RSTN_U0_MAILBOX_PRESETN_SHIFT                                4
#define RSTN_U0_MAILBOX_PRESETN_MASK                                 (0x1 << 4)
#define RSTN_U0_MAILBOX_PRESETN_ASSERT                               1
#define RSTN_U0_MAILBOX_PRESETN_CLEAR                                0
#define RSTN_U0_SSP_SPI_RSTN_APB_SHIFT                               5
#define RSTN_U0_SSP_SPI_RSTN_APB_MASK                                (0x1 << 5)
#define RSTN_U0_SSP_SPI_RSTN_APB_ASSERT                              1
#define RSTN_U0_SSP_SPI_RSTN_APB_CLEAR                               0
#define RSTN_U1_SSP_SPI_RSTN_APB_SHIFT                               6
#define RSTN_U1_SSP_SPI_RSTN_APB_MASK                                (0x1 << 6)
#define RSTN_U1_SSP_SPI_RSTN_APB_ASSERT                              1
#define RSTN_U1_SSP_SPI_RSTN_APB_CLEAR                               0
#define RSTN_U2_SSP_SPI_RSTN_APB_SHIFT                               7
#define RSTN_U2_SSP_SPI_RSTN_APB_MASK                                (0x1 << 7)
#define RSTN_U2_SSP_SPI_RSTN_APB_ASSERT                              1
#define RSTN_U2_SSP_SPI_RSTN_APB_CLEAR                               0
#define RSTN_U3_SSP_SPI_RSTN_APB_SHIFT                               8
#define RSTN_U3_SSP_SPI_RSTN_APB_MASK                                (0x1 << 8)
#define RSTN_U3_SSP_SPI_RSTN_APB_ASSERT                              1
#define RSTN_U3_SSP_SPI_RSTN_APB_CLEAR                               0
#define RSTN_U4_SSP_SPI_RSTN_APB_SHIFT                               9
#define RSTN_U4_SSP_SPI_RSTN_APB_MASK                                (0x1 << 9)
#define RSTN_U4_SSP_SPI_RSTN_APB_ASSERT                              1
#define RSTN_U4_SSP_SPI_RSTN_APB_CLEAR                               0
#define RSTN_U5_SSP_SPI_RSTN_APB_SHIFT                               10
#define RSTN_U5_SSP_SPI_RSTN_APB_MASK                                (0x1 << 10)
#define RSTN_U5_SSP_SPI_RSTN_APB_ASSERT                              1
#define RSTN_U5_SSP_SPI_RSTN_APB_CLEAR                               0
#define RSTN_U6_SSP_SPI_RSTN_APB_SHIFT                               11
#define RSTN_U6_SSP_SPI_RSTN_APB_MASK                                (0x1 << 11)
#define RSTN_U6_SSP_SPI_RSTN_APB_ASSERT                              1
#define RSTN_U6_SSP_SPI_RSTN_APB_CLEAR                               0
#define RSTN_U0_DW_I2C_RSTN_APB_SHIFT                                12
#define RSTN_U0_DW_I2C_RSTN_APB_MASK                                 (0x1 << 12)
#define RSTN_U0_DW_I2C_RSTN_APB_ASSERT                               1
#define RSTN_U0_DW_I2C_RSTN_APB_CLEAR                                0
#define RSTN_U1_DW_I2C_RSTN_APB_SHIFT                                13
#define RSTN_U1_DW_I2C_RSTN_APB_MASK                                 (0x1 << 13)
#define RSTN_U1_DW_I2C_RSTN_APB_ASSERT                               1
#define RSTN_U1_DW_I2C_RSTN_APB_CLEAR                                0
#define RSTN_U2_DW_I2C_RSTN_APB_SHIFT                                14
#define RSTN_U2_DW_I2C_RSTN_APB_MASK                                 (0x1 << 14)
#define RSTN_U2_DW_I2C_RSTN_APB_ASSERT                               1
#define RSTN_U2_DW_I2C_RSTN_APB_CLEAR                                0
#define RSTN_U3_DW_I2C_RSTN_APB_SHIFT                                15
#define RSTN_U3_DW_I2C_RSTN_APB_MASK                                 (0x1 << 15)
#define RSTN_U3_DW_I2C_RSTN_APB_ASSERT                               1
#define RSTN_U3_DW_I2C_RSTN_APB_CLEAR                                0
#define RSTN_U4_DW_I2C_RSTN_APB_SHIFT                                16
#define RSTN_U4_DW_I2C_RSTN_APB_MASK                                 (0x1 << 16)
#define RSTN_U4_DW_I2C_RSTN_APB_ASSERT                               1
#define RSTN_U4_DW_I2C_RSTN_APB_CLEAR                                0
#define RSTN_U5_DW_I2C_RSTN_APB_SHIFT                                17
#define RSTN_U5_DW_I2C_RSTN_APB_MASK                                 (0x1 << 17)
#define RSTN_U5_DW_I2C_RSTN_APB_ASSERT                               1
#define RSTN_U5_DW_I2C_RSTN_APB_CLEAR                                0
#define RSTN_U6_DW_I2C_RSTN_APB_SHIFT                                18
#define RSTN_U6_DW_I2C_RSTN_APB_MASK                                 (0x1 << 18)
#define RSTN_U6_DW_I2C_RSTN_APB_ASSERT                               1
#define RSTN_U6_DW_I2C_RSTN_APB_CLEAR                                0
#define RSTN_U0_DW_UART_RSTN_APB_SHIFT                               19
#define RSTN_U0_DW_UART_RSTN_APB_MASK                                (0x1 << 19)
#define RSTN_U0_DW_UART_RSTN_APB_ASSERT                              1
#define RSTN_U0_DW_UART_RSTN_APB_CLEAR                               0
#define RSTN_U0_DW_UART_RSTN_CORE_SHIFT                              20
#define RSTN_U0_DW_UART_RSTN_CORE_MASK                               (0x1 << 20)
#define RSTN_U0_DW_UART_RSTN_CORE_ASSERT                             1
#define RSTN_U0_DW_UART_RSTN_CORE_CLEAR                              0
#define RSTN_U1_DW_UART_RSTN_APB_SHIFT                               21
#define RSTN_U1_DW_UART_RSTN_APB_MASK                                (0x1 << 21)
#define RSTN_U1_DW_UART_RSTN_APB_ASSERT                              1
#define RSTN_U1_DW_UART_RSTN_APB_CLEAR                               0
#define RSTN_U1_DW_UART_RSTN_CORE_SHIFT                              22
#define RSTN_U1_DW_UART_RSTN_CORE_MASK                               (0x1 << 22)
#define RSTN_U1_DW_UART_RSTN_CORE_ASSERT                             1
#define RSTN_U1_DW_UART_RSTN_CORE_CLEAR                              0
#define RSTN_U2_DW_UART_RSTN_APB_SHIFT                               23
#define RSTN_U2_DW_UART_RSTN_APB_MASK                                (0x1 << 23)
#define RSTN_U2_DW_UART_RSTN_APB_ASSERT                              1
#define RSTN_U2_DW_UART_RSTN_APB_CLEAR                               0
#define RSTN_U2_DW_UART_RSTN_CORE_SHIFT                              24
#define RSTN_U2_DW_UART_RSTN_CORE_MASK                               (0x1 << 24)
#define RSTN_U2_DW_UART_RSTN_CORE_ASSERT                             1
#define RSTN_U2_DW_UART_RSTN_CORE_CLEAR                              0
#define RSTN_U3_DW_UART_RSTN_APB_SHIFT                               25
#define RSTN_U3_DW_UART_RSTN_APB_MASK                                (0x1 << 25)
#define RSTN_U3_DW_UART_RSTN_APB_ASSERT                              1
#define RSTN_U3_DW_UART_RSTN_APB_CLEAR                               0
#define RSTN_U3_DW_UART_RSTN_CORE_SHIFT                              26
#define RSTN_U3_DW_UART_RSTN_CORE_MASK                               (0x1 << 26)
#define RSTN_U3_DW_UART_RSTN_CORE_ASSERT                             1
#define RSTN_U3_DW_UART_RSTN_CORE_CLEAR                              0
#define RSTN_U4_DW_UART_RSTN_APB_SHIFT                               27
#define RSTN_U4_DW_UART_RSTN_APB_MASK                                (0x1 << 27)
#define RSTN_U4_DW_UART_RSTN_APB_ASSERT                              1
#define RSTN_U4_DW_UART_RSTN_APB_CLEAR                               0
#define RSTN_U4_DW_UART_RSTN_CORE_SHIFT                              28
#define RSTN_U4_DW_UART_RSTN_CORE_MASK                               (0x1 << 28)
#define RSTN_U4_DW_UART_RSTN_CORE_ASSERT                             1
#define RSTN_U4_DW_UART_RSTN_CORE_CLEAR                              0
#define RSTN_U5_DW_UART_RSTN_APB_SHIFT                               29
#define RSTN_U5_DW_UART_RSTN_APB_MASK                                (0x1 << 29)
#define RSTN_U5_DW_UART_RSTN_APB_ASSERT                              1
#define RSTN_U5_DW_UART_RSTN_APB_CLEAR                               0
#define RSTN_U5_DW_UART_RSTN_CORE_SHIFT                              30
#define RSTN_U5_DW_UART_RSTN_CORE_MASK                               (0x1 << 30)
#define RSTN_U5_DW_UART_RSTN_CORE_ASSERT                             1
#define RSTN_U5_DW_UART_RSTN_CORE_CLEAR                              0
#define RSTN_U0_CDNS_SPDIF_RSTN_APB_SHIFT                            31
#define RSTN_U0_CDNS_SPDIF_RSTN_APB_MASK                             (0x1 << 31)
#define RSTN_U0_CDNS_SPDIF_RSTN_APB_ASSERT                           1
#define RSTN_U0_CDNS_SPDIF_RSTN_APB_CLEAR                            0
#define RSTN_U0_PWMDAC_RSTN_APB_SHIFT                                0
#define RSTN_U0_PWMDAC_RSTN_APB_MASK                                 (0x1 << 0)
#define RSTN_U0_PWMDAC_RSTN_APB_ASSERT                               1
#define RSTN_U0_PWMDAC_RSTN_APB_CLEAR                                0
#define RSTN_U0_PDM_4MIC_RSTN_DMIC_SHIFT                             1
#define RSTN_U0_PDM_4MIC_RSTN_DMIC_MASK                              (0x1 << 1)
#define RSTN_U0_PDM_4MIC_RSTN_DMIC_ASSERT                            1
#define RSTN_U0_PDM_4MIC_RSTN_DMIC_CLEAR                             0
#define RSTN_U0_PDM_4MIC_RSTN_APB_SHIFT                              2
#define RSTN_U0_PDM_4MIC_RSTN_APB_MASK                               (0x1 << 2)
#define RSTN_U0_PDM_4MIC_RSTN_APB_ASSERT                             1
#define RSTN_U0_PDM_4MIC_RSTN_APB_CLEAR                              0
#define RSTN_U0_I2SRX_3CH_RSTN_APB_SHIFT                             3
#define RSTN_U0_I2SRX_3CH_RSTN_APB_MASK                              (0x1 << 3)
#define RSTN_U0_I2SRX_3CH_RSTN_APB_ASSERT                            1
#define RSTN_U0_I2SRX_3CH_RSTN_APB_CLEAR                             0
#define RSTN_U0_I2SRX_3CH_RSTN_BCLK_SHIFT                            4
#define RSTN_U0_I2SRX_3CH_RSTN_BCLK_MASK                             (0x1 << 4)
#define RSTN_U0_I2SRX_3CH_RSTN_BCLK_ASSERT                           1
#define RSTN_U0_I2SRX_3CH_RSTN_BCLK_CLEAR                            0
#define RSTN_U0_I2STX_4CH_RSTN_APB_SHIFT                             5
#define RSTN_U0_I2STX_4CH_RSTN_APB_MASK                              (0x1 << 5)
#define RSTN_U0_I2STX_4CH_RSTN_APB_ASSERT                            1
#define RSTN_U0_I2STX_4CH_RSTN_APB_CLEAR                             0
#define RSTN_U0_I2STX_4CH_RSTN_BCLK_SHIFT                            6
#define RSTN_U0_I2STX_4CH_RSTN_BCLK_MASK                             (0x1 << 6)
#define RSTN_U0_I2STX_4CH_RSTN_BCLK_ASSERT                           1
#define RSTN_U0_I2STX_4CH_RSTN_BCLK_CLEAR                            0
#define RSTN_U1_I2STX_4CH_RSTN_APB_SHIFT                             7
#define RSTN_U1_I2STX_4CH_RSTN_APB_MASK                              (0x1 << 7)
#define RSTN_U1_I2STX_4CH_RSTN_APB_ASSERT                            1
#define RSTN_U1_I2STX_4CH_RSTN_APB_CLEAR                             0
#define RSTN_U1_I2STX_4CH_RSTN_BCLK_SHIFT                            8
#define RSTN_U1_I2STX_4CH_RSTN_BCLK_MASK                             (0x1 << 8)
#define RSTN_U1_I2STX_4CH_RSTN_BCLK_ASSERT                           1
#define RSTN_U1_I2STX_4CH_RSTN_BCLK_CLEAR                            0
#define RSTN_U0_TDM16SLOT_RSTN_AHB_SHIFT                             9
#define RSTN_U0_TDM16SLOT_RSTN_AHB_MASK                              (0x1 << 9)
#define RSTN_U0_TDM16SLOT_RSTN_AHB_ASSERT                            1
#define RSTN_U0_TDM16SLOT_RSTN_AHB_CLEAR                             0
#define RSTN_U0_TDM16SLOT_RSTN_TDM_SHIFT                             10
#define RSTN_U0_TDM16SLOT_RSTN_TDM_MASK                              (0x1 << 10)
#define RSTN_U0_TDM16SLOT_RSTN_TDM_ASSERT                            1
#define RSTN_U0_TDM16SLOT_RSTN_TDM_CLEAR                             0
#define RSTN_U0_TDM16SLOT_RSTN_APB_SHIFT                             11
#define RSTN_U0_TDM16SLOT_RSTN_APB_MASK                              (0x1 << 11)
#define RSTN_U0_TDM16SLOT_RSTN_APB_ASSERT                            1
#define RSTN_U0_TDM16SLOT_RSTN_APB_CLEAR                             0
#define RSTN_U0_PWM_8CH_RSTN_APB_SHIFT                               12
#define RSTN_U0_PWM_8CH_RSTN_APB_MASK                                (0x1 << 12)
#define RSTN_U0_PWM_8CH_RSTN_APB_ASSERT                              1
#define RSTN_U0_PWM_8CH_RSTN_APB_CLEAR                               0
#define RSTN_U0_DSKIT_WDT_RSTN_APB_SHIFT                             13
#define RSTN_U0_DSKIT_WDT_RSTN_APB_MASK                              (0x1 << 13)
#define RSTN_U0_DSKIT_WDT_RSTN_APB_ASSERT                            1
#define RSTN_U0_DSKIT_WDT_RSTN_APB_CLEAR                             0
#define RSTN_U0_DSKIT_WDT_RSTN_WDT_SHIFT                             14
#define RSTN_U0_DSKIT_WDT_RSTN_WDT_MASK                              (0x1 << 14)
#define RSTN_U0_DSKIT_WDT_RSTN_WDT_ASSERT                            1
#define RSTN_U0_DSKIT_WDT_RSTN_WDT_CLEAR                             0
#define RSTN_U0_CAN_CTRL_RSTN_APB_SHIFT                              15
#define RSTN_U0_CAN_CTRL_RSTN_APB_MASK                               (0x1 << 15)
#define RSTN_U0_CAN_CTRL_RSTN_APB_ASSERT                             1
#define RSTN_U0_CAN_CTRL_RSTN_APB_CLEAR                              0
#define RSTN_U0_CAN_CTRL_RSTN_CAN_SHIFT                              16
#define RSTN_U0_CAN_CTRL_RSTN_CAN_MASK                               (0x1 << 16)
#define RSTN_U0_CAN_CTRL_RSTN_CAN_ASSERT                             1
#define RSTN_U0_CAN_CTRL_RSTN_CAN_CLEAR                              0
#define RSTN_U0_CAN_CTRL_RSTN_TIMER_SHIFT                            17
#define RSTN_U0_CAN_CTRL_RSTN_TIMER_MASK                             (0x1 << 17)
#define RSTN_U0_CAN_CTRL_RSTN_TIMER_ASSERT                           1
#define RSTN_U0_CAN_CTRL_RSTN_TIMER_CLEAR                            0
#define RSTN_U1_CAN_CTRL_RSTN_APB_SHIFT                              18
#define RSTN_U1_CAN_CTRL_RSTN_APB_MASK                               (0x1 << 18)
#define RSTN_U1_CAN_CTRL_RSTN_APB_ASSERT                             1
#define RSTN_U1_CAN_CTRL_RSTN_APB_CLEAR                              0
#define RSTN_U1_CAN_CTRL_RSTN_CAN_SHIFT                              19
#define RSTN_U1_CAN_CTRL_RSTN_CAN_MASK                               (0x1 << 19)
#define RSTN_U1_CAN_CTRL_RSTN_CAN_ASSERT                             1
#define RSTN_U1_CAN_CTRL_RSTN_CAN_CLEAR                              0
#define RSTN_U1_CAN_CTRL_RSTN_TIMER_SHIFT                            20
#define RSTN_U1_CAN_CTRL_RSTN_TIMER_MASK                             (0x1 << 20)
#define RSTN_U1_CAN_CTRL_RSTN_TIMER_ASSERT                           1
#define RSTN_U1_CAN_CTRL_RSTN_TIMER_CLEAR                            0
#define RSTN_U0_SI5_TIMER_RSTN_APB_SHIFT                             21
#define RSTN_U0_SI5_TIMER_RSTN_APB_MASK                              (0x1 << 21)
#define RSTN_U0_SI5_TIMER_RSTN_APB_ASSERT                            1
#define RSTN_U0_SI5_TIMER_RSTN_APB_CLEAR                             0
#define RSTN_U0_SI5_TIMER_RSTN_TIMER0_SHIFT                          22
#define RSTN_U0_SI5_TIMER_RSTN_TIMER0_MASK                           (0x1 << 22)
#define RSTN_U0_SI5_TIMER_RSTN_TIMER0_ASSERT                         1
#define RSTN_U0_SI5_TIMER_RSTN_TIMER0_CLEAR                          0
#define RSTN_U0_SI5_TIMER_RSTN_TIMER1_SHIFT                          23
#define RSTN_U0_SI5_TIMER_RSTN_TIMER1_MASK                           (0x1 << 23)
#define RSTN_U0_SI5_TIMER_RSTN_TIMER1_ASSERT                         1
#define RSTN_U0_SI5_TIMER_RSTN_TIMER1_CLEAR                          0
#define RSTN_U0_SI5_TIMER_RSTN_TIMER2_SHIFT                          24
#define RSTN_U0_SI5_TIMER_RSTN_TIMER2_MASK                           (0x1 << 24)
#define RSTN_U0_SI5_TIMER_RSTN_TIMER2_ASSERT                         1
#define RSTN_U0_SI5_TIMER_RSTN_TIMER2_CLEAR                          0
#define RSTN_U0_SI5_TIMER_RSTN_TIMER3_SHIFT                          25
#define RSTN_U0_SI5_TIMER_RSTN_TIMER3_MASK                           (0x1 << 25)
#define RSTN_U0_SI5_TIMER_RSTN_TIMER3_ASSERT                         1
#define RSTN_U0_SI5_TIMER_RSTN_TIMER3_CLEAR                          0
#define RSTN_U0_INT_CTRL_RSTN_APB_SHIFT                              26
#define RSTN_U0_INT_CTRL_RSTN_APB_MASK                               (0x1 << 26)
#define RSTN_U0_INT_CTRL_RSTN_APB_ASSERT                             1
#define RSTN_U0_INT_CTRL_RSTN_APB_CLEAR                              0
#define RSTN_U0_TEMP_SENSOR_RSTN_APB_SHIFT                           27
#define RSTN_U0_TEMP_SENSOR_RSTN_APB_MASK                            (0x1 << 27)
#define RSTN_U0_TEMP_SENSOR_RSTN_APB_ASSERT                          1
#define RSTN_U0_TEMP_SENSOR_RSTN_APB_CLEAR                           0
#define RSTN_U0_TEMP_SENSOR_RSTN_TEMP_SHIFT                          28
#define RSTN_U0_TEMP_SENSOR_RSTN_TEMP_MASK                           (0x1 << 28)
#define RSTN_U0_TEMP_SENSOR_RSTN_TEMP_ASSERT                         1
#define RSTN_U0_TEMP_SENSOR_RSTN_TEMP_CLEAR                          0
#define RSTN_U0_JTAG_CERTIFICATION_RST_N_SHIFT                       29
#define RSTN_U0_JTAG_CERTIFICATION_RST_N_MASK                        (0x1 << 29)
#define RSTN_U0_JTAG_CERTIFICATION_RST_N_ASSERT                      1
#define RSTN_U0_JTAG_CERTIFICATION_RST_N_CLEAR                       0

#define _SWITCH_CLOCK_CLK_CPU_ROOT_SOURCE_CLK_OSC_ 	saif_set_reg(CLK_CPU_ROOT_CTRL_REG_ADDR, CLK_CPU_ROOT_SW_CLK_OSC_DATA, CLK_CPU_ROOT_SW_SHIFT, CLK_CPU_ROOT_SW_MASK)
#define _SWITCH_CLOCK_CLK_CPU_ROOT_SOURCE_CLK_PLL0_ 	saif_set_reg(CLK_CPU_ROOT_CTRL_REG_ADDR, CLK_CPU_ROOT_SW_CLK_PLL0_DATA, CLK_CPU_ROOT_SW_SHIFT, CLK_CPU_ROOT_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_CPU_ROOT_ 		saif_get_reg(CLK_CPU_ROOT_CTRL_REG_ADDR, CLK_CPU_ROOT_SW_SHIFT, CLK_CPU_ROOT_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_CPU_ROOT_(x) 		saif_set_reg(CLK_CPU_ROOT_CTRL_REG_ADDR, x, CLK_CPU_ROOT_SW_SHIFT, CLK_CPU_ROOT_SW_MASK)
#define _DIVIDE_CLOCK_CLK_CPU_CORE_(div) 			saif_set_reg(CLK_CPU_CORE_CTRL_REG_ADDR, div, CLK_CPU_CORE_DIV_SHIFT, CLK_CPU_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_CPU_CORE_ 		saif_get_reg(CLK_CPU_CORE_CTRL_REG_ADDR, CLK_CPU_CORE_DIV_SHIFT, CLK_CPU_CORE_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_CPU_BUS_(div) 			saif_set_reg(CLK_CPU_BUS_CTRL_REG_ADDR, div, CLK_CPU_BUS_DIV_SHIFT, CLK_CPU_BUS_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_CPU_BUS_ 		saif_get_reg(CLK_CPU_BUS_CTRL_REG_ADDR, CLK_CPU_BUS_DIV_SHIFT, CLK_CPU_BUS_DIV_MASK)
#define _SWITCH_CLOCK_CLK_GPU_ROOT_SOURCE_CLK_PLL2_ 	saif_set_reg(CLK_GPU_ROOT_CTRL_REG_ADDR, CLK_GPU_ROOT_SW_CLK_PLL2_DATA, CLK_GPU_ROOT_SW_SHIFT, CLK_GPU_ROOT_SW_MASK)
#define _SWITCH_CLOCK_CLK_GPU_ROOT_SOURCE_CLK_PLL1_ 	saif_set_reg(CLK_GPU_ROOT_CTRL_REG_ADDR, CLK_GPU_ROOT_SW_CLK_PLL1_DATA, CLK_GPU_ROOT_SW_SHIFT, CLK_GPU_ROOT_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_GPU_ROOT_ 		saif_get_reg(CLK_GPU_ROOT_CTRL_REG_ADDR, CLK_GPU_ROOT_SW_SHIFT, CLK_GPU_ROOT_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_GPU_ROOT_(x) 		saif_set_reg(CLK_GPU_ROOT_CTRL_REG_ADDR, x, CLK_GPU_ROOT_SW_SHIFT, CLK_GPU_ROOT_SW_MASK)
#define _SWITCH_CLOCK_CLK_PERH_ROOT_SOURCE_CLK_PLL0_ 	saif_set_reg(CLK_PERH_ROOT_CTRL_REG_ADDR, CLK_PERH_ROOT_SW_CLK_PLL0_DATA, CLK_PERH_ROOT_SW_SHIFT, CLK_PERH_ROOT_SW_MASK)
#define _SWITCH_CLOCK_CLK_PERH_ROOT_SOURCE_CLK_PLL2_ 	saif_set_reg(CLK_PERH_ROOT_CTRL_REG_ADDR, CLK_PERH_ROOT_SW_CLK_PLL2_DATA, CLK_PERH_ROOT_SW_SHIFT, CLK_PERH_ROOT_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_PERH_ROOT_ 		saif_get_reg(CLK_PERH_ROOT_CTRL_REG_ADDR, CLK_PERH_ROOT_SW_SHIFT, CLK_PERH_ROOT_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_PERH_ROOT_(x) 		saif_set_reg(CLK_PERH_ROOT_CTRL_REG_ADDR, x, CLK_PERH_ROOT_SW_SHIFT, CLK_PERH_ROOT_SW_MASK)
#define _DIVIDE_CLOCK_CLK_PERH_ROOT_(div) 			saif_set_reg(CLK_PERH_ROOT_CTRL_REG_ADDR, div, CLK_PERH_ROOT_DIV_SHIFT, CLK_PERH_ROOT_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_PERH_ROOT_ 		saif_get_reg(CLK_PERH_ROOT_CTRL_REG_ADDR, CLK_PERH_ROOT_DIV_SHIFT, CLK_PERH_ROOT_DIV_MASK)
#define _SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_ 	saif_set_reg(CLK_BUS_ROOT_CTRL_REG_ADDR, CLK_BUS_ROOT_SW_CLK_OSC_DATA, CLK_BUS_ROOT_SW_SHIFT, CLK_BUS_ROOT_SW_MASK)
#define _SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_PLL2_ 	saif_set_reg(CLK_BUS_ROOT_CTRL_REG_ADDR, CLK_BUS_ROOT_SW_CLK_PLL2_DATA, CLK_BUS_ROOT_SW_SHIFT, CLK_BUS_ROOT_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_BUS_ROOT_ 		saif_get_reg(CLK_BUS_ROOT_CTRL_REG_ADDR, CLK_BUS_ROOT_SW_SHIFT, CLK_BUS_ROOT_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_BUS_ROOT_(x) 		saif_set_reg(CLK_BUS_ROOT_CTRL_REG_ADDR, x, CLK_BUS_ROOT_SW_SHIFT, CLK_BUS_ROOT_SW_MASK)
#define _DIVIDE_CLOCK_CLK_NOCSTG_BUS_(div) 			saif_set_reg(CLK_NOCSTG_BUS_CTRL_REG_ADDR, div, CLK_NOCSTG_BUS_DIV_SHIFT, CLK_NOCSTG_BUS_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_NOCSTG_BUS_ 		saif_get_reg(CLK_NOCSTG_BUS_CTRL_REG_ADDR, CLK_NOCSTG_BUS_DIV_SHIFT, CLK_NOCSTG_BUS_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_AXI_CFG0_(div) 			saif_set_reg(CLK_AXI_CFG0_CTRL_REG_ADDR, div, CLK_AXI_CFG0_DIV_SHIFT, CLK_AXI_CFG0_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_AXI_CFG0_ 		saif_get_reg(CLK_AXI_CFG0_CTRL_REG_ADDR, CLK_AXI_CFG0_DIV_SHIFT, CLK_AXI_CFG0_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_STG_AXIAHB_(div) 			saif_set_reg(CLK_STG_AXIAHB_CTRL_REG_ADDR, div, CLK_STG_AXIAHB_DIV_SHIFT, CLK_STG_AXIAHB_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_STG_AXIAHB_ 		saif_get_reg(CLK_STG_AXIAHB_CTRL_REG_ADDR, CLK_STG_AXIAHB_DIV_SHIFT, CLK_STG_AXIAHB_DIV_MASK)
#define _ENABLE_CLOCK_CLK_AHB0_ 			saif_set_reg(CLK_AHB0_CTRL_REG_ADDR, CLK_AHB0_ENABLE_DATA, CLK_AHB0_EN_SHIFT, CLK_AHB0_EN_MASK)
#define _DISABLE_CLOCK_CLK_AHB0_ 			saif_set_reg(CLK_AHB0_CTRL_REG_ADDR, CLK_AHB0_DISABLE_DATA, CLK_AHB0_EN_SHIFT, CLK_AHB0_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_AHB0_ 		saif_get_reg(CLK_AHB0_CTRL_REG_ADDR, CLK_AHB0_EN_SHIFT, CLK_AHB0_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_AHB0_(x) 		saif_set_reg(CLK_AHB0_CTRL_REG_ADDR, x, CLK_AHB0_EN_SHIFT, CLK_AHB0_EN_MASK)
#define _ENABLE_CLOCK_CLK_AHB1_ 			saif_set_reg(CLK_AHB1_CTRL_REG_ADDR, CLK_AHB1_ENABLE_DATA, CLK_AHB1_EN_SHIFT, CLK_AHB1_EN_MASK)
#define _DISABLE_CLOCK_CLK_AHB1_ 			saif_set_reg(CLK_AHB1_CTRL_REG_ADDR, CLK_AHB1_DISABLE_DATA, CLK_AHB1_EN_SHIFT, CLK_AHB1_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_AHB1_ 		saif_get_reg(CLK_AHB1_CTRL_REG_ADDR, CLK_AHB1_EN_SHIFT, CLK_AHB1_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_AHB1_(x) 		saif_set_reg(CLK_AHB1_CTRL_REG_ADDR, x, CLK_AHB1_EN_SHIFT, CLK_AHB1_EN_MASK)
#define _DIVIDE_CLOCK_CLK_APB_BUS_FUNC_(div) 			saif_set_reg(CLK_APB_BUS_FUNC_CTRL_REG_ADDR, div, CLK_APB_BUS_FUNC_DIV_SHIFT, CLK_APB_BUS_FUNC_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_APB_BUS_FUNC_ 		saif_get_reg(CLK_APB_BUS_FUNC_CTRL_REG_ADDR, CLK_APB_BUS_FUNC_DIV_SHIFT, CLK_APB_BUS_FUNC_DIV_MASK)
#define _ENABLE_CLOCK_CLK_APB0_ 			saif_set_reg(CLK_APB0_CTRL_REG_ADDR, CLK_APB0_ENABLE_DATA, CLK_APB0_EN_SHIFT, CLK_APB0_EN_MASK)
#define _DISABLE_CLOCK_CLK_APB0_ 			saif_set_reg(CLK_APB0_CTRL_REG_ADDR, CLK_APB0_DISABLE_DATA, CLK_APB0_EN_SHIFT, CLK_APB0_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_APB0_ 		saif_get_reg(CLK_APB0_CTRL_REG_ADDR, CLK_APB0_EN_SHIFT, CLK_APB0_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_APB0_(x) 		saif_set_reg(CLK_APB0_CTRL_REG_ADDR, x, CLK_APB0_EN_SHIFT, CLK_APB0_EN_MASK)
#define _DIVIDE_CLOCK_CLK_PLL0_DIV2_(div) 			saif_set_reg(CLK_PLL0_DIV2_CTRL_REG_ADDR, div, CLK_PLL0_DIV2_DIV_SHIFT, CLK_PLL0_DIV2_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_PLL0_DIV2_ 		saif_get_reg(CLK_PLL0_DIV2_CTRL_REG_ADDR, CLK_PLL0_DIV2_DIV_SHIFT, CLK_PLL0_DIV2_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_PLL1_DIV2_(div) 			saif_set_reg(CLK_PLL1_DIV2_CTRL_REG_ADDR, div, CLK_PLL1_DIV2_DIV_SHIFT, CLK_PLL1_DIV2_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_PLL1_DIV2_ 		saif_get_reg(CLK_PLL1_DIV2_CTRL_REG_ADDR, CLK_PLL1_DIV2_DIV_SHIFT, CLK_PLL1_DIV2_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_PLL2_DIV2_(div) 			saif_set_reg(CLK_PLL2_DIV2_CTRL_REG_ADDR, div, CLK_PLL2_DIV2_DIV_SHIFT, CLK_PLL2_DIV2_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_PLL2_DIV2_ 		saif_get_reg(CLK_PLL2_DIV2_CTRL_REG_ADDR, CLK_PLL2_DIV2_DIV_SHIFT, CLK_PLL2_DIV2_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_AUDIO_ROOT_(div) 			saif_set_reg(CLK_AUDIO_ROOT_CTRL_REG_ADDR, div, CLK_AUDIO_ROOT_DIV_SHIFT, CLK_AUDIO_ROOT_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_AUDIO_ROOT_ 		saif_get_reg(CLK_AUDIO_ROOT_CTRL_REG_ADDR, CLK_AUDIO_ROOT_DIV_SHIFT, CLK_AUDIO_ROOT_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_MCLK_INNER_(div) 			saif_set_reg(CLK_MCLK_INNER_CTRL_REG_ADDR, div, CLK_MCLK_INNER_DIV_SHIFT, CLK_MCLK_INNER_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_MCLK_INNER_ 		saif_get_reg(CLK_MCLK_INNER_CTRL_REG_ADDR, CLK_MCLK_INNER_DIV_SHIFT, CLK_MCLK_INNER_DIV_MASK)
#define _SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_ 	saif_set_reg(CLK_MCLK_CTRL_REG_ADDR, CLK_MCLK_SW_CLK_MCLK_INNER_DATA, CLK_MCLK_SW_SHIFT, CLK_MCLK_SW_MASK)
#define _SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_EXT_ 	saif_set_reg(CLK_MCLK_CTRL_REG_ADDR, CLK_MCLK_SW_CLK_MCLK_EXT_DATA, CLK_MCLK_SW_SHIFT, CLK_MCLK_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_MCLK_ 		saif_get_reg(CLK_MCLK_CTRL_REG_ADDR, CLK_MCLK_SW_SHIFT, CLK_MCLK_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_MCLK_(x) 		saif_set_reg(CLK_MCLK_CTRL_REG_ADDR, x, CLK_MCLK_SW_SHIFT, CLK_MCLK_SW_MASK)
#define _ENABLE_CLOCK_MCLK_OUT_ 			saif_set_reg(MCLK_OUT_CTRL_REG_ADDR, MCLK_OUT_ENABLE_DATA, MCLK_OUT_EN_SHIFT, MCLK_OUT_EN_MASK)
#define _DISABLE_CLOCK_MCLK_OUT_ 			saif_set_reg(MCLK_OUT_CTRL_REG_ADDR, MCLK_OUT_DISABLE_DATA, MCLK_OUT_EN_SHIFT, MCLK_OUT_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_MCLK_OUT_ 		saif_get_reg(MCLK_OUT_CTRL_REG_ADDR, MCLK_OUT_EN_SHIFT, MCLK_OUT_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_MCLK_OUT_(x) 		saif_set_reg(MCLK_OUT_CTRL_REG_ADDR, x, MCLK_OUT_EN_SHIFT, MCLK_OUT_EN_MASK)
#define _SWITCH_CLOCK_CLK_ISP_2X_SOURCE_CLK_PLL2_ 	saif_set_reg(CLK_ISP_2X_CTRL_REG_ADDR, CLK_ISP_2X_SW_CLK_PLL2_DATA, CLK_ISP_2X_SW_SHIFT, CLK_ISP_2X_SW_MASK)
#define _SWITCH_CLOCK_CLK_ISP_2X_SOURCE_CLK_PLL1_ 	saif_set_reg(CLK_ISP_2X_CTRL_REG_ADDR, CLK_ISP_2X_SW_CLK_PLL1_DATA, CLK_ISP_2X_SW_SHIFT, CLK_ISP_2X_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_ISP_2X_ 		saif_get_reg(CLK_ISP_2X_CTRL_REG_ADDR, CLK_ISP_2X_SW_SHIFT, CLK_ISP_2X_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_ISP_2X_(x) 		saif_set_reg(CLK_ISP_2X_CTRL_REG_ADDR, x, CLK_ISP_2X_SW_SHIFT, CLK_ISP_2X_SW_MASK)
#define _DIVIDE_CLOCK_CLK_ISP_2X_(div) 			saif_set_reg(CLK_ISP_2X_CTRL_REG_ADDR, div, CLK_ISP_2X_DIV_SHIFT, CLK_ISP_2X_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_ISP_2X_ 		saif_get_reg(CLK_ISP_2X_CTRL_REG_ADDR, CLK_ISP_2X_DIV_SHIFT, CLK_ISP_2X_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_ISP_AXI_(div) 			saif_set_reg(CLK_ISP_AXI_CTRL_REG_ADDR, div, CLK_ISP_AXI_DIV_SHIFT, CLK_ISP_AXI_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_ISP_AXI_ 		saif_get_reg(CLK_ISP_AXI_CTRL_REG_ADDR, CLK_ISP_AXI_DIV_SHIFT, CLK_ISP_AXI_DIV_MASK)
#define _ENABLE_CLOCK_CLK_GCLK0_ 			saif_set_reg(CLK_GCLK0_CTRL_REG_ADDR, CLK_GCLK0_ENABLE_DATA, CLK_GCLK0_EN_SHIFT, CLK_GCLK0_EN_MASK)
#define _DISABLE_CLOCK_CLK_GCLK0_ 			saif_set_reg(CLK_GCLK0_CTRL_REG_ADDR, CLK_GCLK0_DISABLE_DATA, CLK_GCLK0_EN_SHIFT, CLK_GCLK0_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GCLK0_ 		saif_get_reg(CLK_GCLK0_CTRL_REG_ADDR, CLK_GCLK0_EN_SHIFT, CLK_GCLK0_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GCLK0_(x) 		saif_set_reg(CLK_GCLK0_CTRL_REG_ADDR, x, CLK_GCLK0_EN_SHIFT, CLK_GCLK0_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GCLK0_(div) 			saif_set_reg(CLK_GCLK0_CTRL_REG_ADDR, div, CLK_GCLK0_DIV_SHIFT, CLK_GCLK0_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK0_ 		saif_get_reg(CLK_GCLK0_CTRL_REG_ADDR, CLK_GCLK0_DIV_SHIFT, CLK_GCLK0_DIV_MASK)
#define _ENABLE_CLOCK_CLK_GCLK1_ 			saif_set_reg(CLK_GCLK1_CTRL_REG_ADDR, CLK_GCLK1_ENABLE_DATA, CLK_GCLK1_EN_SHIFT, CLK_GCLK1_EN_MASK)
#define _DISABLE_CLOCK_CLK_GCLK1_ 			saif_set_reg(CLK_GCLK1_CTRL_REG_ADDR, CLK_GCLK1_DISABLE_DATA, CLK_GCLK1_EN_SHIFT, CLK_GCLK1_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GCLK1_ 		saif_get_reg(CLK_GCLK1_CTRL_REG_ADDR, CLK_GCLK1_EN_SHIFT, CLK_GCLK1_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GCLK1_(x) 		saif_set_reg(CLK_GCLK1_CTRL_REG_ADDR, x, CLK_GCLK1_EN_SHIFT, CLK_GCLK1_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GCLK1_(div) 			saif_set_reg(CLK_GCLK1_CTRL_REG_ADDR, div, CLK_GCLK1_DIV_SHIFT, CLK_GCLK1_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK1_ 		saif_get_reg(CLK_GCLK1_CTRL_REG_ADDR, CLK_GCLK1_DIV_SHIFT, CLK_GCLK1_DIV_MASK)
#define _ENABLE_CLOCK_CLK_GCLK2_ 			saif_set_reg(CLK_GCLK2_CTRL_REG_ADDR, CLK_GCLK2_ENABLE_DATA, CLK_GCLK2_EN_SHIFT, CLK_GCLK2_EN_MASK)
#define _DISABLE_CLOCK_CLK_GCLK2_ 			saif_set_reg(CLK_GCLK2_CTRL_REG_ADDR, CLK_GCLK2_DISABLE_DATA, CLK_GCLK2_EN_SHIFT, CLK_GCLK2_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GCLK2_ 		saif_get_reg(CLK_GCLK2_CTRL_REG_ADDR, CLK_GCLK2_EN_SHIFT, CLK_GCLK2_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GCLK2_(x) 		saif_set_reg(CLK_GCLK2_CTRL_REG_ADDR, x, CLK_GCLK2_EN_SHIFT, CLK_GCLK2_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GCLK2_(div) 			saif_set_reg(CLK_GCLK2_CTRL_REG_ADDR, div, CLK_GCLK2_DIV_SHIFT, CLK_GCLK2_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GCLK2_ 		saif_get_reg(CLK_GCLK2_CTRL_REG_ADDR, CLK_GCLK2_DIV_SHIFT, CLK_GCLK2_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK_ENABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK_DISABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_CORE_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK1_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK1_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK1_ENABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK1_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK1_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK1_DISABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK1_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_CORE_CLK1_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK1_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK1_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK1_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK2_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK2_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK2_ENABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK2_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK2_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK2_DISABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK2_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_CORE_CLK2_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK2_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK2_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK2_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK3_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK3_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK3_ENABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK3_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK3_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK3_DISABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK3_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_CORE_CLK3_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK3_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK3_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK3_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK4_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK4_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK4_ENABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK4_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK4_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK4_DISABLE_DATA, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK4_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_CORE_CLK4_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_CORE_CLK4_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_CORE_CLK4_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_CORE_CLK4_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_DEBUG_CLK_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_DEBUG_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_DEBUG_CLK_ENABLE_DATA, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_DEBUG_CLK_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_DEBUG_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_DEBUG_CLK_DISABLE_DATA, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_DEBUG_CLK_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_DEBUG_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_DEBUG_CLK_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_DEBUG_CLK_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_DEBUG_CLK_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_U7MC_SFT7110_RTC_TOGGLE_(div) 			saif_set_reg(CLK_U0_U7MC_SFT7110_RTC_TOGGLE_CTRL_REG_ADDR, div, CLK_U0_U7MC_SFT7110_RTC_TOGGLE_DIV_SHIFT, CLK_U0_U7MC_SFT7110_RTC_TOGGLE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_U7MC_SFT7110_RTC_TOGGLE_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_RTC_TOGGLE_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_RTC_TOGGLE_DIV_SHIFT, CLK_U0_U7MC_SFT7110_RTC_TOGGLE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK0_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK0_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK0_ENABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK0_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK0_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK0_DISABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK0_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK0_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK0_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK0_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK0_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK1_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK1_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK1_ENABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK1_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK1_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK1_DISABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK1_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK1_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK1_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK1_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK1_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK2_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK2_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK2_ENABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK2_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK2_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK2_DISABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK2_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK2_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK2_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK2_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK2_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK3_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK3_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK3_ENABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK3_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK3_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK3_DISABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK3_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK3_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK3_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK3_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK3_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK4_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK4_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK4_ENABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK4_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK4_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK4_DISABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK4_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK4_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_CLK4_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_CLK4_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_CLK4_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_ENABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_ 			saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_DISABLE_DATA, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_ 		saif_get_reg(CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_CTRL_REG_ADDR, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_(x) 		saif_set_reg(CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_CTRL_REG_ADDR, x, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_SHIFT, CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_EN_MASK)
#define _DIVIDE_CLOCK_CLK_OSC_DIV2_(div) 			saif_set_reg(CLK_OSC_DIV2_CTRL_REG_ADDR, div, CLK_OSC_DIV2_DIV_SHIFT, CLK_OSC_DIV2_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_OSC_DIV2_ 		saif_get_reg(CLK_OSC_DIV2_CTRL_REG_ADDR, CLK_OSC_DIV2_DIV_SHIFT, CLK_OSC_DIV2_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_PLL1_DIV4_(div) 			saif_set_reg(CLK_PLL1_DIV4_CTRL_REG_ADDR, div, CLK_PLL1_DIV4_DIV_SHIFT, CLK_PLL1_DIV4_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_PLL1_DIV4_ 		saif_get_reg(CLK_PLL1_DIV4_CTRL_REG_ADDR, CLK_PLL1_DIV4_DIV_SHIFT, CLK_PLL1_DIV4_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_PLL1_DIV8_(div) 			saif_set_reg(CLK_PLL1_DIV8_CTRL_REG_ADDR, div, CLK_PLL1_DIV8_DIV_SHIFT, CLK_PLL1_DIV8_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_PLL1_DIV8_ 		saif_get_reg(CLK_PLL1_DIV8_CTRL_REG_ADDR, CLK_PLL1_DIV8_DIV_SHIFT, CLK_PLL1_DIV8_DIV_MASK)
#define _SWITCH_CLOCK_CLK_DDR_BUS_SOURCE_CLK_OSC_DIV2_ 	saif_set_reg(CLK_DDR_BUS_CTRL_REG_ADDR, CLK_DDR_BUS_SW_CLK_OSC_DIV2_DATA, CLK_DDR_BUS_SW_SHIFT, CLK_DDR_BUS_SW_MASK)
#define _SWITCH_CLOCK_CLK_DDR_BUS_SOURCE_CLK_PLL1_DIV2_ 	saif_set_reg(CLK_DDR_BUS_CTRL_REG_ADDR, CLK_DDR_BUS_SW_CLK_PLL1_DIV2_DATA, CLK_DDR_BUS_SW_SHIFT, CLK_DDR_BUS_SW_MASK)
#define _SWITCH_CLOCK_CLK_DDR_BUS_SOURCE_CLK_PLL1_DIV4_ 	saif_set_reg(CLK_DDR_BUS_CTRL_REG_ADDR, CLK_DDR_BUS_SW_CLK_PLL1_DIV4_DATA, CLK_DDR_BUS_SW_SHIFT, CLK_DDR_BUS_SW_MASK)
#define _SWITCH_CLOCK_CLK_DDR_BUS_SOURCE_CLK_PLL1_DIV8_ 	saif_set_reg(CLK_DDR_BUS_CTRL_REG_ADDR, CLK_DDR_BUS_SW_CLK_PLL1_DIV8_DATA, CLK_DDR_BUS_SW_SHIFT, CLK_DDR_BUS_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_DDR_BUS_ 		saif_get_reg(CLK_DDR_BUS_CTRL_REG_ADDR, CLK_DDR_BUS_SW_SHIFT, CLK_DDR_BUS_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_DDR_BUS_(x) 		saif_set_reg(CLK_DDR_BUS_CTRL_REG_ADDR, x, CLK_DDR_BUS_SW_SHIFT, CLK_DDR_BUS_SW_MASK)
#define _ENABLE_CLOCK_CLK_U0_DDR_SFT7110_CLK_AXI_ 			saif_set_reg(CLK_U0_DDR_SFT7110_CLK_AXI_CTRL_REG_ADDR, CLK_U0_DDR_SFT7110_CLK_AXI_ENABLE_DATA, CLK_U0_DDR_SFT7110_CLK_AXI_EN_SHIFT, CLK_U0_DDR_SFT7110_CLK_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DDR_SFT7110_CLK_AXI_ 			saif_set_reg(CLK_U0_DDR_SFT7110_CLK_AXI_CTRL_REG_ADDR, CLK_U0_DDR_SFT7110_CLK_AXI_DISABLE_DATA, CLK_U0_DDR_SFT7110_CLK_AXI_EN_SHIFT, CLK_U0_DDR_SFT7110_CLK_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DDR_SFT7110_CLK_AXI_ 		saif_get_reg(CLK_U0_DDR_SFT7110_CLK_AXI_CTRL_REG_ADDR, CLK_U0_DDR_SFT7110_CLK_AXI_EN_SHIFT, CLK_U0_DDR_SFT7110_CLK_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DDR_SFT7110_CLK_AXI_(x) 		saif_set_reg(CLK_U0_DDR_SFT7110_CLK_AXI_CTRL_REG_ADDR, x, CLK_U0_DDR_SFT7110_CLK_AXI_EN_SHIFT, CLK_U0_DDR_SFT7110_CLK_AXI_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GPU_CORE_(div) 			saif_set_reg(CLK_GPU_CORE_CTRL_REG_ADDR, div, CLK_GPU_CORE_DIV_SHIFT, CLK_GPU_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GPU_CORE_ 		saif_get_reg(CLK_GPU_CORE_CTRL_REG_ADDR, CLK_GPU_CORE_DIV_SHIFT, CLK_GPU_CORE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_IMG_GPU_CORE_CLK_ 			saif_set_reg(CLK_U0_IMG_GPU_CORE_CLK_CTRL_REG_ADDR, CLK_U0_IMG_GPU_CORE_CLK_ENABLE_DATA, CLK_U0_IMG_GPU_CORE_CLK_EN_SHIFT, CLK_U0_IMG_GPU_CORE_CLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_IMG_GPU_CORE_CLK_ 			saif_set_reg(CLK_U0_IMG_GPU_CORE_CLK_CTRL_REG_ADDR, CLK_U0_IMG_GPU_CORE_CLK_DISABLE_DATA, CLK_U0_IMG_GPU_CORE_CLK_EN_SHIFT, CLK_U0_IMG_GPU_CORE_CLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_CORE_CLK_ 		saif_get_reg(CLK_U0_IMG_GPU_CORE_CLK_CTRL_REG_ADDR, CLK_U0_IMG_GPU_CORE_CLK_EN_SHIFT, CLK_U0_IMG_GPU_CORE_CLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_CORE_CLK_(x) 		saif_set_reg(CLK_U0_IMG_GPU_CORE_CLK_CTRL_REG_ADDR, x, CLK_U0_IMG_GPU_CORE_CLK_EN_SHIFT, CLK_U0_IMG_GPU_CORE_CLK_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_IMG_GPU_SYS_CLK_ 			saif_set_reg(CLK_U0_IMG_GPU_SYS_CLK_CTRL_REG_ADDR, CLK_U0_IMG_GPU_SYS_CLK_ENABLE_DATA, CLK_U0_IMG_GPU_SYS_CLK_EN_SHIFT, CLK_U0_IMG_GPU_SYS_CLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_IMG_GPU_SYS_CLK_ 			saif_set_reg(CLK_U0_IMG_GPU_SYS_CLK_CTRL_REG_ADDR, CLK_U0_IMG_GPU_SYS_CLK_DISABLE_DATA, CLK_U0_IMG_GPU_SYS_CLK_EN_SHIFT, CLK_U0_IMG_GPU_SYS_CLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_SYS_CLK_ 		saif_get_reg(CLK_U0_IMG_GPU_SYS_CLK_CTRL_REG_ADDR, CLK_U0_IMG_GPU_SYS_CLK_EN_SHIFT, CLK_U0_IMG_GPU_SYS_CLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_SYS_CLK_(x) 		saif_set_reg(CLK_U0_IMG_GPU_SYS_CLK_CTRL_REG_ADDR, x, CLK_U0_IMG_GPU_SYS_CLK_EN_SHIFT, CLK_U0_IMG_GPU_SYS_CLK_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_IMG_GPU_CLK_APB_ 			saif_set_reg(CLK_U0_IMG_GPU_CLK_APB_CTRL_REG_ADDR, CLK_U0_IMG_GPU_CLK_APB_ENABLE_DATA, CLK_U0_IMG_GPU_CLK_APB_EN_SHIFT, CLK_U0_IMG_GPU_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_IMG_GPU_CLK_APB_ 			saif_set_reg(CLK_U0_IMG_GPU_CLK_APB_CTRL_REG_ADDR, CLK_U0_IMG_GPU_CLK_APB_DISABLE_DATA, CLK_U0_IMG_GPU_CLK_APB_EN_SHIFT, CLK_U0_IMG_GPU_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_CLK_APB_ 		saif_get_reg(CLK_U0_IMG_GPU_CLK_APB_CTRL_REG_ADDR, CLK_U0_IMG_GPU_CLK_APB_EN_SHIFT, CLK_U0_IMG_GPU_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_CLK_APB_(x) 		saif_set_reg(CLK_U0_IMG_GPU_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_IMG_GPU_CLK_APB_EN_SHIFT, CLK_U0_IMG_GPU_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_IMG_GPU_RTC_TOGGLE_ 			saif_set_reg(CLK_U0_IMG_GPU_RTC_TOGGLE_CTRL_REG_ADDR, CLK_U0_IMG_GPU_RTC_TOGGLE_ENABLE_DATA, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_SHIFT, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_IMG_GPU_RTC_TOGGLE_ 			saif_set_reg(CLK_U0_IMG_GPU_RTC_TOGGLE_CTRL_REG_ADDR, CLK_U0_IMG_GPU_RTC_TOGGLE_DISABLE_DATA, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_SHIFT, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_RTC_TOGGLE_ 		saif_get_reg(CLK_U0_IMG_GPU_RTC_TOGGLE_CTRL_REG_ADDR, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_SHIFT, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_IMG_GPU_RTC_TOGGLE_(x) 		saif_set_reg(CLK_U0_IMG_GPU_RTC_TOGGLE_CTRL_REG_ADDR, x, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_SHIFT, CLK_U0_IMG_GPU_RTC_TOGGLE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_IMG_GPU_RTC_TOGGLE_(div) 			saif_set_reg(CLK_U0_IMG_GPU_RTC_TOGGLE_CTRL_REG_ADDR, div, CLK_U0_IMG_GPU_RTC_TOGGLE_DIV_SHIFT, CLK_U0_IMG_GPU_RTC_TOGGLE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_IMG_GPU_RTC_TOGGLE_ 		saif_get_reg(CLK_U0_IMG_GPU_RTC_TOGGLE_CTRL_REG_ADDR, CLK_U0_IMG_GPU_RTC_TOGGLE_DIV_SHIFT, CLK_U0_IMG_GPU_RTC_TOGGLE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_ 			saif_set_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_CTRL_REG_ADDR, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_ENABLE_DATA, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_ 			saif_set_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_CTRL_REG_ADDR, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_DISABLE_DATA, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_ 		saif_get_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_CTRL_REG_ADDR, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_(x) 		saif_set_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_CTRL_REG_ADDR, x, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_ 			saif_set_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_CTRL_REG_ADDR, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_ENABLE_DATA, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_ 			saif_set_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_CTRL_REG_ADDR, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_DISABLE_DATA, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_ 		saif_get_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_CTRL_REG_ADDR, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_(x) 		saif_set_reg(CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_CTRL_REG_ADDR, x, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_SHIFT, CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_EN_MASK)
#define _DIVIDE_CLOCK_CLK_HIFI4_CORE_(div) 			saif_set_reg(CLK_HIFI4_CORE_CTRL_REG_ADDR, div, CLK_HIFI4_CORE_DIV_SHIFT, CLK_HIFI4_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_HIFI4_CORE_ 		saif_get_reg(CLK_HIFI4_CORE_CTRL_REG_ADDR, CLK_HIFI4_CORE_DIV_SHIFT, CLK_HIFI4_CORE_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_HIFI4_AXI_(div) 			saif_set_reg(CLK_HIFI4_AXI_CTRL_REG_ADDR, div, CLK_HIFI4_AXI_DIV_SHIFT, CLK_HIFI4_AXI_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_HIFI4_AXI_ 		saif_get_reg(CLK_HIFI4_AXI_CTRL_REG_ADDR, CLK_HIFI4_AXI_DIV_SHIFT, CLK_HIFI4_AXI_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_MAIN_ 			saif_set_reg(CLK_U0_AXI_CFG1_DEC_CLK_MAIN_CTRL_REG_ADDR, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_ENABLE_DATA, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_MAIN_ 			saif_set_reg(CLK_U0_AXI_CFG1_DEC_CLK_MAIN_CTRL_REG_ADDR, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_DISABLE_DATA, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG1_DEC_CLK_MAIN_ 		saif_get_reg(CLK_U0_AXI_CFG1_DEC_CLK_MAIN_CTRL_REG_ADDR, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG1_DEC_CLK_MAIN_(x) 		saif_set_reg(CLK_U0_AXI_CFG1_DEC_CLK_MAIN_CTRL_REG_ADDR, x, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_MAIN_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_AHB_ 			saif_set_reg(CLK_U0_AXI_CFG1_DEC_CLK_AHB_CTRL_REG_ADDR, CLK_U0_AXI_CFG1_DEC_CLK_AHB_ENABLE_DATA, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_AHB_ 			saif_set_reg(CLK_U0_AXI_CFG1_DEC_CLK_AHB_CTRL_REG_ADDR, CLK_U0_AXI_CFG1_DEC_CLK_AHB_DISABLE_DATA, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG1_DEC_CLK_AHB_ 		saif_get_reg(CLK_U0_AXI_CFG1_DEC_CLK_AHB_CTRL_REG_ADDR, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG1_DEC_CLK_AHB_(x) 		saif_set_reg(CLK_U0_AXI_CFG1_DEC_CLK_AHB_CTRL_REG_ADDR, x, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_SHIFT, CLK_U0_AXI_CFG1_DEC_CLK_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_ENABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_DISABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_ 		saif_get_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_(x) 		saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_CTRL_REG_ADDR, x, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_EN_MASK)
#define _DIVIDE_CLOCK_CLK_VOUT_AXI_(div) 			saif_set_reg(CLK_VOUT_AXI_CTRL_REG_ADDR, div, CLK_VOUT_AXI_DIV_SHIFT, CLK_VOUT_AXI_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_VOUT_AXI_ 		saif_get_reg(CLK_VOUT_AXI_CTRL_REG_ADDR, CLK_VOUT_AXI_DIV_SHIFT, CLK_VOUT_AXI_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_ENABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_DISABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_ 		saif_get_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_(x) 		saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_CTRL_REG_ADDR, x, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_ENABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_DISABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_ 		saif_get_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_(x) 		saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_CTRL_REG_ADDR, x, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_ENABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_ 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_DISABLE_DATA, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_ 		saif_get_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_(x) 		saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_CTRL_REG_ADDR, x, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_(div) 			saif_set_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_CTRL_REG_ADDR, div, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_DIV_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_ 		saif_get_reg(CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_CTRL_REG_ADDR, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_DIV_SHIFT, CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_JPEGC_AXI_(div) 			saif_set_reg(CLK_JPEGC_AXI_CTRL_REG_ADDR, div, CLK_JPEGC_AXI_DIV_SHIFT, CLK_JPEGC_AXI_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_JPEGC_AXI_ 		saif_get_reg(CLK_JPEGC_AXI_CTRL_REG_ADDR, CLK_JPEGC_AXI_DIV_SHIFT, CLK_JPEGC_AXI_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_CODAJ12_CLK_AXI_ 			saif_set_reg(CLK_U0_CODAJ12_CLK_AXI_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_AXI_ENABLE_DATA, CLK_U0_CODAJ12_CLK_AXI_EN_SHIFT, CLK_U0_CODAJ12_CLK_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CODAJ12_CLK_AXI_ 			saif_set_reg(CLK_U0_CODAJ12_CLK_AXI_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_AXI_DISABLE_DATA, CLK_U0_CODAJ12_CLK_AXI_EN_SHIFT, CLK_U0_CODAJ12_CLK_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CODAJ12_CLK_AXI_ 		saif_get_reg(CLK_U0_CODAJ12_CLK_AXI_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_AXI_EN_SHIFT, CLK_U0_CODAJ12_CLK_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CODAJ12_CLK_AXI_(x) 		saif_set_reg(CLK_U0_CODAJ12_CLK_AXI_CTRL_REG_ADDR, x, CLK_U0_CODAJ12_CLK_AXI_EN_SHIFT, CLK_U0_CODAJ12_CLK_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_CODAJ12_CLK_CORE_ 			saif_set_reg(CLK_U0_CODAJ12_CLK_CORE_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_CORE_ENABLE_DATA, CLK_U0_CODAJ12_CLK_CORE_EN_SHIFT, CLK_U0_CODAJ12_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CODAJ12_CLK_CORE_ 			saif_set_reg(CLK_U0_CODAJ12_CLK_CORE_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_CORE_DISABLE_DATA, CLK_U0_CODAJ12_CLK_CORE_EN_SHIFT, CLK_U0_CODAJ12_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CODAJ12_CLK_CORE_ 		saif_get_reg(CLK_U0_CODAJ12_CLK_CORE_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_CORE_EN_SHIFT, CLK_U0_CODAJ12_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CODAJ12_CLK_CORE_(x) 		saif_set_reg(CLK_U0_CODAJ12_CLK_CORE_CTRL_REG_ADDR, x, CLK_U0_CODAJ12_CLK_CORE_EN_SHIFT, CLK_U0_CODAJ12_CLK_CORE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_CODAJ12_CLK_CORE_(div) 			saif_set_reg(CLK_U0_CODAJ12_CLK_CORE_CTRL_REG_ADDR, div, CLK_U0_CODAJ12_CLK_CORE_DIV_SHIFT, CLK_U0_CODAJ12_CLK_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_CODAJ12_CLK_CORE_ 		saif_get_reg(CLK_U0_CODAJ12_CLK_CORE_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_CORE_DIV_SHIFT, CLK_U0_CODAJ12_CLK_CORE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_CODAJ12_CLK_APB_ 			saif_set_reg(CLK_U0_CODAJ12_CLK_APB_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_APB_ENABLE_DATA, CLK_U0_CODAJ12_CLK_APB_EN_SHIFT, CLK_U0_CODAJ12_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CODAJ12_CLK_APB_ 			saif_set_reg(CLK_U0_CODAJ12_CLK_APB_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_APB_DISABLE_DATA, CLK_U0_CODAJ12_CLK_APB_EN_SHIFT, CLK_U0_CODAJ12_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CODAJ12_CLK_APB_ 		saif_get_reg(CLK_U0_CODAJ12_CLK_APB_CTRL_REG_ADDR, CLK_U0_CODAJ12_CLK_APB_EN_SHIFT, CLK_U0_CODAJ12_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CODAJ12_CLK_APB_(x) 		saif_set_reg(CLK_U0_CODAJ12_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_CODAJ12_CLK_APB_EN_SHIFT, CLK_U0_CODAJ12_CLK_APB_EN_MASK)
#define _DIVIDE_CLOCK_CLK_VDEC_AXI_(div) 			saif_set_reg(CLK_VDEC_AXI_CTRL_REG_ADDR, div, CLK_VDEC_AXI_DIV_SHIFT, CLK_VDEC_AXI_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_VDEC_AXI_ 		saif_get_reg(CLK_VDEC_AXI_CTRL_REG_ADDR, CLK_VDEC_AXI_DIV_SHIFT, CLK_VDEC_AXI_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_ 			saif_set_reg(CLK_U0_WAVE511_CLK_AXI_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_AXI_ENABLE_DATA, CLK_U0_WAVE511_CLK_AXI_EN_SHIFT, CLK_U0_WAVE511_CLK_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_ 			saif_set_reg(CLK_U0_WAVE511_CLK_AXI_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_AXI_DISABLE_DATA, CLK_U0_WAVE511_CLK_AXI_EN_SHIFT, CLK_U0_WAVE511_CLK_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_AXI_ 		saif_get_reg(CLK_U0_WAVE511_CLK_AXI_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_AXI_EN_SHIFT, CLK_U0_WAVE511_CLK_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_AXI_(x) 		saif_set_reg(CLK_U0_WAVE511_CLK_AXI_CTRL_REG_ADDR, x, CLK_U0_WAVE511_CLK_AXI_EN_SHIFT, CLK_U0_WAVE511_CLK_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_BPU_ 			saif_set_reg(CLK_U0_WAVE511_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_BPU_ENABLE_DATA, CLK_U0_WAVE511_CLK_BPU_EN_SHIFT, CLK_U0_WAVE511_CLK_BPU_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_BPU_ 			saif_set_reg(CLK_U0_WAVE511_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_BPU_DISABLE_DATA, CLK_U0_WAVE511_CLK_BPU_EN_SHIFT, CLK_U0_WAVE511_CLK_BPU_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_BPU_ 		saif_get_reg(CLK_U0_WAVE511_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_BPU_EN_SHIFT, CLK_U0_WAVE511_CLK_BPU_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_BPU_(x) 		saif_set_reg(CLK_U0_WAVE511_CLK_BPU_CTRL_REG_ADDR, x, CLK_U0_WAVE511_CLK_BPU_EN_SHIFT, CLK_U0_WAVE511_CLK_BPU_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_WAVE511_CLK_BPU_(div) 			saif_set_reg(CLK_U0_WAVE511_CLK_BPU_CTRL_REG_ADDR, div, CLK_U0_WAVE511_CLK_BPU_DIV_SHIFT, CLK_U0_WAVE511_CLK_BPU_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_WAVE511_CLK_BPU_ 		saif_get_reg(CLK_U0_WAVE511_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_BPU_DIV_SHIFT, CLK_U0_WAVE511_CLK_BPU_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_VCE_ 			saif_set_reg(CLK_U0_WAVE511_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_VCE_ENABLE_DATA, CLK_U0_WAVE511_CLK_VCE_EN_SHIFT, CLK_U0_WAVE511_CLK_VCE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_VCE_ 			saif_set_reg(CLK_U0_WAVE511_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_VCE_DISABLE_DATA, CLK_U0_WAVE511_CLK_VCE_EN_SHIFT, CLK_U0_WAVE511_CLK_VCE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_VCE_ 		saif_get_reg(CLK_U0_WAVE511_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_VCE_EN_SHIFT, CLK_U0_WAVE511_CLK_VCE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_VCE_(x) 		saif_set_reg(CLK_U0_WAVE511_CLK_VCE_CTRL_REG_ADDR, x, CLK_U0_WAVE511_CLK_VCE_EN_SHIFT, CLK_U0_WAVE511_CLK_VCE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_WAVE511_CLK_VCE_(div) 			saif_set_reg(CLK_U0_WAVE511_CLK_VCE_CTRL_REG_ADDR, div, CLK_U0_WAVE511_CLK_VCE_DIV_SHIFT, CLK_U0_WAVE511_CLK_VCE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_WAVE511_CLK_VCE_ 		saif_get_reg(CLK_U0_WAVE511_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_VCE_DIV_SHIFT, CLK_U0_WAVE511_CLK_VCE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_APB_ 			saif_set_reg(CLK_U0_WAVE511_CLK_APB_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_APB_ENABLE_DATA, CLK_U0_WAVE511_CLK_APB_EN_SHIFT, CLK_U0_WAVE511_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_APB_ 			saif_set_reg(CLK_U0_WAVE511_CLK_APB_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_APB_DISABLE_DATA, CLK_U0_WAVE511_CLK_APB_EN_SHIFT, CLK_U0_WAVE511_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_APB_ 		saif_get_reg(CLK_U0_WAVE511_CLK_APB_CTRL_REG_ADDR, CLK_U0_WAVE511_CLK_APB_EN_SHIFT, CLK_U0_WAVE511_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE511_CLK_APB_(x) 		saif_set_reg(CLK_U0_WAVE511_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_WAVE511_CLK_APB_EN_SHIFT, CLK_U0_WAVE511_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_JPGCLK_ 			saif_set_reg(CLK_U0_VDEC_JPG_ARB_JPGCLK_CTRL_REG_ADDR, CLK_U0_VDEC_JPG_ARB_JPGCLK_ENABLE_DATA, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_JPGCLK_ 			saif_set_reg(CLK_U0_VDEC_JPG_ARB_JPGCLK_CTRL_REG_ADDR, CLK_U0_VDEC_JPG_ARB_JPGCLK_DISABLE_DATA, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_VDEC_JPG_ARB_JPGCLK_ 		saif_get_reg(CLK_U0_VDEC_JPG_ARB_JPGCLK_CTRL_REG_ADDR, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_VDEC_JPG_ARB_JPGCLK_(x) 		saif_set_reg(CLK_U0_VDEC_JPG_ARB_JPGCLK_CTRL_REG_ADDR, x, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_JPGCLK_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_MAINCLK_ 			saif_set_reg(CLK_U0_VDEC_JPG_ARB_MAINCLK_CTRL_REG_ADDR, CLK_U0_VDEC_JPG_ARB_MAINCLK_ENABLE_DATA, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_MAINCLK_ 			saif_set_reg(CLK_U0_VDEC_JPG_ARB_MAINCLK_CTRL_REG_ADDR, CLK_U0_VDEC_JPG_ARB_MAINCLK_DISABLE_DATA, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_VDEC_JPG_ARB_MAINCLK_ 		saif_get_reg(CLK_U0_VDEC_JPG_ARB_MAINCLK_CTRL_REG_ADDR, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_VDEC_JPG_ARB_MAINCLK_(x) 		saif_set_reg(CLK_U0_VDEC_JPG_ARB_MAINCLK_CTRL_REG_ADDR, x, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_SHIFT, CLK_U0_VDEC_JPG_ARB_MAINCLK_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_EN_MASK)
#define _DIVIDE_CLOCK_CLK_VENC_AXI_(div) 			saif_set_reg(CLK_VENC_AXI_CTRL_REG_ADDR, div, CLK_VENC_AXI_DIV_SHIFT, CLK_VENC_AXI_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_VENC_AXI_ 		saif_get_reg(CLK_VENC_AXI_CTRL_REG_ADDR, CLK_VENC_AXI_DIV_SHIFT, CLK_VENC_AXI_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_AXI_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_AXI_ENABLE_DATA, CLK_U0_WAVE420L_CLK_AXI_EN_SHIFT, CLK_U0_WAVE420L_CLK_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_AXI_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_AXI_DISABLE_DATA, CLK_U0_WAVE420L_CLK_AXI_EN_SHIFT, CLK_U0_WAVE420L_CLK_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_AXI_ 		saif_get_reg(CLK_U0_WAVE420L_CLK_AXI_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_AXI_EN_SHIFT, CLK_U0_WAVE420L_CLK_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_AXI_(x) 		saif_set_reg(CLK_U0_WAVE420L_CLK_AXI_CTRL_REG_ADDR, x, CLK_U0_WAVE420L_CLK_AXI_EN_SHIFT, CLK_U0_WAVE420L_CLK_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_BPU_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_BPU_ENABLE_DATA, CLK_U0_WAVE420L_CLK_BPU_EN_SHIFT, CLK_U0_WAVE420L_CLK_BPU_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_BPU_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_BPU_DISABLE_DATA, CLK_U0_WAVE420L_CLK_BPU_EN_SHIFT, CLK_U0_WAVE420L_CLK_BPU_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_BPU_ 		saif_get_reg(CLK_U0_WAVE420L_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_BPU_EN_SHIFT, CLK_U0_WAVE420L_CLK_BPU_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_BPU_(x) 		saif_set_reg(CLK_U0_WAVE420L_CLK_BPU_CTRL_REG_ADDR, x, CLK_U0_WAVE420L_CLK_BPU_EN_SHIFT, CLK_U0_WAVE420L_CLK_BPU_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_WAVE420L_CLK_BPU_(div) 			saif_set_reg(CLK_U0_WAVE420L_CLK_BPU_CTRL_REG_ADDR, div, CLK_U0_WAVE420L_CLK_BPU_DIV_SHIFT, CLK_U0_WAVE420L_CLK_BPU_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_WAVE420L_CLK_BPU_ 		saif_get_reg(CLK_U0_WAVE420L_CLK_BPU_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_BPU_DIV_SHIFT, CLK_U0_WAVE420L_CLK_BPU_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_VCE_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_VCE_ENABLE_DATA, CLK_U0_WAVE420L_CLK_VCE_EN_SHIFT, CLK_U0_WAVE420L_CLK_VCE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_VCE_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_VCE_DISABLE_DATA, CLK_U0_WAVE420L_CLK_VCE_EN_SHIFT, CLK_U0_WAVE420L_CLK_VCE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_VCE_ 		saif_get_reg(CLK_U0_WAVE420L_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_VCE_EN_SHIFT, CLK_U0_WAVE420L_CLK_VCE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_VCE_(x) 		saif_set_reg(CLK_U0_WAVE420L_CLK_VCE_CTRL_REG_ADDR, x, CLK_U0_WAVE420L_CLK_VCE_EN_SHIFT, CLK_U0_WAVE420L_CLK_VCE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_WAVE420L_CLK_VCE_(div) 			saif_set_reg(CLK_U0_WAVE420L_CLK_VCE_CTRL_REG_ADDR, div, CLK_U0_WAVE420L_CLK_VCE_DIV_SHIFT, CLK_U0_WAVE420L_CLK_VCE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_WAVE420L_CLK_VCE_ 		saif_get_reg(CLK_U0_WAVE420L_CLK_VCE_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_VCE_DIV_SHIFT, CLK_U0_WAVE420L_CLK_VCE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_APB_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_APB_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_APB_ENABLE_DATA, CLK_U0_WAVE420L_CLK_APB_EN_SHIFT, CLK_U0_WAVE420L_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_APB_ 			saif_set_reg(CLK_U0_WAVE420L_CLK_APB_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_APB_DISABLE_DATA, CLK_U0_WAVE420L_CLK_APB_EN_SHIFT, CLK_U0_WAVE420L_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_APB_ 		saif_get_reg(CLK_U0_WAVE420L_CLK_APB_CTRL_REG_ADDR, CLK_U0_WAVE420L_CLK_APB_EN_SHIFT, CLK_U0_WAVE420L_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_WAVE420L_CLK_APB_(x) 		saif_set_reg(CLK_U0_WAVE420L_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_WAVE420L_CLK_APB_EN_SHIFT, CLK_U0_WAVE420L_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_ 			saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_ENABLE_DATA, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_ 			saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_DISABLE_DATA, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_ 		saif_get_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_(x) 		saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_CTRL_REG_ADDR, x, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_ 			saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_ENABLE_DATA, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_ 			saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DISABLE_DATA, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_ 		saif_get_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_(x) 		saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_MAIN_CTRL_REG_ADDR, x, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_MAIN_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_ 			saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_ENABLE_DATA, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_ 			saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_DISABLE_DATA, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_ 		saif_get_reg(CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_CTRL_REG_ADDR, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_(x) 		saif_set_reg(CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_CTRL_REG_ADDR, x, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_SHIFT, CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_EN_MASK)
#define _ENABLE_CLOCK_CLK_U2_AXIMEM_128B_CLK_AXI_ 			saif_set_reg(CLK_U2_AXIMEM_128B_CLK_AXI_CTRL_REG_ADDR, CLK_U2_AXIMEM_128B_CLK_AXI_ENABLE_DATA, CLK_U2_AXIMEM_128B_CLK_AXI_EN_SHIFT, CLK_U2_AXIMEM_128B_CLK_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U2_AXIMEM_128B_CLK_AXI_ 			saif_set_reg(CLK_U2_AXIMEM_128B_CLK_AXI_CTRL_REG_ADDR, CLK_U2_AXIMEM_128B_CLK_AXI_DISABLE_DATA, CLK_U2_AXIMEM_128B_CLK_AXI_EN_SHIFT, CLK_U2_AXIMEM_128B_CLK_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U2_AXIMEM_128B_CLK_AXI_ 		saif_get_reg(CLK_U2_AXIMEM_128B_CLK_AXI_CTRL_REG_ADDR, CLK_U2_AXIMEM_128B_CLK_AXI_EN_SHIFT, CLK_U2_AXIMEM_128B_CLK_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U2_AXIMEM_128B_CLK_AXI_(x) 		saif_set_reg(CLK_U2_AXIMEM_128B_CLK_AXI_CTRL_REG_ADDR, x, CLK_U2_AXIMEM_128B_CLK_AXI_EN_SHIFT, CLK_U2_AXIMEM_128B_CLK_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_AHB_ 			saif_set_reg(CLK_U0_CDNS_QSPI_CLK_AHB_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_AHB_ENABLE_DATA, CLK_U0_CDNS_QSPI_CLK_AHB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_AHB_ 			saif_set_reg(CLK_U0_CDNS_QSPI_CLK_AHB_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_AHB_DISABLE_DATA, CLK_U0_CDNS_QSPI_CLK_AHB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_QSPI_CLK_AHB_ 		saif_get_reg(CLK_U0_CDNS_QSPI_CLK_AHB_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_AHB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_QSPI_CLK_AHB_(x) 		saif_set_reg(CLK_U0_CDNS_QSPI_CLK_AHB_CTRL_REG_ADDR, x, CLK_U0_CDNS_QSPI_CLK_AHB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_APB_ 			saif_set_reg(CLK_U0_CDNS_QSPI_CLK_APB_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_APB_ENABLE_DATA, CLK_U0_CDNS_QSPI_CLK_APB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_APB_ 			saif_set_reg(CLK_U0_CDNS_QSPI_CLK_APB_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_APB_DISABLE_DATA, CLK_U0_CDNS_QSPI_CLK_APB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_QSPI_CLK_APB_ 		saif_get_reg(CLK_U0_CDNS_QSPI_CLK_APB_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_APB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_QSPI_CLK_APB_(x) 		saif_set_reg(CLK_U0_CDNS_QSPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_CDNS_QSPI_CLK_APB_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_APB_EN_MASK)
#define _DIVIDE_CLOCK_CLK_QSPI_REF_SRC_(div) 			saif_set_reg(CLK_QSPI_REF_SRC_CTRL_REG_ADDR, div, CLK_QSPI_REF_SRC_DIV_SHIFT, CLK_QSPI_REF_SRC_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_QSPI_REF_SRC_ 		saif_get_reg(CLK_QSPI_REF_SRC_CTRL_REG_ADDR, CLK_QSPI_REF_SRC_DIV_SHIFT, CLK_QSPI_REF_SRC_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_REF_ 			saif_set_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_REF_ENABLE_DATA, CLK_U0_CDNS_QSPI_CLK_REF_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_REF_ 			saif_set_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_REF_DISABLE_DATA, CLK_U0_CDNS_QSPI_CLK_REF_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_QSPI_CLK_REF_ 		saif_get_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_REF_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_QSPI_CLK_REF_(x) 		saif_set_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, x, CLK_U0_CDNS_QSPI_CLK_REF_EN_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_EN_MASK)
#define _SWITCH_CLOCK_CLK_U0_CDNS_QSPI_CLK_REF_SOURCE_CLK_OSC_ 	saif_set_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_REF_SW_CLK_OSC_DATA, CLK_U0_CDNS_QSPI_CLK_REF_SW_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_CDNS_QSPI_CLK_REF_SOURCE_CLK_QSPI_REF_SRC_ 	saif_set_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_REF_SW_CLK_QSPI_REF_SRC_DATA, CLK_U0_CDNS_QSPI_CLK_REF_SW_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_CDNS_QSPI_CLK_REF_ 		saif_get_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, CLK_U0_CDNS_QSPI_CLK_REF_SW_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_CDNS_QSPI_CLK_REF_(x) 		saif_set_reg(CLK_U0_CDNS_QSPI_CLK_REF_CTRL_REG_ADDR, x, CLK_U0_CDNS_QSPI_CLK_REF_SW_SHIFT, CLK_U0_CDNS_QSPI_CLK_REF_SW_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_SDIO_CLK_AHB_ 			saif_set_reg(CLK_U0_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, CLK_U0_DW_SDIO_CLK_AHB_ENABLE_DATA, CLK_U0_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U0_DW_SDIO_CLK_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_SDIO_CLK_AHB_ 			saif_set_reg(CLK_U0_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, CLK_U0_DW_SDIO_CLK_AHB_DISABLE_DATA, CLK_U0_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U0_DW_SDIO_CLK_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_SDIO_CLK_AHB_ 		saif_get_reg(CLK_U0_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, CLK_U0_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U0_DW_SDIO_CLK_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_SDIO_CLK_AHB_(x) 		saif_set_reg(CLK_U0_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, x, CLK_U0_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U0_DW_SDIO_CLK_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_SDIO_CLK_AHB_ 			saif_set_reg(CLK_U1_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, CLK_U1_DW_SDIO_CLK_AHB_ENABLE_DATA, CLK_U1_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U1_DW_SDIO_CLK_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_SDIO_CLK_AHB_ 			saif_set_reg(CLK_U1_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, CLK_U1_DW_SDIO_CLK_AHB_DISABLE_DATA, CLK_U1_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U1_DW_SDIO_CLK_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_SDIO_CLK_AHB_ 		saif_get_reg(CLK_U1_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, CLK_U1_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U1_DW_SDIO_CLK_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_SDIO_CLK_AHB_(x) 		saif_set_reg(CLK_U1_DW_SDIO_CLK_AHB_CTRL_REG_ADDR, x, CLK_U1_DW_SDIO_CLK_AHB_EN_SHIFT, CLK_U1_DW_SDIO_CLK_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_SDIO_CLK_SDCARD_ 			saif_set_reg(CLK_U0_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U0_DW_SDIO_CLK_SDCARD_ENABLE_DATA, CLK_U0_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U0_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_SDIO_CLK_SDCARD_ 			saif_set_reg(CLK_U0_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U0_DW_SDIO_CLK_SDCARD_DISABLE_DATA, CLK_U0_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U0_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_SDIO_CLK_SDCARD_ 		saif_get_reg(CLK_U0_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U0_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U0_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_SDIO_CLK_SDCARD_(x) 		saif_set_reg(CLK_U0_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, x, CLK_U0_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U0_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_DW_SDIO_CLK_SDCARD_(div) 			saif_set_reg(CLK_U0_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, div, CLK_U0_DW_SDIO_CLK_SDCARD_DIV_SHIFT, CLK_U0_DW_SDIO_CLK_SDCARD_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_DW_SDIO_CLK_SDCARD_ 		saif_get_reg(CLK_U0_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U0_DW_SDIO_CLK_SDCARD_DIV_SHIFT, CLK_U0_DW_SDIO_CLK_SDCARD_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_SDIO_CLK_SDCARD_ 			saif_set_reg(CLK_U1_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U1_DW_SDIO_CLK_SDCARD_ENABLE_DATA, CLK_U1_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U1_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_SDIO_CLK_SDCARD_ 			saif_set_reg(CLK_U1_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U1_DW_SDIO_CLK_SDCARD_DISABLE_DATA, CLK_U1_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U1_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_SDIO_CLK_SDCARD_ 		saif_get_reg(CLK_U1_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U1_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U1_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_SDIO_CLK_SDCARD_(x) 		saif_set_reg(CLK_U1_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, x, CLK_U1_DW_SDIO_CLK_SDCARD_EN_SHIFT, CLK_U1_DW_SDIO_CLK_SDCARD_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U1_DW_SDIO_CLK_SDCARD_(div) 			saif_set_reg(CLK_U1_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, div, CLK_U1_DW_SDIO_CLK_SDCARD_DIV_SHIFT, CLK_U1_DW_SDIO_CLK_SDCARD_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U1_DW_SDIO_CLK_SDCARD_ 		saif_get_reg(CLK_U1_DW_SDIO_CLK_SDCARD_CTRL_REG_ADDR, CLK_U1_DW_SDIO_CLK_SDCARD_DIV_SHIFT, CLK_U1_DW_SDIO_CLK_SDCARD_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_USB_125M_(div) 			saif_set_reg(CLK_USB_125M_CTRL_REG_ADDR, div, CLK_USB_125M_DIV_SHIFT, CLK_USB_125M_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_USB_125M_ 		saif_get_reg(CLK_USB_125M_CTRL_REG_ADDR, CLK_USB_125M_DIV_SHIFT, CLK_USB_125M_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_ENABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_ 			saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_DISABLE_DATA, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_ 		saif_get_reg(CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_CTRL_REG_ADDR, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_(x) 		saif_set_reg(CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_CTRL_REG_ADDR, x, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_SHIFT, CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AHB_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_ENABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AHB_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_DISABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_AHB_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_AHB_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AHB_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AXI_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_ENABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AXI_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_DISABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_AXI_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_AXI_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_AXI_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_AXI_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GMAC_SRC_(div) 			saif_set_reg(CLK_GMAC_SRC_CTRL_REG_ADDR, div, CLK_GMAC_SRC_DIV_SHIFT, CLK_GMAC_SRC_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC_SRC_ 		saif_get_reg(CLK_GMAC_SRC_CTRL_REG_ADDR, CLK_GMAC_SRC_DIV_SHIFT, CLK_GMAC_SRC_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_GMAC1_GTXCLK_(div) 			saif_set_reg(CLK_GMAC1_GTXCLK_CTRL_REG_ADDR, div, CLK_GMAC1_GTXCLK_DIV_SHIFT, CLK_GMAC1_GTXCLK_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC1_GTXCLK_ 		saif_get_reg(CLK_GMAC1_GTXCLK_CTRL_REG_ADDR, CLK_GMAC1_GTXCLK_DIV_SHIFT, CLK_GMAC1_GTXCLK_DIV_MASK)
#define _DIVIDE_CLOCK_CLK_GMAC1_RMII_RTX_(div) 			saif_set_reg(CLK_GMAC1_RMII_RTX_CTRL_REG_ADDR, div, CLK_GMAC1_RMII_RTX_DIV_SHIFT, CLK_GMAC1_RMII_RTX_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC1_RMII_RTX_ 		saif_get_reg(CLK_GMAC1_RMII_RTX_CTRL_REG_ADDR, CLK_GMAC1_RMII_RTX_DIV_SHIFT, CLK_GMAC1_RMII_RTX_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_PTP_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_ENABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_PTP_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DISABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_PTP_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_PTP_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_(div) 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_PTP_CTRL_REG_ADDR, div, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DIV_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_PTP_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DIV_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_PTP_DIV_MASK)
#define _SWITCH_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_RX_SOURCE_CLK_GMAC1_RGMII_RXIN_ 	saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC1_RGMII_RXIN_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _SWITCH_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_RX_SOURCE_CLK_GMAC1_RMII_RTX_ 	saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_CLK_GMAC1_RMII_RTX_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_RX_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_RX_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_SW_MASK)
#define _SET_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_RX_(dly) 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, dly, CLK_U1_DW_GMAC5_AXI64_CLK_RX_DLY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_DLY_MASK)
#define _GET_CLOCK_DELAY_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_RX_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_RX_DLY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_DLY_MASK)
#define _SET_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_ 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_ 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_UN_POLARITY_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_RX_INV_POLARITY_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_ENABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_ 			saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_DISABLE_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_TX_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_TX_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_EN_MASK)
#define _SWITCH_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_SOURCE_CLK_GMAC1_GTXCLK_ 	saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_CLK_GMAC1_GTXCLK_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _SWITCH_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_SOURCE_CLK_GMAC1_RMII_RTX_ 	saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_CLK_GMAC1_RMII_RTX_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_TX_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_TX_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_SW_MASK)
#define _SET_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_ 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_ 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_UN_POLARITY_DATA, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_ 		saif_get_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_(x) 		saif_set_reg(CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_CTRL_REG_ADDR, x, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_SHIFT, CLK_U1_DW_GMAC5_AXI64_CLK_TX_INV_POLARITY_MASK)
#define _ENABLE_CLOCK_CLK_GMAC1_GTXC_ 			saif_set_reg(CLK_GMAC1_GTXC_CTRL_REG_ADDR, CLK_GMAC1_GTXC_ENABLE_DATA, CLK_GMAC1_GTXC_EN_SHIFT, CLK_GMAC1_GTXC_EN_MASK)
#define _DISABLE_CLOCK_CLK_GMAC1_GTXC_ 			saif_set_reg(CLK_GMAC1_GTXC_CTRL_REG_ADDR, CLK_GMAC1_GTXC_DISABLE_DATA, CLK_GMAC1_GTXC_EN_SHIFT, CLK_GMAC1_GTXC_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GMAC1_GTXC_ 		saif_get_reg(CLK_GMAC1_GTXC_CTRL_REG_ADDR, CLK_GMAC1_GTXC_EN_SHIFT, CLK_GMAC1_GTXC_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GMAC1_GTXC_(x) 		saif_set_reg(CLK_GMAC1_GTXC_CTRL_REG_ADDR, x, CLK_GMAC1_GTXC_EN_SHIFT, CLK_GMAC1_GTXC_EN_MASK)
#define _SET_CLOCK_CLK_GMAC1_GTXC_(dly) 			saif_set_reg(CLK_GMAC1_GTXC_CTRL_REG_ADDR, dly, CLK_GMAC1_GTXC_DLY_SHIFT, CLK_GMAC1_GTXC_DLY_MASK)
#define _GET_CLOCK_DELAY_STATUS_CLK_GMAC1_GTXC_ 		saif_get_reg(CLK_GMAC1_GTXC_CTRL_REG_ADDR, CLK_GMAC1_GTXC_DLY_SHIFT, CLK_GMAC1_GTXC_DLY_MASK)
#define _ENABLE_CLOCK_CLK_GMAC0_GTXCLK_ 			saif_set_reg(CLK_GMAC0_GTXCLK_CTRL_REG_ADDR, CLK_GMAC0_GTXCLK_ENABLE_DATA, CLK_GMAC0_GTXCLK_EN_SHIFT, CLK_GMAC0_GTXCLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_GMAC0_GTXCLK_ 			saif_set_reg(CLK_GMAC0_GTXCLK_CTRL_REG_ADDR, CLK_GMAC0_GTXCLK_DISABLE_DATA, CLK_GMAC0_GTXCLK_EN_SHIFT, CLK_GMAC0_GTXCLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GMAC0_GTXCLK_ 		saif_get_reg(CLK_GMAC0_GTXCLK_CTRL_REG_ADDR, CLK_GMAC0_GTXCLK_EN_SHIFT, CLK_GMAC0_GTXCLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GMAC0_GTXCLK_(x) 		saif_set_reg(CLK_GMAC0_GTXCLK_CTRL_REG_ADDR, x, CLK_GMAC0_GTXCLK_EN_SHIFT, CLK_GMAC0_GTXCLK_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GMAC0_GTXCLK_(div) 			saif_set_reg(CLK_GMAC0_GTXCLK_CTRL_REG_ADDR, div, CLK_GMAC0_GTXCLK_DIV_SHIFT, CLK_GMAC0_GTXCLK_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC0_GTXCLK_ 		saif_get_reg(CLK_GMAC0_GTXCLK_CTRL_REG_ADDR, CLK_GMAC0_GTXCLK_DIV_SHIFT, CLK_GMAC0_GTXCLK_DIV_MASK)
#define _ENABLE_CLOCK_CLK_GMAC0_PTP_ 			saif_set_reg(CLK_GMAC0_PTP_CTRL_REG_ADDR, CLK_GMAC0_PTP_ENABLE_DATA, CLK_GMAC0_PTP_EN_SHIFT, CLK_GMAC0_PTP_EN_MASK)
#define _DISABLE_CLOCK_CLK_GMAC0_PTP_ 			saif_set_reg(CLK_GMAC0_PTP_CTRL_REG_ADDR, CLK_GMAC0_PTP_DISABLE_DATA, CLK_GMAC0_PTP_EN_SHIFT, CLK_GMAC0_PTP_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GMAC0_PTP_ 		saif_get_reg(CLK_GMAC0_PTP_CTRL_REG_ADDR, CLK_GMAC0_PTP_EN_SHIFT, CLK_GMAC0_PTP_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GMAC0_PTP_(x) 		saif_set_reg(CLK_GMAC0_PTP_CTRL_REG_ADDR, x, CLK_GMAC0_PTP_EN_SHIFT, CLK_GMAC0_PTP_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GMAC0_PTP_(div) 			saif_set_reg(CLK_GMAC0_PTP_CTRL_REG_ADDR, div, CLK_GMAC0_PTP_DIV_SHIFT, CLK_GMAC0_PTP_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC0_PTP_ 		saif_get_reg(CLK_GMAC0_PTP_CTRL_REG_ADDR, CLK_GMAC0_PTP_DIV_SHIFT, CLK_GMAC0_PTP_DIV_MASK)
#define _ENABLE_CLOCK_CLK_GMAC_PHY_ 			saif_set_reg(CLK_GMAC_PHY_CTRL_REG_ADDR, CLK_GMAC_PHY_ENABLE_DATA, CLK_GMAC_PHY_EN_SHIFT, CLK_GMAC_PHY_EN_MASK)
#define _DISABLE_CLOCK_CLK_GMAC_PHY_ 			saif_set_reg(CLK_GMAC_PHY_CTRL_REG_ADDR, CLK_GMAC_PHY_DISABLE_DATA, CLK_GMAC_PHY_EN_SHIFT, CLK_GMAC_PHY_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GMAC_PHY_ 		saif_get_reg(CLK_GMAC_PHY_CTRL_REG_ADDR, CLK_GMAC_PHY_EN_SHIFT, CLK_GMAC_PHY_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GMAC_PHY_(x) 		saif_set_reg(CLK_GMAC_PHY_CTRL_REG_ADDR, x, CLK_GMAC_PHY_EN_SHIFT, CLK_GMAC_PHY_EN_MASK)
#define _DIVIDE_CLOCK_CLK_GMAC_PHY_(div) 			saif_set_reg(CLK_GMAC_PHY_CTRL_REG_ADDR, div, CLK_GMAC_PHY_DIV_SHIFT, CLK_GMAC_PHY_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_GMAC_PHY_ 		saif_get_reg(CLK_GMAC_PHY_CTRL_REG_ADDR, CLK_GMAC_PHY_DIV_SHIFT, CLK_GMAC_PHY_DIV_MASK)
#define _ENABLE_CLOCK_CLK_GMAC0_GTXC_ 			saif_set_reg(CLK_GMAC0_GTXC_CTRL_REG_ADDR, CLK_GMAC0_GTXC_ENABLE_DATA, CLK_GMAC0_GTXC_EN_SHIFT, CLK_GMAC0_GTXC_EN_MASK)
#define _DISABLE_CLOCK_CLK_GMAC0_GTXC_ 			saif_set_reg(CLK_GMAC0_GTXC_CTRL_REG_ADDR, CLK_GMAC0_GTXC_DISABLE_DATA, CLK_GMAC0_GTXC_EN_SHIFT, CLK_GMAC0_GTXC_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_GMAC0_GTXC_ 		saif_get_reg(CLK_GMAC0_GTXC_CTRL_REG_ADDR, CLK_GMAC0_GTXC_EN_SHIFT, CLK_GMAC0_GTXC_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_GMAC0_GTXC_(x) 		saif_set_reg(CLK_GMAC0_GTXC_CTRL_REG_ADDR, x, CLK_GMAC0_GTXC_EN_SHIFT, CLK_GMAC0_GTXC_EN_MASK)
#define _SET_CLOCK_CLK_GMAC0_GTXC_(dly) 			saif_set_reg(CLK_GMAC0_GTXC_CTRL_REG_ADDR, dly, CLK_GMAC0_GTXC_DLY_SHIFT, CLK_GMAC0_GTXC_DLY_MASK)
#define _GET_CLOCK_DELAY_STATUS_CLK_GMAC0_GTXC_ 		saif_get_reg(CLK_GMAC0_GTXC_CTRL_REG_ADDR, CLK_GMAC0_GTXC_DLY_SHIFT, CLK_GMAC0_GTXC_DLY_MASK)
#define _ENABLE_CLOCK_CLK_U0_SYS_IOMUX_PCLK_ 			saif_set_reg(CLK_U0_SYS_IOMUX_PCLK_CTRL_REG_ADDR, CLK_U0_SYS_IOMUX_PCLK_ENABLE_DATA, CLK_U0_SYS_IOMUX_PCLK_EN_SHIFT, CLK_U0_SYS_IOMUX_PCLK_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SYS_IOMUX_PCLK_ 			saif_set_reg(CLK_U0_SYS_IOMUX_PCLK_CTRL_REG_ADDR, CLK_U0_SYS_IOMUX_PCLK_DISABLE_DATA, CLK_U0_SYS_IOMUX_PCLK_EN_SHIFT, CLK_U0_SYS_IOMUX_PCLK_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SYS_IOMUX_PCLK_ 		saif_get_reg(CLK_U0_SYS_IOMUX_PCLK_CTRL_REG_ADDR, CLK_U0_SYS_IOMUX_PCLK_EN_SHIFT, CLK_U0_SYS_IOMUX_PCLK_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SYS_IOMUX_PCLK_(x) 		saif_set_reg(CLK_U0_SYS_IOMUX_PCLK_CTRL_REG_ADDR, x, CLK_U0_SYS_IOMUX_PCLK_EN_SHIFT, CLK_U0_SYS_IOMUX_PCLK_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_MAILBOX_CLK_APB_ 			saif_set_reg(CLK_U0_MAILBOX_CLK_APB_CTRL_REG_ADDR, CLK_U0_MAILBOX_CLK_APB_ENABLE_DATA, CLK_U0_MAILBOX_CLK_APB_EN_SHIFT, CLK_U0_MAILBOX_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_MAILBOX_CLK_APB_ 			saif_set_reg(CLK_U0_MAILBOX_CLK_APB_CTRL_REG_ADDR, CLK_U0_MAILBOX_CLK_APB_DISABLE_DATA, CLK_U0_MAILBOX_CLK_APB_EN_SHIFT, CLK_U0_MAILBOX_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_MAILBOX_CLK_APB_ 		saif_get_reg(CLK_U0_MAILBOX_CLK_APB_CTRL_REG_ADDR, CLK_U0_MAILBOX_CLK_APB_EN_SHIFT, CLK_U0_MAILBOX_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_MAILBOX_CLK_APB_(x) 		saif_set_reg(CLK_U0_MAILBOX_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_MAILBOX_CLK_APB_EN_SHIFT, CLK_U0_MAILBOX_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_INT_CTRL_CLK_APB_ 			saif_set_reg(CLK_U0_INT_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U0_INT_CTRL_CLK_APB_ENABLE_DATA, CLK_U0_INT_CTRL_CLK_APB_EN_SHIFT, CLK_U0_INT_CTRL_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_INT_CTRL_CLK_APB_ 			saif_set_reg(CLK_U0_INT_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U0_INT_CTRL_CLK_APB_DISABLE_DATA, CLK_U0_INT_CTRL_CLK_APB_EN_SHIFT, CLK_U0_INT_CTRL_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_INT_CTRL_CLK_APB_ 		saif_get_reg(CLK_U0_INT_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U0_INT_CTRL_CLK_APB_EN_SHIFT, CLK_U0_INT_CTRL_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_INT_CTRL_CLK_APB_(x) 		saif_set_reg(CLK_U0_INT_CTRL_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_INT_CTRL_CLK_APB_EN_SHIFT, CLK_U0_INT_CTRL_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_APB_ 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_APB_ENABLE_DATA, CLK_U0_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_APB_ 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_APB_DISABLE_DATA, CLK_U0_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CAN_CTRL_CLK_APB_ 		saif_get_reg(CLK_U0_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CAN_CTRL_CLK_APB_(x) 		saif_set_reg(CLK_U0_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_TIMER_ 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_TIMER_ENABLE_DATA, CLK_U0_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_TIMER_ 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_TIMER_DISABLE_DATA, CLK_U0_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CAN_CTRL_CLK_TIMER_ 		saif_get_reg(CLK_U0_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CAN_CTRL_CLK_TIMER_(x) 		saif_set_reg(CLK_U0_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, x, CLK_U0_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_CAN_CTRL_CLK_TIMER_(div) 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, div, CLK_U0_CAN_CTRL_CLK_TIMER_DIV_SHIFT, CLK_U0_CAN_CTRL_CLK_TIMER_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_CAN_CTRL_CLK_TIMER_ 		saif_get_reg(CLK_U0_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_TIMER_DIV_SHIFT, CLK_U0_CAN_CTRL_CLK_TIMER_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_CAN_ 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_CAN_ENABLE_DATA, CLK_U0_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_CAN_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_CAN_ 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_CAN_DISABLE_DATA, CLK_U0_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_CAN_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CAN_CTRL_CLK_CAN_ 		saif_get_reg(CLK_U0_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_CAN_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CAN_CTRL_CLK_CAN_(x) 		saif_set_reg(CLK_U0_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, x, CLK_U0_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U0_CAN_CTRL_CLK_CAN_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_CAN_CTRL_CLK_CAN_(div) 			saif_set_reg(CLK_U0_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, div, CLK_U0_CAN_CTRL_CLK_CAN_DIV_SHIFT, CLK_U0_CAN_CTRL_CLK_CAN_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_CAN_CTRL_CLK_CAN_ 		saif_get_reg(CLK_U0_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U0_CAN_CTRL_CLK_CAN_DIV_SHIFT, CLK_U0_CAN_CTRL_CLK_CAN_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_APB_ 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_APB_ENABLE_DATA, CLK_U1_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_APB_ 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_APB_DISABLE_DATA, CLK_U1_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_CAN_CTRL_CLK_APB_ 		saif_get_reg(CLK_U1_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_CAN_CTRL_CLK_APB_(x) 		saif_set_reg(CLK_U1_CAN_CTRL_CLK_APB_CTRL_REG_ADDR, x, CLK_U1_CAN_CTRL_CLK_APB_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_TIMER_ 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_TIMER_ENABLE_DATA, CLK_U1_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_TIMER_ 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_TIMER_DISABLE_DATA, CLK_U1_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_CAN_CTRL_CLK_TIMER_ 		saif_get_reg(CLK_U1_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_CAN_CTRL_CLK_TIMER_(x) 		saif_set_reg(CLK_U1_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, x, CLK_U1_CAN_CTRL_CLK_TIMER_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_TIMER_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U1_CAN_CTRL_CLK_TIMER_(div) 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, div, CLK_U1_CAN_CTRL_CLK_TIMER_DIV_SHIFT, CLK_U1_CAN_CTRL_CLK_TIMER_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U1_CAN_CTRL_CLK_TIMER_ 		saif_get_reg(CLK_U1_CAN_CTRL_CLK_TIMER_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_TIMER_DIV_SHIFT, CLK_U1_CAN_CTRL_CLK_TIMER_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_CAN_ 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_CAN_ENABLE_DATA, CLK_U1_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_CAN_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_CAN_ 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_CAN_DISABLE_DATA, CLK_U1_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_CAN_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_CAN_CTRL_CLK_CAN_ 		saif_get_reg(CLK_U1_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_CAN_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_CAN_CTRL_CLK_CAN_(x) 		saif_set_reg(CLK_U1_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, x, CLK_U1_CAN_CTRL_CLK_CAN_EN_SHIFT, CLK_U1_CAN_CTRL_CLK_CAN_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U1_CAN_CTRL_CLK_CAN_(div) 			saif_set_reg(CLK_U1_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, div, CLK_U1_CAN_CTRL_CLK_CAN_DIV_SHIFT, CLK_U1_CAN_CTRL_CLK_CAN_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U1_CAN_CTRL_CLK_CAN_ 		saif_get_reg(CLK_U1_CAN_CTRL_CLK_CAN_CTRL_REG_ADDR, CLK_U1_CAN_CTRL_CLK_CAN_DIV_SHIFT, CLK_U1_CAN_CTRL_CLK_CAN_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_PWM_8CH_CLK_APB_ 			saif_set_reg(CLK_U0_PWM_8CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_PWM_8CH_CLK_APB_ENABLE_DATA, CLK_U0_PWM_8CH_CLK_APB_EN_SHIFT, CLK_U0_PWM_8CH_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_PWM_8CH_CLK_APB_ 			saif_set_reg(CLK_U0_PWM_8CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_PWM_8CH_CLK_APB_DISABLE_DATA, CLK_U0_PWM_8CH_CLK_APB_EN_SHIFT, CLK_U0_PWM_8CH_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_PWM_8CH_CLK_APB_ 		saif_get_reg(CLK_U0_PWM_8CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_PWM_8CH_CLK_APB_EN_SHIFT, CLK_U0_PWM_8CH_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_PWM_8CH_CLK_APB_(x) 		saif_set_reg(CLK_U0_PWM_8CH_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_PWM_8CH_CLK_APB_EN_SHIFT, CLK_U0_PWM_8CH_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_APB_ 			saif_set_reg(CLK_U0_DSKIT_WDT_CLK_APB_CTRL_REG_ADDR, CLK_U0_DSKIT_WDT_CLK_APB_ENABLE_DATA, CLK_U0_DSKIT_WDT_CLK_APB_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_APB_ 			saif_set_reg(CLK_U0_DSKIT_WDT_CLK_APB_CTRL_REG_ADDR, CLK_U0_DSKIT_WDT_CLK_APB_DISABLE_DATA, CLK_U0_DSKIT_WDT_CLK_APB_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DSKIT_WDT_CLK_APB_ 		saif_get_reg(CLK_U0_DSKIT_WDT_CLK_APB_CTRL_REG_ADDR, CLK_U0_DSKIT_WDT_CLK_APB_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DSKIT_WDT_CLK_APB_(x) 		saif_set_reg(CLK_U0_DSKIT_WDT_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_DSKIT_WDT_CLK_APB_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_WDT_ 			saif_set_reg(CLK_U0_DSKIT_WDT_CLK_WDT_CTRL_REG_ADDR, CLK_U0_DSKIT_WDT_CLK_WDT_ENABLE_DATA, CLK_U0_DSKIT_WDT_CLK_WDT_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_WDT_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_WDT_ 			saif_set_reg(CLK_U0_DSKIT_WDT_CLK_WDT_CTRL_REG_ADDR, CLK_U0_DSKIT_WDT_CLK_WDT_DISABLE_DATA, CLK_U0_DSKIT_WDT_CLK_WDT_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_WDT_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DSKIT_WDT_CLK_WDT_ 		saif_get_reg(CLK_U0_DSKIT_WDT_CLK_WDT_CTRL_REG_ADDR, CLK_U0_DSKIT_WDT_CLK_WDT_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_WDT_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DSKIT_WDT_CLK_WDT_(x) 		saif_set_reg(CLK_U0_DSKIT_WDT_CLK_WDT_CTRL_REG_ADDR, x, CLK_U0_DSKIT_WDT_CLK_WDT_EN_SHIFT, CLK_U0_DSKIT_WDT_CLK_WDT_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_APB_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_APB_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_APB_ENABLE_DATA, CLK_U0_SI5_TIMER_CLK_APB_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_APB_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_APB_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_APB_DISABLE_DATA, CLK_U0_SI5_TIMER_CLK_APB_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_APB_ 		saif_get_reg(CLK_U0_SI5_TIMER_CLK_APB_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_APB_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_APB_(x) 		saif_set_reg(CLK_U0_SI5_TIMER_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_SI5_TIMER_CLK_APB_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER0_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER0_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER0_ENABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER0_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER0_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER0_DISABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER0_ 		saif_get_reg(CLK_U0_SI5_TIMER_CLK_TIMER0_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER0_(x) 		saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER0_CTRL_REG_ADDR, x, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER0_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER1_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER1_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER1_ENABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER1_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER1_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER1_DISABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER1_ 		saif_get_reg(CLK_U0_SI5_TIMER_CLK_TIMER1_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER1_(x) 		saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER1_CTRL_REG_ADDR, x, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER1_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER2_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER2_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER2_ENABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER2_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER2_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER2_DISABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER2_ 		saif_get_reg(CLK_U0_SI5_TIMER_CLK_TIMER2_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER2_(x) 		saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER2_CTRL_REG_ADDR, x, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER2_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER3_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER3_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER3_ENABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER3_ 			saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER3_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER3_DISABLE_DATA, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER3_ 		saif_get_reg(CLK_U0_SI5_TIMER_CLK_TIMER3_CTRL_REG_ADDR, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SI5_TIMER_CLK_TIMER3_(x) 		saif_set_reg(CLK_U0_SI5_TIMER_CLK_TIMER3_CTRL_REG_ADDR, x, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_SHIFT, CLK_U0_SI5_TIMER_CLK_TIMER3_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_APB_ 			saif_set_reg(CLK_U0_TEMP_SENSOR_CLK_APB_CTRL_REG_ADDR, CLK_U0_TEMP_SENSOR_CLK_APB_ENABLE_DATA, CLK_U0_TEMP_SENSOR_CLK_APB_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_APB_ 			saif_set_reg(CLK_U0_TEMP_SENSOR_CLK_APB_CTRL_REG_ADDR, CLK_U0_TEMP_SENSOR_CLK_APB_DISABLE_DATA, CLK_U0_TEMP_SENSOR_CLK_APB_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_TEMP_SENSOR_CLK_APB_ 		saif_get_reg(CLK_U0_TEMP_SENSOR_CLK_APB_CTRL_REG_ADDR, CLK_U0_TEMP_SENSOR_CLK_APB_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_TEMP_SENSOR_CLK_APB_(x) 		saif_set_reg(CLK_U0_TEMP_SENSOR_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_TEMP_SENSOR_CLK_APB_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_TEMP_ 			saif_set_reg(CLK_U0_TEMP_SENSOR_CLK_TEMP_CTRL_REG_ADDR, CLK_U0_TEMP_SENSOR_CLK_TEMP_ENABLE_DATA, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_TEMP_ 			saif_set_reg(CLK_U0_TEMP_SENSOR_CLK_TEMP_CTRL_REG_ADDR, CLK_U0_TEMP_SENSOR_CLK_TEMP_DISABLE_DATA, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_TEMP_SENSOR_CLK_TEMP_ 		saif_get_reg(CLK_U0_TEMP_SENSOR_CLK_TEMP_CTRL_REG_ADDR, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_TEMP_SENSOR_CLK_TEMP_(x) 		saif_set_reg(CLK_U0_TEMP_SENSOR_CLK_TEMP_CTRL_REG_ADDR, x, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_SHIFT, CLK_U0_TEMP_SENSOR_CLK_TEMP_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_TEMP_(div) 			saif_set_reg(CLK_U0_TEMP_SENSOR_CLK_TEMP_CTRL_REG_ADDR, div, CLK_U0_TEMP_SENSOR_CLK_TEMP_DIV_SHIFT, CLK_U0_TEMP_SENSOR_CLK_TEMP_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_TEMP_SENSOR_CLK_TEMP_ 		saif_get_reg(CLK_U0_TEMP_SENSOR_CLK_TEMP_CTRL_REG_ADDR, CLK_U0_TEMP_SENSOR_CLK_TEMP_DIV_SHIFT, CLK_U0_TEMP_SENSOR_CLK_TEMP_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U0_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U0_SSP_SPI_CLK_APB_ENABLE_DATA, CLK_U0_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U0_SSP_SPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U0_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U0_SSP_SPI_CLK_APB_DISABLE_DATA, CLK_U0_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U0_SSP_SPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_SSP_SPI_CLK_APB_ 		saif_get_reg(CLK_U0_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U0_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U0_SSP_SPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_SSP_SPI_CLK_APB_(x) 		saif_set_reg(CLK_U0_SSP_SPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U0_SSP_SPI_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U1_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U1_SSP_SPI_CLK_APB_ENABLE_DATA, CLK_U1_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U1_SSP_SPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U1_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U1_SSP_SPI_CLK_APB_DISABLE_DATA, CLK_U1_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U1_SSP_SPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_SSP_SPI_CLK_APB_ 		saif_get_reg(CLK_U1_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U1_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U1_SSP_SPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_SSP_SPI_CLK_APB_(x) 		saif_set_reg(CLK_U1_SSP_SPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U1_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U1_SSP_SPI_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U2_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U2_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U2_SSP_SPI_CLK_APB_ENABLE_DATA, CLK_U2_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U2_SSP_SPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U2_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U2_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U2_SSP_SPI_CLK_APB_DISABLE_DATA, CLK_U2_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U2_SSP_SPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U2_SSP_SPI_CLK_APB_ 		saif_get_reg(CLK_U2_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U2_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U2_SSP_SPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U2_SSP_SPI_CLK_APB_(x) 		saif_set_reg(CLK_U2_SSP_SPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U2_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U2_SSP_SPI_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U3_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U3_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U3_SSP_SPI_CLK_APB_ENABLE_DATA, CLK_U3_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U3_SSP_SPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U3_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U3_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U3_SSP_SPI_CLK_APB_DISABLE_DATA, CLK_U3_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U3_SSP_SPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U3_SSP_SPI_CLK_APB_ 		saif_get_reg(CLK_U3_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U3_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U3_SSP_SPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U3_SSP_SPI_CLK_APB_(x) 		saif_set_reg(CLK_U3_SSP_SPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U3_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U3_SSP_SPI_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U4_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U4_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U4_SSP_SPI_CLK_APB_ENABLE_DATA, CLK_U4_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U4_SSP_SPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U4_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U4_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U4_SSP_SPI_CLK_APB_DISABLE_DATA, CLK_U4_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U4_SSP_SPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U4_SSP_SPI_CLK_APB_ 		saif_get_reg(CLK_U4_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U4_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U4_SSP_SPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U4_SSP_SPI_CLK_APB_(x) 		saif_set_reg(CLK_U4_SSP_SPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U4_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U4_SSP_SPI_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U5_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U5_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U5_SSP_SPI_CLK_APB_ENABLE_DATA, CLK_U5_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U5_SSP_SPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U5_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U5_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U5_SSP_SPI_CLK_APB_DISABLE_DATA, CLK_U5_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U5_SSP_SPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U5_SSP_SPI_CLK_APB_ 		saif_get_reg(CLK_U5_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U5_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U5_SSP_SPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U5_SSP_SPI_CLK_APB_(x) 		saif_set_reg(CLK_U5_SSP_SPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U5_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U5_SSP_SPI_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U6_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U6_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U6_SSP_SPI_CLK_APB_ENABLE_DATA, CLK_U6_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U6_SSP_SPI_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U6_SSP_SPI_CLK_APB_ 			saif_set_reg(CLK_U6_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U6_SSP_SPI_CLK_APB_DISABLE_DATA, CLK_U6_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U6_SSP_SPI_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U6_SSP_SPI_CLK_APB_ 		saif_get_reg(CLK_U6_SSP_SPI_CLK_APB_CTRL_REG_ADDR, CLK_U6_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U6_SSP_SPI_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U6_SSP_SPI_CLK_APB_(x) 		saif_set_reg(CLK_U6_SSP_SPI_CLK_APB_CTRL_REG_ADDR, x, CLK_U6_SSP_SPI_CLK_APB_EN_SHIFT, CLK_U6_SSP_SPI_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U0_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U0_DW_I2C_CLK_APB_ENABLE_DATA, CLK_U0_DW_I2C_CLK_APB_EN_SHIFT, CLK_U0_DW_I2C_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U0_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U0_DW_I2C_CLK_APB_DISABLE_DATA, CLK_U0_DW_I2C_CLK_APB_EN_SHIFT, CLK_U0_DW_I2C_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_I2C_CLK_APB_ 		saif_get_reg(CLK_U0_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U0_DW_I2C_CLK_APB_EN_SHIFT, CLK_U0_DW_I2C_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_I2C_CLK_APB_(x) 		saif_set_reg(CLK_U0_DW_I2C_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_DW_I2C_CLK_APB_EN_SHIFT, CLK_U0_DW_I2C_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U1_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U1_DW_I2C_CLK_APB_ENABLE_DATA, CLK_U1_DW_I2C_CLK_APB_EN_SHIFT, CLK_U1_DW_I2C_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U1_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U1_DW_I2C_CLK_APB_DISABLE_DATA, CLK_U1_DW_I2C_CLK_APB_EN_SHIFT, CLK_U1_DW_I2C_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_I2C_CLK_APB_ 		saif_get_reg(CLK_U1_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U1_DW_I2C_CLK_APB_EN_SHIFT, CLK_U1_DW_I2C_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_I2C_CLK_APB_(x) 		saif_set_reg(CLK_U1_DW_I2C_CLK_APB_CTRL_REG_ADDR, x, CLK_U1_DW_I2C_CLK_APB_EN_SHIFT, CLK_U1_DW_I2C_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U2_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U2_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U2_DW_I2C_CLK_APB_ENABLE_DATA, CLK_U2_DW_I2C_CLK_APB_EN_SHIFT, CLK_U2_DW_I2C_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U2_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U2_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U2_DW_I2C_CLK_APB_DISABLE_DATA, CLK_U2_DW_I2C_CLK_APB_EN_SHIFT, CLK_U2_DW_I2C_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U2_DW_I2C_CLK_APB_ 		saif_get_reg(CLK_U2_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U2_DW_I2C_CLK_APB_EN_SHIFT, CLK_U2_DW_I2C_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U2_DW_I2C_CLK_APB_(x) 		saif_set_reg(CLK_U2_DW_I2C_CLK_APB_CTRL_REG_ADDR, x, CLK_U2_DW_I2C_CLK_APB_EN_SHIFT, CLK_U2_DW_I2C_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U3_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U3_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U3_DW_I2C_CLK_APB_ENABLE_DATA, CLK_U3_DW_I2C_CLK_APB_EN_SHIFT, CLK_U3_DW_I2C_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U3_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U3_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U3_DW_I2C_CLK_APB_DISABLE_DATA, CLK_U3_DW_I2C_CLK_APB_EN_SHIFT, CLK_U3_DW_I2C_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U3_DW_I2C_CLK_APB_ 		saif_get_reg(CLK_U3_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U3_DW_I2C_CLK_APB_EN_SHIFT, CLK_U3_DW_I2C_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U3_DW_I2C_CLK_APB_(x) 		saif_set_reg(CLK_U3_DW_I2C_CLK_APB_CTRL_REG_ADDR, x, CLK_U3_DW_I2C_CLK_APB_EN_SHIFT, CLK_U3_DW_I2C_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U4_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U4_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U4_DW_I2C_CLK_APB_ENABLE_DATA, CLK_U4_DW_I2C_CLK_APB_EN_SHIFT, CLK_U4_DW_I2C_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U4_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U4_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U4_DW_I2C_CLK_APB_DISABLE_DATA, CLK_U4_DW_I2C_CLK_APB_EN_SHIFT, CLK_U4_DW_I2C_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U4_DW_I2C_CLK_APB_ 		saif_get_reg(CLK_U4_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U4_DW_I2C_CLK_APB_EN_SHIFT, CLK_U4_DW_I2C_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U4_DW_I2C_CLK_APB_(x) 		saif_set_reg(CLK_U4_DW_I2C_CLK_APB_CTRL_REG_ADDR, x, CLK_U4_DW_I2C_CLK_APB_EN_SHIFT, CLK_U4_DW_I2C_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U5_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U5_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U5_DW_I2C_CLK_APB_ENABLE_DATA, CLK_U5_DW_I2C_CLK_APB_EN_SHIFT, CLK_U5_DW_I2C_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U5_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U5_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U5_DW_I2C_CLK_APB_DISABLE_DATA, CLK_U5_DW_I2C_CLK_APB_EN_SHIFT, CLK_U5_DW_I2C_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U5_DW_I2C_CLK_APB_ 		saif_get_reg(CLK_U5_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U5_DW_I2C_CLK_APB_EN_SHIFT, CLK_U5_DW_I2C_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U5_DW_I2C_CLK_APB_(x) 		saif_set_reg(CLK_U5_DW_I2C_CLK_APB_CTRL_REG_ADDR, x, CLK_U5_DW_I2C_CLK_APB_EN_SHIFT, CLK_U5_DW_I2C_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U6_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U6_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U6_DW_I2C_CLK_APB_ENABLE_DATA, CLK_U6_DW_I2C_CLK_APB_EN_SHIFT, CLK_U6_DW_I2C_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U6_DW_I2C_CLK_APB_ 			saif_set_reg(CLK_U6_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U6_DW_I2C_CLK_APB_DISABLE_DATA, CLK_U6_DW_I2C_CLK_APB_EN_SHIFT, CLK_U6_DW_I2C_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U6_DW_I2C_CLK_APB_ 		saif_get_reg(CLK_U6_DW_I2C_CLK_APB_CTRL_REG_ADDR, CLK_U6_DW_I2C_CLK_APB_EN_SHIFT, CLK_U6_DW_I2C_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U6_DW_I2C_CLK_APB_(x) 		saif_set_reg(CLK_U6_DW_I2C_CLK_APB_CTRL_REG_ADDR, x, CLK_U6_DW_I2C_CLK_APB_EN_SHIFT, CLK_U6_DW_I2C_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U0_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U0_DW_UART_CLK_APB_ENABLE_DATA, CLK_U0_DW_UART_CLK_APB_EN_SHIFT, CLK_U0_DW_UART_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U0_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U0_DW_UART_CLK_APB_DISABLE_DATA, CLK_U0_DW_UART_CLK_APB_EN_SHIFT, CLK_U0_DW_UART_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_UART_CLK_APB_ 		saif_get_reg(CLK_U0_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U0_DW_UART_CLK_APB_EN_SHIFT, CLK_U0_DW_UART_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_UART_CLK_APB_(x) 		saif_set_reg(CLK_U0_DW_UART_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_DW_UART_CLK_APB_EN_SHIFT, CLK_U0_DW_UART_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U0_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U0_DW_UART_CLK_CORE_ENABLE_DATA, CLK_U0_DW_UART_CLK_CORE_EN_SHIFT, CLK_U0_DW_UART_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U0_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U0_DW_UART_CLK_CORE_DISABLE_DATA, CLK_U0_DW_UART_CLK_CORE_EN_SHIFT, CLK_U0_DW_UART_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U0_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U0_DW_UART_CLK_CORE_EN_SHIFT, CLK_U0_DW_UART_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_DW_UART_CLK_CORE_(x) 		saif_set_reg(CLK_U0_DW_UART_CLK_CORE_CTRL_REG_ADDR, x, CLK_U0_DW_UART_CLK_CORE_EN_SHIFT, CLK_U0_DW_UART_CLK_CORE_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U1_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U1_DW_UART_CLK_APB_ENABLE_DATA, CLK_U1_DW_UART_CLK_APB_EN_SHIFT, CLK_U1_DW_UART_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U1_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U1_DW_UART_CLK_APB_DISABLE_DATA, CLK_U1_DW_UART_CLK_APB_EN_SHIFT, CLK_U1_DW_UART_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_UART_CLK_APB_ 		saif_get_reg(CLK_U1_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U1_DW_UART_CLK_APB_EN_SHIFT, CLK_U1_DW_UART_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_UART_CLK_APB_(x) 		saif_set_reg(CLK_U1_DW_UART_CLK_APB_CTRL_REG_ADDR, x, CLK_U1_DW_UART_CLK_APB_EN_SHIFT, CLK_U1_DW_UART_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U1_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U1_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U1_DW_UART_CLK_CORE_ENABLE_DATA, CLK_U1_DW_UART_CLK_CORE_EN_SHIFT, CLK_U1_DW_UART_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U1_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U1_DW_UART_CLK_CORE_DISABLE_DATA, CLK_U1_DW_UART_CLK_CORE_EN_SHIFT, CLK_U1_DW_UART_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U1_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U1_DW_UART_CLK_CORE_EN_SHIFT, CLK_U1_DW_UART_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_DW_UART_CLK_CORE_(x) 		saif_set_reg(CLK_U1_DW_UART_CLK_CORE_CTRL_REG_ADDR, x, CLK_U1_DW_UART_CLK_CORE_EN_SHIFT, CLK_U1_DW_UART_CLK_CORE_EN_MASK)
#define _ENABLE_CLOCK_CLK_U2_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U2_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U2_DW_UART_CLK_APB_ENABLE_DATA, CLK_U2_DW_UART_CLK_APB_EN_SHIFT, CLK_U2_DW_UART_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U2_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U2_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U2_DW_UART_CLK_APB_DISABLE_DATA, CLK_U2_DW_UART_CLK_APB_EN_SHIFT, CLK_U2_DW_UART_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U2_DW_UART_CLK_APB_ 		saif_get_reg(CLK_U2_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U2_DW_UART_CLK_APB_EN_SHIFT, CLK_U2_DW_UART_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U2_DW_UART_CLK_APB_(x) 		saif_set_reg(CLK_U2_DW_UART_CLK_APB_CTRL_REG_ADDR, x, CLK_U2_DW_UART_CLK_APB_EN_SHIFT, CLK_U2_DW_UART_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U2_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U2_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U2_DW_UART_CLK_CORE_ENABLE_DATA, CLK_U2_DW_UART_CLK_CORE_EN_SHIFT, CLK_U2_DW_UART_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U2_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U2_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U2_DW_UART_CLK_CORE_DISABLE_DATA, CLK_U2_DW_UART_CLK_CORE_EN_SHIFT, CLK_U2_DW_UART_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U2_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U2_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U2_DW_UART_CLK_CORE_EN_SHIFT, CLK_U2_DW_UART_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U2_DW_UART_CLK_CORE_(x) 		saif_set_reg(CLK_U2_DW_UART_CLK_CORE_CTRL_REG_ADDR, x, CLK_U2_DW_UART_CLK_CORE_EN_SHIFT, CLK_U2_DW_UART_CLK_CORE_EN_MASK)
#define _ENABLE_CLOCK_CLK_U3_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U3_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U3_DW_UART_CLK_APB_ENABLE_DATA, CLK_U3_DW_UART_CLK_APB_EN_SHIFT, CLK_U3_DW_UART_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U3_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U3_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U3_DW_UART_CLK_APB_DISABLE_DATA, CLK_U3_DW_UART_CLK_APB_EN_SHIFT, CLK_U3_DW_UART_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U3_DW_UART_CLK_APB_ 		saif_get_reg(CLK_U3_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U3_DW_UART_CLK_APB_EN_SHIFT, CLK_U3_DW_UART_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U3_DW_UART_CLK_APB_(x) 		saif_set_reg(CLK_U3_DW_UART_CLK_APB_CTRL_REG_ADDR, x, CLK_U3_DW_UART_CLK_APB_EN_SHIFT, CLK_U3_DW_UART_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U3_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U3_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U3_DW_UART_CLK_CORE_ENABLE_DATA, CLK_U3_DW_UART_CLK_CORE_EN_SHIFT, CLK_U3_DW_UART_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U3_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U3_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U3_DW_UART_CLK_CORE_DISABLE_DATA, CLK_U3_DW_UART_CLK_CORE_EN_SHIFT, CLK_U3_DW_UART_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U3_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U3_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U3_DW_UART_CLK_CORE_EN_SHIFT, CLK_U3_DW_UART_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U3_DW_UART_CLK_CORE_(x) 		saif_set_reg(CLK_U3_DW_UART_CLK_CORE_CTRL_REG_ADDR, x, CLK_U3_DW_UART_CLK_CORE_EN_SHIFT, CLK_U3_DW_UART_CLK_CORE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U3_DW_UART_CLK_CORE_(div) 			saif_set_reg(CLK_U3_DW_UART_CLK_CORE_CTRL_REG_ADDR, div, CLK_U3_DW_UART_CLK_CORE_DIV_SHIFT, CLK_U3_DW_UART_CLK_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U3_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U3_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U3_DW_UART_CLK_CORE_DIV_SHIFT, CLK_U3_DW_UART_CLK_CORE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U4_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U4_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U4_DW_UART_CLK_APB_ENABLE_DATA, CLK_U4_DW_UART_CLK_APB_EN_SHIFT, CLK_U4_DW_UART_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U4_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U4_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U4_DW_UART_CLK_APB_DISABLE_DATA, CLK_U4_DW_UART_CLK_APB_EN_SHIFT, CLK_U4_DW_UART_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U4_DW_UART_CLK_APB_ 		saif_get_reg(CLK_U4_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U4_DW_UART_CLK_APB_EN_SHIFT, CLK_U4_DW_UART_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U4_DW_UART_CLK_APB_(x) 		saif_set_reg(CLK_U4_DW_UART_CLK_APB_CTRL_REG_ADDR, x, CLK_U4_DW_UART_CLK_APB_EN_SHIFT, CLK_U4_DW_UART_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U4_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U4_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U4_DW_UART_CLK_CORE_ENABLE_DATA, CLK_U4_DW_UART_CLK_CORE_EN_SHIFT, CLK_U4_DW_UART_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U4_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U4_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U4_DW_UART_CLK_CORE_DISABLE_DATA, CLK_U4_DW_UART_CLK_CORE_EN_SHIFT, CLK_U4_DW_UART_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U4_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U4_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U4_DW_UART_CLK_CORE_EN_SHIFT, CLK_U4_DW_UART_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U4_DW_UART_CLK_CORE_(x) 		saif_set_reg(CLK_U4_DW_UART_CLK_CORE_CTRL_REG_ADDR, x, CLK_U4_DW_UART_CLK_CORE_EN_SHIFT, CLK_U4_DW_UART_CLK_CORE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U4_DW_UART_CLK_CORE_(div) 			saif_set_reg(CLK_U4_DW_UART_CLK_CORE_CTRL_REG_ADDR, div, CLK_U4_DW_UART_CLK_CORE_DIV_SHIFT, CLK_U4_DW_UART_CLK_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U4_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U4_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U4_DW_UART_CLK_CORE_DIV_SHIFT, CLK_U4_DW_UART_CLK_CORE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U5_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U5_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U5_DW_UART_CLK_APB_ENABLE_DATA, CLK_U5_DW_UART_CLK_APB_EN_SHIFT, CLK_U5_DW_UART_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U5_DW_UART_CLK_APB_ 			saif_set_reg(CLK_U5_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U5_DW_UART_CLK_APB_DISABLE_DATA, CLK_U5_DW_UART_CLK_APB_EN_SHIFT, CLK_U5_DW_UART_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U5_DW_UART_CLK_APB_ 		saif_get_reg(CLK_U5_DW_UART_CLK_APB_CTRL_REG_ADDR, CLK_U5_DW_UART_CLK_APB_EN_SHIFT, CLK_U5_DW_UART_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U5_DW_UART_CLK_APB_(x) 		saif_set_reg(CLK_U5_DW_UART_CLK_APB_CTRL_REG_ADDR, x, CLK_U5_DW_UART_CLK_APB_EN_SHIFT, CLK_U5_DW_UART_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U5_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U5_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U5_DW_UART_CLK_CORE_ENABLE_DATA, CLK_U5_DW_UART_CLK_CORE_EN_SHIFT, CLK_U5_DW_UART_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U5_DW_UART_CLK_CORE_ 			saif_set_reg(CLK_U5_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U5_DW_UART_CLK_CORE_DISABLE_DATA, CLK_U5_DW_UART_CLK_CORE_EN_SHIFT, CLK_U5_DW_UART_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U5_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U5_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U5_DW_UART_CLK_CORE_EN_SHIFT, CLK_U5_DW_UART_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U5_DW_UART_CLK_CORE_(x) 		saif_set_reg(CLK_U5_DW_UART_CLK_CORE_CTRL_REG_ADDR, x, CLK_U5_DW_UART_CLK_CORE_EN_SHIFT, CLK_U5_DW_UART_CLK_CORE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U5_DW_UART_CLK_CORE_(div) 			saif_set_reg(CLK_U5_DW_UART_CLK_CORE_CTRL_REG_ADDR, div, CLK_U5_DW_UART_CLK_CORE_DIV_SHIFT, CLK_U5_DW_UART_CLK_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U5_DW_UART_CLK_CORE_ 		saif_get_reg(CLK_U5_DW_UART_CLK_CORE_CTRL_REG_ADDR, CLK_U5_DW_UART_CLK_CORE_DIV_SHIFT, CLK_U5_DW_UART_CLK_CORE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_PWMDAC_CLK_APB_ 			saif_set_reg(CLK_U0_PWMDAC_CLK_APB_CTRL_REG_ADDR, CLK_U0_PWMDAC_CLK_APB_ENABLE_DATA, CLK_U0_PWMDAC_CLK_APB_EN_SHIFT, CLK_U0_PWMDAC_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_PWMDAC_CLK_APB_ 			saif_set_reg(CLK_U0_PWMDAC_CLK_APB_CTRL_REG_ADDR, CLK_U0_PWMDAC_CLK_APB_DISABLE_DATA, CLK_U0_PWMDAC_CLK_APB_EN_SHIFT, CLK_U0_PWMDAC_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_PWMDAC_CLK_APB_ 		saif_get_reg(CLK_U0_PWMDAC_CLK_APB_CTRL_REG_ADDR, CLK_U0_PWMDAC_CLK_APB_EN_SHIFT, CLK_U0_PWMDAC_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_PWMDAC_CLK_APB_(x) 		saif_set_reg(CLK_U0_PWMDAC_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_PWMDAC_CLK_APB_EN_SHIFT, CLK_U0_PWMDAC_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_PWMDAC_CLK_CORE_ 			saif_set_reg(CLK_U0_PWMDAC_CLK_CORE_CTRL_REG_ADDR, CLK_U0_PWMDAC_CLK_CORE_ENABLE_DATA, CLK_U0_PWMDAC_CLK_CORE_EN_SHIFT, CLK_U0_PWMDAC_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_PWMDAC_CLK_CORE_ 			saif_set_reg(CLK_U0_PWMDAC_CLK_CORE_CTRL_REG_ADDR, CLK_U0_PWMDAC_CLK_CORE_DISABLE_DATA, CLK_U0_PWMDAC_CLK_CORE_EN_SHIFT, CLK_U0_PWMDAC_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_PWMDAC_CLK_CORE_ 		saif_get_reg(CLK_U0_PWMDAC_CLK_CORE_CTRL_REG_ADDR, CLK_U0_PWMDAC_CLK_CORE_EN_SHIFT, CLK_U0_PWMDAC_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_PWMDAC_CLK_CORE_(x) 		saif_set_reg(CLK_U0_PWMDAC_CLK_CORE_CTRL_REG_ADDR, x, CLK_U0_PWMDAC_CLK_CORE_EN_SHIFT, CLK_U0_PWMDAC_CLK_CORE_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_PWMDAC_CLK_CORE_(div) 			saif_set_reg(CLK_U0_PWMDAC_CLK_CORE_CTRL_REG_ADDR, div, CLK_U0_PWMDAC_CLK_CORE_DIV_SHIFT, CLK_U0_PWMDAC_CLK_CORE_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_PWMDAC_CLK_CORE_ 		saif_get_reg(CLK_U0_PWMDAC_CLK_CORE_CTRL_REG_ADDR, CLK_U0_PWMDAC_CLK_CORE_DIV_SHIFT, CLK_U0_PWMDAC_CLK_CORE_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_APB_ 			saif_set_reg(CLK_U0_CDNS_SPDIF_CLK_APB_CTRL_REG_ADDR, CLK_U0_CDNS_SPDIF_CLK_APB_ENABLE_DATA, CLK_U0_CDNS_SPDIF_CLK_APB_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_APB_ 			saif_set_reg(CLK_U0_CDNS_SPDIF_CLK_APB_CTRL_REG_ADDR, CLK_U0_CDNS_SPDIF_CLK_APB_DISABLE_DATA, CLK_U0_CDNS_SPDIF_CLK_APB_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_SPDIF_CLK_APB_ 		saif_get_reg(CLK_U0_CDNS_SPDIF_CLK_APB_CTRL_REG_ADDR, CLK_U0_CDNS_SPDIF_CLK_APB_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_SPDIF_CLK_APB_(x) 		saif_set_reg(CLK_U0_CDNS_SPDIF_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_CDNS_SPDIF_CLK_APB_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_CORE_ 			saif_set_reg(CLK_U0_CDNS_SPDIF_CLK_CORE_CTRL_REG_ADDR, CLK_U0_CDNS_SPDIF_CLK_CORE_ENABLE_DATA, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_CORE_ 			saif_set_reg(CLK_U0_CDNS_SPDIF_CLK_CORE_CTRL_REG_ADDR, CLK_U0_CDNS_SPDIF_CLK_CORE_DISABLE_DATA, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_SPDIF_CLK_CORE_ 		saif_get_reg(CLK_U0_CDNS_SPDIF_CLK_CORE_CTRL_REG_ADDR, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_CDNS_SPDIF_CLK_CORE_(x) 		saif_set_reg(CLK_U0_CDNS_SPDIF_CLK_CORE_CTRL_REG_ADDR, x, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_SHIFT, CLK_U0_CDNS_SPDIF_CLK_CORE_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_I2STX_4CH_CLK_APB_ 			saif_set_reg(CLK_U0_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_CLK_APB_ENABLE_DATA, CLK_U0_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U0_I2STX_4CH_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_I2STX_4CH_CLK_APB_ 			saif_set_reg(CLK_U0_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_CLK_APB_DISABLE_DATA, CLK_U0_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U0_I2STX_4CH_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_I2STX_4CH_CLK_APB_ 		saif_get_reg(CLK_U0_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U0_I2STX_4CH_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_I2STX_4CH_CLK_APB_(x) 		saif_set_reg(CLK_U0_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U0_I2STX_4CH_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_ 			saif_set_reg(CLK_I2STX_4CH0_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_BCLK_MST_ENABLE_DATA, CLK_I2STX_4CH0_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH0_BCLK_MST_EN_MASK)
#define _DISABLE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_ 			saif_set_reg(CLK_I2STX_4CH0_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_BCLK_MST_DISABLE_DATA, CLK_I2STX_4CH0_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH0_BCLK_MST_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_I2STX_4CH0_BCLK_MST_ 		saif_get_reg(CLK_I2STX_4CH0_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH0_BCLK_MST_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_I2STX_4CH0_BCLK_MST_(x) 		saif_set_reg(CLK_I2STX_4CH0_BCLK_MST_CTRL_REG_ADDR, x, CLK_I2STX_4CH0_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH0_BCLK_MST_EN_MASK)
#define _DIVIDE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_(div) 			saif_set_reg(CLK_I2STX_4CH0_BCLK_MST_CTRL_REG_ADDR, div, CLK_I2STX_4CH0_BCLK_MST_DIV_SHIFT, CLK_I2STX_4CH0_BCLK_MST_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_I2STX_4CH0_BCLK_MST_ 		saif_get_reg(CLK_I2STX_4CH0_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_BCLK_MST_DIV_SHIFT, CLK_I2STX_4CH0_BCLK_MST_DIV_MASK)
#define _SET_CLOCK_CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_ 		saif_set_reg(CLK_I2STX_4CH0_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_DATA, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_ 		saif_set_reg(CLK_I2STX_4CH0_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2STX_4CH0_BCLK_MST_INV_UN_POLARITY_DATA, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_I2STX_4CH0_BCLK_MST_INV_ 		saif_get_reg(CLK_I2STX_4CH0_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_I2STX_4CH0_BCLK_MST_INV_(x) 		saif_set_reg(CLK_I2STX_4CH0_BCLK_MST_INV_CTRL_REG_ADDR, x, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH0_BCLK_MST_INV_POLARITY_MASK)
#define _SWITCH_CLOCK_CLK_I2STX_4CH0_LRCK_MST_SOURCE_CLK_I2STX_4CH0_BCLK_MST_INV_ 	saif_set_reg(CLK_I2STX_4CH0_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_LRCK_MST_SW_CLK_I2STX_4CH0_BCLK_MST_INV_DATA, CLK_I2STX_4CH0_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH0_LRCK_MST_SW_MASK)
#define _SWITCH_CLOCK_CLK_I2STX_4CH0_LRCK_MST_SOURCE_CLK_I2STX_4CH0_BCLK_MST_ 	saif_set_reg(CLK_I2STX_4CH0_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_LRCK_MST_SW_CLK_I2STX_4CH0_BCLK_MST_DATA, CLK_I2STX_4CH0_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH0_LRCK_MST_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_I2STX_4CH0_LRCK_MST_ 		saif_get_reg(CLK_I2STX_4CH0_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH0_LRCK_MST_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_I2STX_4CH0_LRCK_MST_(x) 		saif_set_reg(CLK_I2STX_4CH0_LRCK_MST_CTRL_REG_ADDR, x, CLK_I2STX_4CH0_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH0_LRCK_MST_SW_MASK)
#define _DIVIDE_CLOCK_CLK_I2STX_4CH0_LRCK_MST_(div) 			saif_set_reg(CLK_I2STX_4CH0_LRCK_MST_CTRL_REG_ADDR, div, CLK_I2STX_4CH0_LRCK_MST_DIV_SHIFT, CLK_I2STX_4CH0_LRCK_MST_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_I2STX_4CH0_LRCK_MST_ 		saif_get_reg(CLK_I2STX_4CH0_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH0_LRCK_MST_DIV_SHIFT, CLK_I2STX_4CH0_LRCK_MST_DIV_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2STX_4CH_BCLK_SOURCE_CLK_I2STX_4CH0_BCLK_MST_ 	saif_set_reg(CLK_U0_I2STX_4CH_BCLK_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_BCLK_SW_CLK_I2STX_4CH0_BCLK_MST_DATA, CLK_U0_I2STX_4CH_BCLK_SW_SHIFT, CLK_U0_I2STX_4CH_BCLK_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2STX_4CH_BCLK_SOURCE_CLK_I2STX_BCLK_EXT_ 	saif_set_reg(CLK_U0_I2STX_4CH_BCLK_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_BCLK_SW_CLK_I2STX_BCLK_EXT_DATA, CLK_U0_I2STX_4CH_BCLK_SW_SHIFT, CLK_U0_I2STX_4CH_BCLK_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_I2STX_4CH_BCLK_ 		saif_get_reg(CLK_U0_I2STX_4CH_BCLK_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_BCLK_SW_SHIFT, CLK_U0_I2STX_4CH_BCLK_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_I2STX_4CH_BCLK_(x) 		saif_set_reg(CLK_U0_I2STX_4CH_BCLK_CTRL_REG_ADDR, x, CLK_U0_I2STX_4CH_BCLK_SW_SHIFT, CLK_U0_I2STX_4CH_BCLK_SW_MASK)
#define _SET_CLOCK_CLK_U0_I2STX_4CH_BCLK_N_POLARITY_ 		saif_set_reg(CLK_U0_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_DATA, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U0_I2STX_4CH_BCLK_N_POLARITY_ 		saif_set_reg(CLK_U0_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_BCLK_N_UN_POLARITY_DATA, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U0_I2STX_4CH_BCLK_N_ 		saif_get_reg(CLK_U0_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U0_I2STX_4CH_BCLK_N_(x) 		saif_set_reg(CLK_U0_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, x, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2STX_4CH_LRCK_SOURCE_CLK_I2STX_4CH0_LRCK_MST_ 	saif_set_reg(CLK_U0_I2STX_4CH_LRCK_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_LRCK_SW_CLK_I2STX_4CH0_LRCK_MST_DATA, CLK_U0_I2STX_4CH_LRCK_SW_SHIFT, CLK_U0_I2STX_4CH_LRCK_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2STX_4CH_LRCK_SOURCE_CLK_I2STX_LRCK_EXT_ 	saif_set_reg(CLK_U0_I2STX_4CH_LRCK_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_LRCK_SW_CLK_I2STX_LRCK_EXT_DATA, CLK_U0_I2STX_4CH_LRCK_SW_SHIFT, CLK_U0_I2STX_4CH_LRCK_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_I2STX_4CH_LRCK_ 		saif_get_reg(CLK_U0_I2STX_4CH_LRCK_CTRL_REG_ADDR, CLK_U0_I2STX_4CH_LRCK_SW_SHIFT, CLK_U0_I2STX_4CH_LRCK_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_I2STX_4CH_LRCK_(x) 		saif_set_reg(CLK_U0_I2STX_4CH_LRCK_CTRL_REG_ADDR, x, CLK_U0_I2STX_4CH_LRCK_SW_SHIFT, CLK_U0_I2STX_4CH_LRCK_SW_MASK)
#define _ENABLE_CLOCK_CLK_U1_I2STX_4CH_CLK_APB_ 			saif_set_reg(CLK_U1_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_CLK_APB_ENABLE_DATA, CLK_U1_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U1_I2STX_4CH_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U1_I2STX_4CH_CLK_APB_ 			saif_set_reg(CLK_U1_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_CLK_APB_DISABLE_DATA, CLK_U1_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U1_I2STX_4CH_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U1_I2STX_4CH_CLK_APB_ 		saif_get_reg(CLK_U1_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U1_I2STX_4CH_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U1_I2STX_4CH_CLK_APB_(x) 		saif_set_reg(CLK_U1_I2STX_4CH_CLK_APB_CTRL_REG_ADDR, x, CLK_U1_I2STX_4CH_CLK_APB_EN_SHIFT, CLK_U1_I2STX_4CH_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_I2STX_4CH1_BCLK_MST_ 			saif_set_reg(CLK_I2STX_4CH1_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_BCLK_MST_ENABLE_DATA, CLK_I2STX_4CH1_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH1_BCLK_MST_EN_MASK)
#define _DISABLE_CLOCK_CLK_I2STX_4CH1_BCLK_MST_ 			saif_set_reg(CLK_I2STX_4CH1_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_BCLK_MST_DISABLE_DATA, CLK_I2STX_4CH1_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH1_BCLK_MST_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_I2STX_4CH1_BCLK_MST_ 		saif_get_reg(CLK_I2STX_4CH1_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH1_BCLK_MST_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_I2STX_4CH1_BCLK_MST_(x) 		saif_set_reg(CLK_I2STX_4CH1_BCLK_MST_CTRL_REG_ADDR, x, CLK_I2STX_4CH1_BCLK_MST_EN_SHIFT, CLK_I2STX_4CH1_BCLK_MST_EN_MASK)
#define _DIVIDE_CLOCK_CLK_I2STX_4CH1_BCLK_MST_(div) 			saif_set_reg(CLK_I2STX_4CH1_BCLK_MST_CTRL_REG_ADDR, div, CLK_I2STX_4CH1_BCLK_MST_DIV_SHIFT, CLK_I2STX_4CH1_BCLK_MST_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_I2STX_4CH1_BCLK_MST_ 		saif_get_reg(CLK_I2STX_4CH1_BCLK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_BCLK_MST_DIV_SHIFT, CLK_I2STX_4CH1_BCLK_MST_DIV_MASK)
#define _SET_CLOCK_CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_ 		saif_set_reg(CLK_I2STX_4CH1_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_DATA, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_ 		saif_set_reg(CLK_I2STX_4CH1_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2STX_4CH1_BCLK_MST_INV_UN_POLARITY_DATA, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_I2STX_4CH1_BCLK_MST_INV_ 		saif_get_reg(CLK_I2STX_4CH1_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_I2STX_4CH1_BCLK_MST_INV_(x) 		saif_set_reg(CLK_I2STX_4CH1_BCLK_MST_INV_CTRL_REG_ADDR, x, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2STX_4CH1_BCLK_MST_INV_POLARITY_MASK)
#define _SWITCH_CLOCK_CLK_I2STX_4CH1_LRCK_MST_SOURCE_CLK_I2STX_4CH1_BCLK_MST_INV_ 	saif_set_reg(CLK_I2STX_4CH1_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_LRCK_MST_SW_CLK_I2STX_4CH1_BCLK_MST_INV_DATA, CLK_I2STX_4CH1_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH1_LRCK_MST_SW_MASK)
#define _SWITCH_CLOCK_CLK_I2STX_4CH1_LRCK_MST_SOURCE_CLK_I2STX_4CH1_BCLK_MST_ 	saif_set_reg(CLK_I2STX_4CH1_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_LRCK_MST_SW_CLK_I2STX_4CH1_BCLK_MST_DATA, CLK_I2STX_4CH1_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH1_LRCK_MST_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_I2STX_4CH1_LRCK_MST_ 		saif_get_reg(CLK_I2STX_4CH1_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH1_LRCK_MST_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_I2STX_4CH1_LRCK_MST_(x) 		saif_set_reg(CLK_I2STX_4CH1_LRCK_MST_CTRL_REG_ADDR, x, CLK_I2STX_4CH1_LRCK_MST_SW_SHIFT, CLK_I2STX_4CH1_LRCK_MST_SW_MASK)
#define _DIVIDE_CLOCK_CLK_I2STX_4CH1_LRCK_MST_(div) 			saif_set_reg(CLK_I2STX_4CH1_LRCK_MST_CTRL_REG_ADDR, div, CLK_I2STX_4CH1_LRCK_MST_DIV_SHIFT, CLK_I2STX_4CH1_LRCK_MST_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_I2STX_4CH1_LRCK_MST_ 		saif_get_reg(CLK_I2STX_4CH1_LRCK_MST_CTRL_REG_ADDR, CLK_I2STX_4CH1_LRCK_MST_DIV_SHIFT, CLK_I2STX_4CH1_LRCK_MST_DIV_MASK)
#define _SWITCH_CLOCK_CLK_U1_I2STX_4CH_BCLK_SOURCE_CLK_I2STX_4CH1_BCLK_MST_ 	saif_set_reg(CLK_U1_I2STX_4CH_BCLK_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_BCLK_SW_CLK_I2STX_4CH1_BCLK_MST_DATA, CLK_U1_I2STX_4CH_BCLK_SW_SHIFT, CLK_U1_I2STX_4CH_BCLK_SW_MASK)
#define _SWITCH_CLOCK_CLK_U1_I2STX_4CH_BCLK_SOURCE_CLK_I2STX_BCLK_EXT_ 	saif_set_reg(CLK_U1_I2STX_4CH_BCLK_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_BCLK_SW_CLK_I2STX_BCLK_EXT_DATA, CLK_U1_I2STX_4CH_BCLK_SW_SHIFT, CLK_U1_I2STX_4CH_BCLK_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U1_I2STX_4CH_BCLK_ 		saif_get_reg(CLK_U1_I2STX_4CH_BCLK_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_BCLK_SW_SHIFT, CLK_U1_I2STX_4CH_BCLK_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U1_I2STX_4CH_BCLK_(x) 		saif_set_reg(CLK_U1_I2STX_4CH_BCLK_CTRL_REG_ADDR, x, CLK_U1_I2STX_4CH_BCLK_SW_SHIFT, CLK_U1_I2STX_4CH_BCLK_SW_MASK)
#define _SET_CLOCK_CLK_U1_I2STX_4CH_BCLK_N_POLARITY_ 		saif_set_reg(CLK_U1_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_DATA, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U1_I2STX_4CH_BCLK_N_POLARITY_ 		saif_set_reg(CLK_U1_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_BCLK_N_UN_POLARITY_DATA, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U1_I2STX_4CH_BCLK_N_ 		saif_get_reg(CLK_U1_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U1_I2STX_4CH_BCLK_N_(x) 		saif_set_reg(CLK_U1_I2STX_4CH_BCLK_N_CTRL_REG_ADDR, x, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_SHIFT, CLK_U1_I2STX_4CH_BCLK_N_POLARITY_MASK)
#define _SWITCH_CLOCK_CLK_U1_I2STX_4CH_LRCK_SOURCE_CLK_I2STX_4CH1_LRCK_MST_ 	saif_set_reg(CLK_U1_I2STX_4CH_LRCK_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_LRCK_SW_CLK_I2STX_4CH1_LRCK_MST_DATA, CLK_U1_I2STX_4CH_LRCK_SW_SHIFT, CLK_U1_I2STX_4CH_LRCK_SW_MASK)
#define _SWITCH_CLOCK_CLK_U1_I2STX_4CH_LRCK_SOURCE_CLK_I2STX_LRCK_EXT_ 	saif_set_reg(CLK_U1_I2STX_4CH_LRCK_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_LRCK_SW_CLK_I2STX_LRCK_EXT_DATA, CLK_U1_I2STX_4CH_LRCK_SW_SHIFT, CLK_U1_I2STX_4CH_LRCK_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U1_I2STX_4CH_LRCK_ 		saif_get_reg(CLK_U1_I2STX_4CH_LRCK_CTRL_REG_ADDR, CLK_U1_I2STX_4CH_LRCK_SW_SHIFT, CLK_U1_I2STX_4CH_LRCK_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U1_I2STX_4CH_LRCK_(x) 		saif_set_reg(CLK_U1_I2STX_4CH_LRCK_CTRL_REG_ADDR, x, CLK_U1_I2STX_4CH_LRCK_SW_SHIFT, CLK_U1_I2STX_4CH_LRCK_SW_MASK)
#define _ENABLE_CLOCK_CLK_U0_I2SRX_3CH_CLK_APB_ 			saif_set_reg(CLK_U0_I2SRX_3CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_CLK_APB_ENABLE_DATA, CLK_U0_I2SRX_3CH_CLK_APB_EN_SHIFT, CLK_U0_I2SRX_3CH_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_I2SRX_3CH_CLK_APB_ 			saif_set_reg(CLK_U0_I2SRX_3CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_CLK_APB_DISABLE_DATA, CLK_U0_I2SRX_3CH_CLK_APB_EN_SHIFT, CLK_U0_I2SRX_3CH_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_I2SRX_3CH_CLK_APB_ 		saif_get_reg(CLK_U0_I2SRX_3CH_CLK_APB_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_CLK_APB_EN_SHIFT, CLK_U0_I2SRX_3CH_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_I2SRX_3CH_CLK_APB_(x) 		saif_set_reg(CLK_U0_I2SRX_3CH_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_I2SRX_3CH_CLK_APB_EN_SHIFT, CLK_U0_I2SRX_3CH_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_ 			saif_set_reg(CLK_I2SRX_3CH_BCLK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_BCLK_MST_ENABLE_DATA, CLK_I2SRX_3CH_BCLK_MST_EN_SHIFT, CLK_I2SRX_3CH_BCLK_MST_EN_MASK)
#define _DISABLE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_ 			saif_set_reg(CLK_I2SRX_3CH_BCLK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_BCLK_MST_DISABLE_DATA, CLK_I2SRX_3CH_BCLK_MST_EN_SHIFT, CLK_I2SRX_3CH_BCLK_MST_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_I2SRX_3CH_BCLK_MST_ 		saif_get_reg(CLK_I2SRX_3CH_BCLK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_BCLK_MST_EN_SHIFT, CLK_I2SRX_3CH_BCLK_MST_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_I2SRX_3CH_BCLK_MST_(x) 		saif_set_reg(CLK_I2SRX_3CH_BCLK_MST_CTRL_REG_ADDR, x, CLK_I2SRX_3CH_BCLK_MST_EN_SHIFT, CLK_I2SRX_3CH_BCLK_MST_EN_MASK)
#define _DIVIDE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_(div) 			saif_set_reg(CLK_I2SRX_3CH_BCLK_MST_CTRL_REG_ADDR, div, CLK_I2SRX_3CH_BCLK_MST_DIV_SHIFT, CLK_I2SRX_3CH_BCLK_MST_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_I2SRX_3CH_BCLK_MST_ 		saif_get_reg(CLK_I2SRX_3CH_BCLK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_BCLK_MST_DIV_SHIFT, CLK_I2SRX_3CH_BCLK_MST_DIV_MASK)
#define _SET_CLOCK_CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_ 		saif_set_reg(CLK_I2SRX_3CH_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_DATA, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_ 		saif_set_reg(CLK_I2SRX_3CH_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2SRX_3CH_BCLK_MST_INV_UN_POLARITY_DATA, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_I2SRX_3CH_BCLK_MST_INV_ 		saif_get_reg(CLK_I2SRX_3CH_BCLK_MST_INV_CTRL_REG_ADDR, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_I2SRX_3CH_BCLK_MST_INV_(x) 		saif_set_reg(CLK_I2SRX_3CH_BCLK_MST_INV_CTRL_REG_ADDR, x, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_SHIFT, CLK_I2SRX_3CH_BCLK_MST_INV_POLARITY_MASK)
#define _SWITCH_CLOCK_CLK_I2SRX_3CH_LRCK_MST_SOURCE_CLK_I2SRX_3CH_BCLK_MST_INV_ 	saif_set_reg(CLK_I2SRX_3CH_LRCK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_LRCK_MST_SW_CLK_I2SRX_3CH_BCLK_MST_INV_DATA, CLK_I2SRX_3CH_LRCK_MST_SW_SHIFT, CLK_I2SRX_3CH_LRCK_MST_SW_MASK)
#define _SWITCH_CLOCK_CLK_I2SRX_3CH_LRCK_MST_SOURCE_CLK_I2SRX_3CH_BCLK_MST_ 	saif_set_reg(CLK_I2SRX_3CH_LRCK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_LRCK_MST_SW_CLK_I2SRX_3CH_BCLK_MST_DATA, CLK_I2SRX_3CH_LRCK_MST_SW_SHIFT, CLK_I2SRX_3CH_LRCK_MST_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_I2SRX_3CH_LRCK_MST_ 		saif_get_reg(CLK_I2SRX_3CH_LRCK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_LRCK_MST_SW_SHIFT, CLK_I2SRX_3CH_LRCK_MST_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_I2SRX_3CH_LRCK_MST_(x) 		saif_set_reg(CLK_I2SRX_3CH_LRCK_MST_CTRL_REG_ADDR, x, CLK_I2SRX_3CH_LRCK_MST_SW_SHIFT, CLK_I2SRX_3CH_LRCK_MST_SW_MASK)
#define _DIVIDE_CLOCK_CLK_I2SRX_3CH_LRCK_MST_(div) 			saif_set_reg(CLK_I2SRX_3CH_LRCK_MST_CTRL_REG_ADDR, div, CLK_I2SRX_3CH_LRCK_MST_DIV_SHIFT, CLK_I2SRX_3CH_LRCK_MST_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_I2SRX_3CH_LRCK_MST_ 		saif_get_reg(CLK_I2SRX_3CH_LRCK_MST_CTRL_REG_ADDR, CLK_I2SRX_3CH_LRCK_MST_DIV_SHIFT, CLK_I2SRX_3CH_LRCK_MST_DIV_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2SRX_3CH_BCLK_SOURCE_CLK_I2SRX_3CH_BCLK_MST_ 	saif_set_reg(CLK_U0_I2SRX_3CH_BCLK_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_BCLK_SW_CLK_I2SRX_3CH_BCLK_MST_DATA, CLK_U0_I2SRX_3CH_BCLK_SW_SHIFT, CLK_U0_I2SRX_3CH_BCLK_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2SRX_3CH_BCLK_SOURCE_CLK_I2SRX_BCLK_EXT_ 	saif_set_reg(CLK_U0_I2SRX_3CH_BCLK_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_BCLK_SW_CLK_I2SRX_BCLK_EXT_DATA, CLK_U0_I2SRX_3CH_BCLK_SW_SHIFT, CLK_U0_I2SRX_3CH_BCLK_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_I2SRX_3CH_BCLK_ 		saif_get_reg(CLK_U0_I2SRX_3CH_BCLK_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_BCLK_SW_SHIFT, CLK_U0_I2SRX_3CH_BCLK_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_I2SRX_3CH_BCLK_(x) 		saif_set_reg(CLK_U0_I2SRX_3CH_BCLK_CTRL_REG_ADDR, x, CLK_U0_I2SRX_3CH_BCLK_SW_SHIFT, CLK_U0_I2SRX_3CH_BCLK_SW_MASK)
#define _SET_CLOCK_CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_ 		saif_set_reg(CLK_U0_I2SRX_3CH_BCLK_N_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_DATA, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_ 		saif_set_reg(CLK_U0_I2SRX_3CH_BCLK_N_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_BCLK_N_UN_POLARITY_DATA, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U0_I2SRX_3CH_BCLK_N_ 		saif_get_reg(CLK_U0_I2SRX_3CH_BCLK_N_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U0_I2SRX_3CH_BCLK_N_(x) 		saif_set_reg(CLK_U0_I2SRX_3CH_BCLK_N_CTRL_REG_ADDR, x, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_SHIFT, CLK_U0_I2SRX_3CH_BCLK_N_POLARITY_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2SRX_3CH_LRCK_SOURCE_CLK_I2SRX_3CH_LRCK_MST_ 	saif_set_reg(CLK_U0_I2SRX_3CH_LRCK_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_LRCK_SW_CLK_I2SRX_3CH_LRCK_MST_DATA, CLK_U0_I2SRX_3CH_LRCK_SW_SHIFT, CLK_U0_I2SRX_3CH_LRCK_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_I2SRX_3CH_LRCK_SOURCE_CLK_I2SRX_LRCK_EXT_ 	saif_set_reg(CLK_U0_I2SRX_3CH_LRCK_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_LRCK_SW_CLK_I2SRX_LRCK_EXT_DATA, CLK_U0_I2SRX_3CH_LRCK_SW_SHIFT, CLK_U0_I2SRX_3CH_LRCK_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_I2SRX_3CH_LRCK_ 		saif_get_reg(CLK_U0_I2SRX_3CH_LRCK_CTRL_REG_ADDR, CLK_U0_I2SRX_3CH_LRCK_SW_SHIFT, CLK_U0_I2SRX_3CH_LRCK_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_I2SRX_3CH_LRCK_(x) 		saif_set_reg(CLK_U0_I2SRX_3CH_LRCK_CTRL_REG_ADDR, x, CLK_U0_I2SRX_3CH_LRCK_SW_SHIFT, CLK_U0_I2SRX_3CH_LRCK_SW_MASK)
#define _ENABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_DMIC_ 			saif_set_reg(CLK_U0_PDM_4MIC_CLK_DMIC_CTRL_REG_ADDR, CLK_U0_PDM_4MIC_CLK_DMIC_ENABLE_DATA, CLK_U0_PDM_4MIC_CLK_DMIC_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_DMIC_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_DMIC_ 			saif_set_reg(CLK_U0_PDM_4MIC_CLK_DMIC_CTRL_REG_ADDR, CLK_U0_PDM_4MIC_CLK_DMIC_DISABLE_DATA, CLK_U0_PDM_4MIC_CLK_DMIC_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_DMIC_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_PDM_4MIC_CLK_DMIC_ 		saif_get_reg(CLK_U0_PDM_4MIC_CLK_DMIC_CTRL_REG_ADDR, CLK_U0_PDM_4MIC_CLK_DMIC_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_DMIC_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_PDM_4MIC_CLK_DMIC_(x) 		saif_set_reg(CLK_U0_PDM_4MIC_CLK_DMIC_CTRL_REG_ADDR, x, CLK_U0_PDM_4MIC_CLK_DMIC_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_DMIC_EN_MASK)
#define _DIVIDE_CLOCK_CLK_U0_PDM_4MIC_CLK_DMIC_(div) 			saif_set_reg(CLK_U0_PDM_4MIC_CLK_DMIC_CTRL_REG_ADDR, div, CLK_U0_PDM_4MIC_CLK_DMIC_DIV_SHIFT, CLK_U0_PDM_4MIC_CLK_DMIC_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_PDM_4MIC_CLK_DMIC_ 		saif_get_reg(CLK_U0_PDM_4MIC_CLK_DMIC_CTRL_REG_ADDR, CLK_U0_PDM_4MIC_CLK_DMIC_DIV_SHIFT, CLK_U0_PDM_4MIC_CLK_DMIC_DIV_MASK)
#define _ENABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_APB_ 			saif_set_reg(CLK_U0_PDM_4MIC_CLK_APB_CTRL_REG_ADDR, CLK_U0_PDM_4MIC_CLK_APB_ENABLE_DATA, CLK_U0_PDM_4MIC_CLK_APB_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_APB_ 			saif_set_reg(CLK_U0_PDM_4MIC_CLK_APB_CTRL_REG_ADDR, CLK_U0_PDM_4MIC_CLK_APB_DISABLE_DATA, CLK_U0_PDM_4MIC_CLK_APB_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_PDM_4MIC_CLK_APB_ 		saif_get_reg(CLK_U0_PDM_4MIC_CLK_APB_CTRL_REG_ADDR, CLK_U0_PDM_4MIC_CLK_APB_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_PDM_4MIC_CLK_APB_(x) 		saif_set_reg(CLK_U0_PDM_4MIC_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_PDM_4MIC_CLK_APB_EN_SHIFT, CLK_U0_PDM_4MIC_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_AHB_ 			saif_set_reg(CLK_U0_TDM16SLOT_CLK_AHB_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_AHB_ENABLE_DATA, CLK_U0_TDM16SLOT_CLK_AHB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_AHB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_AHB_ 			saif_set_reg(CLK_U0_TDM16SLOT_CLK_AHB_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_AHB_DISABLE_DATA, CLK_U0_TDM16SLOT_CLK_AHB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_AHB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_TDM16SLOT_CLK_AHB_ 		saif_get_reg(CLK_U0_TDM16SLOT_CLK_AHB_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_AHB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_AHB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_TDM16SLOT_CLK_AHB_(x) 		saif_set_reg(CLK_U0_TDM16SLOT_CLK_AHB_CTRL_REG_ADDR, x, CLK_U0_TDM16SLOT_CLK_AHB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_AHB_EN_MASK)
#define _ENABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_APB_ 			saif_set_reg(CLK_U0_TDM16SLOT_CLK_APB_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_APB_ENABLE_DATA, CLK_U0_TDM16SLOT_CLK_APB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_APB_EN_MASK)
#define _DISABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_APB_ 			saif_set_reg(CLK_U0_TDM16SLOT_CLK_APB_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_APB_DISABLE_DATA, CLK_U0_TDM16SLOT_CLK_APB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_APB_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_U0_TDM16SLOT_CLK_APB_ 		saif_get_reg(CLK_U0_TDM16SLOT_CLK_APB_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_APB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_APB_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_U0_TDM16SLOT_CLK_APB_(x) 		saif_set_reg(CLK_U0_TDM16SLOT_CLK_APB_CTRL_REG_ADDR, x, CLK_U0_TDM16SLOT_CLK_APB_EN_SHIFT, CLK_U0_TDM16SLOT_CLK_APB_EN_MASK)
#define _ENABLE_CLOCK_CLK_TDM_INTERNAL_ 			saif_set_reg(CLK_TDM_INTERNAL_CTRL_REG_ADDR, CLK_TDM_INTERNAL_ENABLE_DATA, CLK_TDM_INTERNAL_EN_SHIFT, CLK_TDM_INTERNAL_EN_MASK)
#define _DISABLE_CLOCK_CLK_TDM_INTERNAL_ 			saif_set_reg(CLK_TDM_INTERNAL_CTRL_REG_ADDR, CLK_TDM_INTERNAL_DISABLE_DATA, CLK_TDM_INTERNAL_EN_SHIFT, CLK_TDM_INTERNAL_EN_MASK)
#define _GET_CLOCK_ENABLE_STATUS_CLK_TDM_INTERNAL_ 		saif_get_reg(CLK_TDM_INTERNAL_CTRL_REG_ADDR, CLK_TDM_INTERNAL_EN_SHIFT, CLK_TDM_INTERNAL_EN_MASK)
#define _SET_CLOCK_ENABLE_STATUS_CLK_TDM_INTERNAL_(x) 		saif_set_reg(CLK_TDM_INTERNAL_CTRL_REG_ADDR, x, CLK_TDM_INTERNAL_EN_SHIFT, CLK_TDM_INTERNAL_EN_MASK)
#define _DIVIDE_CLOCK_CLK_TDM_INTERNAL_(div) 			saif_set_reg(CLK_TDM_INTERNAL_CTRL_REG_ADDR, div, CLK_TDM_INTERNAL_DIV_SHIFT, CLK_TDM_INTERNAL_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_TDM_INTERNAL_ 		saif_get_reg(CLK_TDM_INTERNAL_CTRL_REG_ADDR, CLK_TDM_INTERNAL_DIV_SHIFT, CLK_TDM_INTERNAL_DIV_MASK)
#define _SWITCH_CLOCK_CLK_U0_TDM16SLOT_CLK_TDM_SOURCE_CLK_TDM_INTERNAL_ 	saif_set_reg(CLK_U0_TDM16SLOT_CLK_TDM_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_TDM_SW_CLK_TDM_INTERNAL_DATA, CLK_U0_TDM16SLOT_CLK_TDM_SW_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_SW_MASK)
#define _SWITCH_CLOCK_CLK_U0_TDM16SLOT_CLK_TDM_SOURCE_CLK_TDM_EXT_ 	saif_set_reg(CLK_U0_TDM16SLOT_CLK_TDM_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_TDM_SW_CLK_TDM_EXT_DATA, CLK_U0_TDM16SLOT_CLK_TDM_SW_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_SW_MASK)
#define _GET_CLOCK_SOURCE_STATUS_CLK_U0_TDM16SLOT_CLK_TDM_ 		saif_get_reg(CLK_U0_TDM16SLOT_CLK_TDM_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_TDM_SW_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_SW_MASK)
#define _SET_CLOCK_SOURCE_STATUS_CLK_U0_TDM16SLOT_CLK_TDM_(x) 		saif_set_reg(CLK_U0_TDM16SLOT_CLK_TDM_CTRL_REG_ADDR, x, CLK_U0_TDM16SLOT_CLK_TDM_SW_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_SW_MASK)
#define _SET_CLOCK_CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_ 		saif_set_reg(CLK_U0_TDM16SLOT_CLK_TDM_N_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_DATA, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_MASK)
#define _UNSET_CLOCK_CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_ 		saif_set_reg(CLK_U0_TDM16SLOT_CLK_TDM_N_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_TDM_N_UN_POLARITY_DATA, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_MASK)
#define _GET_CLOCK_POLARITY_STATUS_CLK_U0_TDM16SLOT_CLK_TDM_N_ 		saif_get_reg(CLK_U0_TDM16SLOT_CLK_TDM_N_CTRL_REG_ADDR, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_MASK)
#define _SET_CLOCK_POLARITY_STATUS_CLK_U0_TDM16SLOT_CLK_TDM_N_(x) 		saif_set_reg(CLK_U0_TDM16SLOT_CLK_TDM_N_CTRL_REG_ADDR, x, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_SHIFT, CLK_U0_TDM16SLOT_CLK_TDM_N_POLARITY_MASK)
#define _DIVIDE_CLOCK_CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_(div) 			saif_set_reg(CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_CTRL_REG_ADDR, div, CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_DIV_SHIFT, CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_DIV_MASK)
#define _GET_CLOCK_DIVIDE_STATUS_CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_ 		saif_get_reg(CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_CTRL_REG_ADDR, CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_DIV_SHIFT, CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_DIV_MASK)


#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_JTAG2APB_PRESETN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_JTAG2APB_PRESETN_SHIFT, RSTN_U0_JTAG2APB_PRESETN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_JTAG2APB_PRESETN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_JTAG2APB_PRESETN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_JTAG2APB_PRESETN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_JTAG2APB_PRESETN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SYS_SYSCON_PRESETN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SYS_SYSCON_PRESETN_SHIFT, RSTN_U0_SYS_SYSCON_PRESETN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SYS_SYSCON_PRESETN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SYS_SYSCON_PRESETN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SYS_SYSCON_PRESETN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SYS_SYSCON_PRESETN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SYS_IOMUX_PRESETN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SYS_IOMUX_PRESETN_SHIFT, RSTN_U0_SYS_IOMUX_PRESETN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SYS_IOMUX_PRESETN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SYS_IOMUX_PRESETN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SYS_IOMUX_PRESETN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SYS_IOMUX_PRESETN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_BUS_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_BUS_SHIFT, RST_U0_U7MC_SFT7110_RST_BUS_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_BUS_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_BUS_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_BUS_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_BUS_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_DEBUG_RESET_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_DEBUG_RESET_SHIFT, RST_U0_U7MC_SFT7110_DEBUG_RESET_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_DEBUG_RESET_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_DEBUG_RESET_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_DEBUG_RESET_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_DEBUG_RESET_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE0_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE0_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE0_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE0_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE1_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE1_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE1_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE1_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE2_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE2_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE2_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE2_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE3_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE3_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE3_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE3_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE4_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE4_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE4_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE4_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ST_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE0_ST_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE0_ST_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ST_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE0_ST_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ST_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE0_ST_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ST_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE1_ST_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE1_ST_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ST_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE1_ST_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ST_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE1_ST_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ST_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE2_ST_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE2_ST_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ST_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE2_ST_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ST_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE2_ST_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ST_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE3_ST_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE3_ST_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ST_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE3_ST_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ST_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE3_ST_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ST_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE4_ST_SHIFT, RST_U0_U7MC_SFT7110_RST_CORE4_ST_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ST_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE4_ST_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ST_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_RST_CORE4_ST_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST0_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST0_SHIFT, RST_U0_U7MC_SFT7110_TRACE_RST0_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST0_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST0_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST0_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST0_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST1_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST1_SHIFT, RST_U0_U7MC_SFT7110_TRACE_RST1_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST1_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST1_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST1_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST1_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST2_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST2_SHIFT, RST_U0_U7MC_SFT7110_TRACE_RST2_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST2_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST2_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST2_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST2_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST3_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST3_SHIFT, RST_U0_U7MC_SFT7110_TRACE_RST3_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST3_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST3_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST3_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST3_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST4_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST4_SHIFT, RST_U0_U7MC_SFT7110_TRACE_RST4_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST4_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST4_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST4_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_RST4_MASK)
#define _READ_RESET_STATUS_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_COM_RST_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_COM_RST_SHIFT, RST_U0_U7MC_SFT7110_TRACE_COM_RST_MASK)
#define _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_COM_RST_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_COM_RST_MASK)
#define _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_COM_RST_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RST_U0_U7MC_SFT7110_TRACE_COM_RST_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_IMG_GPU_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_IMG_GPU_RSTN_APB_SHIFT, RSTN_U0_IMG_GPU_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_IMG_GPU_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_IMG_GPU_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_IMG_GPU_RSTN_DOMA_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_IMG_GPU_RSTN_DOMA_SHIFT, RSTN_U0_IMG_GPU_RSTN_DOMA_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_DOMA_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_IMG_GPU_RSTN_DOMA_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_DOMA_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_IMG_GPU_RSTN_DOMA_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT0_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS0_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_SHIFT, RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_SHIFT, RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_SHIFT, RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_SHIFT, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_SHIFT, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_SHIFT, RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_AXI_SHIFT, RSTN_U0_DDR_SFT7110_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_OSC_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_OSC_SHIFT, RSTN_U0_DDR_SFT7110_RSTN_OSC_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_OSC_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_OSC_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_OSC_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_OSC_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_APB_SHIFT, RSTN_U0_DDR_SFT7110_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DDR_SFT7110_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_SHIFT, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_SHIFT, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_SHIFT, RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CODAJ12_RSTN_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_AXI_SHIFT, RSTN_U0_CODAJ12_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CODAJ12_RSTN_CORE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_CORE_SHIFT, RSTN_U0_CODAJ12_RSTN_CORE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_CORE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_CORE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_CORE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_CORE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CODAJ12_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_APB_SHIFT, RSTN_U0_CODAJ12_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CODAJ12_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE511_RSTN_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_AXI_SHIFT, RSTN_U0_WAVE511_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE511_RSTN_BPU_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_BPU_SHIFT, RSTN_U0_WAVE511_RSTN_BPU_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_BPU_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_BPU_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_BPU_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_BPU_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE511_RSTN_VCE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_VCE_SHIFT, RSTN_U0_WAVE511_RSTN_VCE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_VCE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_VCE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_VCE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_VCE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE511_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_APB_SHIFT, RSTN_U0_WAVE511_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE511_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_VDEC_JPG_ARB_JPGRESETN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_VDEC_JPG_ARB_JPGRESETN_SHIFT, RSTN_U0_VDEC_JPG_ARB_JPGRESETN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_JPGRESETN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_VDEC_JPG_ARB_JPGRESETN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_JPGRESETN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_VDEC_JPG_ARB_JPGRESETN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_VDEC_JPG_ARB_MAINRESETN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_VDEC_JPG_ARB_MAINRESETN_SHIFT, RSTN_U0_VDEC_JPG_ARB_MAINRESETN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_MAINRESETN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_VDEC_JPG_ARB_MAINRESETN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_MAINRESETN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_VDEC_JPG_ARB_MAINRESETN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_AXIMEM_128B_RSTN_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXIMEM_128B_RSTN_AXI_SHIFT, RSTN_U0_AXIMEM_128B_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_AXIMEM_128B_RSTN_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXIMEM_128B_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_AXIMEM_128B_RSTN_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_AXIMEM_128B_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE420L_RSTN_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_AXI_SHIFT, RSTN_U0_WAVE420L_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE420L_RSTN_BPU_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_BPU_SHIFT, RSTN_U0_WAVE420L_RSTN_BPU_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_BPU_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_BPU_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_BPU_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_BPU_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE420L_RSTN_VCE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_VCE_SHIFT, RSTN_U0_WAVE420L_RSTN_VCE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_VCE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_VCE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_VCE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_VCE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_WAVE420L_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_APB_SHIFT, RSTN_U0_WAVE420L_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_WAVE420L_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_AXIMEM_128B_RSTN_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U1_AXIMEM_128B_RSTN_AXI_SHIFT, RSTN_U1_AXIMEM_128B_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_AXIMEM_128B_RSTN_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U1_AXIMEM_128B_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_AXIMEM_128B_RSTN_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U1_AXIMEM_128B_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U2_AXIMEM_128B_RSTN_AXI_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U2_AXIMEM_128B_RSTN_AXI_SHIFT, RSTN_U2_AXIMEM_128B_RSTN_AXI_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U2_AXIMEM_128B_RSTN_AXI_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U2_AXIMEM_128B_RSTN_AXI_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U2_AXIMEM_128B_RSTN_AXI_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U2_AXIMEM_128B_RSTN_AXI_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_SHIFT, RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_AHB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_AHB_SHIFT, RSTN_U0_CDNS_QSPI_RSTN_AHB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_AHB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_AHB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_AHB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_AHB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_APB_SHIFT, RSTN_U0_CDNS_QSPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_REF_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_REF_SHIFT, RSTN_U0_CDNS_QSPI_RSTN_REF_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_REF_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_REF_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_REF_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT1_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS1_REG_ADDR, RSTN_U0_CDNS_QSPI_RSTN_REF_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DW_SDIO_RSTN_AHB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_SDIO_RSTN_AHB_SHIFT, RSTN_U0_DW_SDIO_RSTN_AHB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DW_SDIO_RSTN_AHB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_SDIO_RSTN_AHB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DW_SDIO_RSTN_AHB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_SDIO_RSTN_AHB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_DW_SDIO_RSTN_AHB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_SDIO_RSTN_AHB_SHIFT, RSTN_U1_DW_SDIO_RSTN_AHB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_DW_SDIO_RSTN_AHB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_SDIO_RSTN_AHB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_DW_SDIO_RSTN_AHB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_SDIO_RSTN_AHB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_SHIFT, RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_HRESET_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_GMAC5_AXI64_HRESET_N_SHIFT, RSTN_U1_DW_GMAC5_AXI64_HRESET_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_HRESET_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_GMAC5_AXI64_HRESET_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_HRESET_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_GMAC5_AXI64_HRESET_N_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_MAILBOX_PRESETN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_MAILBOX_PRESETN_SHIFT, RSTN_U0_MAILBOX_PRESETN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_MAILBOX_PRESETN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_MAILBOX_PRESETN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_MAILBOX_PRESETN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_MAILBOX_PRESETN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SSP_SPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_SSP_SPI_RSTN_APB_SHIFT, RSTN_U0_SSP_SPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SSP_SPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_SSP_SPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SSP_SPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_SSP_SPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_SSP_SPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_SSP_SPI_RSTN_APB_SHIFT, RSTN_U1_SSP_SPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_SSP_SPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_SSP_SPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_SSP_SPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_SSP_SPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U2_SSP_SPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_SSP_SPI_RSTN_APB_SHIFT, RSTN_U2_SSP_SPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U2_SSP_SPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_SSP_SPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U2_SSP_SPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_SSP_SPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U3_SSP_SPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_SSP_SPI_RSTN_APB_SHIFT, RSTN_U3_SSP_SPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U3_SSP_SPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_SSP_SPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U3_SSP_SPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_SSP_SPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U4_SSP_SPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_SSP_SPI_RSTN_APB_SHIFT, RSTN_U4_SSP_SPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U4_SSP_SPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_SSP_SPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U4_SSP_SPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_SSP_SPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U5_SSP_SPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_SSP_SPI_RSTN_APB_SHIFT, RSTN_U5_SSP_SPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U5_SSP_SPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_SSP_SPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U5_SSP_SPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_SSP_SPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U6_SSP_SPI_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U6_SSP_SPI_RSTN_APB_SHIFT, RSTN_U6_SSP_SPI_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U6_SSP_SPI_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U6_SSP_SPI_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U6_SSP_SPI_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U6_SSP_SPI_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DW_I2C_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_I2C_RSTN_APB_SHIFT, RSTN_U0_DW_I2C_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DW_I2C_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_I2C_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DW_I2C_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_I2C_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_DW_I2C_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_I2C_RSTN_APB_SHIFT, RSTN_U1_DW_I2C_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_DW_I2C_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_I2C_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_DW_I2C_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_I2C_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U2_DW_I2C_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_I2C_RSTN_APB_SHIFT, RSTN_U2_DW_I2C_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U2_DW_I2C_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_I2C_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U2_DW_I2C_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_I2C_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U3_DW_I2C_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_I2C_RSTN_APB_SHIFT, RSTN_U3_DW_I2C_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U3_DW_I2C_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_I2C_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U3_DW_I2C_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_I2C_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U4_DW_I2C_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_I2C_RSTN_APB_SHIFT, RSTN_U4_DW_I2C_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U4_DW_I2C_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_I2C_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U4_DW_I2C_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_I2C_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U5_DW_I2C_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_I2C_RSTN_APB_SHIFT, RSTN_U5_DW_I2C_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U5_DW_I2C_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_I2C_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U5_DW_I2C_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_I2C_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U6_DW_I2C_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U6_DW_I2C_RSTN_APB_SHIFT, RSTN_U6_DW_I2C_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U6_DW_I2C_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U6_DW_I2C_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U6_DW_I2C_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U6_DW_I2C_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DW_UART_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_UART_RSTN_APB_SHIFT, RSTN_U0_DW_UART_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_UART_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_UART_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DW_UART_RSTN_CORE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_UART_RSTN_CORE_SHIFT, RSTN_U0_DW_UART_RSTN_CORE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_CORE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_UART_RSTN_CORE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_CORE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_DW_UART_RSTN_CORE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_DW_UART_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_UART_RSTN_APB_SHIFT, RSTN_U1_DW_UART_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_UART_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_UART_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_DW_UART_RSTN_CORE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_UART_RSTN_CORE_SHIFT, RSTN_U1_DW_UART_RSTN_CORE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_CORE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_UART_RSTN_CORE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_CORE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U1_DW_UART_RSTN_CORE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U2_DW_UART_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_UART_RSTN_APB_SHIFT, RSTN_U2_DW_UART_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_UART_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_UART_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U2_DW_UART_RSTN_CORE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_UART_RSTN_CORE_SHIFT, RSTN_U2_DW_UART_RSTN_CORE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_CORE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_UART_RSTN_CORE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_CORE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U2_DW_UART_RSTN_CORE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U3_DW_UART_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_UART_RSTN_APB_SHIFT, RSTN_U3_DW_UART_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_UART_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_UART_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U3_DW_UART_RSTN_CORE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_UART_RSTN_CORE_SHIFT, RSTN_U3_DW_UART_RSTN_CORE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_CORE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_UART_RSTN_CORE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_CORE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U3_DW_UART_RSTN_CORE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U4_DW_UART_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_UART_RSTN_APB_SHIFT, RSTN_U4_DW_UART_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_UART_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_UART_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U4_DW_UART_RSTN_CORE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_UART_RSTN_CORE_SHIFT, RSTN_U4_DW_UART_RSTN_CORE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_CORE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_UART_RSTN_CORE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_CORE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U4_DW_UART_RSTN_CORE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U5_DW_UART_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_UART_RSTN_APB_SHIFT, RSTN_U5_DW_UART_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_UART_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_UART_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U5_DW_UART_RSTN_CORE_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_UART_RSTN_CORE_SHIFT, RSTN_U5_DW_UART_RSTN_CORE_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_CORE_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_UART_RSTN_CORE_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_CORE_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U5_DW_UART_RSTN_CORE_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CDNS_SPDIF_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_CDNS_SPDIF_RSTN_APB_SHIFT, RSTN_U0_CDNS_SPDIF_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_SPDIF_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_CDNS_SPDIF_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_SPDIF_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT2_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS2_REG_ADDR, RSTN_U0_CDNS_SPDIF_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_PWMDAC_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PWMDAC_RSTN_APB_SHIFT, RSTN_U0_PWMDAC_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_PWMDAC_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PWMDAC_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_PWMDAC_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PWMDAC_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_DMIC_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PDM_4MIC_RSTN_DMIC_SHIFT, RSTN_U0_PDM_4MIC_RSTN_DMIC_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_DMIC_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PDM_4MIC_RSTN_DMIC_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_DMIC_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PDM_4MIC_RSTN_DMIC_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PDM_4MIC_RSTN_APB_SHIFT, RSTN_U0_PDM_4MIC_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PDM_4MIC_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PDM_4MIC_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2SRX_3CH_RSTN_APB_SHIFT, RSTN_U0_I2SRX_3CH_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2SRX_3CH_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2SRX_3CH_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_BCLK_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2SRX_3CH_RSTN_BCLK_SHIFT, RSTN_U0_I2SRX_3CH_RSTN_BCLK_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_BCLK_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2SRX_3CH_RSTN_BCLK_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_BCLK_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2SRX_3CH_RSTN_BCLK_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2STX_4CH_RSTN_APB_SHIFT, RSTN_U0_I2STX_4CH_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2STX_4CH_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2STX_4CH_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_BCLK_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2STX_4CH_RSTN_BCLK_SHIFT, RSTN_U0_I2STX_4CH_RSTN_BCLK_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_BCLK_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2STX_4CH_RSTN_BCLK_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_BCLK_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_I2STX_4CH_RSTN_BCLK_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_I2STX_4CH_RSTN_APB_SHIFT, RSTN_U1_I2STX_4CH_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_I2STX_4CH_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_I2STX_4CH_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_BCLK_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_I2STX_4CH_RSTN_BCLK_SHIFT, RSTN_U1_I2STX_4CH_RSTN_BCLK_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_BCLK_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_I2STX_4CH_RSTN_BCLK_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_BCLK_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_I2STX_4CH_RSTN_BCLK_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_AHB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_AHB_SHIFT, RSTN_U0_TDM16SLOT_RSTN_AHB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_AHB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_AHB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_AHB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_AHB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_TDM_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_TDM_SHIFT, RSTN_U0_TDM16SLOT_RSTN_TDM_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_TDM_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_TDM_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_TDM_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_TDM_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_APB_SHIFT, RSTN_U0_TDM16SLOT_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TDM16SLOT_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_PWM_8CH_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PWM_8CH_RSTN_APB_SHIFT, RSTN_U0_PWM_8CH_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_PWM_8CH_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PWM_8CH_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_PWM_8CH_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_PWM_8CH_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_DSKIT_WDT_RSTN_APB_SHIFT, RSTN_U0_DSKIT_WDT_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_DSKIT_WDT_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_DSKIT_WDT_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_WDT_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_DSKIT_WDT_RSTN_WDT_SHIFT, RSTN_U0_DSKIT_WDT_RSTN_WDT_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_WDT_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_DSKIT_WDT_RSTN_WDT_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_WDT_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_DSKIT_WDT_RSTN_WDT_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_APB_SHIFT, RSTN_U0_CAN_CTRL_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_CAN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_CAN_SHIFT, RSTN_U0_CAN_CTRL_RSTN_CAN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_CAN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_CAN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_CAN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_CAN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_TIMER_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_TIMER_SHIFT, RSTN_U0_CAN_CTRL_RSTN_TIMER_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_TIMER_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_TIMER_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_TIMER_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_CAN_CTRL_RSTN_TIMER_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_APB_SHIFT, RSTN_U1_CAN_CTRL_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_CAN_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_CAN_SHIFT, RSTN_U1_CAN_CTRL_RSTN_CAN_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_CAN_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_CAN_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_CAN_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_CAN_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_TIMER_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_TIMER_SHIFT, RSTN_U1_CAN_CTRL_RSTN_TIMER_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_TIMER_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_TIMER_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_TIMER_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U1_CAN_CTRL_RSTN_TIMER_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_APB_SHIFT, RSTN_U0_SI5_TIMER_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER0_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER0_SHIFT, RSTN_U0_SI5_TIMER_RSTN_TIMER0_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER0_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER0_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER0_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER0_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER1_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER1_SHIFT, RSTN_U0_SI5_TIMER_RSTN_TIMER1_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER1_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER1_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER1_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER1_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER2_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER2_SHIFT, RSTN_U0_SI5_TIMER_RSTN_TIMER2_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER2_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER2_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER2_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER2_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER3_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER3_SHIFT, RSTN_U0_SI5_TIMER_RSTN_TIMER3_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER3_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER3_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER3_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_SI5_TIMER_RSTN_TIMER3_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_INT_CTRL_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_INT_CTRL_RSTN_APB_SHIFT, RSTN_U0_INT_CTRL_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_INT_CTRL_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_INT_CTRL_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_INT_CTRL_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_INT_CTRL_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_APB_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TEMP_SENSOR_RSTN_APB_SHIFT, RSTN_U0_TEMP_SENSOR_RSTN_APB_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_APB_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TEMP_SENSOR_RSTN_APB_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_APB_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TEMP_SENSOR_RSTN_APB_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_TEMP_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TEMP_SENSOR_RSTN_TEMP_SHIFT, RSTN_U0_TEMP_SENSOR_RSTN_TEMP_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_TEMP_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TEMP_SENSOR_RSTN_TEMP_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_TEMP_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_TEMP_SENSOR_RSTN_TEMP_MASK)
#define _READ_RESET_STATUS_RSTGEN_RSTN_U0_JTAG_CERTIFICATION_RST_N_ 	saif_get_reg(SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_JTAG_CERTIFICATION_RST_N_SHIFT, RSTN_U0_JTAG_CERTIFICATION_RST_N_MASK)
#define _ASSERT_RESET_RSTGEN_RSTN_U0_JTAG_CERTIFICATION_RST_N_ 	saif_assert_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_JTAG_CERTIFICATION_RST_N_MASK)
#define _CLEAR_RESET_RSTGEN_RSTN_U0_JTAG_CERTIFICATION_RST_N_ 	saif_clear_rst(SYS_CRG_RSTGEN_SOFTWARE_RESET_ASSERT3_REG_ADDR, SYS_CRG_RSTGEN_SOFTWARE_RESET_STATUS3_REG_ADDR, RSTN_U0_JTAG_CERTIFICATION_RST_N_MASK)


#endif //_SYS_CRG_MACRO_H_
