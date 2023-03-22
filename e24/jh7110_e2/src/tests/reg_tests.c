/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * 
 * @file reg_tests.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

#include <mem_test.h>

//All boards share same reg testcases
#if defined(HAL_REG_TESTS_ENABLED)

enum mod_list {
    //REG_TEST_u0_dw_uart            ,
    REG_TEST_u1_dw_uart	             ,
    REG_TEST_u2_dw_uart	             ,
    REG_TEST_u0_dw_i2c	             ,
    REG_TEST_u1_dw_i2c	             ,
    REG_TEST_u2_dw_i2c	             ,
    REG_TEST_u0_ssp_spi	             ,
    REG_TEST_u1_ssp_spi	             ,
    REG_TEST_u2_ssp_spi	             ,
    REG_TEST_u0_tdm16slot	         ,
    REG_TEST_u0_cdns_spdif	         ,
    REG_TEST_u0_pwmdac	             ,
    REG_TEST_u0_pdm_4mic	         ,
    REG_TEST_u0_i2srx_3ch	         ,
    REG_TEST_u0_cdn_usb              ,
    REG_TEST_u3_dw_uart	             ,
    REG_TEST_u4_dw_uart	             ,
    REG_TEST_u5_dw_uart	             ,
    REG_TEST_u3_dw_i2c	             ,
    REG_TEST_u4_dw_i2c	             ,
    REG_TEST_u5_dw_i2c	             ,
    REG_TEST_u6_dw_i2c	             ,
    REG_TEST_u3_ssp_spi	             ,
    REG_TEST_u4_ssp_spi	             ,
    REG_TEST_u5_ssp_spi	             ,
    REG_TEST_u6_ssp_spi	             ,
    REG_TEST_u0_i2stx_4ch	         ,
    REG_TEST_u1_i2stx_4ch	         ,
    REG_TEST_u0_pwm_8ch	             ,
    REG_TEST_u0_temp_sensor          ,
    REG_TEST_u0_cdns_qspi	         ,
    REG_TEST_sys_iomux_cfg           ,
    REG_TEST_u0_si5_timer	         ,
    REG_TEST_u0_mailbox              ,
    REG_TEST_u0_dskit_wdt	         ,
    REG_TEST_u0_int_ctrl	         ,
    REG_TEST_u0_CODAJ12	             ,
    REG_TEST_u0_WAVE511	             ,
    REG_TEST_u0_WAVE420L	         ,
    REG_TEST_u0_img_gpu_timer        ,
    REG_TEST_u0_can_ctrl             ,
    REG_TEST_u1_can_ctrl             ,
    REG_TEST_u0_sec_algo             ,
    REG_TEST_u0_sec_dmac             ,
    REG_TEST_u0_sec_trng             ,
    REG_TEST_u0_dw_sdio	             ,
    REG_TEST_u1_dw_sdio	             ,
    REG_TEST_u0_dw_gmac_axi64	     ,
    REG_TEST_u1_dw_gmac_axi64	     ,
    REG_TEST_u0_dw_dma1p_8ch_56hs	 ,
    REG_TEST_aon_iomux_cfg           ,
    REG_TEST_u0_pmu                  ,
    REG_TEST_u0_rtc_hms              ,
    REG_TEST_u0_otpc                 ,
    REG_TEST_u0_img_gpu              ,
    REG_TEST_u0_mipi_csi_ctrl        ,
    REG_TEST_u0_vin                  ,
    REG_TEST_u0_isp                  ,
    REG_TEST_u0_plda_pcie            ,
    REG_TEST_u1_plda_pcie            ,
    REG_TEST_u0_dc8200_ahb0          ,
    REG_TEST_u0_dc8200_ahb1          ,
    REG_TEST_u0_hdmi_tx              ,
    REG_TEST_u0_cdns_dsiTx           ,
};

static void reg_test_codaj12_enable()
{
    sys_pmu_turn_on(PMU_DOMAIN_VDEC);
    u0_CODAJ12_enable();
}

static void reg_test_codaj12_disable()
{
    u0_CODAJ12_disable();
    sys_pmu_turn_off(PMU_DOMAIN_VDEC);
}

