#ifdef VRFM_SIM
#include "common.h"
#endif
#include "func_cfg.h"


//switch all PAD func
void set_sys_iomux_all_pad_func(uint32_t func){
	if (func==0){
		set_pad_gmac1_mdc_func(0);
		set_pad_gmac1_mdio_func(0);
		set_pad_gmac1_rxc_func(0);
		set_pad_gmac1_rxd0_func(0);
		set_pad_gmac1_rxd1_func(0);
		set_pad_gmac1_rxd2_func(0);
		set_pad_gmac1_rxd3_func(0);
		set_pad_gmac1_rxdv_func(0);
		set_pad_gmac1_txc_func(0);
		set_pad_gmac1_txd0_func(0);
		set_pad_gmac1_txd1_func(0);
		set_pad_gmac1_txd2_func(0);
		set_pad_gmac1_txd3_func(0);
		set_pad_gmac1_txen_func(0);
		set_pad_gpio0_func(0);
		set_pad_gpio1_func(0);
		set_pad_gpio10_func(0);
		set_pad_gpio11_func(0);
		set_pad_gpio12_func(0);
		set_pad_gpio13_func(0);
		set_pad_gpio14_func(0);
		set_pad_gpio15_func(0);
		set_pad_gpio16_func(0);
		set_pad_gpio17_func(0);
		set_pad_gpio18_func(0);
		set_pad_gpio19_func(0);
		set_pad_gpio2_func(0);
		set_pad_gpio20_func(0);
		set_pad_gpio21_func(0);
		set_pad_gpio22_func(0);
		set_pad_gpio23_func(0);
		set_pad_gpio24_func(0);
		set_pad_gpio25_func(0);
		set_pad_gpio26_func(0);
		set_pad_gpio27_func(0);
		set_pad_gpio28_func(0);
		set_pad_gpio29_func(0);
		set_pad_gpio3_func(0);
		set_pad_gpio30_func(0);
		set_pad_gpio31_func(0);
		set_pad_gpio32_func(0);
		set_pad_gpio33_func(0);
		set_pad_gpio34_func(0);
		set_pad_gpio35_func(0);
		set_pad_gpio36_func(0);
		set_pad_gpio37_func(0);
		set_pad_gpio38_func(0);
		set_pad_gpio39_func(0);
		set_pad_gpio4_func(0);
		set_pad_gpio40_func(0);
		set_pad_gpio41_func(0);
		set_pad_gpio42_func(0);
		set_pad_gpio43_func(0);
		set_pad_gpio44_func(0);
		set_pad_gpio45_func(0);
		set_pad_gpio46_func(0);
		set_pad_gpio47_func(0);
		set_pad_gpio48_func(0);
		set_pad_gpio49_func(0);
		set_pad_gpio5_func(0);
		set_pad_gpio50_func(0);
		set_pad_gpio51_func(0);
		set_pad_gpio52_func(0);
		set_pad_gpio53_func(0);
		set_pad_gpio54_func(0);
		set_pad_gpio55_func(0);
		set_pad_gpio56_func(0);
		set_pad_gpio57_func(0);
		set_pad_gpio58_func(0);
		set_pad_gpio59_func(0);
		set_pad_gpio6_func(0);
		set_pad_gpio60_func(0);
		set_pad_gpio61_func(0);
		set_pad_gpio62_func(0);
		set_pad_gpio63_func(0);
		set_pad_gpio7_func(0);
		set_pad_gpio8_func(0);
		set_pad_gpio9_func(0);
		set_pad_qspi_csn0_func(0);
		set_pad_qspi_data0_func(0);
		set_pad_qspi_data1_func(0);
		set_pad_qspi_data2_func(0);
		set_pad_qspi_data3_func(0);
		set_pad_qspi_sclk_func(0);
		set_pad_sd0_clk_func(0);
		set_pad_sd0_cmd_func(0);
		set_pad_sd0_data0_func(0);
		set_pad_sd0_data1_func(0);
		set_pad_sd0_data2_func(0);
		set_pad_sd0_data3_func(0);
		set_pad_sd0_data4_func(0);
		set_pad_sd0_data5_func(0);
		set_pad_sd0_data6_func(0);
		set_pad_sd0_data7_func(0);
		set_pad_sd0_strb_func(0);
	}else if (func==1){
		set_pad_gmac1_mdc_func(1);
		set_pad_gmac1_mdio_func(1);
		set_pad_gmac1_rxc_func(1);
		set_pad_gmac1_rxd0_func(1);
		set_pad_gmac1_rxd1_func(1);
		set_pad_gmac1_rxd2_func(1);
		set_pad_gmac1_rxd3_func(1);
		set_pad_gmac1_rxdv_func(1);
		set_pad_gmac1_txc_func(1);
		set_pad_gmac1_txd0_func(1);
		set_pad_gmac1_txd1_func(1);
		set_pad_gmac1_txd2_func(1);
		set_pad_gmac1_txd3_func(1);
		set_pad_gmac1_txen_func(1);
		set_pad_gpio0_func(1);
		set_pad_gpio1_func(1);
		set_pad_gpio10_func(1);
		set_pad_gpio11_func(1);
		set_pad_gpio12_func(1);
		set_pad_gpio13_func(1);
		set_pad_gpio14_func(1);
		set_pad_gpio15_func(1);
		set_pad_gpio16_func(1);
		set_pad_gpio17_func(1);
		set_pad_gpio18_func(1);
		set_pad_gpio19_func(1);
		set_pad_gpio2_func(1);
		set_pad_gpio20_func(1);
		set_pad_gpio21_func(1);
		set_pad_gpio22_func(1);
		set_pad_gpio23_func(1);
		set_pad_gpio24_func(1);
		set_pad_gpio25_func(1);
		set_pad_gpio26_func(1);
		set_pad_gpio27_func(1);
		set_pad_gpio28_func(1);
		set_pad_gpio29_func(1);
		set_pad_gpio3_func(1);
		set_pad_gpio30_func(1);
		set_pad_gpio31_func(1);
		set_pad_gpio32_func(1);
		set_pad_gpio33_func(1);
		set_pad_gpio34_func(1);
		set_pad_gpio35_func(1);
		set_pad_gpio36_func(1);
		set_pad_gpio37_func(1);
		set_pad_gpio38_func(1);
		set_pad_gpio39_func(1);
		set_pad_gpio4_func(1);
		set_pad_gpio40_func(1);
		set_pad_gpio41_func(1);
		set_pad_gpio42_func(1);
		set_pad_gpio43_func(1);
		set_pad_gpio44_func(1);
		set_pad_gpio45_func(1);
		set_pad_gpio46_func(1);
		set_pad_gpio47_func(1);
		set_pad_gpio48_func(1);
		set_pad_gpio49_func(1);
		set_pad_gpio5_func(1);
		set_pad_gpio50_func(1);
		set_pad_gpio51_func(1);
		set_pad_gpio52_func(1);
		set_pad_gpio53_func(1);
		set_pad_gpio54_func(1);
		set_pad_gpio55_func(1);
		set_pad_gpio56_func(1);
		set_pad_gpio57_func(1);
		set_pad_gpio58_func(1);
		set_pad_gpio59_func(1);
		set_pad_gpio6_func(1);
		set_pad_gpio60_func(1);
		set_pad_gpio61_func(1);
		set_pad_gpio62_func(1);
		set_pad_gpio63_func(1);
		set_pad_gpio7_func(1);
		set_pad_gpio8_func(1);
		set_pad_gpio9_func(1);
		set_pad_qspi_csn0_func(1);
		set_pad_qspi_data0_func(1);
		set_pad_qspi_data1_func(1);
		set_pad_qspi_data2_func(1);
		set_pad_qspi_data3_func(1);
		set_pad_qspi_sclk_func(1);
		set_pad_sd0_clk_func(1);
		set_pad_sd0_cmd_func(1);
		set_pad_sd0_data0_func(1);
		set_pad_sd0_data1_func(1);
		set_pad_sd0_data2_func(1);
		set_pad_sd0_data3_func(1);
		set_pad_sd0_data4_func(1);
		set_pad_sd0_data5_func(1);
		set_pad_sd0_data6_func(1);
		set_pad_sd0_data7_func(1);
		set_pad_sd0_strb_func(1);
	}else if (func==2){
		set_pad_gmac1_mdc_func(2);
		set_pad_gmac1_mdio_func(2);
		set_pad_gmac1_rxc_func(2);
		set_pad_gmac1_rxd0_func(2);
		set_pad_gmac1_rxd1_func(2);
		set_pad_gmac1_rxd2_func(2);
		set_pad_gmac1_rxd3_func(2);
		set_pad_gmac1_rxdv_func(2);
		set_pad_gmac1_txc_func(2);
		set_pad_gmac1_txd0_func(2);
		set_pad_gmac1_txd1_func(2);
		set_pad_gmac1_txd2_func(2);
		set_pad_gmac1_txd3_func(2);
		set_pad_gmac1_txen_func(2);
		set_pad_gpio0_func(2);
		set_pad_gpio1_func(2);
		set_pad_gpio10_func(2);
		set_pad_gpio11_func(2);
		set_pad_gpio12_func(2);
		set_pad_gpio13_func(2);
		set_pad_gpio14_func(2);
		set_pad_gpio15_func(2);
		set_pad_gpio16_func(2);
		set_pad_gpio17_func(2);
		set_pad_gpio18_func(2);
		set_pad_gpio19_func(2);
		set_pad_gpio2_func(2);
		set_pad_gpio20_func(2);
		set_pad_gpio21_func(2);
		set_pad_gpio22_func(2);
		set_pad_gpio23_func(2);
		set_pad_gpio24_func(2);
		set_pad_gpio25_func(2);
		set_pad_gpio26_func(2);
		set_pad_gpio27_func(2);
		set_pad_gpio28_func(2);
		set_pad_gpio29_func(2);
		set_pad_gpio3_func(2);
		set_pad_gpio30_func(2);
		set_pad_gpio31_func(2);
		set_pad_gpio32_func(2);
		set_pad_gpio33_func(2);
		set_pad_gpio34_func(2);
		set_pad_gpio35_func(2);
		set_pad_gpio36_func(2);
		set_pad_gpio37_func(2);
		set_pad_gpio38_func(2);
		set_pad_gpio39_func(2);
		set_pad_gpio4_func(2);
		set_pad_gpio40_func(2);
		set_pad_gpio41_func(2);
		set_pad_gpio42_func(2);
		set_pad_gpio43_func(2);
		set_pad_gpio44_func(2);
		set_pad_gpio45_func(2);
		set_pad_gpio46_func(2);
		set_pad_gpio47_func(2);
		set_pad_gpio48_func(2);
		set_pad_gpio49_func(2);
		set_pad_gpio5_func(2);
		set_pad_gpio50_func(2);
		set_pad_gpio51_func(2);
		set_pad_gpio52_func(2);
		set_pad_gpio53_func(2);
		set_pad_gpio54_func(2);
		set_pad_gpio55_func(2);
		set_pad_gpio56_func(2);
		set_pad_gpio57_func(2);
		set_pad_gpio58_func(2);
		set_pad_gpio59_func(2);
		set_pad_gpio6_func(2);
		set_pad_gpio60_func(2);
		set_pad_gpio61_func(2);
		set_pad_gpio62_func(2);
		set_pad_gpio63_func(2);
		set_pad_gpio7_func(2);
		set_pad_gpio8_func(2);
		set_pad_gpio9_func(2);
		set_pad_qspi_csn0_func(2);
		set_pad_qspi_data0_func(2);
		set_pad_qspi_data1_func(2);
		set_pad_qspi_data2_func(2);
		set_pad_qspi_data3_func(2);
		set_pad_qspi_sclk_func(2);
		set_pad_sd0_clk_func(2);
		set_pad_sd0_cmd_func(2);
		set_pad_sd0_data0_func(2);
		set_pad_sd0_data1_func(2);
		set_pad_sd0_data2_func(2);
		set_pad_sd0_data3_func(2);
		set_pad_sd0_data4_func(2);
		set_pad_sd0_data5_func(2);
		set_pad_sd0_data6_func(2);
		set_pad_sd0_data7_func(2);
		set_pad_sd0_strb_func(2);
	}else if (func==3){
		set_pad_gmac1_mdc_func(3);
		set_pad_gmac1_mdio_func(3);
		set_pad_gmac1_rxc_func(3);
		set_pad_gmac1_rxd0_func(3);
		set_pad_gmac1_rxd1_func(3);
		set_pad_gmac1_rxd2_func(3);
		set_pad_gmac1_rxd3_func(3);
		set_pad_gmac1_rxdv_func(3);
		set_pad_gmac1_txc_func(3);
		set_pad_gmac1_txd0_func(3);
		set_pad_gmac1_txd1_func(3);
		set_pad_gmac1_txd2_func(3);
		set_pad_gmac1_txd3_func(3);
		set_pad_gmac1_txen_func(3);
		set_pad_gpio0_func(3);
		set_pad_gpio1_func(3);
		set_pad_gpio10_func(3);
		set_pad_gpio11_func(3);
		set_pad_gpio12_func(3);
		set_pad_gpio13_func(3);
		set_pad_gpio14_func(3);
		set_pad_gpio15_func(3);
		set_pad_gpio16_func(3);
		set_pad_gpio17_func(3);
		set_pad_gpio18_func(3);
		set_pad_gpio19_func(3);
		set_pad_gpio2_func(3);
		set_pad_gpio20_func(3);
		set_pad_gpio21_func(3);
		set_pad_gpio22_func(3);
		set_pad_gpio23_func(3);
		set_pad_gpio24_func(3);
		set_pad_gpio25_func(3);
		set_pad_gpio26_func(3);
		set_pad_gpio27_func(3);
		set_pad_gpio28_func(3);
		set_pad_gpio29_func(3);
		set_pad_gpio3_func(3);
		set_pad_gpio30_func(3);
		set_pad_gpio31_func(3);
		set_pad_gpio32_func(3);
		set_pad_gpio33_func(3);
		set_pad_gpio34_func(3);
		set_pad_gpio35_func(3);
		set_pad_gpio36_func(3);
		set_pad_gpio37_func(3);
		set_pad_gpio38_func(3);
		set_pad_gpio39_func(3);
		set_pad_gpio4_func(3);
		set_pad_gpio40_func(3);
		set_pad_gpio41_func(3);
		set_pad_gpio42_func(3);
		set_pad_gpio43_func(3);
		set_pad_gpio44_func(3);
		set_pad_gpio45_func(3);
		set_pad_gpio46_func(3);
		set_pad_gpio47_func(3);
		set_pad_gpio48_func(3);
		set_pad_gpio49_func(3);
		set_pad_gpio5_func(3);
		set_pad_gpio50_func(3);
		set_pad_gpio51_func(3);
		set_pad_gpio52_func(3);
		set_pad_gpio53_func(3);
		set_pad_gpio54_func(3);
		set_pad_gpio55_func(3);
		set_pad_gpio56_func(3);
		set_pad_gpio57_func(3);
		set_pad_gpio58_func(3);
		set_pad_gpio59_func(3);
		set_pad_gpio6_func(3);
		set_pad_gpio60_func(3);
		set_pad_gpio61_func(3);
		set_pad_gpio62_func(3);
		set_pad_gpio63_func(3);
		set_pad_gpio7_func(3);
		set_pad_gpio8_func(3);
		set_pad_gpio9_func(3);
		set_pad_qspi_csn0_func(3);
		set_pad_qspi_data0_func(3);
		set_pad_qspi_data1_func(3);
		set_pad_qspi_data2_func(3);
		set_pad_qspi_data3_func(3);
		set_pad_qspi_sclk_func(3);
		set_pad_sd0_clk_func(3);
		set_pad_sd0_cmd_func(3);
		set_pad_sd0_data0_func(3);
		set_pad_sd0_data1_func(3);
		set_pad_sd0_data2_func(3);
		set_pad_sd0_data3_func(3);
		set_pad_sd0_data4_func(3);
		set_pad_sd0_data5_func(3);
		set_pad_sd0_data6_func(3);
		set_pad_sd0_data7_func(3);
		set_pad_sd0_strb_func(3);
	}
}