static void reg_test_wave511_enable()
{
    sys_pmu_turn_on(PMU_DOMAIN_VDEC);
    u0_WAVE511_enable();
}

static void reg_test_wave511_disable()
{
    u0_WAVE511_disable();
    sys_pmu_turn_off(PMU_DOMAIN_VDEC);
}

static void reg_test_gpu_enable()
{
    sys_pmu_turn_on(PMU_DOMAIN_GPUA);
    u0_img_gpu_enable();
}

static void reg_test_gpu_disable()
{
    u0_img_gpu_disable();
    sys_pmu_turn_off(PMU_DOMAIN_GPUA);
}

static void reg_test_wave420l_enable()
{
    sys_pmu_turn_on(PMU_DOMAIN_VENC);
    u0_wave420l_enable();
}

static void reg_test_wave420l_disable()
{
    u0_wave420l_disable();
    sys_pmu_turn_off(PMU_DOMAIN_VENC);
}

static void reg_test_mipi_csi_ctrl_enable()
{
    sys_pmu_turn_on(PMU_DOMAIN_ISP);
    u0_dom_isp_top_enable();
    u0_vin_enable();
}

static void reg_test_mipi_csi_ctrl_disable()
{
    u0_vin_disable();
    u0_dom_isp_top_disable();
    sys_pmu_turn_off(PMU_DOMAIN_ISP);
}

static void reg_test_vin_enable()
{
    sys_pmu_turn_on(PMU_DOMAIN_ISP);
    u0_dom_isp_top_enable();
}

static void reg_test_vin_disable()
{
    u0_dom_isp_top_disable();
    sys_pmu_turn_off(PMU_DOMAIN_ISP);
}

static void reg_test_isp_enable()
{
    sys_pmu_turn_on(PMU_DOMAIN_ISP);
    u0_dom_isp_top_enable();
}

static void reg_test_isp_disable()
{
    u0_dom_isp_top_disable();
    sys_pmu_turn_off(PMU_DOMAIN_ISP);
}

static void reg_test_dc8200_enable()
{
    u0_sft7110_noc_bus_enable();
    sys_pmu_turn_on(PMU_DOMAIN_VOUT);
    u0_dom_vout_top_enable();
    u0_dc8200_enable();
}

static void reg_test_dc8200_disable()
{
    u0_dc8200_disable();
    u0_dom_vout_top_disable();
    sys_pmu_turn_off(PMU_DOMAIN_VOUT);
}

static void reg_test_hdmi_tx_enable()
{
    u0_sft7110_noc_bus_enable();
    sys_pmu_turn_on(PMU_DOMAIN_VOUT);
    u0_dom_vout_top_enable();
    u0_hdmi_tx_enable();
}

static void reg_test_hdmi_tx_disable()
{
    u0_hdmi_tx_disable();
    u0_dom_vout_top_disable();
    sys_pmu_turn_off(PMU_DOMAIN_VOUT);
}

static void reg_test_cdns_dsiTx_enable()
{
    u0_sft7110_noc_bus_enable();
    sys_pmu_turn_on(PMU_DOMAIN_VOUT);
    u0_dom_vout_top_enable();
    u0_cdns_dsiTx_enable();
}

static void reg_test_cdns_dsiTx_disable()
{
    u0_cdns_dsiTx_disable();
    u0_dom_vout_top_disable();
    sys_pmu_turn_off(PMU_DOMAIN_VOUT);
}

static int run_mod_reg_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    int ret = 0;
    mod_reg_test_t *mod = (mod_reg_test_t *)p0;
    int mod_nums = (int)p1;
    uint32_t *custom_pattern = (uint32_t *)p2;
    uint32_t custom_pattern_num = (uint32_t)p3;

    for (int i = 0; i < mod_nums; i++) {
        ret += mod_reg_test(&mod[i], custom_pattern, custom_pattern_num);
    }

    return ret;
}

/********************** configurations **********************/
//Note: generated by rtl zhixin.huang
static const mod_reg_test_t reg_configs[] = {
    // {"u0_dw_uart"           , 0x10000000 + 0x0c, 0xff, u0_dw_uart_enable, u0_dw_uart_disable},
    {"u1_dw_uart"           , 0x10010000 + 0x0c, 0xff, u1_dw_uart_enable, u1_dw_uart_disable},
    {"u2_dw_uart"           , 0x10020000 + 0x0c, 0xff, u2_dw_uart_enable, u2_dw_uart_disable},
    {"u0_dw_i2c"            , 0x10030000 + 0x04, 0xfff, u0_dw_i2c_enable, u0_dw_i2c_disable},
    {"u1_dw_i2c"            , 0x10040000 + 0x04, 0xfff, u1_dw_i2c_enable, u1_dw_i2c_disable},
    {"u2_dw_i2c"            , 0x10050000 + 0x04, 0xfff, u2_dw_i2c_enable, u2_dw_i2c_disable},
    {"u0_ssp_spi"           , 0x10060000 + 0x14, 0xf, u0_ssp_spi_enable, u0_ssp_spi_disable},
    {"u1_ssp_spi"           , 0x10070000 + 0x14, 0xf, u1_ssp_spi_enable, u1_ssp_spi_disable},
    {"u2_ssp_spi"           , 0x10080000 + 0x14, 0xf, u2_ssp_spi_enable, u2_ssp_spi_disable},
    {"u0_tdm16slot"         , 0x10090000 + 0x00, 0x3f, u0_tdm16slot_enable, u0_tdm16slot_disable},
    {"u0_cdns_spdif"        , 0x100a0000 + 0x04, 0xf00, u0_cdns_spdif_enable, u0_cdns_spdif_disable},
    {"u0_pwmdac"            , 0x100b0000 + 0x00, 0xffffffff, u0_pwmdac_enable, u0_pwmdac_disable},
    {"u0_pdm_4mic"          , 0x100d0000 + 0x00, 0xffffffff, u0_pdm_4mic_enable, u0_pdm_4mic_disable},
    {"u0_i2srx_3ch"         , 0x100e0000 + 0x00, 0x1, u0_i2srx_3ch_enable, u0_i2srx_3ch_disable},
    {"u0_cdn_usb"           , 0x10100000 + 0x20, 0xffffffff, u0_cdn_usb_enable, u0_cdn_usb_disable},
    //{"u3_dw_uart"           , 0x12000000 + 0x0c, 0xff, u3_dw_uart_enable, u3_dw_uart_disable},
    {"u4_dw_uart"           , 0x12010000 + 0x0c, 0xff, u4_dw_uart_enable, u4_dw_uart_disable},
    {"u5_dw_uart"           , 0x12020000 + 0x0c, 0xff, u5_dw_uart_enable, u5_dw_uart_disable},
    {"u3_dw_i2c"            , 0x12030000 + 0x04, 0xfff, u3_dw_i2c_enable, u3_dw_i2c_disable},
    {"u4_dw_i2c"            , 0x12040000 + 0x04, 0xfff, u4_dw_i2c_enable, u4_dw_i2c_disable},
    {"u5_dw_i2c"            , 0x12050000 + 0x04, 0xfff, u5_dw_i2c_enable, u5_dw_i2c_disable},
    {"u6_dw_i2c"            , 0x12060000 + 0x04, 0xfff, u6_dw_i2c_enable, u6_dw_i2c_disable},
    {"u3_ssp_spi"           , 0x12070000 + 0x14, 0xf, u3_ssp_spi_enable, u3_ssp_spi_disable},
    {"u4_ssp_spi"           , 0x12080000 + 0x14, 0xf, u4_ssp_spi_enable, u4_ssp_spi_disable},
    {"u5_ssp_spi"           , 0x12090000 + 0x14, 0xf, u5_ssp_spi_enable, u5_ssp_spi_disable},
    {"u6_ssp_spi"           , 0x120a0000 + 0x14, 0xf, u6_ssp_spi_enable, u6_ssp_spi_disable},
    {"u0_i2stx_4ch"         , 0x120b0000 + 0x00, 0x1, u0_i2stx_4ch_enable, u0_i2stx_4ch_disable},
    {"u1_i2stx_4ch"         , 0x120c0000 + 0x00, 0x1, u1_i2stx_4ch_enable, u1_i2stx_4ch_disable},
    {"u0_pwm_8ch"           , 0x120d0000 + 0x00, 0xffffffff, u0_pwm_8ch_enable, u0_pwm_8ch_disable},
    {"u0_temp_sensor"       , 0x120e0000 + 0x00, 0x3f, u0_temp_sensor_enable, u0_temp_sensor_disable},
    {"u0_cdns_qspi"         , 0x13010000 + 0x00, 0x1fffff7, u0_cdns_qspi_enable, u0_cdns_qspi_disable},
    {"sys_iomux_cfg (gpio)" , 0x13040000 + 0xdc, 0x01, NULL, NULL},
    {"u0_si5_timer"         , 0x13050000 + 0x04, 0x1, u0_si5_timer_enable, u0_si5_timer_disable},
    {"u0_mailbox"           , 0x13060000 + 0x00, 0xf, u0_mailbox_enable, u0_mailbox_disable},
    {"u0_dskit_wdt"         , 0x13070000 + 0x00, 0xffffffff, u0_dskit_wdt_enable, u0_dskit_wdt_disable},
    {"u0_int_ctrl"          , 0x13080000 + 0x0c, 0xffffffff, u0_int_ctrl_enable, u0_int_ctrl_disable},
    {"u0_CODAJ12"           , 0x13090000 + 0x14, 0xffffffff, reg_test_codaj12_enable, reg_test_codaj12_disable},
    {"u0_WAVE511"           , 0x130a0000 + 0x24, 0xffffffff, reg_test_wave511_enable, reg_test_wave511_disable},
    {"u0_WAVE420L"          , 0x130b0000 + 0x100, 0xffffffff, reg_test_wave420l_enable, reg_test_wave420l_disable},
    {"u0_can_ctrl"          , 0x130D0000 + 0xa0, 0x80, u0_can_ctrl_enable, u0_can_ctrl_disable},
    {"u1_can_ctrl"          , 0x130E0000 + 0xa0, 0x80, u1_can_ctrl_enable, u1_can_ctrl_disable},
    {"u0_sec_algo"          , 0x16000000 + 0x08, 0xf, u0_sec_top_enable, u0_sec_top_disable},
    {"u0_sec_dmac"          , 0x16008000 + 0x100, 0xffffffff, u0_sec_top_enable, u0_sec_top_disable},
    {"u0_sec_trng"          , 0x1600c000 + 0x08, 0x8, u0_sec_top_enable, u0_sec_top_disable},
    {"u0_dw_sdio"           , 0x16010000 + 0x08, 0xff, u0_dw_sdio_enable, u0_dw_sdio_disable},
    {"u1_dw_sdio"           , 0x16020000 + 0x08, 0xff, u1_dw_sdio_enable, u1_dw_sdio_disable},
    {"u0_dw_gmac_axi64"     , 0x16030000 + 0x00, 0xffffff7f, u0_dw_gmac5_axi64_enable, u0_dw_gmac5_axi64_disable},
    {"u1_dw_gmac_axi64"     , 0x16040000 + 0x00, 0xffffff7f, u1_dw_gmac5_axi64_enable, u1_dw_gmac5_axi64_disable},
    {"u0_dw_dma1p_8ch_56hs" , 0x16050000 + 0x100, 0xffffffff, u0_dw_dma1p_8ch_56hs_enable, u0_dw_dma1p_8ch_56hs_disable},
    {"aon_iomux_cfg (rgpio)", 0x17020000 + 0x0c, 0x01, NULL, NULL},
    {"u0_pmu"               , 0x17030000 + 0x04, 0xff, NULL, NULL},
    {"u0_rtc_hms"           , 0x17040000 + 0x00, 0xf, u0_rtc_hms_enable, u0_rtc_hms_disable},
    {"u0_otpc"              , 0x17050000 + 0x00, 0xfffff, u0_otpc_enable, u0_otpc_disable},
    {"u0_img_gpu"           , 0x18000000 + 0xa100, 0x1, reg_test_gpu_enable, reg_test_gpu_disable},
    // {"u0_mipi_csi_ctrl"     , 0x19800000 + 0x110, 0xffffffff, reg_test_mipi_csi_ctrl_enable, reg_test_mipi_csi_ctrl_disable},        FIXME: need update from U74 testcase
    {"u0_vin"               , 0x19840000 + 0x18, 0xffffffff, reg_test_vin_enable, reg_test_vin_disable},
    {"u0_isp"               , 0x19870000 + 0x1c, 0xffffffff, reg_test_isp_enable, reg_test_isp_disable},
    {"u0_dc8200_ahb0"       , 0x29400000 + 0x1400, 0xffffffff, reg_test_dc8200_enable, reg_test_dc8200_disable},
    {"u0_dc8200_ahb1"       , 0x29480000 + 0x101e8, 0xffffffff, reg_test_dc8200_enable, reg_test_dc8200_disable},
    // {"u0_hdmi_tx"           , 0x29590000 + 0x00, 0xff, reg_test_hdmi_tx_enable, reg_test_hdmi_tx_disable},           //FIXME: unavailable on fpga
    // {"u0_cdns_dsiTx"        , 0x295d0000 + 0x1f0, 0xffff, reg_test_cdns_dsiTx_enable, reg_test_cdns_dsiTx_disable},  //FIXME: unavailable on fpga
    {"u0_plda_pcie"         , 0x2b000000 + 0x800, 0xfffff000, u0_plda_pcie_enable, u0_plda_pcie_disable},
    {"u1_plda_pcie"         , 0x2c000000 + 0x800, 0xfffff000, u1_plda_pcie_enable, u1_plda_pcie_disable},
};