//switch PAD_GPIO func by pad_gpio_idx and func_idx
void set_sys_iomux_gpio_func(uint32_t gpio_num, uint32_t func){
	if (gpio_num==0){
		if (func==0){
			SET_PADCFG_PAD_GPIO0_IE(1);
			//SET_PAD_GPIO0_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==1){
		if (func==0){
			SET_PADCFG_PAD_GPIO1_IE(1);
			//SET_PAD_GPIO1_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==10){
		if (func==0){
			SET_PADCFG_PAD_GPIO10_IE(1);
			SET_PAD_GPIO10_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO10_IE(0);
			SET_PAD_GPIO10_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO10_IE(1);
			SET_PAD_GPIO10_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C1_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==11){
		if (func==0){
			SET_PADCFG_PAD_GPIO11_IE(1);
			SET_PAD_GPIO11_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO11_IE(0);
			SET_PAD_GPIO11_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO11_IE(1);
			SET_PAD_GPIO11_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C2_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==12){
		if (func==0){
			SET_PADCFG_PAD_GPIO12_IE(1);
			SET_PAD_GPIO12_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO12_IE(0);
			SET_PAD_GPIO12_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO12_IE(1);
			SET_PAD_GPIO12_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C3_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==13){
		if (func==0){
			SET_PADCFG_PAD_GPIO13_IE(1);
			SET_PAD_GPIO13_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO13_IE(0);
			SET_PAD_GPIO13_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO13_IE(1);
			SET_PAD_GPIO13_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C4_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==14){
		if (func==0){
			SET_PADCFG_PAD_GPIO14_IE(1);
			SET_PAD_GPIO14_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO14_IE(0);
			SET_PAD_GPIO14_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO14_IE(1);
			SET_PAD_GPIO14_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C5_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==15){
		if (func==0){
			SET_PADCFG_PAD_GPIO15_IE(1);
			SET_PAD_GPIO15_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO15_IE(0);
			SET_PAD_GPIO15_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO15_IE(1);
			SET_PAD_GPIO15_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C6_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==16){
		if (func==0){
			SET_PADCFG_PAD_GPIO16_IE(1);
			SET_PAD_GPIO16_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO16_IE(0);
			SET_PAD_GPIO16_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO16_IE(1);
			SET_PAD_GPIO16_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C7_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==17){
		if (func==0){
			SET_PADCFG_PAD_GPIO17_IE(1);
			SET_PAD_GPIO17_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO17_IE(0);
			SET_PAD_GPIO17_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO17_IE(1);
			SET_PAD_GPIO17_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C8_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==18){
		if (func==0){
			SET_PADCFG_PAD_GPIO18_IE(1);
			SET_PAD_GPIO18_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO18_IE(0);
			SET_PAD_GPIO18_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO18_IE(1);
			SET_PAD_GPIO18_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C9_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==19){
		if (func==0){
			SET_PADCFG_PAD_GPIO19_IE(1);
			SET_PAD_GPIO19_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO19_IE(0);
			SET_PAD_GPIO19_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO19_IE(1);
			SET_PAD_GPIO19_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C10_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==2){
		if (func==0){
			SET_PADCFG_PAD_GPIO2_IE(1);
			//SET_PAD_GPIO2_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==20){
		if (func==0){
			SET_PADCFG_PAD_GPIO20_IE(1);
			SET_PAD_GPIO20_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO20_IE(0);
			SET_PAD_GPIO20_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO20_IE(1);
			SET_PAD_GPIO20_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C11_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==21){
		if (func==0){
			SET_PADCFG_PAD_GPIO21_IE(1);
			SET_PAD_GPIO21_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO21_IE(0);
			SET_PAD_GPIO21_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO21_IE(1);
			SET_PAD_GPIO21_FUNC_SEL(2);
			SET_U0_SYS_CRG_DVP_CLK_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==22){
		if (func==0){
			SET_PADCFG_PAD_GPIO22_IE(1);
			SET_PAD_GPIO22_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO22_IE(0);
			SET_PAD_GPIO22_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO22_IE(1);
			SET_PAD_GPIO22_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_VVALID_C_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==23){
		if (func==0){
			SET_PADCFG_PAD_GPIO23_IE(1);
			SET_PAD_GPIO23_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO23_IE(0);
			SET_PAD_GPIO23_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO23_IE(1);
			SET_PAD_GPIO23_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_HVALID_C_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==24){
		if (func==0){
			SET_PADCFG_PAD_GPIO24_IE(1);
			SET_PAD_GPIO24_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO24_IE(0);
			SET_PAD_GPIO24_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO24_IE(1);
			SET_PAD_GPIO24_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C0_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==25){
		if (func==0){
			SET_PADCFG_PAD_GPIO25_IE(1);
			SET_PAD_GPIO25_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO25_IE(0);
			SET_PAD_GPIO25_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO25_IE(1);
			SET_PAD_GPIO25_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C1_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==26){
		if (func==0){
			SET_PADCFG_PAD_GPIO26_IE(1);
			SET_PAD_GPIO26_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO26_IE(0);
			SET_PAD_GPIO26_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO26_IE(1);
			SET_PAD_GPIO26_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C2_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==27){
		if (func==0){
			SET_PADCFG_PAD_GPIO27_IE(1);
			SET_PAD_GPIO27_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO27_IE(0);
			SET_PAD_GPIO27_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO27_IE(1);
			SET_PAD_GPIO27_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C3_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==28){
		if (func==0){
			SET_PADCFG_PAD_GPIO28_IE(1);
			SET_PAD_GPIO28_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO28_IE(0);
			SET_PAD_GPIO28_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO28_IE(1);
			SET_PAD_GPIO28_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C4_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==29){
		if (func==0){
			SET_PADCFG_PAD_GPIO29_IE(1);
			SET_PAD_GPIO29_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO29_IE(0);
			SET_PAD_GPIO29_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO29_IE(1);
			SET_PAD_GPIO29_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C5_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==3){
		if (func==0){
			SET_PADCFG_PAD_GPIO3_IE(1);
			//SET_PAD_GPIO3_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==30){
		if (func==0){
			SET_PADCFG_PAD_GPIO30_IE(1);
			SET_PAD_GPIO30_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO30_IE(0);
			SET_PAD_GPIO30_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO30_IE(1);
			SET_PAD_GPIO30_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C6_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==31){
		if (func==0){
			SET_PADCFG_PAD_GPIO31_IE(1);
			SET_PAD_GPIO31_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO31_IE(0);
			SET_PAD_GPIO31_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO31_IE(1);
			SET_PAD_GPIO31_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C7_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==32){
		if (func==0){
			SET_PADCFG_PAD_GPIO32_IE(1);
			SET_PAD_GPIO32_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO32_IE(0);
			SET_PAD_GPIO32_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO32_IE(1);
			SET_PAD_GPIO32_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C8_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==33){
		if (func==0){
			SET_PADCFG_PAD_GPIO33_IE(1);
			SET_PAD_GPIO33_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO33_IE(0);
			SET_PAD_GPIO33_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO33_IE(1);
			SET_PAD_GPIO33_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C9_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==34){
		if (func==0){
			SET_PADCFG_PAD_GPIO34_IE(1);
			SET_PAD_GPIO34_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO34_IE(0);
			SET_PAD_GPIO34_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO34_IE(1);
			SET_PAD_GPIO34_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C10_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==35){
		if (func==0){
			SET_PADCFG_PAD_GPIO35_IE(1);
			SET_PAD_GPIO35_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
			SET_PADCFG_PAD_GPIO35_IE(1);
			SET_PAD_GPIO35_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C11_FUNC_SEL(1);
		}else if (func==3){
		}
	}else if (gpio_num==36){
		if (func==0){
			SET_PADCFG_PAD_GPIO36_IE(1);
			SET_PAD_GPIO36_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO36_IE(0);
			SET_PAD_GPIO36_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO36_IE(1);
			SET_PAD_GPIO36_FUNC_SEL(2);
			SET_U0_SYS_CRG_DVP_CLK_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==37){
		if (func==0){
			SET_PADCFG_PAD_GPIO37_IE(1);
			SET_PAD_GPIO37_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO37_IE(0);
			SET_PAD_GPIO37_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO37_IE(1);
			SET_PAD_GPIO37_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_VVALID_C_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==38){
		if (func==0){
			SET_PADCFG_PAD_GPIO38_IE(1);
			SET_PAD_GPIO38_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO38_IE(0);
			SET_PAD_GPIO38_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO38_IE(1);
			SET_PAD_GPIO38_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_HVALID_C_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==39){
		if (func==0){
			SET_PADCFG_PAD_GPIO39_IE(1);
			SET_PAD_GPIO39_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO39_IE(0);
			SET_PAD_GPIO39_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO39_IE(1);
			SET_PAD_GPIO39_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C0_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==4){
		if (func==0){
			SET_PADCFG_PAD_GPIO4_IE(1);
			//SET_PAD_GPIO4_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==40){
		if (func==0){
			SET_PADCFG_PAD_GPIO40_IE(1);
			SET_PAD_GPIO40_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO40_IE(0);
			SET_PAD_GPIO40_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO40_IE(1);
			SET_PAD_GPIO40_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C1_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==41){
		if (func==0){
			SET_PADCFG_PAD_GPIO41_IE(1);
			SET_PAD_GPIO41_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO41_IE(0);
			SET_PAD_GPIO41_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO41_IE(1);
			SET_PAD_GPIO41_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C2_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==42){
		if (func==0){
			SET_PADCFG_PAD_GPIO42_IE(1);
			SET_PAD_GPIO42_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO42_IE(0);
			SET_PAD_GPIO42_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO42_IE(1);
			SET_PAD_GPIO42_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C3_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==43){
		if (func==0){
			SET_PADCFG_PAD_GPIO43_IE(1);
			SET_PAD_GPIO43_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO43_IE(0);
			SET_PAD_GPIO43_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO43_IE(1);
			SET_PAD_GPIO43_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C4_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==44){
		if (func==0){
			SET_PADCFG_PAD_GPIO44_IE(1);
			SET_PAD_GPIO44_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO44_IE(0);
			SET_PAD_GPIO44_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO44_IE(1);
			SET_PAD_GPIO44_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C5_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==45){
		if (func==0){
			SET_PADCFG_PAD_GPIO45_IE(1);
			SET_PAD_GPIO45_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO45_IE(0);
			SET_PAD_GPIO45_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO45_IE(1);
			SET_PAD_GPIO45_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C6_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==46){
		if (func==0){
			SET_PADCFG_PAD_GPIO46_IE(1);
			SET_PAD_GPIO46_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO46_IE(0);
			SET_PAD_GPIO46_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO46_IE(1);
			SET_PAD_GPIO46_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C7_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==47){
		if (func==0){
			SET_PADCFG_PAD_GPIO47_IE(1);
			SET_PAD_GPIO47_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO47_IE(0);
			SET_PAD_GPIO47_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO47_IE(1);
			SET_PAD_GPIO47_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C8_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==48){
		if (func==0){
			SET_PADCFG_PAD_GPIO48_IE(1);
			SET_PAD_GPIO48_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO48_IE(0);
			SET_PAD_GPIO48_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO48_IE(1);
			SET_PAD_GPIO48_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C9_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==49){
		if (func==0){
			SET_PADCFG_PAD_GPIO49_IE(1);
			SET_PAD_GPIO49_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO49_IE(0);
			SET_PAD_GPIO49_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO49_IE(1);
			SET_PAD_GPIO49_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C10_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==5){
		if (func==0){
			SET_PADCFG_PAD_GPIO5_IE(1);
			//SET_PAD_GPIO5_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==50){
		if (func==0){
			SET_PADCFG_PAD_GPIO50_IE(1);
			SET_PAD_GPIO50_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO50_IE(0);
			SET_PAD_GPIO50_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO50_IE(1);
			SET_PAD_GPIO50_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C11_FUNC_SEL(2);
		}else if (func==3){
		}
	}else if (gpio_num==51){
		if (func==0){
			SET_PADCFG_PAD_GPIO51_IE(1);
			SET_PAD_GPIO51_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO51_IE(0);
			SET_PAD_GPIO51_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==52){
		if (func==0){
			SET_PADCFG_PAD_GPIO52_IE(1);
			SET_PAD_GPIO52_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO52_IE(0);
			SET_PAD_GPIO52_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==53){
		if (func==0){
			SET_PADCFG_PAD_GPIO53_IE(1);
			SET_PAD_GPIO53_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO53_IE(0);
			SET_PAD_GPIO53_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==54){
		if (func==0){
			SET_PADCFG_PAD_GPIO54_IE(1);
			SET_PAD_GPIO54_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO54_IE(0);
			SET_PAD_GPIO54_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==55){
		if (func==0){
			SET_PADCFG_PAD_GPIO55_IE(1);
			SET_PAD_GPIO55_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO55_IE(0);
			SET_PAD_GPIO55_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO55_IE(0);
			SET_PAD_GPIO55_FUNC_SEL(3);
		}
	}else if (gpio_num==56){
		if (func==0){
			SET_PADCFG_PAD_GPIO56_IE(1);
			SET_PAD_GPIO56_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO56_IE(0);
			SET_PAD_GPIO56_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO56_IE(0);
			SET_PAD_GPIO56_FUNC_SEL(3);
		}
	}else if (gpio_num==57){
		if (func==0){
			SET_PADCFG_PAD_GPIO57_IE(1);
			SET_PAD_GPIO57_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO57_IE(0);
			SET_PAD_GPIO57_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO57_IE(0);
			SET_PAD_GPIO57_FUNC_SEL(3);
		}
	}else if (gpio_num==58){
		if (func==0){
			SET_PADCFG_PAD_GPIO58_IE(1);
			SET_PAD_GPIO58_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO58_IE(0);
			SET_PAD_GPIO58_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO58_IE(0);
			SET_PAD_GPIO58_FUNC_SEL(3);
		}
	}else if (gpio_num==59){
		if (func==0){
			SET_PADCFG_PAD_GPIO59_IE(1);
			SET_PAD_GPIO59_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO59_IE(0);
			SET_PAD_GPIO59_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO59_IE(0);
			SET_PAD_GPIO59_FUNC_SEL(3);
		}
	}else if (gpio_num==6){
		if (func==0){
			SET_PADCFG_PAD_GPIO6_IE(1);
			SET_PAD_GPIO6_FUNC_SEL(0);
		}else if (func==1){
		}else if (func==2){
			SET_PADCFG_PAD_GPIO6_IE(1);
			SET_PAD_GPIO6_FUNC_SEL(2);
			SET_U0_SYS_CRG_DVP_CLK_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==60){
		if (func==0){
			SET_PADCFG_PAD_GPIO60_IE(1);
			SET_PAD_GPIO60_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO60_IE(0);
			SET_PAD_GPIO60_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO60_IE(0);
			SET_PAD_GPIO60_FUNC_SEL(3);
		}
	}else if (gpio_num==61){
		if (func==0){
			SET_PADCFG_PAD_GPIO61_IE(1);
			SET_PAD_GPIO61_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO61_IE(0);
			SET_PAD_GPIO61_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO61_IE(0);
			SET_PAD_GPIO61_FUNC_SEL(3);
		}
	}else if (gpio_num==62){
		if (func==0){
			SET_PADCFG_PAD_GPIO62_IE(1);
			SET_PAD_GPIO62_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO62_IE(0);
			SET_PAD_GPIO62_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
			SET_PADCFG_PAD_GPIO62_IE(0);
			SET_PAD_GPIO62_FUNC_SEL(3);
		}
	}else if (gpio_num==63){
		if (func==0){
			SET_PADCFG_PAD_GPIO63_IE(1);
			SET_PAD_GPIO63_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO63_IE(0);
			SET_PAD_GPIO63_FUNC_SEL(1);
		}else if (func==2){
		}else if (func==3){
		}
	}else if (gpio_num==7){
		if (func==0){
			SET_PADCFG_PAD_GPIO7_IE(1);
			SET_PAD_GPIO7_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO7_IE(0);
			SET_PAD_GPIO7_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO7_IE(1);
			SET_PAD_GPIO7_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_VVALID_C_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==8){
		if (func==0){
			SET_PADCFG_PAD_GPIO8_IE(1);
			SET_PAD_GPIO8_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO8_IE(0);
			SET_PAD_GPIO8_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO8_IE(1);
			SET_PAD_GPIO8_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_HVALID_C_FUNC_SEL(0);
		}else if (func==3){
		}
	}else if (gpio_num==9){
		if (func==0){
			SET_PADCFG_PAD_GPIO9_IE(1);
			SET_PAD_GPIO9_FUNC_SEL(0);
		}else if (func==1){
			SET_PADCFG_PAD_GPIO9_IE(0);
			SET_PAD_GPIO9_FUNC_SEL(1);
		}else if (func==2){
			SET_PADCFG_PAD_GPIO9_IE(1);
			SET_PAD_GPIO9_FUNC_SEL(2);
			SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C0_FUNC_SEL(0);
		}else if (func==3){
		}
	}
}

//switch single PAD func
void set_pad_gmac1_mdc_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_MDC_IE(0);
		//SET_PAD_GMAC1_MDC_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_mdio_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_MDIO_IE(1);
		//SET_PAD_GMAC1_MDIO_FUNC_SEL(0);
		//SET_U1_DW_GMAC5_AXI64_GMII_MDI_I_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_rxc_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_RXC_IE(1);
		SET_PAD_GMAC1_RXC_FUNC_SEL(0);
		//SET_U0_SYS_CRG_CLK_GMAC1_RGMII_RX_FUNC_SEL(0);
	}else if (func==1){
		//SET_PADCFG_PAD_GMAC1_RXC_IE(1);
		SET_PAD_GMAC1_RXC_FUNC_SEL(1);
		//SET_U0_SYS_CRG_CLK_GMAC1_RMII_REF_FUNC_SEL(0);
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_rxd0_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_RXD0_IE(1);
		//SET_PAD_GMAC1_RXD0_FUNC_SEL(0);
		//SET_U1_DW_GMAC5_AXI64_PHY_RXD_I0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_rxd1_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_RXD1_IE(1);
		//SET_PAD_GMAC1_RXD1_FUNC_SEL(0);
		//SET_U1_DW_GMAC5_AXI64_PHY_RXD_I1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_rxd2_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_RXD2_IE(1);
		//SET_PAD_GMAC1_RXD2_FUNC_SEL(0);
		//SET_U1_DW_GMAC5_AXI64_PHY_RXD_I2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_rxd3_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_RXD3_IE(1);
		//SET_PAD_GMAC1_RXD3_FUNC_SEL(0);
		//SET_U1_DW_GMAC5_AXI64_PHY_RXD_I3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_rxdv_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_RXDV_IE(1);
		//SET_PAD_GMAC1_RXDV_FUNC_SEL(0);
		//SET_U1_DW_GMAC5_AXI64_PHY_RXDV_I_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_txc_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_TXC_IE(0);
		//SET_PAD_GMAC1_TXC_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_txd0_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_TXD0_IE(0);
		//SET_PAD_GMAC1_TXD0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_txd1_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_TXD1_IE(0);
		//SET_PAD_GMAC1_TXD1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_txd2_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_TXD2_IE(0);
		//SET_PAD_GMAC1_TXD2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_txd3_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_TXD3_IE(0);
		//SET_PAD_GMAC1_TXD3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac1_txen_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC1_TXEN_IE(0);
		//SET_PAD_GMAC1_TXEN_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio0_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO0_IE(1);
		//SET_PAD_GPIO0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio1_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO1_IE(1);
		//SET_PAD_GPIO1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio10_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO10_IE(1);
		SET_PAD_GPIO10_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO10_IE(0);
		SET_PAD_GPIO10_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO10_IE(1);
		SET_PAD_GPIO10_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C1_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio11_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO11_IE(1);
		SET_PAD_GPIO11_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO11_IE(0);
		SET_PAD_GPIO11_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO11_IE(1);
		SET_PAD_GPIO11_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C2_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio12_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO12_IE(1);
		SET_PAD_GPIO12_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO12_IE(0);
		SET_PAD_GPIO12_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO12_IE(1);
		SET_PAD_GPIO12_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C3_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio13_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO13_IE(1);
		SET_PAD_GPIO13_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO13_IE(0);
		SET_PAD_GPIO13_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO13_IE(1);
		SET_PAD_GPIO13_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C4_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio14_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO14_IE(1);
		SET_PAD_GPIO14_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO14_IE(0);
		SET_PAD_GPIO14_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO14_IE(1);
		SET_PAD_GPIO14_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C5_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio15_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO15_IE(1);
		SET_PAD_GPIO15_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO15_IE(0);
		SET_PAD_GPIO15_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO15_IE(1);
		SET_PAD_GPIO15_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C6_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio16_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO16_IE(1);
		SET_PAD_GPIO16_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO16_IE(0);
		SET_PAD_GPIO16_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO16_IE(1);
		SET_PAD_GPIO16_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C7_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio17_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO17_IE(1);
		SET_PAD_GPIO17_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO17_IE(0);
		SET_PAD_GPIO17_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO17_IE(1);
		SET_PAD_GPIO17_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C8_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio18_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO18_IE(1);
		SET_PAD_GPIO18_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO18_IE(0);
		SET_PAD_GPIO18_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO18_IE(1);
		SET_PAD_GPIO18_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C9_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio19_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO19_IE(1);
		SET_PAD_GPIO19_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO19_IE(0);
		SET_PAD_GPIO19_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO19_IE(1);
		SET_PAD_GPIO19_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C10_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio2_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO2_IE(1);
		//SET_PAD_GPIO2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio20_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO20_IE(1);
		SET_PAD_GPIO20_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO20_IE(0);
		SET_PAD_GPIO20_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO20_IE(1);
		SET_PAD_GPIO20_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C11_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio21_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO21_IE(1);
		SET_PAD_GPIO21_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO21_IE(0);
		SET_PAD_GPIO21_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO21_IE(1);
		SET_PAD_GPIO21_FUNC_SEL(2);
		SET_U0_SYS_CRG_DVP_CLK_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio22_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO22_IE(1);
		SET_PAD_GPIO22_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO22_IE(0);
		SET_PAD_GPIO22_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO22_IE(1);
		SET_PAD_GPIO22_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_VVALID_C_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio23_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO23_IE(1);
		SET_PAD_GPIO23_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO23_IE(0);
		SET_PAD_GPIO23_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO23_IE(1);
		SET_PAD_GPIO23_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_HVALID_C_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio24_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO24_IE(1);
		SET_PAD_GPIO24_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO24_IE(0);
		SET_PAD_GPIO24_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO24_IE(1);
		SET_PAD_GPIO24_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C0_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio25_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO25_IE(1);
		SET_PAD_GPIO25_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO25_IE(0);
		SET_PAD_GPIO25_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO25_IE(1);
		SET_PAD_GPIO25_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C1_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio26_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO26_IE(1);
		SET_PAD_GPIO26_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO26_IE(0);
		SET_PAD_GPIO26_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO26_IE(1);
		SET_PAD_GPIO26_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C2_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio27_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO27_IE(1);
		SET_PAD_GPIO27_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO27_IE(0);
		SET_PAD_GPIO27_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO27_IE(1);
		SET_PAD_GPIO27_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C3_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio28_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO28_IE(1);
		SET_PAD_GPIO28_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO28_IE(0);
		SET_PAD_GPIO28_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO28_IE(1);
		SET_PAD_GPIO28_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C4_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio29_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO29_IE(1);
		SET_PAD_GPIO29_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO29_IE(0);
		SET_PAD_GPIO29_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO29_IE(1);
		SET_PAD_GPIO29_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C5_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio3_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO3_IE(1);
		//SET_PAD_GPIO3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio30_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO30_IE(1);
		SET_PAD_GPIO30_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO30_IE(0);
		SET_PAD_GPIO30_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO30_IE(1);
		SET_PAD_GPIO30_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C6_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio31_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO31_IE(1);
		SET_PAD_GPIO31_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO31_IE(0);
		SET_PAD_GPIO31_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO31_IE(1);
		SET_PAD_GPIO31_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C7_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio32_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO32_IE(1);
		SET_PAD_GPIO32_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO32_IE(0);
		SET_PAD_GPIO32_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO32_IE(1);
		SET_PAD_GPIO32_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C8_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio33_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO33_IE(1);
		SET_PAD_GPIO33_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO33_IE(0);
		SET_PAD_GPIO33_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO33_IE(1);
		SET_PAD_GPIO33_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C9_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio34_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO34_IE(1);
		SET_PAD_GPIO34_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO34_IE(0);
		SET_PAD_GPIO34_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO34_IE(1);
		SET_PAD_GPIO34_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C10_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio35_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO35_IE(1);
		SET_PAD_GPIO35_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
		SET_PADCFG_PAD_GPIO35_IE(1);
		SET_PAD_GPIO35_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C11_FUNC_SEL(1);
	}else if (func==3){
	}
}
void set_pad_gpio36_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO36_IE(1);
		SET_PAD_GPIO36_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO36_IE(0);
		SET_PAD_GPIO36_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO36_IE(1);
		SET_PAD_GPIO36_FUNC_SEL(2);
		SET_U0_SYS_CRG_DVP_CLK_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio37_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO37_IE(1);
		SET_PAD_GPIO37_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO37_IE(0);
		SET_PAD_GPIO37_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO37_IE(1);
		SET_PAD_GPIO37_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_VVALID_C_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio38_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO38_IE(1);
		SET_PAD_GPIO38_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO38_IE(0);
		SET_PAD_GPIO38_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO38_IE(1);
		SET_PAD_GPIO38_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_HVALID_C_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio39_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO39_IE(1);
		SET_PAD_GPIO39_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO39_IE(0);
		SET_PAD_GPIO39_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO39_IE(1);
		SET_PAD_GPIO39_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C0_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio4_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO4_IE(1);
		//SET_PAD_GPIO4_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio40_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO40_IE(1);
		SET_PAD_GPIO40_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO40_IE(0);
		SET_PAD_GPIO40_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO40_IE(1);
		SET_PAD_GPIO40_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C1_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio41_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO41_IE(1);
		SET_PAD_GPIO41_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO41_IE(0);
		SET_PAD_GPIO41_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO41_IE(1);
		SET_PAD_GPIO41_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C2_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio42_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO42_IE(1);
		SET_PAD_GPIO42_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO42_IE(0);
		SET_PAD_GPIO42_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO42_IE(1);
		SET_PAD_GPIO42_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C3_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio43_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO43_IE(1);
		SET_PAD_GPIO43_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO43_IE(0);
		SET_PAD_GPIO43_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO43_IE(1);
		SET_PAD_GPIO43_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C4_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio44_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO44_IE(1);
		SET_PAD_GPIO44_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO44_IE(0);
		SET_PAD_GPIO44_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO44_IE(1);
		SET_PAD_GPIO44_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C5_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio45_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO45_IE(1);
		SET_PAD_GPIO45_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO45_IE(0);
		SET_PAD_GPIO45_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO45_IE(1);
		SET_PAD_GPIO45_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C6_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio46_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO46_IE(1);
		SET_PAD_GPIO46_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO46_IE(0);
		SET_PAD_GPIO46_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO46_IE(1);
		SET_PAD_GPIO46_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C7_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio47_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO47_IE(1);
		SET_PAD_GPIO47_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO47_IE(0);
		SET_PAD_GPIO47_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO47_IE(1);
		SET_PAD_GPIO47_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C8_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio48_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO48_IE(1);
		SET_PAD_GPIO48_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO48_IE(0);
		SET_PAD_GPIO48_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO48_IE(1);
		SET_PAD_GPIO48_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C9_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio49_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO49_IE(1);
		SET_PAD_GPIO49_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO49_IE(0);
		SET_PAD_GPIO49_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO49_IE(1);
		SET_PAD_GPIO49_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C10_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio5_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO5_IE(1);
		//SET_PAD_GPIO5_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio50_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO50_IE(1);
		SET_PAD_GPIO50_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO50_IE(0);
		SET_PAD_GPIO50_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO50_IE(1);
		SET_PAD_GPIO50_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C11_FUNC_SEL(2);
	}else if (func==3){
	}
}
void set_pad_gpio51_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO51_IE(1);
		SET_PAD_GPIO51_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO51_IE(0);
		SET_PAD_GPIO51_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio52_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO52_IE(1);
		SET_PAD_GPIO52_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO52_IE(0);
		SET_PAD_GPIO52_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio53_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO53_IE(1);
		SET_PAD_GPIO53_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO53_IE(0);
		SET_PAD_GPIO53_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio54_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO54_IE(1);
		SET_PAD_GPIO54_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO54_IE(0);
		SET_PAD_GPIO54_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio55_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO55_IE(1);
		SET_PAD_GPIO55_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO55_IE(0);
		SET_PAD_GPIO55_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO55_IE(0);
		SET_PAD_GPIO55_FUNC_SEL(3);
	}
}
void set_pad_gpio56_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO56_IE(1);
		SET_PAD_GPIO56_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO56_IE(0);
		SET_PAD_GPIO56_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO56_IE(0);
		SET_PAD_GPIO56_FUNC_SEL(3);
	}
}
void set_pad_gpio57_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO57_IE(1);
		SET_PAD_GPIO57_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO57_IE(0);
		SET_PAD_GPIO57_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO57_IE(0);
		SET_PAD_GPIO57_FUNC_SEL(3);
	}
}
void set_pad_gpio58_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO58_IE(1);
		SET_PAD_GPIO58_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO58_IE(0);
		SET_PAD_GPIO58_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO58_IE(0);
		SET_PAD_GPIO58_FUNC_SEL(3);
	}
}
void set_pad_gpio59_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO59_IE(1);
		SET_PAD_GPIO59_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO59_IE(0);
		SET_PAD_GPIO59_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO59_IE(0);
		SET_PAD_GPIO59_FUNC_SEL(3);
	}
}
void set_pad_gpio6_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO6_IE(1);
		SET_PAD_GPIO6_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
		SET_PADCFG_PAD_GPIO6_IE(1);
		SET_PAD_GPIO6_FUNC_SEL(2);
		SET_U0_SYS_CRG_DVP_CLK_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio60_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO60_IE(1);
		SET_PAD_GPIO60_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO60_IE(0);
		SET_PAD_GPIO60_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO60_IE(0);
		SET_PAD_GPIO60_FUNC_SEL(3);
	}
}
void set_pad_gpio61_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO61_IE(1);
		SET_PAD_GPIO61_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO61_IE(0);
		SET_PAD_GPIO61_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO61_IE(0);
		SET_PAD_GPIO61_FUNC_SEL(3);
	}
}
void set_pad_gpio62_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO62_IE(1);
		SET_PAD_GPIO62_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO62_IE(0);
		SET_PAD_GPIO62_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
		SET_PADCFG_PAD_GPIO62_IE(0);
		SET_PAD_GPIO62_FUNC_SEL(3);
	}
}
void set_pad_gpio63_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO63_IE(1);
		SET_PAD_GPIO63_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO63_IE(0);
		SET_PAD_GPIO63_FUNC_SEL(1);
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gpio7_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO7_IE(1);
		SET_PAD_GPIO7_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO7_IE(0);
		SET_PAD_GPIO7_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO7_IE(1);
		SET_PAD_GPIO7_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_VVALID_C_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio8_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO8_IE(1);
		SET_PAD_GPIO8_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO8_IE(0);
		SET_PAD_GPIO8_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO8_IE(1);
		SET_PAD_GPIO8_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_HVALID_C_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_gpio9_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_GPIO9_IE(1);
		SET_PAD_GPIO9_FUNC_SEL(0);
	}else if (func==1){
		SET_PADCFG_PAD_GPIO9_IE(0);
		SET_PAD_GPIO9_FUNC_SEL(1);
	}else if (func==2){
		SET_PADCFG_PAD_GPIO9_IE(1);
		SET_PAD_GPIO9_FUNC_SEL(2);
		SET_U0_DOM_ISP_TOP_U0_VIN_DVP_DATA_C0_FUNC_SEL(0);
	}else if (func==3){
	}
}
void set_pad_qspi_csn0_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_QSPI_CSN0_IE(0);
		//SET_PAD_QSPI_CSN0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_qspi_data0_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_QSPI_DATA0_IE(1);
		//SET_PAD_QSPI_DATA0_FUNC_SEL(0);
		//SET_U0_CDNS_QSPI_MI0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_qspi_data1_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_QSPI_DATA1_IE(1);
		//SET_PAD_QSPI_DATA1_FUNC_SEL(0);
		//SET_U0_CDNS_QSPI_MI1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_qspi_data2_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_QSPI_DATA2_IE(1);
		//SET_PAD_QSPI_DATA2_FUNC_SEL(0);
		//SET_U0_CDNS_QSPI_MI2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_qspi_data3_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_QSPI_DATA3_IE(1);
		//SET_PAD_QSPI_DATA3_FUNC_SEL(0);
		//SET_U0_CDNS_QSPI_MI3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_qspi_sclk_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_QSPI_SCLK_IE(0);
		//SET_PAD_QSPI_SCLK_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_clk_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_CLK_IE(0);
		//SET_PAD_SD0_CLK_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_cmd_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_CMD_IE(1);
		//SET_PAD_SD0_CMD_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CCMD_IN_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data0_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA0_IE(1);
		//SET_PAD_SD0_DATA0_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data1_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA1_IE(1);
		//SET_PAD_SD0_DATA1_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data2_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA2_IE(1);
		//SET_PAD_SD0_DATA2_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data3_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA3_IE(1);
		//SET_PAD_SD0_DATA3_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data4_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA4_IE(1);
		//SET_PAD_SD0_DATA4_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN4_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data5_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA5_IE(1);
		//SET_PAD_SD0_DATA5_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN5_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data6_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA6_IE(1);
		//SET_PAD_SD0_DATA6_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN6_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_data7_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_DATA7_IE(1);
		//SET_PAD_SD0_DATA7_FUNC_SEL(0);
		//SET_U0_DW_SDIO_CDATA_IN7_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_sd0_strb_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_SD0_STRB_IE(1);
		//SET_PAD_SD0_STRB_FUNC_SEL(0);
		//SET_U0_DW_SDIO_DATA_STROBE_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}

//switch all PAD func
void set_aon_iomux_all_pad_func(uint32_t func){
	if (func==0){
		set_pad_gmac0_mdc_func(0);
		set_pad_gmac0_mdio_func(0);
		set_pad_gmac0_rxc_func(0);
		set_pad_gmac0_rxd0_func(0);
		set_pad_gmac0_rxd1_func(0);
		set_pad_gmac0_rxd2_func(0);
		set_pad_gmac0_rxd3_func(0);
		set_pad_gmac0_rxdv_func(0);
		set_pad_gmac0_txc_func(0);
		set_pad_gmac0_txd0_func(0);
		set_pad_gmac0_txd1_func(0);
		set_pad_gmac0_txd2_func(0);
		set_pad_gmac0_txd3_func(0);
		set_pad_gmac0_txen_func(0);
		set_pad_rgpio0_func(0);
		set_pad_rgpio1_func(0);
		set_pad_rgpio2_func(0);
		set_pad_rgpio3_func(0);
	}else if (func==1){
		set_pad_gmac0_mdc_func(1);
		set_pad_gmac0_mdio_func(1);
		set_pad_gmac0_rxc_func(1);
		set_pad_gmac0_rxd0_func(1);
		set_pad_gmac0_rxd1_func(1);
		set_pad_gmac0_rxd2_func(1);
		set_pad_gmac0_rxd3_func(1);
		set_pad_gmac0_rxdv_func(1);
		set_pad_gmac0_txc_func(1);
		set_pad_gmac0_txd0_func(1);
		set_pad_gmac0_txd1_func(1);
		set_pad_gmac0_txd2_func(1);
		set_pad_gmac0_txd3_func(1);
		set_pad_gmac0_txen_func(1);
		set_pad_rgpio0_func(1);
		set_pad_rgpio1_func(1);
		set_pad_rgpio2_func(1);
		set_pad_rgpio3_func(1);
	}else if (func==2){
		set_pad_gmac0_mdc_func(2);
		set_pad_gmac0_mdio_func(2);
		set_pad_gmac0_rxc_func(2);
		set_pad_gmac0_rxd0_func(2);
		set_pad_gmac0_rxd1_func(2);
		set_pad_gmac0_rxd2_func(2);
		set_pad_gmac0_rxd3_func(2);
		set_pad_gmac0_rxdv_func(2);
		set_pad_gmac0_txc_func(2);
		set_pad_gmac0_txd0_func(2);
		set_pad_gmac0_txd1_func(2);
		set_pad_gmac0_txd2_func(2);
		set_pad_gmac0_txd3_func(2);
		set_pad_gmac0_txen_func(2);
		set_pad_rgpio0_func(2);
		set_pad_rgpio1_func(2);
		set_pad_rgpio2_func(2);
		set_pad_rgpio3_func(2);
	}else if (func==3){
		set_pad_gmac0_mdc_func(3);
		set_pad_gmac0_mdio_func(3);
		set_pad_gmac0_rxc_func(3);
		set_pad_gmac0_rxd0_func(3);
		set_pad_gmac0_rxd1_func(3);
		set_pad_gmac0_rxd2_func(3);
		set_pad_gmac0_rxd3_func(3);
		set_pad_gmac0_rxdv_func(3);
		set_pad_gmac0_txc_func(3);
		set_pad_gmac0_txd0_func(3);
		set_pad_gmac0_txd1_func(3);
		set_pad_gmac0_txd2_func(3);
		set_pad_gmac0_txd3_func(3);
		set_pad_gmac0_txen_func(3);
		set_pad_rgpio0_func(3);
		set_pad_rgpio1_func(3);
		set_pad_rgpio2_func(3);
		set_pad_rgpio3_func(3);
	}
}

//switch PAD_GPIO func by pad_gpio_idx and func_idx
void set_aon_iomux_gpio_func(uint32_t gpio_num, uint32_t func){
}

//switch single PAD func
void set_pad_gmac0_mdc_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_MDC_IE(0);
		//SET_PAD_GMAC0_MDC_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_mdio_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_MDIO_IE(1);
		//SET_PAD_GMAC0_MDIO_FUNC_SEL(0);
		//SET_U0_DW_GMAC5_AXI64_GMII_MDI_I_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_rxc_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_RXC_IE(1);
		SET_PAD_GMAC0_RXC_FUNC_SEL(0);
		//SET_U0_AON_CRG_CLK_GMAC0_RGMII_RX_FUNC_SEL(0);
	}else if (func==1){
		//SET_PADCFG_PAD_GMAC0_RXC_IE(1);
		SET_PAD_GMAC0_RXC_FUNC_SEL(1);
		//SET_U0_AON_CRG_CLK_GMAC0_RMII_REF_FUNC_SEL(0);
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_rxd0_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_RXD0_IE(1);
		//SET_PAD_GMAC0_RXD0_FUNC_SEL(0);
		//SET_U0_DW_GMAC5_AXI64_PHY_RXD_I0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_rxd1_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_RXD1_IE(1);
		//SET_PAD_GMAC0_RXD1_FUNC_SEL(0);
		//SET_U0_DW_GMAC5_AXI64_PHY_RXD_I1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_rxd2_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_RXD2_IE(1);
		//SET_PAD_GMAC0_RXD2_FUNC_SEL(0);
		//SET_U0_DW_GMAC5_AXI64_PHY_RXD_I2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_rxd3_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_RXD3_IE(1);
		//SET_PAD_GMAC0_RXD3_FUNC_SEL(0);
		//SET_U0_DW_GMAC5_AXI64_PHY_RXD_I3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_rxdv_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_RXDV_IE(1);
		//SET_PAD_GMAC0_RXDV_FUNC_SEL(0);
		//SET_U0_DW_GMAC5_AXI64_PHY_RXDV_I_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_txc_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_TXC_IE(0);
		//SET_PAD_GMAC0_TXC_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_txd0_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_TXD0_IE(0);
		//SET_PAD_GMAC0_TXD0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_txd1_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_TXD1_IE(0);
		//SET_PAD_GMAC0_TXD1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_txd2_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_TXD2_IE(0);
		//SET_PAD_GMAC0_TXD2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_txd3_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_TXD3_IE(0);
		//SET_PAD_GMAC0_TXD3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_gmac0_txen_func(uint32_t func){
	if (func==0){
		//SET_PADCFG_PAD_GMAC0_TXEN_IE(0);
		//SET_PAD_GMAC0_TXEN_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_rgpio0_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_RGPIO0_IE(1);
		//SET_PAD_RGPIO0_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_rgpio1_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_RGPIO1_IE(1);
		//SET_PAD_RGPIO1_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_rgpio2_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_RGPIO2_IE(1);
		//SET_PAD_RGPIO2_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
void set_pad_rgpio3_func(uint32_t func){
	if (func==0){
		SET_PADCFG_PAD_RGPIO3_IE(1);
		//SET_PAD_RGPIO3_FUNC_SEL(0);
	}else if (func==1){
	}else if (func==2){
	}else if (func==3){
	}
}