int reg_test_main(void)
{
    int err = 0;
    err = run_mod_reg_tests(0, reg_configs, ARRAY_SIZE(reg_configs), 0, 0);
    printf("run_mod_reg_tests:%s\n", ((err == 0) ? "PASS" : "FAILED"));

    return err;
}

DEFINE_MODULE_TESTCASES_BEGIN(regtest)
#if 1
    {"mod reg test", NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, reg_configs, ARRAY_SIZE(reg_configs), 0, 0},
#else
    // {"u0_dw_uart          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, reg_configs[REG_TEST_u0_dw_uart          ], 1, 0, 0},
    {"u1_dw_uart          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_dw_uart          ], 1, 0, 0},
    {"u2_dw_uart          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u2_dw_uart          ], 1, 0, 0},
    {"u0_dw_i2c           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_dw_i2c           ], 1, 0, 0},
    {"u1_dw_i2c           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_dw_i2c           ], 1, 0, 0},
    {"u2_dw_i2c           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u2_dw_i2c           ], 1, 0, 0},
    {"u0_ssp_spi          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_ssp_spi          ], 1, 0, 0},
    {"u1_ssp_spi          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_ssp_spi          ], 1, 0, 0},
    {"u2_ssp_spi          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u2_ssp_spi          ], 1, 0, 0},
    {"u0_tdm16slot        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_tdm16slot        ], 1, 0, 0},
    {"u0_cdns_spdif       ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_cdns_spdif       ], 1, 0, 0},
    {"u0_pwmdac           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_pwmdac           ], 1, 0, 0},
    {"u0_pdm_4mic         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_pdm_4mic         ], 1, 0, 0},
    {"u0_i2srx_3ch        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_i2srx_3ch        ], 1, 0, 0},
    {"u0_cdn_usb          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_cdn_usb          ], 1, 0, 0},
    {"u3_dw_uart          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u3_dw_uart          ], 1, 0, 0},
    {"u4_dw_uart          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u4_dw_uart          ], 1, 0, 0},
    {"u5_dw_uart          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u5_dw_uart          ], 1, 0, 0},
    {"u3_dw_i2c           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u3_dw_i2c           ], 1, 0, 0},
    {"u4_dw_i2c           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u4_dw_i2c           ], 1, 0, 0},
    {"u5_dw_i2c           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u5_dw_i2c           ], 1, 0, 0},
    {"u6_dw_i2c           ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u6_dw_i2c           ], 1, 0, 0},
    {"u3_ssp_spi          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u3_ssp_spi          ], 1, 0, 0},
    {"u4_ssp_spi          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u4_ssp_spi          ], 1, 0, 0},
    {"u5_ssp_spi          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u5_ssp_spi          ], 1, 0, 0},
    {"u6_ssp_spi          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u6_ssp_spi          ], 1, 0, 0},
    {"u0_i2stx_4ch        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_i2stx_4ch        ], 1, 0, 0},
    {"u1_i2stx_4ch        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_i2stx_4ch        ], 1, 0, 0},
    {"u0_pwm_8ch          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_pwm_8ch          ], 1, 0, 0},
    {"u0_temp_sensor      ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_temp_sensor      ], 1, 0, 0},
    {"u0_cdns_qspi        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_cdns_qspi        ], 1, 0, 0},
    {"sys_iomux_cfg       ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_sys_iomux_cfg       ], 1, 0, 0},
    {"u0_si5_timer        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_si5_timer        ], 1, 0, 0},
    {"u0_mailbox          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_mailbox          ], 1, 0, 0},
    {"u0_dskit_wdt        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_dskit_wdt        ], 1, 0, 0},
    {"u0_int_ctrl         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_int_ctrl         ], 1, 0, 0},
    {"u0_CODAJ12          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_CODAJ12          ], 1, 0, 0},
    {"u0_WAVE511          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_WAVE511          ], 1, 0, 0},
    {"u0_WAVE420L         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_WAVE420L         ], 1, 0, 0},
    {"u0_can_ctrl         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_can_ctrl         ], 1, 0, 0},
    {"u1_can_ctrl         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_can_ctrl         ], 1, 0, 0},
    {"u0_sec_algo         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_sec_algo         ], 1, 0, 0},
    {"u0_sec_dmac         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_sec_dmac         ], 1, 0, 0},
    {"u0_sec_trng         ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_sec_trng         ], 1, 0, 0},
    {"u0_dw_sdio          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_dw_sdio          ], 1, 0, 0},
    {"u1_dw_sdio          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_dw_sdio          ], 1, 0, 0},
    {"u0_dw_gmac_axi64    ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_dw_gmac_axi64    ], 1, 0, 0},
    {"u1_dw_gmac_axi64    ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_dw_gmac_axi64    ], 1, 0, 0},
    {"u0_dw_dma1p_8ch_56hs",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_dw_dma1p_8ch_56hs], 1, 0, 0},
    {"aon_iomux_cfg       ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_aon_iomux_cfg       ], 1, 0, 0},
    {"u0_pmu              ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_pmu              ], 1, 0, 0},
    {"u0_rtc_hms          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_rtc_hms          ], 1, 0, 0},
    {"u0_otpc             ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_otpc             ], 1, 0, 0},
    {"u0_img_gpu          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_img_gpu          ], 1, 0, 0},
    {"u0_mipi_csi_ctrl    ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_mipi_csi_ctrl    ], 1, 0, 0},
    {"u0_vin              ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_vin              ], 1, 0, 0},
    {"u0_isp              ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_isp              ], 1, 0, 0},
    {"u0_plda_pcie        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_plda_pcie        ], 1, 0, 0},
    {"u1_plda_pcie        ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u1_plda_pcie        ], 1, 0, 0},
    {"u0_dc8200_ahb0      ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_dc8200_ahb0      ], 1, 0, 0},
    {"u0_dc8200_ahb1      ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_dc8200_ahb1      ], 1, 0, 0},
    // {"u0_hdmi_tx          ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_hdmi_tx          ], 1, 0, 0},
    // {"u0_cdns_dsiTx       ",  NULL, NULL, 0, 0, 0, 0, run_mod_reg_tests, &reg_configs[REG_TEST_u0_cdns_dsiTx       ], 1, 0, 0},
#endif
DEFINE_MODULE_TESTCASES_END(regtest)

REGISTER_MODULE_TESTSUITE(regtest,reg)

/************ reg test bring-up interface ************/
int bring_up_mod_reg_test()
{
    int ret = 0;
    mod_reg_test_t *mod = reg_configs;
    int mod_nums = ARRAY_SIZE(reg_configs);
    uint32_t *custom_pattern = NULL;
    uint32_t custom_pattern_num = 0;

    for (int i = 0; i < mod_nums; i++) {
        ret += mod_reg_test(&mod[i], custom_pattern, custom_pattern_num);
    }

    printf("Module register test %s!\n\n", (ret == 0) ? "PASS" : "FAILED");
}

#endif /* HAL_REG_TESTS_ENABLED */

