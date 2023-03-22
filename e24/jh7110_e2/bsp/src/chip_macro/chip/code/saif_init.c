#ifdef VRFM_SIM
#include "common.h"
#endif

#include "saif_init.h"

//uint32_t saif_get_reg(uint32_t addr,uint32_t shift,uint32_t mask){
//  uint32_t tmp;
//  tmp = MA_INW(addr);
//  tmp = (tmp & mask) >> shift;
//  return tmp;
//}
//
//void saif_set_reg(uint32_t addr,uint32_t data,uint32_t shift,uint32_t mask){
//  uint32_t tmp;
//  tmp = MA_INW(addr);
//  tmp &= ~mask;
//  tmp |= (data<<shift) & mask;
//  MA_OUTW(addr,tmp);
//}
//
//void saif_assert_rst(uint32_t addr,uint32_t addr_status,uint32_t mask){
//  uint32_t tmp;
//  tmp = MA_INW(addr);
//  tmp |= mask;
//  MA_OUTW(addr,tmp);
//  do{
//    tmp = MA_INW(addr_status);
//  }while((tmp&mask)!=0);
//}
//
//void saif_clear_rst (uint32_t addr,uint32_t addr_status,uint32_t mask){
//  uint32_t tmp;
//  tmp = MA_INW(addr);
//  tmp &= ~mask;
//  MA_OUTW(addr,tmp);
//  do{
//    tmp = MA_INW(addr_status);
//  }while((tmp&mask)!=mask);
//}

void u0_reset_ctrl_enable(void){
  //clk_u0_reset_ctrl_clk_src:['clk_u0_reset_ctrl_clk_src', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_reset_ctrl.clk_src']


}


void u0_reset_ctrl_disable(void){


}


void u0_dw_gmac5_axi64_enable(void){
  //clk_u0_dw_gmac5_axi64_clk_tx:['clk_u0_dw_gmac5_axi64_clk_tx', 'clk_u0_dw_gmac5_axi64_clk_tx_icg', 'clk_u0_dw_gmac5_axi64_clk_tx_mux', 'clk_u0_sys_crg_clk_gmac0_gtxclk', 'clk_gmac0_gtxclk', 'clk_gmac0_gtxclk_icg', 'clk_gmac0_gtxclk_div', 'clk_gmacusb_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u0_dw_gmac5_axi64.clk_tx_i']
  //default:_SWITCH_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_SOURCE_CLK_U0_SYS_CRG_CLK_GMAC0_GTXCLK_;
  //default:_DIVIDE_CLOCK_CLK_GMAC0_GTXCLK_(8);
  _ENABLE_CLOCK_CLK_GMAC0_GTXCLK_;
  _ENABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_;
  //clk_u0_dw_gmac5_axi64_clk_rx:['clk_u0_dw_gmac5_axi64_clk_rx', 'clk_u0_dw_gmac5_axi64_clk_rx_mux', 'clk_gmac0_rgmii_rxin', 'clk_gmac0_rgmii_rx'],dst:['u0_dw_gmac5_axi64.clk_rx_i']
  //default:_SWITCH_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_RX_SOURCE_CLK_GMAC0_RGMII_RXIN_;
  //clk_u0_dw_gmac5_axi64_clk_tx_inv:['clk_u0_dw_gmac5_axi64_clk_tx_inv', 'clk_u0_dw_gmac5_axi64_clk_tx', 'clk_u0_dw_gmac5_axi64_clk_tx_icg', 'clk_u0_dw_gmac5_axi64_clk_tx_mux', 'clk_u0_sys_crg_clk_gmac0_gtxclk', 'clk_gmac0_gtxclk', 'clk_gmac0_gtxclk_icg', 'clk_gmac0_gtxclk_div', 'clk_gmacusb_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u0_dw_gmac5_axi64.clk_tx_180_i']
  //clk_u0_dw_gmac5_axi64_clk_rx_inv:['clk_u0_dw_gmac5_axi64_clk_rx_inv', 'clk_u0_dw_gmac5_axi64_clk_rx', 'clk_u0_dw_gmac5_axi64_clk_rx_mux', 'clk_gmac0_rgmii_rxin', 'clk_gmac0_rgmii_rx'],dst:['u0_dw_gmac5_axi64.clk_rx_180_i']
  //clk_u0_dw_gmac5_axi64_clk_rmii:['clk_u0_dw_gmac5_axi64_clk_rmii', 'clk_gmac0_rmii_refin', 'clk_gmac0_rmii_ref'],dst:['u0_dw_gmac5_axi64.clk_rmii_i']
  //clk_u0_dw_gmac5_axi64_clk_ptp:['clk_u0_dw_gmac5_axi64_clk_ptp', 'clk_u0_sys_crg_clk_gmac0_ptp', 'clk_gmac0_ptp', 'clk_gmac0_ptp_icg', 'clk_gmac0_ptp_div', 'clk_gmac_src', 'clk_gmac_src_div', 'clk_gmacusb_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u0_dw_gmac5_axi64.clk_ptp_ref_i']
  //default:_DIVIDE_CLOCK_CLK_GMAC_SRC_(2);
  //default:_DIVIDE_CLOCK_CLK_GMAC0_PTP_(10);
  _ENABLE_CLOCK_CLK_GMAC0_PTP_;
  //clk_u0_dw_gmac5_axi64_clk_ahb:['clk_u0_dw_gmac5_axi64_clk_ahb', 'clk_u0_dw_gmac5_axi64_clk_ahb_icg', 'clk_aon_ahb', 'clk_u0_sys_crg_clk_aon_ahb', 'clk_aon_ahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dw_gmac5_axi64.hclk_i']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AHB_;
  //clk_u0_dw_gmac5_axi64_clk_axi:['clk_u0_dw_gmac5_axi64_clk_axi', 'clk_u0_dw_gmac5_axi64_clk_axi_icg', 'clk_aon_ahb', 'clk_u0_sys_crg_clk_aon_ahb', 'clk_aon_ahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dw_gmac5_axi64.aclk_i']
  _ENABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AXI_;

  //rstn_u0_dw_gmac5_axi64_rstn_ahb:['rstn_u0_dw_gmac5_axi64_rstn_ahb'],dst:['u0_dw_gmac5_axi64.hreset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_;
  //rstn_u0_dw_gmac5_axi64_rstn_axi:['rstn_u0_dw_gmac5_axi64_rstn_axi'],dst:['u0_dw_gmac5_axi64.aresetn_i']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_;

}


void u0_dw_gmac5_axi64_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AHB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_GMAC5_AXI64_RSTN_AXI_;

  _DISABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_TX_;
  _DISABLE_CLOCK_CLK_GMAC0_PTP_;
  _DISABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AHB_;
  _DISABLE_CLOCK_CLK_U0_DW_GMAC5_AXI64_CLK_AXI_;

}


void u0_otpc_enable(void){
  //clk_u0_otpc_clk_apb:['clk_u0_otpc_clk_apb', 'clk_u0_otpc_clk_apb_icg', 'clk_aon_apb', 'clk_u1_pclk_mux_pclk'],dst:['u0_otpc.pclk']
  _ENABLE_CLOCK_CLK_U0_OTPC_CLK_APB_;

  //rstn_u0_otpc_rstn_apb:['rstn_u0_otpc_rstn_apb'],dst:['u0_otpc.presetn']

}


void u0_otpc_disable(void){

  _DISABLE_CLOCK_CLK_U0_OTPC_CLK_APB_;

}


void u1_pclk_mux_enable(void){
  //clk_u1_pclk_mux_func_pclk:['clk_u1_pclk_mux_func_pclk', 'clk_aon_apb_func', 'clk_aon_apb_func_mux', 'clk_osc_div4', 'clk_osc_div4_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_pclk_mux.func_pclk']
  //default:_SWITCH_CLOCK_CLK_AON_APB_FUNC_SOURCE_CLK_OSC_DIV4_;
  //default:_DIVIDE_CLOCK_CLK_OSC_DIV4_(4);


}


void u1_pclk_mux_disable(void){


}


void u0_pmu_enable(void){
  //clk_u0_pmu_clk_apb:['clk_u0_pmu_clk_apb', 'clk_aon_apb', 'clk_u1_pclk_mux_pclk'],dst:['u0_pmu.PCLK']
  //clk_u0_pmu_clk_wkup:['clk_u0_pmu_clk_wkup', 'clk_aon_apb', 'clk_u1_pclk_mux_pclk'],dst:['u0_pmu.lf_clk']

  //rstn_u0_pmu_rstn_apb:['rstn_u0_pmu_rstn_apb'],dst:['u0_pmu.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PMU_RSTN_APB_;
  //rstn_u0_pmu_rstn_wkup:['rstn_u0_pmu_rstn_wkup'],dst:['u0_pmu.rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PMU_RSTN_WKUP_;

}


void u0_pmu_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_PMU_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_PMU_RSTN_WKUP_;


}


void u0_rtc_hms_enable(void){
  //clk_u0_rtc_hms_clk_osc32k:['clk_u0_rtc_hms_clk_osc32k', 'clk_u0_rtc_hms_clk_osc32k_mux', 'clk_rtc', 'clk_u0_clkrst_src_bypass_clk_32k'],dst:['u0_rtc_hms.clk_m']
  //default:_SWITCH_CLOCK_CLK_U0_RTC_HMS_CLK_OSC32K_SOURCE_CLK_RTC_;
  //clk_u0_rtc_hms_clk_osc32k_g:['clk_u0_rtc_hms_clk_osc32k_g', 'clk_u0_rtc_hms_clk_osc32k', 'clk_u0_rtc_hms_clk_osc32k_mux', 'clk_rtc', 'clk_u0_clkrst_src_bypass_clk_32k'],dst:['u0_rtc_hms.clk_m_g']
  //clk_u0_rtc_hms_clk_cal:['clk_u0_rtc_hms_clk_cal', 'clk_u0_rtc_hms_clk_cal_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_rtc_hms.clk_ref']
  _ENABLE_CLOCK_CLK_U0_RTC_HMS_CLK_CAL_;
  //clk_u0_rtc_hms_clk_apb:['clk_u0_rtc_hms_clk_apb', 'clk_u0_rtc_hms_clk_apb_icg', 'clk_aon_apb', 'clk_u1_pclk_mux_pclk'],dst:['u0_rtc_hms.PCLK']
  _ENABLE_CLOCK_CLK_U0_RTC_HMS_CLK_APB_;

  //rstn_u0_rtc_hms_rstn_osc32k:['rstn_u0_rtc_hms_rstn_osc32k'],dst:['u0_rtc_hms.rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_OSC32K_;
  //rstn_u0_rtc_hms_rstn_cal:['rstn_u0_rtc_hms_rstn_cal'],dst:['u0_rtc_hms.ref_rstn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_CAL_;
  //rstn_u0_rtc_hms_rstn_apb:['rstn_u0_rtc_hms_rstn_apb'],dst:['u0_rtc_hms.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_APB_;

}


void u0_rtc_hms_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_OSC32K_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_CAL_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_RTC_HMS_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_RTC_HMS_CLK_CAL_;
  _DISABLE_CLOCK_CLK_U0_RTC_HMS_CLK_APB_;

}


void u0_u7mc_sft7110_enable(void){
  //clk_u0_u7mc_sft7110_bus_clk:['clk_u0_u7mc_sft7110_bus_clk', 'clk_cpu_bus', 'clk_cpu_bus_div', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.clock']
  //default:_SWITCH_CLOCK_CLK_CPU_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_CPU_CORE_(1);
  //default:_DIVIDE_CLOCK_CLK_CPU_BUS_(2);
  //clk_u0_u7mc_sft7110_core_clk4:['clk_u0_u7mc_sft7110_core_clk4', 'clk_u0_u7mc_sft7110_core_clk4_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.external_source_for_core_4_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK4_;
  //clk_u0_u7mc_sft7110_core_clk3:['clk_u0_u7mc_sft7110_core_clk3', 'clk_u0_u7mc_sft7110_core_clk3_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.external_source_for_core_3_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK3_;
  //clk_u0_u7mc_sft7110_core_clk2:['clk_u0_u7mc_sft7110_core_clk2', 'clk_u0_u7mc_sft7110_core_clk2_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.external_source_for_core_2_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK2_;
  //clk_u0_u7mc_sft7110_core_clk1:['clk_u0_u7mc_sft7110_core_clk1', 'clk_u0_u7mc_sft7110_core_clk1_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.external_source_for_core_1_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK1_;
  //clk_u0_u7mc_sft7110_core_clk:['clk_u0_u7mc_sft7110_core_clk', 'clk_u0_u7mc_sft7110_core_clk_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.external_source_for_core_0_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK_;
  //clk_u0_u7mc_sft7110_debug_clk:['clk_u0_u7mc_sft7110_debug_clk', 'clk_u0_u7mc_sft7110_debug_clk_icg', 'clk_cpu_bus', 'clk_cpu_bus_div', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.debug_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_DEBUG_CLK_;
  //clk_u0_u7mc_sft7110_debug_systemjtag_jtag_TCK:['clk_u0_u7mc_sft7110_debug_systemjtag_jtag_TCK', 'clk_u0_jtag_daisy_chain_jtag_tck_0'],dst:['u0_u7mc_sft7110.debug_systemjtag_jtag_TCK']
  //clk_u0_u7mc_sft7110_rtc_toggle:['clk_u0_u7mc_sft7110_rtc_toggle', 'clk_u0_u7mc_sft7110_rtc_toggle_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.rtc_toggle']
  //default:_DIVIDE_CLOCK_CLK_U0_U7MC_SFT7110_RTC_TOGGLE_(6);
  //clk_u0_u7mc_sft7110_trace_com_clk:['clk_u0_u7mc_sft7110_trace_com_clk', 'clk_u0_u7mc_sft7110_trace_com_clk_icg', 'clk_cpu_bus', 'clk_cpu_bus_div', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.trace_com_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_;
  //clk_u0_u7mc_sft7110_trace_clk0:['clk_u0_u7mc_sft7110_trace_clk0', 'clk_u0_u7mc_sft7110_trace_clk0_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.trace_0_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK0_;
  //clk_u0_u7mc_sft7110_trace_clk1:['clk_u0_u7mc_sft7110_trace_clk1', 'clk_u0_u7mc_sft7110_trace_clk1_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.trace_1_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK1_;
  //clk_u0_u7mc_sft7110_trace_clk2:['clk_u0_u7mc_sft7110_trace_clk2', 'clk_u0_u7mc_sft7110_trace_clk2_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.trace_2_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK2_;
  //clk_u0_u7mc_sft7110_trace_clk3:['clk_u0_u7mc_sft7110_trace_clk3', 'clk_u0_u7mc_sft7110_trace_clk3_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.trace_3_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK3_;
  //clk_u0_u7mc_sft7110_trace_clk4:['clk_u0_u7mc_sft7110_trace_clk4', 'clk_u0_u7mc_sft7110_trace_clk4_icg', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_u7mc_sft7110.trace_4_clock']
  _ENABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK4_;

  //rst_u0_u7mc_sft7110_rst_bus:['rst_u0_u7mc_sft7110_rst_bus'],dst:['u0_u7mc_sft7110.reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_BUS_;
  //rst_u0_u7mc_sft7110_rst_core4:['rst_u0_u7mc_sft7110_rst_core4'],dst:['u0_u7mc_sft7110.external_source_for_core_4_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_;
  //rst_u0_u7mc_sft7110_rst_core3:['rst_u0_u7mc_sft7110_rst_core3'],dst:['u0_u7mc_sft7110.external_source_for_core_3_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_;
  //rst_u0_u7mc_sft7110_rst_core2:['rst_u0_u7mc_sft7110_rst_core2'],dst:['u0_u7mc_sft7110.external_source_for_core_2_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_;
  //rst_u0_u7mc_sft7110_rst_core1:['rst_u0_u7mc_sft7110_rst_core1'],dst:['u0_u7mc_sft7110.external_source_for_core_1_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_;
  //rst_u0_u7mc_sft7110_rst_core0:['rst_u0_u7mc_sft7110_rst_core0'],dst:['u0_u7mc_sft7110.external_source_for_core_0_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_;
  //rst_u0_u7mc_sft7110_rst_core0_st:['rst_u0_u7mc_sft7110_rst_core0_st'],dst:['u0_u7mc_sft7110.resetctrl_hartIsInReset_0']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ST_;
  //rst_u0_u7mc_sft7110_rst_core1_st:['rst_u0_u7mc_sft7110_rst_core1_st'],dst:['u0_u7mc_sft7110.resetctrl_hartIsInReset_1']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ST_;
  //rst_u0_u7mc_sft7110_rst_core2_st:['rst_u0_u7mc_sft7110_rst_core2_st'],dst:['u0_u7mc_sft7110.resetctrl_hartIsInReset_2']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ST_;
  //rst_u0_u7mc_sft7110_rst_core3_st:['rst_u0_u7mc_sft7110_rst_core3_st'],dst:['u0_u7mc_sft7110.resetctrl_hartIsInReset_3']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ST_;
  //rst_u0_u7mc_sft7110_rst_core4_st:['rst_u0_u7mc_sft7110_rst_core4_st'],dst:['u0_u7mc_sft7110.resetctrl_hartIsInReset_4']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ST_;
  //rst_u0_u7mc_sft7110_debug_reset:['rst_u0_u7mc_sft7110_debug_reset'],dst:['u0_u7mc_sft7110.debug_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_DEBUG_RESET_;
  //rst_u0_u7mc_sft7110_trace_com_rst:['rst_u0_u7mc_sft7110_trace_com_rst'],dst:['u0_u7mc_sft7110.trace_com_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_COM_RST_;
  //rst_u0_u7mc_sft7110_trace_rst0:['rst_u0_u7mc_sft7110_trace_rst0'],dst:['u0_u7mc_sft7110.trace_0_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST0_;
  //rst_u0_u7mc_sft7110_trace_rst1:['rst_u0_u7mc_sft7110_trace_rst1'],dst:['u0_u7mc_sft7110.trace_1_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST1_;
  //rst_u0_u7mc_sft7110_trace_rst2:['rst_u0_u7mc_sft7110_trace_rst2'],dst:['u0_u7mc_sft7110.trace_2_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST2_;
  //rst_u0_u7mc_sft7110_trace_rst3:['rst_u0_u7mc_sft7110_trace_rst3'],dst:['u0_u7mc_sft7110.trace_3_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST3_;
  //rst_u0_u7mc_sft7110_trace_rst4:['rst_u0_u7mc_sft7110_trace_rst4'],dst:['u0_u7mc_sft7110.trace_4_reset']
  _CLEAR_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST4_;

}


void u0_u7mc_sft7110_disable(void){
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_BUS_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE0_ST_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE1_ST_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE2_ST_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE3_ST_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_RST_CORE4_ST_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_DEBUG_RESET_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_COM_RST_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST0_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST1_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST2_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST3_;
  _ASSERT_RESET_RSTGEN_RST_U0_U7MC_SFT7110_TRACE_RST4_;

  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK4_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK3_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK2_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK1_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_CORE_CLK_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_DEBUG_CLK_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_COM_CLK_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK0_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK1_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK2_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK3_;
  _DISABLE_CLOCK_CLK_U0_U7MC_SFT7110_TRACE_CLK4_;

}


void u0_WAVE511_enable(void){
  //clk_u0_WAVE511_clk_apb:['clk_u0_WAVE511_clk_apb', 'clk_u0_WAVE511_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_WAVE511.pclk']
  _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_APB_;
  //clk_u0_WAVE511_clk_axi:['clk_u0_WAVE511_clk_axi', 'clk_u0_WAVE511_clk_axi_icg', 'clk_vdec_axi', 'clk_vdec_axi_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_WAVE511.aclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_VDEC_AXI_(3);
  _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_;
  //clk_u0_WAVE511_clk_bpu:['clk_u0_WAVE511_clk_bpu', 'clk_u0_WAVE511_clk_bpu_icg', 'clk_u0_WAVE511_clk_bpu_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_WAVE511.bclk']
  //default:_DIVIDE_CLOCK_CLK_U0_WAVE511_CLK_BPU_(3);
  _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_BPU_;
  //clk_u0_WAVE511_clk_vce:['clk_u0_WAVE511_clk_vce', 'clk_u0_WAVE511_clk_vce_icg', 'clk_u0_WAVE511_clk_vce_div', 'clk_vdec_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u0_WAVE511.cclk']
  //default:_DIVIDE_CLOCK_CLK_U0_WAVE511_CLK_VCE_(2);
  _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_VCE_;

  //rstn_u0_WAVE511_rstn_apb:['rstn_u0_WAVE511_rstn_apb'],dst:['u0_WAVE511.preset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_APB_;
  //rstn_u0_WAVE511_rstn_axi:['rstn_u0_WAVE511_rstn_axi'],dst:['u0_WAVE511.areset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_AXI_;
  //rstn_u0_WAVE511_rstn_bpu:['rstn_u0_WAVE511_rstn_bpu'],dst:['u0_WAVE511.breset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_BPU_;
  //rstn_u0_WAVE511_rstn_vce:['rstn_u0_WAVE511_rstn_vce'],dst:['u0_WAVE511.creset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_VCE_;

}


void u0_WAVE511_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_AXI_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_BPU_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE511_RSTN_VCE_;

  _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_;
  _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_BPU_;
  _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_VCE_;

}


void u0_aximem_128b_enable(void){
  //clk_u0_aximem_128b_clk_axi:['clk_u0_aximem_128b_clk_axi', 'clk_u0_WAVE511_clk_axi', 'clk_u0_WAVE511_clk_axi_icg', 'clk_vdec_axi', 'clk_vdec_axi_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_aximem_128b.aclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_VDEC_AXI_(3);
  _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_;

  //rstn_u0_aximem_128b_rstn_axi:['rstn_u0_aximem_128b_rstn_axi'],dst:['u0_aximem_128b.areset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_AXIMEM_128B_RSTN_AXI_;

}


void u0_aximem_128b_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_AXIMEM_128B_RSTN_AXI_;

  _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_;

}


void u0_vdec_intsram_enable(void){
  //clk_u0_vdec_intsram_clk_vdec_axi:['clk_u0_vdec_intsram_clk_vdec_axi', 'clk_u0_aximem_128b_clk_axi', 'clk_u0_WAVE511_clk_axi', 'clk_u0_WAVE511_clk_axi_icg', 'clk_vdec_axi', 'clk_vdec_axi_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_vdec_intsram.clk_vdec_axi']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_VDEC_AXI_(3);
  _ENABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_;


}


void u0_vdec_intsram_disable(void){

  _DISABLE_CLOCK_CLK_U0_WAVE511_CLK_AXI_;

}


void u0_CODAJ12_enable(void){
  //clk_u0_CODAJ12_clk_apb:['clk_u0_CODAJ12_clk_apb', 'clk_u0_CODAJ12_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_CODAJ12.pclk']
  _ENABLE_CLOCK_CLK_U0_CODAJ12_CLK_APB_;
  //clk_u0_CODAJ12_clk_axi:['clk_u0_CODAJ12_clk_axi', 'clk_u0_CODAJ12_clk_axi_icg', 'clk_jpegc_axi', 'clk_jpegc_axi_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_CODAJ12.aclk']
  //default:_DIVIDE_CLOCK_CLK_JPEGC_AXI_(6);
  _ENABLE_CLOCK_CLK_U0_CODAJ12_CLK_AXI_;
  //clk_u0_CODAJ12_clk_core:['clk_u0_CODAJ12_clk_core', 'clk_u0_CODAJ12_clk_core_icg', 'clk_u0_CODAJ12_clk_core_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_CODAJ12.cclk']
  //default:_DIVIDE_CLOCK_CLK_U0_CODAJ12_CLK_CORE_(6);
  _ENABLE_CLOCK_CLK_U0_CODAJ12_CLK_CORE_;

  //rstn_u0_CODAJ12_rstn_apb:['rstn_u0_CODAJ12_rstn_apb'],dst:['u0_CODAJ12.preset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_APB_;
  //rstn_u0_CODAJ12_rstn_axi:['rstn_u0_CODAJ12_rstn_axi'],dst:['u0_CODAJ12.areset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_AXI_;
  //rstn_u0_CODAJ12_rstn_core:['rstn_u0_CODAJ12_rstn_core'],dst:['u0_CODAJ12.creset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_CORE_;

}


void u0_CODAJ12_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_AXI_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CODAJ12_RSTN_CORE_;

  _DISABLE_CLOCK_CLK_U0_CODAJ12_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_CODAJ12_CLK_AXI_;
  _DISABLE_CLOCK_CLK_U0_CODAJ12_CLK_CORE_;

}


void u0_vdec_jpg_arb_enable(void){
  //clk_u0_vdec_jpg_arb_jpgclk:['clk_u0_vdec_jpg_arb_jpgclk', 'clk_u0_vdec_jpg_arb_jpgclk_icg', 'clk_jpegc_axi', 'clk_jpegc_axi_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_vdec_jpg_arb.jpgclk']
  //default:_DIVIDE_CLOCK_CLK_JPEGC_AXI_(6);
  _ENABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_JPGCLK_;
  //clk_u0_vdec_jpg_arb_mainclk:['clk_u0_vdec_jpg_arb_mainclk', 'clk_u0_vdec_jpg_arb_mainclk_icg', 'clk_vdec_axi', 'clk_vdec_axi_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_vdec_jpg_arb.mainclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_VDEC_AXI_(3);
  _ENABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_MAINCLK_;

  //rstn_u0_vdec_jpg_arb_jpgresetn:['rstn_u0_vdec_jpg_arb_jpgresetn'],dst:['u0_vdec_jpg_arb.jpgresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_JPGRESETN_;
  //rstn_u0_vdec_jpg_arb_mainresetn:['rstn_u0_vdec_jpg_arb_mainresetn'],dst:['u0_vdec_jpg_arb.mainresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_MAINRESETN_;

}


void u0_vdec_jpg_arb_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_JPGRESETN_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VDEC_JPG_ARB_MAINRESETN_;

  _DISABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_JPGCLK_;
  _DISABLE_CLOCK_CLK_U0_VDEC_JPG_ARB_MAINCLK_;

}


void u0_wave420l_enable(void){
  //clk_u0_wave420l_clk_apb:['clk_u0_wave420l_clk_apb', 'clk_u0_wave420l_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_wave420l.pclk']
  _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_APB_;
  //clk_u0_wave420l_clk_axi:['clk_u0_wave420l_clk_axi', 'clk_u0_wave420l_clk_axi_icg', 'clk_venc_axi', 'clk_venc_axi_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_wave420l.aclk']
  //default:_DIVIDE_CLOCK_CLK_VENC_AXI_(5);
  _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_;
  //clk_u0_wave420l_clk_bpu:['clk_u0_wave420l_clk_bpu', 'clk_u0_wave420l_clk_bpu_icg', 'clk_u0_wave420l_clk_bpu_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_wave420l.bclk']
  //default:_DIVIDE_CLOCK_CLK_U0_WAVE420L_CLK_BPU_(5);
  _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_BPU_;
  //clk_u0_wave420l_clk_vce:['clk_u0_wave420l_clk_vce', 'clk_u0_wave420l_clk_vce_icg', 'clk_u0_wave420l_clk_vce_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_wave420l.cclk']
  //default:_DIVIDE_CLOCK_CLK_U0_WAVE420L_CLK_VCE_(5);
  _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_VCE_;

  //rstn_u0_wave420l_rstn_apb:['rstn_u0_wave420l_rstn_apb'],dst:['u0_wave420l.preset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_APB_;
  //rstn_u0_wave420l_rstn_axi:['rstn_u0_wave420l_rstn_axi'],dst:['u0_wave420l.areset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_AXI_;
  //rstn_u0_wave420l_rstn_bpu:['rstn_u0_wave420l_rstn_bpu'],dst:['u0_wave420l.breset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_BPU_;
  //rstn_u0_wave420l_rstn_vce:['rstn_u0_wave420l_rstn_vce'],dst:['u0_wave420l.creset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_VCE_;

}


void u0_wave420l_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_AXI_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_BPU_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_WAVE420L_RSTN_VCE_;

  _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_;
  _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_BPU_;
  _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_VCE_;

}


void u1_aximem_128b_enable(void){
  //clk_u1_aximem_128b_clk_axi:['clk_u1_aximem_128b_clk_axi', 'clk_u0_wave420l_clk_axi', 'clk_u0_wave420l_clk_axi_icg', 'clk_venc_axi', 'clk_venc_axi_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u1_aximem_128b.aclk']
  //default:_DIVIDE_CLOCK_CLK_VENC_AXI_(5);
  _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_;

  //rstn_u1_aximem_128b_rstn_axi:['rstn_u1_aximem_128b_rstn_axi'],dst:['u1_aximem_128b.areset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U1_AXIMEM_128B_RSTN_AXI_;

}


void u1_aximem_128b_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_AXIMEM_128B_RSTN_AXI_;

  _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_;

}


void u0_venc_intsram_enable(void){
  //clk_u0_venc_intsram_clk_venc_axi:['clk_u0_venc_intsram_clk_venc_axi', 'clk_u0_wave420l_clk_axi', 'clk_u0_wave420l_clk_axi_icg', 'clk_venc_axi', 'clk_venc_axi_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_venc_intsram.clk_venc_axi']
  //default:_DIVIDE_CLOCK_CLK_VENC_AXI_(5);
  _ENABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_;


}


void u0_venc_intsram_disable(void){

  _DISABLE_CLOCK_CLK_U0_WAVE420L_CLK_AXI_;

}


void u0_dom_isp_top_enable(void){
  //clk_u0_dom_isp_top_clk_dom_isp_top_clk_ispcore_2x:['clk_u0_dom_isp_top_clk_dom_isp_top_clk_ispcore_2x', 'clk_u0_dom_isp_top_clk_dom_isp_top_clk_ispcore_2x_icg', 'clk_isp_2x', 'clk_isp_2x_div', 'clk_isp_2x_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_dom_isp_top.clk_dom_isp_top_clk_ispcore_2x']
  //default:_SWITCH_CLOCK_CLK_ISP_2X_SOURCE_CLK_PLL2_;
  //default:_DIVIDE_CLOCK_CLK_ISP_2X_(2);
  _ENABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_;
  //clk_u0_dom_isp_top_clk_dom_isp_top_clk_isp_axi:['clk_u0_dom_isp_top_clk_dom_isp_top_clk_isp_axi', 'clk_u0_dom_isp_top_clk_dom_isp_top_clk_isp_axi_icg', 'clk_isp_axi', 'clk_isp_axi_div', 'clk_isp_2x', 'clk_isp_2x_div', 'clk_isp_2x_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_dom_isp_top.clk_dom_isp_top_clk_isp_axi']
  //default:_DIVIDE_CLOCK_CLK_ISP_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_;
  //clk_u0_dom_isp_top_clk_dom_isp_top_clk_bist_apb:['clk_u0_dom_isp_top_clk_dom_isp_top_clk_bist_apb', 'clk_bist_apb', 'clk_u0_clkrst_src_bypass_clk_bist_apb'],dst:['u0_dom_isp_top.clk_dom_isp_top_clk_bist_apb']
  //clk_u0_dom_isp_top_clk_dom_isp_top_clk_dvp:['clk_u0_dom_isp_top_clk_dom_isp_top_clk_dvp', 'dvp_clk'],dst:['u0_dom_isp_top.clk_dom_isp_top_clk_dvp']

  //rstn_u0_dom_isp_top_rstn_dom_isp_top_ip_top_reset_n:['rstn_u0_dom_isp_top_rstn_dom_isp_top_ip_top_reset_n'],dst:['u0_dom_isp_top.rstn_dom_isp_top_ip_top_reset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_;
  //rstn_u0_dom_isp_top_rstn_dom_isp_top_rstn_isp_axi:['rstn_u0_dom_isp_top_rstn_dom_isp_top_rstn_isp_axi'],dst:['u0_dom_isp_top.rstn_dom_isp_top_rstn_isp_axi']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_;

}


void u0_dom_isp_top_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_IP_TOP_RESET_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DOM_ISP_TOP_RSTN_DOM_ISP_TOP_RSTN_ISP_AXI_;

  _DISABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISPCORE_2X_;
  _DISABLE_CLOCK_CLK_U0_DOM_ISP_TOP_CLK_DOM_ISP_TOP_CLK_ISP_AXI_;

}


void u0_dom_vout_top_enable(void){
  //clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_src:['clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_src', 'clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_src_icg', 'clk_vout_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_dom_vout_top.clk_dom_vout_top_clk_vout_src']
  _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_;
  //clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_axi:['clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_axi', 'clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_axi_icg', 'clk_vout_axi', 'clk_vout_axi_div', 'clk_vout_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_dom_vout_top.clk_dom_vout_top_clk_vout_axi']
  //default:_DIVIDE_CLOCK_CLK_VOUT_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_;
  //clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_ahb:['clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_ahb', 'clk_u0_dom_vout_top_clk_dom_vout_top_clk_vout_ahb_icg', 'clk_ahb1', 'clk_ahb1_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dom_vout_top.clk_dom_vout_top_clk_vout_ahb']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB1_;
  _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_;
  //clk_u0_dom_vout_top_clk_dom_vout_top_clk_hdmiphy_ref:['clk_u0_dom_vout_top_clk_dom_vout_top_clk_hdmiphy_ref', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dom_vout_top.clk_dom_vout_top_clk_hdmiphy_ref']
  //clk_u0_dom_vout_top_clk_dom_vout_top_clk_hdmitx0_mclk:['clk_u0_dom_vout_top_clk_dom_vout_top_clk_hdmitx0_mclk', 'clk_u0_dom_vout_top_clk_dom_vout_top_clk_hdmitx0_mclk_icg', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_dom_vout_top.clk_dom_vout_top_clk_hdmitx0_mclk']
  //default:_SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_;
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_MCLK_INNER_(12);
  _ENABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_;
  //clk_u0_dom_vout_top_clk_dom_vout_top_clk_hdmitx0_bclk:['clk_u0_dom_vout_top_clk_dom_vout_top_clk_hdmitx0_bclk', 'clk_u0_i2stx_4ch_bclk', 'clk_u0_i2stx_4ch_bclk_mux', 'clk_i2stx_4ch0_bclk_mst', 'clk_i2stx_4ch0_bclk_mst_icg', 'clk_i2stx_4ch0_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_dom_vout_top.clk_dom_vout_top_clk_hdmitx0_bclk']
  //default:_SWITCH_CLOCK_CLK_U0_I2STX_4CH_BCLK_SOURCE_CLK_I2STX_4CH0_BCLK_MST_;
  //default:_DIVIDE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_(4);
  _ENABLE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_;
  //clk_u0_dom_vout_top_clk_dom_vout_top_clk_mipiphy_ref:['clk_u0_dom_vout_top_clk_dom_vout_top_clk_mipiphy_ref', 'clk_u0_dom_vout_top_clk_dom_vout_top_clk_mipiphy_ref_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dom_vout_top.clk_dom_vout_top_clk_mipiphy_ref']
  //default:_DIVIDE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_MIPIPHY_REF_(2);
  //clk_u0_dom_vout_top_clk_dom_vout_top_bist_pclk:['clk_u0_dom_vout_top_clk_dom_vout_top_bist_pclk', 'clk_bist_apb', 'clk_u0_clkrst_src_bypass_clk_bist_apb'],dst:['u0_dom_vout_top.clk_dom_vout_top_bist_pclk']

  //rstn_u0_dom_vout_top_rstn_dom_vout_top_rstn_vout_src:['rstn_u0_dom_vout_top_rstn_dom_vout_top_rstn_vout_src'],dst:['u0_dom_vout_top.rstn_dom_vout_top_rstn_vout_src']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_;

}


void u0_dom_vout_top_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DOM_VOUT_TOP_RSTN_DOM_VOUT_TOP_RSTN_VOUT_SRC_;

  _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_SRC_;
  _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AXI_;
  _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_VOUT_AHB_;
  _DISABLE_CLOCK_CLK_U0_DOM_VOUT_TOP_CLK_DOM_VOUT_TOP_CLK_HDMITX0_MCLK_;
  _DISABLE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_;

}


void u0_img_gpu_enable(void){
  //clk_u0_img_gpu_clk_apb:['clk_u0_img_gpu_clk_apb', 'clk_u0_img_gpu_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_img_gpu.pclk']
  _ENABLE_CLOCK_CLK_U0_IMG_GPU_CLK_APB_;
  //clk_u0_img_gpu_rtc_toggle:['clk_u0_img_gpu_rtc_toggle', 'clk_u0_img_gpu_rtc_toggle_icg', 'clk_u0_img_gpu_rtc_toggle_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_img_gpu.rtc_toggle']
  //default:_DIVIDE_CLOCK_CLK_U0_IMG_GPU_RTC_TOGGLE_(12);
  _ENABLE_CLOCK_CLK_U0_IMG_GPU_RTC_TOGGLE_;
  //clk_u0_img_gpu_core_clk:['clk_u0_img_gpu_core_clk', 'clk_u0_img_gpu_core_clk_icg', 'clk_gpu_core', 'clk_gpu_core_div', 'clk_gpu_root', 'clk_gpu_root_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_img_gpu.core_clk']
  //default:_SWITCH_CLOCK_CLK_GPU_ROOT_SOURCE_CLK_PLL2_;
  //default:_DIVIDE_CLOCK_CLK_GPU_CORE_(3);
  _ENABLE_CLOCK_CLK_U0_IMG_GPU_CORE_CLK_;
  //clk_u0_img_gpu_sys_clk:['clk_u0_img_gpu_sys_clk', 'clk_u0_img_gpu_sys_clk_icg', 'clk_axi_cfg1', 'clk_isp_axi', 'clk_isp_axi_div', 'clk_isp_2x', 'clk_isp_2x_div', 'clk_isp_2x_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_img_gpu.sys_clk']
  //default:_SWITCH_CLOCK_CLK_ISP_2X_SOURCE_CLK_PLL2_;
  //default:_DIVIDE_CLOCK_CLK_ISP_2X_(2);
  //default:_DIVIDE_CLOCK_CLK_ISP_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_IMG_GPU_SYS_CLK_;

  //rstn_u0_img_gpu_rstn_apb:['rstn_u0_img_gpu_rstn_apb'],dst:['u0_img_gpu.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_APB_;
  //rstn_u0_img_gpu_rstn_doma:['rstn_u0_img_gpu_rstn_doma'],dst:['u0_img_gpu.doma_resetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_DOMA_;
  //rstn_u0_img_gpu_rstn_domb:['rstn_u0_img_gpu_rstn_domb'],dst:['u0_img_gpu.domb_resetn']

}


void u0_img_gpu_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_IMG_GPU_RSTN_DOMA_;

  _DISABLE_CLOCK_CLK_U0_IMG_GPU_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_IMG_GPU_RTC_TOGGLE_;
  _DISABLE_CLOCK_CLK_U0_IMG_GPU_CORE_CLK_;
  _DISABLE_CLOCK_CLK_U0_IMG_GPU_SYS_CLK_;

}


void u0_jtag2apb_enable(void){
  //clk_u0_jtag2apb_pclk:['clk_u0_jtag2apb_pclk', 'clk_bist_apb', 'clk_u0_clkrst_src_bypass_clk_bist_apb'],dst:['u0_jtag2apb.pclk']

  //rstn_u0_jtag2apb_presetn:['rstn_u0_jtag2apb_presetn'],dst:['u0_jtag2apb.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_JTAG2APB_PRESETN_;

}


void u0_jtag2apb_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_JTAG2APB_PRESETN_;


}


void u1_reset_ctrl_enable(void){
  //clk_u1_reset_ctrl_clk_src:['clk_u1_reset_ctrl_clk_src', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_reset_ctrl.clk_src']


}


void u1_reset_ctrl_disable(void){


}


void u0_pll_wrap_enable(void){
  //clk_u0_pll_wrap_crg_gclk0:['clk_u0_pll_wrap_crg_gclk0', 'clk_gclk0', 'clk_gclk0_icg', 'clk_gclk0_div', 'clk_pll0_div2', 'clk_pll0_div2_div', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u0_pll_wrap.crg_gclk0']
  //default:_DIVIDE_CLOCK_CLK_PLL0_DIV2_(2);
  //default:_DIVIDE_CLOCK_CLK_GCLK0_(20);
  _ENABLE_CLOCK_CLK_GCLK0_;
  //clk_u0_pll_wrap_crg_gclk1:['clk_u0_pll_wrap_crg_gclk1', 'clk_gclk1', 'clk_gclk1_icg', 'clk_gclk1_div', 'clk_pll1_div2', 'clk_pll1_div2_div', 'clk_pll1', 'clk_u0_pll_wrap_clk_pll1_o1'],dst:['u0_pll_wrap.crg_gclk1']
  //default:_DIVIDE_CLOCK_CLK_PLL1_DIV2_(2);
  //default:_DIVIDE_CLOCK_CLK_GCLK1_(16);
  _ENABLE_CLOCK_CLK_GCLK1_;
  //clk_u0_pll_wrap_crg_gclk2:['clk_u0_pll_wrap_crg_gclk2', 'clk_gclk2', 'clk_gclk2_icg', 'clk_gclk2_div', 'clk_pll2_div2', 'clk_pll2_div2_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_pll_wrap.crg_gclk2']
  //default:_DIVIDE_CLOCK_CLK_PLL2_DIV2_(2);
  //default:_DIVIDE_CLOCK_CLK_GCLK2_(12);
  _ENABLE_CLOCK_CLK_GCLK2_;


}


void u0_pll_wrap_disable(void){

  _DISABLE_CLOCK_CLK_GCLK0_;
  _DISABLE_CLOCK_CLK_GCLK1_;
  _DISABLE_CLOCK_CLK_GCLK2_;

}


void u0_sft7110_noc_bus_enable(void){
  //clk_u0_sft7110_noc_bus_clk_cpu_axi:['clk_u0_sft7110_noc_bus_clk_cpu_axi', 'clk_u0_sft7110_noc_bus_clk_cpu_axi_icg', 'clk_cpu_bus', 'clk_cpu_bus_div', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk_cpu_axi']
  //default:_SWITCH_CLOCK_CLK_CPU_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_CPU_CORE_(1);
  //default:_DIVIDE_CLOCK_CLK_CPU_BUS_(2);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_cpu_axi:['clk_u0_sft7110_noc_bus_clk2_cpu_axi', 'clk_u0_sft7110_noc_bus_clk_cpu_axi', 'clk_u0_sft7110_noc_bus_clk_cpu_axi_icg', 'clk_cpu_bus', 'clk_cpu_bus_div', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk2_cpu_axi']
  //clk_u0_sft7110_noc_bus_clk_axicfg0_axi:['clk_u0_sft7110_noc_bus_clk_axicfg0_axi', 'clk_u0_sft7110_noc_bus_clk_axicfg0_axi_icg', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk_axicfg0_axi']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_axicfg0_axi:['clk_u0_sft7110_noc_bus_clk2_axicfg0_axi', 'clk_u0_sft7110_noc_bus_clk_axicfg0_axi', 'clk_u0_sft7110_noc_bus_clk_axicfg0_axi_icg', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk2_axicfg0_axi']
  //clk_u0_sft7110_noc_bus_clk_apb_bus:['clk_u0_sft7110_noc_bus_clk_apb_bus', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_sft7110_noc_bus.clk_apb_bus']
  //clk_u0_sft7110_noc_bus_clk2_apb_bus:['clk_u0_sft7110_noc_bus_clk2_apb_bus', 'clk_u0_sft7110_noc_bus_clk_apb_bus', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_sft7110_noc_bus.clk2_apb_bus']
  //clk_u0_sft7110_noc_bus_clk_gpu_axi:['clk_u0_sft7110_noc_bus_clk_gpu_axi', 'clk_u0_sft7110_noc_bus_clk_gpu_axi_icg', 'clk_gpu_core', 'clk_gpu_core_div', 'clk_gpu_root', 'clk_gpu_root_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk_gpu_axi']
  //default:_SWITCH_CLOCK_CLK_GPU_ROOT_SOURCE_CLK_PLL2_;
  //default:_DIVIDE_CLOCK_CLK_GPU_CORE_(3);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_gpu_axi:['clk_u0_sft7110_noc_bus_clk2_gpu_axi', 'clk_u0_sft7110_noc_bus_clk_gpu_axi', 'clk_u0_sft7110_noc_bus_clk_gpu_axi_icg', 'clk_gpu_core', 'clk_gpu_core_div', 'clk_gpu_root', 'clk_gpu_root_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk2_gpu_axi']
  //clk_u0_sft7110_noc_bus_clk_vdec_axi:['clk_u0_sft7110_noc_bus_clk_vdec_axi', 'clk_u0_sft7110_noc_bus_clk_vdec_axi_icg', 'clk_vdec_axi', 'clk_vdec_axi_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk_vdec_axi']
  //default:_DIVIDE_CLOCK_CLK_VDEC_AXI_(3);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_vdec_axi:['clk_u0_sft7110_noc_bus_clk2_vdec_axi', 'clk_u0_sft7110_noc_bus_clk_vdec_axi', 'clk_u0_sft7110_noc_bus_clk_vdec_axi_icg', 'clk_vdec_axi', 'clk_vdec_axi_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk2_vdec_axi']
  //clk_u0_sft7110_noc_bus_clk_venc_axi:['clk_u0_sft7110_noc_bus_clk_venc_axi', 'clk_u0_sft7110_noc_bus_clk_venc_axi_icg', 'clk_venc_axi', 'clk_venc_axi_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk_venc_axi']
  //default:_DIVIDE_CLOCK_CLK_VENC_AXI_(5);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_venc_axi:['clk_u0_sft7110_noc_bus_clk2_venc_axi', 'clk_u0_sft7110_noc_bus_clk_venc_axi', 'clk_u0_sft7110_noc_bus_clk_venc_axi_icg', 'clk_venc_axi', 'clk_venc_axi_div', 'clk_venc_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk2_venc_axi']
  //clk_u0_sft7110_noc_bus_clk_disp_axi:['clk_u0_sft7110_noc_bus_clk_disp_axi', 'clk_u0_sft7110_noc_bus_clk_disp_axi_icg', 'clk_vout_axi', 'clk_vout_axi_div', 'clk_vout_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk_disp_axi']
  //default:_DIVIDE_CLOCK_CLK_VOUT_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_disp_axi:['clk_u0_sft7110_noc_bus_clk2_disp_axi', 'clk_u0_sft7110_noc_bus_clk_disp_axi', 'clk_u0_sft7110_noc_bus_clk_disp_axi_icg', 'clk_vout_axi', 'clk_vout_axi_div', 'clk_vout_root', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk2_disp_axi']
  //clk_u0_sft7110_noc_bus_clk_isp_axi:['clk_u0_sft7110_noc_bus_clk_isp_axi', 'clk_u0_sft7110_noc_bus_clk_isp_axi_icg', 'clk_isp_axi', 'clk_isp_axi_div', 'clk_isp_2x', 'clk_isp_2x_div', 'clk_isp_2x_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk_isp_axi']
  //default:_SWITCH_CLOCK_CLK_ISP_2X_SOURCE_CLK_PLL2_;
  //default:_DIVIDE_CLOCK_CLK_ISP_2X_(2);
  //default:_DIVIDE_CLOCK_CLK_ISP_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_isp_axi:['clk_u0_sft7110_noc_bus_clk2_isp_axi', 'clk_u0_sft7110_noc_bus_clk_isp_axi', 'clk_u0_sft7110_noc_bus_clk_isp_axi_icg', 'clk_isp_axi', 'clk_isp_axi_div', 'clk_isp_2x', 'clk_isp_2x_div', 'clk_isp_2x_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_sft7110_noc_bus.clk2_isp_axi']
  //clk_u0_sft7110_noc_bus_clk_stg_axi:['clk_u0_sft7110_noc_bus_clk_stg_axi', 'clk_u0_sft7110_noc_bus_clk_stg_axi_icg', 'clk_nocstg_bus', 'clk_nocstg_bus_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk_stg_axi']
  //default:_DIVIDE_CLOCK_CLK_NOCSTG_BUS_(3);
  _ENABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_;
  //clk_u0_sft7110_noc_bus_clk2_stg_axi:['clk_u0_sft7110_noc_bus_clk2_stg_axi', 'clk_u0_sft7110_noc_bus_clk_stg_axi', 'clk_u0_sft7110_noc_bus_clk_stg_axi_icg', 'clk_nocstg_bus', 'clk_nocstg_bus_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk2_stg_axi']
  //clk_u0_sft7110_noc_bus_clk_ddrc:['clk_u0_sft7110_noc_bus_clk_ddrc', 'clk_ddr_bus', 'clk_ddr_bus_mux', 'clk_osc_div2', 'clk_osc_div2_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk_ddrc']
  //default:_SWITCH_CLOCK_CLK_DDR_BUS_SOURCE_CLK_OSC_DIV2_;
  //default:_DIVIDE_CLOCK_CLK_OSC_DIV2_(2);
  //clk_u0_sft7110_noc_bus_clk2_ddrc:['clk_u0_sft7110_noc_bus_clk2_ddrc', 'clk_u0_sft7110_noc_bus_clk_ddrc', 'clk_ddr_bus', 'clk_ddr_bus_mux', 'clk_osc_div2', 'clk_osc_div2_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sft7110_noc_bus.clk2_ddrc']

  //rstn_u0_sft7110_noc_bus_reset_cpu_axi_n:['rstn_u0_sft7110_noc_bus_reset_cpu_axi_n'],dst:['u0_sft7110_noc_bus.reset_cpu_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_axicfg0_axi_n:['rstn_u0_sft7110_noc_bus_reset_axicfg0_axi_n'],dst:['u0_sft7110_noc_bus.reset_axicfg0_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_apb_bus_n:['rstn_u0_sft7110_noc_bus_reset_apb_bus_n'],dst:['u0_sft7110_noc_bus.reset_apb_bus_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_;
  //rstn_u0_sft7110_noc_bus_reset_gpu_axi_n:['rstn_u0_sft7110_noc_bus_reset_gpu_axi_n'],dst:['u0_sft7110_noc_bus.reset_gpu_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_vdec_axi_n:['rstn_u0_sft7110_noc_bus_reset_vdec_axi_n'],dst:['u0_sft7110_noc_bus.reset_vdec_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_venc_axi_n:['rstn_u0_sft7110_noc_bus_reset_venc_axi_n'],dst:['u0_sft7110_noc_bus.reset_venc_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_disp_axi_n:['rstn_u0_sft7110_noc_bus_reset_disp_axi_n'],dst:['u0_sft7110_noc_bus.reset_disp_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_isp_axi_n:['rstn_u0_sft7110_noc_bus_reset_isp_axi_n'],dst:['u0_sft7110_noc_bus.reset_isp_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_stg_axi_n:['rstn_u0_sft7110_noc_bus_reset_stg_axi_n'],dst:['u0_sft7110_noc_bus.reset_stg_axi_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_;
  //rstn_u0_sft7110_noc_bus_reset_ddrc_n:['rstn_u0_sft7110_noc_bus_reset_ddrc_n'],dst:['u0_sft7110_noc_bus.reset_ddrc_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_;

}


void u0_sft7110_noc_bus_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_CPU_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_AXICFG0_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_APB_BUS_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_GPU_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VDEC_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_VENC_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DISP_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_ISP_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_STG_AXI_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SFT7110_NOC_BUS_RESET_DDRC_N_;

  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_CPU_AXI_;
  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_AXICFG0_AXI_;
  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_GPU_AXI_;
  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VDEC_AXI_;
  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_VENC_AXI_;
  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_DISP_AXI_;
  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_ISP_AXI_;
  _DISABLE_CLOCK_CLK_U0_SFT7110_NOC_BUS_CLK_STG_AXI_;

}


void u0_ddr_sft7110_enable(void){
  //clk_u0_ddr_sft7110_clk_axi:['clk_u0_ddr_sft7110_clk_axi', 'clk_u0_ddr_sft7110_clk_axi_icg', 'clk_ddr_bus', 'clk_ddr_bus_mux', 'clk_osc_div2', 'clk_osc_div2_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_ddr_sft7110.clk_ddrc']
  //default:_SWITCH_CLOCK_CLK_DDR_BUS_SOURCE_CLK_OSC_DIV2_;
  //default:_DIVIDE_CLOCK_CLK_OSC_DIV2_(2);
  _ENABLE_CLOCK_CLK_U0_DDR_SFT7110_CLK_AXI_;
  //clk_u0_ddr_sft7110_clk_osc:['clk_u0_ddr_sft7110_clk_osc', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_ddr_sft7110.clk_osc']
  //clk_u0_ddr_sft7110_clk_apb:['clk_u0_ddr_sft7110_clk_apb', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_ddr_sft7110.pclk']
  //clk_u0_ddr_sft7110_clk_ddrphy_pll_bypass:['clk_u0_ddr_sft7110_clk_ddrphy_pll_bypass', 'clk_pll1', 'clk_u0_pll_wrap_clk_pll1_o1'],dst:['u0_ddr_sft7110.clk_ddrphy_pll_bypass']

  //rstn_u0_ddr_sft7110_rstn_axi:['rstn_u0_ddr_sft7110_rstn_axi'],dst:['u0_ddr_sft7110.reset_ddrc_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_AXI_;
  //rstn_u0_ddr_sft7110_rstn_osc:['rstn_u0_ddr_sft7110_rstn_osc'],dst:['u0_ddr_sft7110.reset_osc_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_OSC_;
  //rstn_u0_ddr_sft7110_rstn_apb:['rstn_u0_ddr_sft7110_rstn_apb'],dst:['u0_ddr_sft7110.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_APB_;

}


void u0_ddr_sft7110_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_AXI_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_OSC_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DDR_SFT7110_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_DDR_SFT7110_CLK_AXI_;

}


void u0_axi_cfg0_dec_enable(void){
  //clk_u0_axi_cfg0_dec_clk_main_div:['clk_u0_axi_cfg0_dec_clk_main_div', 'clk_u0_axi_cfg0_dec_clk_main_div_icg', 'clk_ahb1', 'clk_ahb1_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_axi_cfg0_dec.main_divclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB1_;
  _ENABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_;
  //clk_u0_axi_cfg0_dec_clk_main:['clk_u0_axi_cfg0_dec_clk_main', 'clk_u0_axi_cfg0_dec_clk_main_icg', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_axi_cfg0_dec.mainclk']
  _ENABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_;
  //clk_u0_axi_cfg0_dec_clk_hifi4:['clk_u0_axi_cfg0_dec_clk_hifi4', 'clk_u0_axi_cfg0_dec_clk_hifi4_icg', 'clk_hifi4_axi', 'clk_hifi4_axi_div', 'clk_hifi4_core', 'clk_hifi4_core_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_axi_cfg0_dec.hifi4clk']
  //default:_DIVIDE_CLOCK_CLK_HIFI4_CORE_(3);
  //default:_DIVIDE_CLOCK_CLK_HIFI4_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_;

  //rstn_u0_axi_cfg0_dec_rstn_main_div:['rstn_u0_axi_cfg0_dec_rstn_main_div'],dst:['u0_axi_cfg0_dec.main_divresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_;
  //rstn_u0_axi_cfg0_dec_rstn_main:['rstn_u0_axi_cfg0_dec_rstn_main'],dst:['u0_axi_cfg0_dec.mainresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_;
  //rstn_u0_axi_cfg0_dec_rstn_hifi4:['rstn_u0_axi_cfg0_dec_rstn_hifi4'],dst:['u0_axi_cfg0_dec.hifi4resetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_;

}


void u0_axi_cfg0_dec_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_DIV_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_MAIN_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG0_DEC_RSTN_HIFI4_;

  _DISABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_DIV_;
  _DISABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_MAIN_;
  _DISABLE_CLOCK_CLK_U0_AXI_CFG0_DEC_CLK_HIFI4_;

}


void u2_aximem_128b_enable(void){
  //clk_u2_aximem_128b_clk_axi:['clk_u2_aximem_128b_clk_axi', 'clk_u2_aximem_128b_clk_axi_icg', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u2_aximem_128b.aclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  _ENABLE_CLOCK_CLK_U2_AXIMEM_128B_CLK_AXI_;

  //rstn_u2_aximem_128b_rstn_axi:['rstn_u2_aximem_128b_rstn_axi'],dst:['u2_aximem_128b.areset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U2_AXIMEM_128B_RSTN_AXI_;

}


void u2_aximem_128b_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U2_AXIMEM_128B_RSTN_AXI_;

  _DISABLE_CLOCK_CLK_U2_AXIMEM_128B_CLK_AXI_;

}


void u0_intmem_rom_sram_enable(void){
  //clk_u0_intmem_rom_sram_clk_rom:['clk_u0_intmem_rom_sram_clk_rom', 'clk_u2_aximem_128b_clk_axi', 'clk_u2_aximem_128b_clk_axi_icg', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_intmem_rom_sram.clk_rom']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  _ENABLE_CLOCK_CLK_U2_AXIMEM_128B_CLK_AXI_;

  //rstn_u0_intmem_rom_sram_rstn_rom:['rstn_u0_intmem_rom_sram_rstn_rom'],dst:['u0_intmem_rom_sram.rstn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_;

}


void u0_intmem_rom_sram_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_INTMEM_ROM_SRAM_RSTN_ROM_;

  _DISABLE_CLOCK_CLK_U2_AXIMEM_128B_CLK_AXI_;

}


void u2_pclk_mux_enable(void){
  //clk_u2_pclk_mux_func_pclk:['clk_u2_pclk_mux_func_pclk', 'clk_apb_bus_func', 'clk_apb_bus_func_div', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u2_pclk_mux.func_pclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  //default:_DIVIDE_CLOCK_CLK_APB_BUS_FUNC_(4);


}


void u2_pclk_mux_disable(void){


}


void u0_cdns_qspi_enable(void){
  //clk_u0_cdns_qspi_clk_apb:['clk_u0_cdns_qspi_clk_apb', 'clk_u0_cdns_qspi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_cdns_qspi.pclk']
  _ENABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_APB_;
  //clk_u0_cdns_qspi_clk_ahb:['clk_u0_cdns_qspi_clk_ahb', 'clk_u0_cdns_qspi_clk_ahb_icg', 'clk_ahb1', 'clk_ahb1_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_cdns_qspi.hclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB1_;
  _ENABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_AHB_;
  //clk_u0_cdns_qspi_clk_ref:['clk_u0_cdns_qspi_clk_ref', 'clk_u0_cdns_qspi_clk_ref_icg', 'clk_u0_cdns_qspi_clk_ref_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_cdns_qspi.ref_clk']
  //default:_SWITCH_CLOCK_CLK_U0_CDNS_QSPI_CLK_REF_SOURCE_CLK_OSC_;
  _ENABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_REF_;

  //rstn_u0_cdns_qspi_rstn_apb:['rstn_u0_cdns_qspi_rstn_apb'],dst:['u0_cdns_qspi.n_preset']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_APB_;
  //rstn_u0_cdns_qspi_rstn_ahb:['rstn_u0_cdns_qspi_rstn_ahb'],dst:['u0_cdns_qspi.n_hreset']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_AHB_;
  //rstn_u0_cdns_qspi_rstn_ref:['rstn_u0_cdns_qspi_rstn_ref'],dst:['u0_cdns_qspi.n_ref_rst']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_REF_;

}


void u0_cdns_qspi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_AHB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_QSPI_RSTN_REF_;

  _DISABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_AHB_;
  _DISABLE_CLOCK_CLK_U0_CDNS_QSPI_CLK_REF_;

}


void u0_mailbox_enable(void){
  //clk_u0_mailbox_clk_apb:['clk_u0_mailbox_clk_apb', 'clk_u0_mailbox_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_mailbox.pclk']
  _ENABLE_CLOCK_CLK_U0_MAILBOX_CLK_APB_;

  //rstn_u0_mailbox_presetn:['rstn_u0_mailbox_presetn'],dst:['u0_mailbox.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_MAILBOX_PRESETN_;

}


void u0_mailbox_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_MAILBOX_PRESETN_;

  _DISABLE_CLOCK_CLK_U0_MAILBOX_CLK_APB_;

}


void u0_axi_cfg1_dec_enable(void){
  //clk_u0_axi_cfg1_dec_clk_ahb:['clk_u0_axi_cfg1_dec_clk_ahb', 'clk_u0_axi_cfg1_dec_clk_ahb_icg', 'clk_ahb0', 'clk_ahb0_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_axi_cfg1_dec.ahbclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB0_;
  _ENABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_AHB_;
  //clk_u0_axi_cfg1_dec_clk_main:['clk_u0_axi_cfg1_dec_clk_main', 'clk_u0_axi_cfg1_dec_clk_main_icg', 'clk_axi_cfg1', 'clk_isp_axi', 'clk_isp_axi_div', 'clk_isp_2x', 'clk_isp_2x_div', 'clk_isp_2x_mux', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_axi_cfg1_dec.mainclk']
  //default:_SWITCH_CLOCK_CLK_ISP_2X_SOURCE_CLK_PLL2_;
  //default:_DIVIDE_CLOCK_CLK_ISP_2X_(2);
  //default:_DIVIDE_CLOCK_CLK_ISP_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_MAIN_;

  //rstn_u0_axi_cfg1_dec_rstn_ahb:['rstn_u0_axi_cfg1_dec_rstn_ahb'],dst:['u0_axi_cfg1_dec.ahbresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_;
  //rstn_u0_axi_cfg1_dec_rstn_main:['rstn_u0_axi_cfg1_dec_rstn_main'],dst:['u0_axi_cfg1_dec.mainresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_;

}


void u0_axi_cfg1_dec_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_AHB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_AXI_CFG1_DEC_RSTN_MAIN_;

  _DISABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_AHB_;
  _DISABLE_CLOCK_CLK_U0_AXI_CFG1_DEC_CLK_MAIN_;

}


void u1_ahb2apb_enable(void){
  //clk_u1_ahb2apb_clk_ahb:['clk_u1_ahb2apb_clk_ahb', 'clk_ahb0', 'clk_ahb0_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_ahb2apb.HCLK']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB0_;

  //rstn_u1_ahb2apb_rstn_ahb:['rstn_u1_ahb2apb_rstn_ahb'],dst:['u1_ahb2apb.HRESETn']

}


void u1_ahb2apb_disable(void){

  _DISABLE_CLOCK_CLK_AHB0_;

}


void u1_p2p_async_enable(void){
  //clk_u1_p2p_async_clk_apbs:['clk_u1_p2p_async_clk_apbs', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_p2p_async.pclks']
  _ENABLE_CLOCK_CLK_APB0_;
  //clk_u1_p2p_async_clk_apbm:['clk_u1_p2p_async_clk_apbm', 'clk_aon_apb', 'clk_u0_aon_crg_clk_aon_apb', 'clk_aon_apb', 'clk_u1_pclk_mux_pclk'],dst:['u1_p2p_async.pclkm']

  //rstn_u1_p2p_async_rstn_apbs:['rstn_u1_p2p_async_rstn_apbs'],dst:['u1_p2p_async.presetsn']
  //rstn_u1_p2p_async_rstn_apbm:['rstn_u1_p2p_async_rstn_apbm'],dst:['u1_p2p_async.presetmn']

}


void u1_p2p_async_disable(void){

  _DISABLE_CLOCK_CLK_APB0_;

}


void u0_jtag_certification_enable(void){
  //clk_u0_jtag_certification_trng_clk:['clk_u0_jtag_certification_trng_clk', 'clk_u0_jtag_certification_trng_clk_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_jtag_certification.clk']
  //default:_DIVIDE_CLOCK_CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_(4);
  //clk_u0_jtag_certification_tck:['clk_u0_jtag_certification_tck', 'clk_jtag_tck_inner', 'clk_jtag_tck'],dst:['u0_jtag_certification.tck']

  //rstn_u0_jtag_certification_rst_n:['rstn_u0_jtag_certification_rst_n'],dst:['u0_jtag_certification.rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_JTAG_CERTIFICATION_RST_N_;

}


void u0_jtag_certification_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_JTAG_CERTIFICATION_RST_N_;


}


void u0_dw_uart_enable(void){
  //clk_u0_dw_uart_clk_apb:['clk_u0_dw_uart_clk_apb', 'clk_u0_dw_uart_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_dw_uart.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_DW_UART_CLK_APB_;
  //clk_u0_dw_uart_clk_core:['clk_u0_dw_uart_clk_core', 'clk_u0_dw_uart_clk_core_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dw_uart.sclk']
  _ENABLE_CLOCK_CLK_U0_DW_UART_CLK_CORE_;

  //rstn_u0_dw_uart_rstn_apb:['rstn_u0_dw_uart_rstn_apb'],dst:['u0_dw_uart.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_APB_;
  //rstn_u0_dw_uart_rstn_core:['rstn_u0_dw_uart_rstn_core'],dst:['u0_dw_uart.s_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_CORE_;

}


void u0_dw_uart_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_UART_RSTN_CORE_;

  _DISABLE_CLOCK_CLK_U0_DW_UART_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_DW_UART_CLK_CORE_;

}


void u1_dw_uart_enable(void){
  //clk_u1_dw_uart_clk_apb:['clk_u1_dw_uart_clk_apb', 'clk_u1_dw_uart_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_dw_uart.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U1_DW_UART_CLK_APB_;
  //clk_u1_dw_uart_clk_core:['clk_u1_dw_uart_clk_core', 'clk_u1_dw_uart_clk_core_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_dw_uart.sclk']
  _ENABLE_CLOCK_CLK_U1_DW_UART_CLK_CORE_;

  //rstn_u1_dw_uart_rstn_apb:['rstn_u1_dw_uart_rstn_apb'],dst:['u1_dw_uart.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_APB_;
  //rstn_u1_dw_uart_rstn_core:['rstn_u1_dw_uart_rstn_core'],dst:['u1_dw_uart.s_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_CORE_;

}


void u1_dw_uart_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_DW_UART_RSTN_CORE_;

  _DISABLE_CLOCK_CLK_U1_DW_UART_CLK_APB_;
  _DISABLE_CLOCK_CLK_U1_DW_UART_CLK_CORE_;

}


void u2_dw_uart_enable(void){
  //clk_u2_dw_uart_clk_apb:['clk_u2_dw_uart_clk_apb', 'clk_u2_dw_uart_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u2_dw_uart.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U2_DW_UART_CLK_APB_;
  //clk_u2_dw_uart_clk_core:['clk_u2_dw_uart_clk_core', 'clk_u2_dw_uart_clk_core_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u2_dw_uart.sclk']
  _ENABLE_CLOCK_CLK_U2_DW_UART_CLK_CORE_;

  //rstn_u2_dw_uart_rstn_apb:['rstn_u2_dw_uart_rstn_apb'],dst:['u2_dw_uart.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_APB_;
  //rstn_u2_dw_uart_rstn_core:['rstn_u2_dw_uart_rstn_core'],dst:['u2_dw_uart.s_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_CORE_;

}


void u2_dw_uart_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U2_DW_UART_RSTN_CORE_;

  _DISABLE_CLOCK_CLK_U2_DW_UART_CLK_APB_;
  _DISABLE_CLOCK_CLK_U2_DW_UART_CLK_CORE_;

}


void u0_dw_i2c_enable(void){
  //clk_u0_dw_i2c_clk_apb:['clk_u0_dw_i2c_clk_apb', 'clk_u0_dw_i2c_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_dw_i2c.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_DW_I2C_CLK_APB_;
  //clk_u0_dw_i2c_clk_core:['clk_u0_dw_i2c_clk_core', 'clk_u0_dw_i2c_clk_apb', 'clk_u0_dw_i2c_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_dw_i2c.ic_clk']

  //rstn_u0_dw_i2c_rstn_apb:['rstn_u0_dw_i2c_rstn_apb'],dst:['u0_dw_i2c.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_I2C_RSTN_APB_;
  //rstn_u0_dw_i2c_rstn_core:['rstn_u0_dw_i2c_rstn_core'],dst:['u0_dw_i2c.ic_rst_n']

}


void u0_dw_i2c_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_I2C_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_DW_I2C_CLK_APB_;

}


void u1_dw_i2c_enable(void){
  //clk_u1_dw_i2c_clk_apb:['clk_u1_dw_i2c_clk_apb', 'clk_u1_dw_i2c_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_dw_i2c.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U1_DW_I2C_CLK_APB_;
  //clk_u1_dw_i2c_clk_core:['clk_u1_dw_i2c_clk_core', 'clk_u1_dw_i2c_clk_apb', 'clk_u1_dw_i2c_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_dw_i2c.ic_clk']

  //rstn_u1_dw_i2c_rstn_apb:['rstn_u1_dw_i2c_rstn_apb'],dst:['u1_dw_i2c.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_DW_I2C_RSTN_APB_;
  //rstn_u1_dw_i2c_rstn_core:['rstn_u1_dw_i2c_rstn_core'],dst:['u1_dw_i2c.ic_rst_n']

}


void u1_dw_i2c_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_DW_I2C_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U1_DW_I2C_CLK_APB_;

}


void u2_dw_i2c_enable(void){
  //clk_u2_dw_i2c_clk_apb:['clk_u2_dw_i2c_clk_apb', 'clk_u2_dw_i2c_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u2_dw_i2c.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U2_DW_I2C_CLK_APB_;
  //clk_u2_dw_i2c_clk_core:['clk_u2_dw_i2c_clk_core', 'clk_u2_dw_i2c_clk_apb', 'clk_u2_dw_i2c_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u2_dw_i2c.ic_clk']

  //rstn_u2_dw_i2c_rstn_apb:['rstn_u2_dw_i2c_rstn_apb'],dst:['u2_dw_i2c.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U2_DW_I2C_RSTN_APB_;
  //rstn_u2_dw_i2c_rstn_core:['rstn_u2_dw_i2c_rstn_core'],dst:['u2_dw_i2c.ic_rst_n']

}


void u2_dw_i2c_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U2_DW_I2C_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U2_DW_I2C_CLK_APB_;

}


void u0_ssp_spi_enable(void){
  //clk_u0_ssp_spi_clk_apb:['clk_u0_ssp_spi_clk_apb', 'clk_u0_ssp_spi_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_ssp_spi.PCLK']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_SSP_SPI_CLK_APB_;
  //clk_u0_ssp_spi_clk_core:['clk_u0_ssp_spi_clk_core', 'clk_u0_ssp_spi_clk_apb', 'clk_u0_ssp_spi_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_ssp_spi.SSPCLK']

  //rstn_u0_ssp_spi_rstn_apb:['rstn_u0_ssp_spi_rstn_apb'],dst:['u0_ssp_spi.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SSP_SPI_RSTN_APB_;
  //rstn_u0_ssp_spi_rstn_core:['rstn_u0_ssp_spi_rstn_core'],dst:['u0_ssp_spi.nSSPRST']

}


void u0_ssp_spi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_SSP_SPI_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_SSP_SPI_CLK_APB_;

}


void u1_ssp_spi_enable(void){
  //clk_u1_ssp_spi_clk_apb:['clk_u1_ssp_spi_clk_apb', 'clk_u1_ssp_spi_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_ssp_spi.PCLK']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U1_SSP_SPI_CLK_APB_;
  //clk_u1_ssp_spi_clk_core:['clk_u1_ssp_spi_clk_core', 'clk_u1_ssp_spi_clk_apb', 'clk_u1_ssp_spi_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_ssp_spi.SSPCLK']

  //rstn_u1_ssp_spi_rstn_apb:['rstn_u1_ssp_spi_rstn_apb'],dst:['u1_ssp_spi.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_SSP_SPI_RSTN_APB_;
  //rstn_u1_ssp_spi_rstn_core:['rstn_u1_ssp_spi_rstn_core'],dst:['u1_ssp_spi.nSSPRST']

}


void u1_ssp_spi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_SSP_SPI_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U1_SSP_SPI_CLK_APB_;

}


void u2_ssp_spi_enable(void){
  //clk_u2_ssp_spi_clk_apb:['clk_u2_ssp_spi_clk_apb', 'clk_u2_ssp_spi_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u2_ssp_spi.PCLK']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U2_SSP_SPI_CLK_APB_;
  //clk_u2_ssp_spi_clk_core:['clk_u2_ssp_spi_clk_core', 'clk_u2_ssp_spi_clk_apb', 'clk_u2_ssp_spi_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u2_ssp_spi.SSPCLK']

  //rstn_u2_ssp_spi_rstn_apb:['rstn_u2_ssp_spi_rstn_apb'],dst:['u2_ssp_spi.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U2_SSP_SPI_RSTN_APB_;
  //rstn_u2_ssp_spi_rstn_core:['rstn_u2_ssp_spi_rstn_core'],dst:['u2_ssp_spi.nSSPRST']

}


void u2_ssp_spi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U2_SSP_SPI_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U2_SSP_SPI_CLK_APB_;

}


void u0_tdm16slot_enable(void){
  //clk_u0_tdm16slot_clk_ahb:['clk_u0_tdm16slot_clk_ahb', 'clk_u0_tdm16slot_clk_ahb_icg', 'clk_ahb0', 'clk_ahb0_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_tdm16slot.HCLK']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB0_;
  _ENABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_AHB_;
  //clk_u0_tdm16slot_clk_apb:['clk_u0_tdm16slot_clk_apb', 'clk_u0_tdm16slot_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_tdm16slot.PCLK']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_APB_;
  //clk_u0_tdm16slot_clk_tdm:['clk_u0_tdm16slot_clk_tdm', 'clk_u0_tdm16slot_clk_tdm_mux', 'clk_tdm_internal', 'clk_tdm_internal_icg', 'clk_tdm_internal_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_tdm16slot.PCM_CLK']
  //default:_SWITCH_CLOCK_CLK_U0_TDM16SLOT_CLK_TDM_SOURCE_CLK_TDM_INTERNAL_;
  //default:_SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_;
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_MCLK_INNER_(12);
  //default:_DIVIDE_CLOCK_CLK_TDM_INTERNAL_(1);
  _ENABLE_CLOCK_CLK_TDM_INTERNAL_;
  //clk_u0_tdm16slot_clk_tdm_n:['clk_u0_tdm16slot_clk_tdm_n', 'clk_u0_tdm16slot_clk_tdm', 'clk_u0_tdm16slot_clk_tdm_mux', 'clk_tdm_internal', 'clk_tdm_internal_icg', 'clk_tdm_internal_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_tdm16slot.nPCM_CLK']

  //rstn_u0_tdm16slot_rstn_ahb:['rstn_u0_tdm16slot_rstn_ahb'],dst:['u0_tdm16slot.HRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_AHB_;
  //rstn_u0_tdm16slot_rstn_apb:['rstn_u0_tdm16slot_rstn_apb'],dst:['u0_tdm16slot.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_APB_;
  //rstn_u0_tdm16slot_rstn_tdm:['rstn_u0_tdm16slot_rstn_tdm'],dst:['u0_tdm16slot.PCM_RESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_TDM_;

}


void u0_tdm16slot_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_AHB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_TDM16SLOT_RSTN_TDM_;

  _DISABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_AHB_;
  _DISABLE_CLOCK_CLK_U0_TDM16SLOT_CLK_APB_;
  _DISABLE_CLOCK_CLK_TDM_INTERNAL_;

}


void u0_cdns_spdif_enable(void){
  //clk_u0_cdns_spdif_clk_core:['clk_u0_cdns_spdif_clk_core', 'clk_u0_cdns_spdif_clk_core_icg', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_cdns_spdif.clk']
  //default:_SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_;
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_MCLK_INNER_(12);
  _ENABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_CORE_;
  //clk_u0_cdns_spdif_clk_apb:['clk_u0_cdns_spdif_clk_apb', 'clk_u0_cdns_spdif_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_cdns_spdif.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_APB_;

  //rstn_u0_cdns_spdif_rstn_apb:['rstn_u0_cdns_spdif_rstn_apb'],dst:['u0_cdns_spdif.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_SPDIF_RSTN_APB_;

}


void u0_cdns_spdif_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_SPDIF_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_CORE_;
  _DISABLE_CLOCK_CLK_U0_CDNS_SPDIF_CLK_APB_;

}


void u0_pwmdac_enable(void){
  //clk_u0_pwmdac_clk_apb:['clk_u0_pwmdac_clk_apb', 'clk_u0_pwmdac_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_pwmdac.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_PWMDAC_CLK_APB_;
  //clk_u0_pwmdac_clk_core:['clk_u0_pwmdac_clk_core', 'clk_u0_pwmdac_clk_core_icg', 'clk_u0_pwmdac_clk_core_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_pwmdac.clk_pwmdac']
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_U0_PWMDAC_CLK_CORE_(12);
  _ENABLE_CLOCK_CLK_U0_PWMDAC_CLK_CORE_;

  //rstn_u0_pwmdac_rstn_apb:['rstn_u0_pwmdac_rstn_apb'],dst:['u0_pwmdac.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PWMDAC_RSTN_APB_;

}


void u0_pwmdac_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_PWMDAC_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_PWMDAC_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_PWMDAC_CLK_CORE_;

}


void u0_pdm_4mic_enable(void){
  //clk_u0_pdm_4mic_clk_dmic:['clk_u0_pdm_4mic_clk_dmic', 'clk_u0_pdm_4mic_clk_dmic_icg', 'clk_u0_pdm_4mic_clk_dmic_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_pdm_4mic.dmic_mclkin']
  //default:_SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_;
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_MCLK_INNER_(12);
  //default:_DIVIDE_CLOCK_CLK_U0_PDM_4MIC_CLK_DMIC_(8);
  _ENABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_DMIC_;
  //clk_u0_pdm_4mic_clk_apb:['clk_u0_pdm_4mic_clk_apb', 'clk_u0_pdm_4mic_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_pdm_4mic.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_APB_;
  //clk_u0_pdm_4mic_clk_dmic0_bclk_slv:['clk_u0_pdm_4mic_clk_dmic0_bclk_slv', 'clk_u0_i2srx_3ch_bclk', 'clk_u0_i2srx_3ch_bclk_mux', 'clk_i2srx_3ch_bclk_mst', 'clk_i2srx_3ch_bclk_mst_icg', 'clk_i2srx_3ch_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_pdm_4mic.i2s_dmic0_bclki']
  //default:_SWITCH_CLOCK_CLK_U0_I2SRX_3CH_BCLK_SOURCE_CLK_I2SRX_3CH_BCLK_MST_;
  //default:_DIVIDE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_(4);
  _ENABLE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_;
  //clk_u0_pdm_4mic_clk_dmic0_lrck_slv:['clk_u0_pdm_4mic_clk_dmic0_lrck_slv', 'clk_u0_i2srx_3ch_lrck', 'clk_u0_i2srx_3ch_lrck_mux', 'clk_i2srx_3ch_lrck_mst', 'clk_i2srx_3ch_lrck_mst_div', 'clk_i2srx_3ch_lrck_mst_mux', 'clk_i2srx_3ch_bclk_mst_inv', 'clk_i2srx_3ch_bclk_mst', 'clk_i2srx_3ch_bclk_mst_icg', 'clk_i2srx_3ch_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_pdm_4mic.i2s_dmic0_lrcki']
  //default:_SWITCH_CLOCK_CLK_U0_I2SRX_3CH_LRCK_SOURCE_CLK_I2SRX_3CH_LRCK_MST_;
  //default:_SWITCH_CLOCK_CLK_I2SRX_3CH_LRCK_MST_SOURCE_CLK_I2SRX_3CH_BCLK_MST_INV_;
  //default:_DIVIDE_CLOCK_CLK_I2SRX_3CH_LRCK_MST_(64);
  //clk_u0_pdm_4mic_clk_dmic1_bclk_slv:['clk_u0_pdm_4mic_clk_dmic1_bclk_slv', 'clk_u0_i2srx_3ch_bclk', 'clk_u0_i2srx_3ch_bclk_mux', 'clk_i2srx_3ch_bclk_mst', 'clk_i2srx_3ch_bclk_mst_icg', 'clk_i2srx_3ch_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_pdm_4mic.i2s_dmic1_bclki']
  //clk_u0_pdm_4mic_clk_dmic1_lrck_slv:['clk_u0_pdm_4mic_clk_dmic1_lrck_slv', 'clk_u0_i2srx_3ch_lrck', 'clk_u0_i2srx_3ch_lrck_mux', 'clk_i2srx_3ch_lrck_mst', 'clk_i2srx_3ch_lrck_mst_div', 'clk_i2srx_3ch_lrck_mst_mux', 'clk_i2srx_3ch_bclk_mst_inv', 'clk_i2srx_3ch_bclk_mst', 'clk_i2srx_3ch_bclk_mst_icg', 'clk_i2srx_3ch_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_pdm_4mic.i2s_dmic1_lrcki']

  //rstn_u0_pdm_4mic_rstn_dmic:['rstn_u0_pdm_4mic_rstn_dmic'],dst:['u0_pdm_4mic.dmic_rstn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_DMIC_;
  //rstn_u0_pdm_4mic_rstn_apb:['rstn_u0_pdm_4mic_rstn_apb'],dst:['u0_pdm_4mic.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_APB_;

}


void u0_pdm_4mic_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_DMIC_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_PDM_4MIC_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_DMIC_;
  _DISABLE_CLOCK_CLK_U0_PDM_4MIC_CLK_APB_;
  _DISABLE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_;

}


void u0_i2srx_3ch_enable(void){
  //clk_u0_i2srx_3ch_clk_apb:['clk_u0_i2srx_3ch_clk_apb', 'clk_u0_i2srx_3ch_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_i2srx_3ch.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_I2SRX_3CH_CLK_APB_;
  //clk_u0_i2srx_3ch_bclk_n:['clk_u0_i2srx_3ch_bclk_n', 'clk_u0_i2srx_3ch_bclk', 'clk_u0_i2srx_3ch_bclk_mux', 'clk_i2srx_3ch_bclk_mst', 'clk_i2srx_3ch_bclk_mst_icg', 'clk_i2srx_3ch_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_i2srx_3ch.sclk_n']
  //default:_SWITCH_CLOCK_CLK_U0_I2SRX_3CH_BCLK_SOURCE_CLK_I2SRX_3CH_BCLK_MST_;
  //default:_SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_;
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_MCLK_INNER_(12);
  //default:_DIVIDE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_(4);
  _ENABLE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_;
  //clk_u0_i2srx_3ch_bclk:['clk_u0_i2srx_3ch_bclk', 'clk_u0_i2srx_3ch_bclk_mux', 'clk_i2srx_3ch_bclk_mst', 'clk_i2srx_3ch_bclk_mst_icg', 'clk_i2srx_3ch_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_i2srx_3ch.sclk']
  //clk_u0_i2srx_3ch_lrck:['clk_u0_i2srx_3ch_lrck', 'clk_u0_i2srx_3ch_lrck_mux', 'clk_i2srx_3ch_lrck_mst', 'clk_i2srx_3ch_lrck_mst_div', 'clk_i2srx_3ch_lrck_mst_mux', 'clk_i2srx_3ch_bclk_mst_inv', 'clk_i2srx_3ch_bclk_mst', 'clk_i2srx_3ch_bclk_mst_icg', 'clk_i2srx_3ch_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_i2srx_3ch.ws_slv']
  //default:_SWITCH_CLOCK_CLK_U0_I2SRX_3CH_LRCK_SOURCE_CLK_I2SRX_3CH_LRCK_MST_;
  //default:_SWITCH_CLOCK_CLK_I2SRX_3CH_LRCK_MST_SOURCE_CLK_I2SRX_3CH_BCLK_MST_INV_;
  //default:_DIVIDE_CLOCK_CLK_I2SRX_3CH_LRCK_MST_(64);

  //rstn_u0_i2srx_3ch_rstn_apb:['rstn_u0_i2srx_3ch_rstn_apb'],dst:['u0_i2srx_3ch.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_APB_;
  //rstn_u0_i2srx_3ch_rstn_bclk:['rstn_u0_i2srx_3ch_rstn_bclk'],dst:['u0_i2srx_3ch.sresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_BCLK_;

}


void u0_i2srx_3ch_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_I2SRX_3CH_RSTN_BCLK_;

  _DISABLE_CLOCK_CLK_U0_I2SRX_3CH_CLK_APB_;
  _DISABLE_CLOCK_CLK_I2SRX_3CH_BCLK_MST_;

}


void u3_dw_uart_enable(void){
  //clk_u3_dw_uart_clk_apb:['clk_u3_dw_uart_clk_apb', 'clk_u3_dw_uart_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u3_dw_uart.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U3_DW_UART_CLK_APB_;
  //clk_u3_dw_uart_clk_core:['clk_u3_dw_uart_clk_core', 'clk_u3_dw_uart_clk_core_icg', 'clk_u3_dw_uart_clk_core_div', 'clk_perh_root', 'clk_perh_root_div', 'clk_perh_root_mux', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u3_dw_uart.sclk']
  //default:_SWITCH_CLOCK_CLK_PERH_ROOT_SOURCE_CLK_PLL0_;
  //default:_DIVIDE_CLOCK_CLK_PERH_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_U3_DW_UART_CLK_CORE_(2560);
  _ENABLE_CLOCK_CLK_U3_DW_UART_CLK_CORE_;

  //rstn_u3_dw_uart_rstn_apb:['rstn_u3_dw_uart_rstn_apb'],dst:['u3_dw_uart.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_APB_;
  //rstn_u3_dw_uart_rstn_core:['rstn_u3_dw_uart_rstn_core'],dst:['u3_dw_uart.s_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_CORE_;

}


void u3_dw_uart_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U3_DW_UART_RSTN_CORE_;

  _DISABLE_CLOCK_CLK_U3_DW_UART_CLK_APB_;
  _DISABLE_CLOCK_CLK_U3_DW_UART_CLK_CORE_;

}


void u4_dw_uart_enable(void){
  //clk_u4_dw_uart_clk_apb:['clk_u4_dw_uart_clk_apb', 'clk_u4_dw_uart_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u4_dw_uart.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U4_DW_UART_CLK_APB_;
  //clk_u4_dw_uart_clk_core:['clk_u4_dw_uart_clk_core', 'clk_u4_dw_uart_clk_core_icg', 'clk_u4_dw_uart_clk_core_div', 'clk_perh_root', 'clk_perh_root_div', 'clk_perh_root_mux', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u4_dw_uart.sclk']
  //default:_SWITCH_CLOCK_CLK_PERH_ROOT_SOURCE_CLK_PLL0_;
  //default:_DIVIDE_CLOCK_CLK_PERH_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_U4_DW_UART_CLK_CORE_(2560);
  _ENABLE_CLOCK_CLK_U4_DW_UART_CLK_CORE_;

  //rstn_u4_dw_uart_rstn_apb:['rstn_u4_dw_uart_rstn_apb'],dst:['u4_dw_uart.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_APB_;
  //rstn_u4_dw_uart_rstn_core:['rstn_u4_dw_uart_rstn_core'],dst:['u4_dw_uart.s_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_CORE_;

}


void u4_dw_uart_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U4_DW_UART_RSTN_CORE_;

  _DISABLE_CLOCK_CLK_U4_DW_UART_CLK_APB_;
  _DISABLE_CLOCK_CLK_U4_DW_UART_CLK_CORE_;

}


void u5_dw_uart_enable(void){
  //clk_u5_dw_uart_clk_apb:['clk_u5_dw_uart_clk_apb', 'clk_u5_dw_uart_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u5_dw_uart.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U5_DW_UART_CLK_APB_;
  //clk_u5_dw_uart_clk_core:['clk_u5_dw_uart_clk_core', 'clk_u5_dw_uart_clk_core_icg', 'clk_u5_dw_uart_clk_core_div', 'clk_perh_root', 'clk_perh_root_div', 'clk_perh_root_mux', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u5_dw_uart.sclk']
  //default:_SWITCH_CLOCK_CLK_PERH_ROOT_SOURCE_CLK_PLL0_;
  //default:_DIVIDE_CLOCK_CLK_PERH_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_U5_DW_UART_CLK_CORE_(2560);
  _ENABLE_CLOCK_CLK_U5_DW_UART_CLK_CORE_;

  //rstn_u5_dw_uart_rstn_apb:['rstn_u5_dw_uart_rstn_apb'],dst:['u5_dw_uart.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_APB_;
  //rstn_u5_dw_uart_rstn_core:['rstn_u5_dw_uart_rstn_core'],dst:['u5_dw_uart.s_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_CORE_;

}


void u5_dw_uart_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U5_DW_UART_RSTN_CORE_;

  _DISABLE_CLOCK_CLK_U5_DW_UART_CLK_APB_;
  _DISABLE_CLOCK_CLK_U5_DW_UART_CLK_CORE_;

}


void u3_dw_i2c_enable(void){
  //clk_u3_dw_i2c_clk_apb:['clk_u3_dw_i2c_clk_apb', 'clk_u3_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u3_dw_i2c.pclk']
  _ENABLE_CLOCK_CLK_U3_DW_I2C_CLK_APB_;
  //clk_u3_dw_i2c_clk_core:['clk_u3_dw_i2c_clk_core', 'clk_u3_dw_i2c_clk_apb', 'clk_u3_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u3_dw_i2c.ic_clk']

  //rstn_u3_dw_i2c_rstn_apb:['rstn_u3_dw_i2c_rstn_apb'],dst:['u3_dw_i2c.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U3_DW_I2C_RSTN_APB_;
  //rstn_u3_dw_i2c_rstn_core:['rstn_u3_dw_i2c_rstn_core'],dst:['u3_dw_i2c.ic_rst_n']

}


void u3_dw_i2c_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U3_DW_I2C_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U3_DW_I2C_CLK_APB_;

}


void u4_dw_i2c_enable(void){
  //clk_u4_dw_i2c_clk_apb:['clk_u4_dw_i2c_clk_apb', 'clk_u4_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u4_dw_i2c.pclk']
  _ENABLE_CLOCK_CLK_U4_DW_I2C_CLK_APB_;
  //clk_u4_dw_i2c_clk_core:['clk_u4_dw_i2c_clk_core', 'clk_u4_dw_i2c_clk_apb', 'clk_u4_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u4_dw_i2c.ic_clk']

  //rstn_u4_dw_i2c_rstn_apb:['rstn_u4_dw_i2c_rstn_apb'],dst:['u4_dw_i2c.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U4_DW_I2C_RSTN_APB_;
  //rstn_u4_dw_i2c_rstn_core:['rstn_u4_dw_i2c_rstn_core'],dst:['u4_dw_i2c.ic_rst_n']

}


void u4_dw_i2c_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U4_DW_I2C_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U4_DW_I2C_CLK_APB_;

}


void u5_dw_i2c_enable(void){
  //clk_u5_dw_i2c_clk_apb:['clk_u5_dw_i2c_clk_apb', 'clk_u5_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u5_dw_i2c.pclk']
  _ENABLE_CLOCK_CLK_U5_DW_I2C_CLK_APB_;
  //clk_u5_dw_i2c_clk_core:['clk_u5_dw_i2c_clk_core', 'clk_u5_dw_i2c_clk_apb', 'clk_u5_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u5_dw_i2c.ic_clk']

  //rstn_u5_dw_i2c_rstn_apb:['rstn_u5_dw_i2c_rstn_apb'],dst:['u5_dw_i2c.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U5_DW_I2C_RSTN_APB_;
  //rstn_u5_dw_i2c_rstn_core:['rstn_u5_dw_i2c_rstn_core'],dst:['u5_dw_i2c.ic_rst_n']

}


void u5_dw_i2c_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U5_DW_I2C_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U5_DW_I2C_CLK_APB_;

}


void u6_dw_i2c_enable(void){
  //clk_u6_dw_i2c_clk_apb:['clk_u6_dw_i2c_clk_apb', 'clk_u6_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u6_dw_i2c.pclk']
  _ENABLE_CLOCK_CLK_U6_DW_I2C_CLK_APB_;
  //clk_u6_dw_i2c_clk_core:['clk_u6_dw_i2c_clk_core', 'clk_u6_dw_i2c_clk_apb', 'clk_u6_dw_i2c_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u6_dw_i2c.ic_clk']

  //rstn_u6_dw_i2c_rstn_apb:['rstn_u6_dw_i2c_rstn_apb'],dst:['u6_dw_i2c.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U6_DW_I2C_RSTN_APB_;
  //rstn_u6_dw_i2c_rstn_core:['rstn_u6_dw_i2c_rstn_core'],dst:['u6_dw_i2c.ic_rst_n']

}


void u6_dw_i2c_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U6_DW_I2C_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U6_DW_I2C_CLK_APB_;

}


void u3_ssp_spi_enable(void){
  //clk_u3_ssp_spi_clk_apb:['clk_u3_ssp_spi_clk_apb', 'clk_u3_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u3_ssp_spi.PCLK']
  _ENABLE_CLOCK_CLK_U3_SSP_SPI_CLK_APB_;
  //clk_u3_ssp_spi_clk_core:['clk_u3_ssp_spi_clk_core', 'clk_u3_ssp_spi_clk_apb', 'clk_u3_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u3_ssp_spi.SSPCLK']

  //rstn_u3_ssp_spi_rstn_apb:['rstn_u3_ssp_spi_rstn_apb'],dst:['u3_ssp_spi.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U3_SSP_SPI_RSTN_APB_;
  //rstn_u3_ssp_spi_rstn_core:['rstn_u3_ssp_spi_rstn_core'],dst:['u3_ssp_spi.nSSPRST']

}


void u3_ssp_spi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U3_SSP_SPI_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U3_SSP_SPI_CLK_APB_;

}


void u4_ssp_spi_enable(void){
  //clk_u4_ssp_spi_clk_apb:['clk_u4_ssp_spi_clk_apb', 'clk_u4_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u4_ssp_spi.PCLK']
  _ENABLE_CLOCK_CLK_U4_SSP_SPI_CLK_APB_;
  //clk_u4_ssp_spi_clk_core:['clk_u4_ssp_spi_clk_core', 'clk_u4_ssp_spi_clk_apb', 'clk_u4_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u4_ssp_spi.SSPCLK']

  //rstn_u4_ssp_spi_rstn_apb:['rstn_u4_ssp_spi_rstn_apb'],dst:['u4_ssp_spi.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U4_SSP_SPI_RSTN_APB_;
  //rstn_u4_ssp_spi_rstn_core:['rstn_u4_ssp_spi_rstn_core'],dst:['u4_ssp_spi.nSSPRST']

}


void u4_ssp_spi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U4_SSP_SPI_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U4_SSP_SPI_CLK_APB_;

}


void u5_ssp_spi_enable(void){
  //clk_u5_ssp_spi_clk_apb:['clk_u5_ssp_spi_clk_apb', 'clk_u5_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u5_ssp_spi.PCLK']
  _ENABLE_CLOCK_CLK_U5_SSP_SPI_CLK_APB_;
  //clk_u5_ssp_spi_clk_core:['clk_u5_ssp_spi_clk_core', 'clk_u5_ssp_spi_clk_apb', 'clk_u5_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u5_ssp_spi.SSPCLK']

  //rstn_u5_ssp_spi_rstn_apb:['rstn_u5_ssp_spi_rstn_apb'],dst:['u5_ssp_spi.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U5_SSP_SPI_RSTN_APB_;
  //rstn_u5_ssp_spi_rstn_core:['rstn_u5_ssp_spi_rstn_core'],dst:['u5_ssp_spi.nSSPRST']

}


void u5_ssp_spi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U5_SSP_SPI_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U5_SSP_SPI_CLK_APB_;

}


void u6_ssp_spi_enable(void){
  //clk_u6_ssp_spi_clk_apb:['clk_u6_ssp_spi_clk_apb', 'clk_u6_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u6_ssp_spi.PCLK']
  _ENABLE_CLOCK_CLK_U6_SSP_SPI_CLK_APB_;
  //clk_u6_ssp_spi_clk_core:['clk_u6_ssp_spi_clk_core', 'clk_u6_ssp_spi_clk_apb', 'clk_u6_ssp_spi_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u6_ssp_spi.SSPCLK']

  //rstn_u6_ssp_spi_rstn_apb:['rstn_u6_ssp_spi_rstn_apb'],dst:['u6_ssp_spi.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U6_SSP_SPI_RSTN_APB_;
  //rstn_u6_ssp_spi_rstn_core:['rstn_u6_ssp_spi_rstn_core'],dst:['u6_ssp_spi.nSSPRST']

}


void u6_ssp_spi_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U6_SSP_SPI_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U6_SSP_SPI_CLK_APB_;

}


void u0_i2stx_4ch_enable(void){
  //clk_u0_i2stx_4ch_clk_apb:['clk_u0_i2stx_4ch_clk_apb', 'clk_u0_i2stx_4ch_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_i2stx_4ch.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U0_I2STX_4CH_CLK_APB_;
  //clk_u0_i2stx_4ch_bclk:['clk_u0_i2stx_4ch_bclk', 'clk_u0_i2stx_4ch_bclk_mux', 'clk_i2stx_4ch0_bclk_mst', 'clk_i2stx_4ch0_bclk_mst_icg', 'clk_i2stx_4ch0_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_i2stx_4ch.sclk']
  //default:_SWITCH_CLOCK_CLK_U0_I2STX_4CH_BCLK_SOURCE_CLK_I2STX_4CH0_BCLK_MST_;
  //default:_SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_;
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_MCLK_INNER_(12);
  //default:_DIVIDE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_(4);
  _ENABLE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_;
  //clk_u0_i2stx_4ch_bclk_n:['clk_u0_i2stx_4ch_bclk_n', 'clk_u0_i2stx_4ch_bclk', 'clk_u0_i2stx_4ch_bclk_mux', 'clk_i2stx_4ch0_bclk_mst', 'clk_i2stx_4ch0_bclk_mst_icg', 'clk_i2stx_4ch0_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_i2stx_4ch.sclk_n']
  //clk_u0_i2stx_4ch_lrck:['clk_u0_i2stx_4ch_lrck', 'clk_u0_i2stx_4ch_lrck_mux', 'clk_i2stx_4ch0_lrck_mst', 'clk_i2stx_4ch0_lrck_mst_div', 'clk_i2stx_4ch0_lrck_mst_mux', 'clk_i2stx_4ch0_bclk_mst_inv', 'clk_i2stx_4ch0_bclk_mst', 'clk_i2stx_4ch0_bclk_mst_icg', 'clk_i2stx_4ch0_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u0_i2stx_4ch.ws_slv']
  //default:_SWITCH_CLOCK_CLK_U0_I2STX_4CH_LRCK_SOURCE_CLK_I2STX_4CH0_LRCK_MST_;
  //default:_SWITCH_CLOCK_CLK_I2STX_4CH0_LRCK_MST_SOURCE_CLK_I2STX_4CH0_BCLK_MST_INV_;
  //default:_DIVIDE_CLOCK_CLK_I2STX_4CH0_LRCK_MST_(64);

  //rstn_u0_i2stx_4ch_rstn_apb:['rstn_u0_i2stx_4ch_rstn_apb'],dst:['u0_i2stx_4ch.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_APB_;
  //rstn_u0_i2stx_4ch_rstn_bclk:['rstn_u0_i2stx_4ch_rstn_bclk'],dst:['u0_i2stx_4ch.sresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_BCLK_;

}


void u0_i2stx_4ch_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_I2STX_4CH_RSTN_BCLK_;

  _DISABLE_CLOCK_CLK_U0_I2STX_4CH_CLK_APB_;
  _DISABLE_CLOCK_CLK_I2STX_4CH0_BCLK_MST_;

}


void u1_i2stx_4ch_enable(void){
  //clk_u1_i2stx_4ch_clk_apb:['clk_u1_i2stx_4ch_clk_apb', 'clk_u1_i2stx_4ch_clk_apb_icg', 'clk_apb0', 'clk_apb0_icg', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_i2stx_4ch.pclk']
  _ENABLE_CLOCK_CLK_APB0_;
  _ENABLE_CLOCK_CLK_U1_I2STX_4CH_CLK_APB_;
  //clk_u1_i2stx_4ch_bclk:['clk_u1_i2stx_4ch_bclk', 'clk_u1_i2stx_4ch_bclk_mux', 'clk_i2stx_4ch1_bclk_mst', 'clk_i2stx_4ch1_bclk_mst_icg', 'clk_i2stx_4ch1_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u1_i2stx_4ch.sclk']
  //default:_SWITCH_CLOCK_CLK_U1_I2STX_4CH_BCLK_SOURCE_CLK_I2STX_4CH1_BCLK_MST_;
  //default:_SWITCH_CLOCK_CLK_MCLK_SOURCE_CLK_MCLK_INNER_;
  //default:_DIVIDE_CLOCK_CLK_AUDIO_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_MCLK_INNER_(12);
  //default:_DIVIDE_CLOCK_CLK_I2STX_4CH1_BCLK_MST_(4);
  _ENABLE_CLOCK_CLK_I2STX_4CH1_BCLK_MST_;
  //clk_u1_i2stx_4ch_bclk_n:['clk_u1_i2stx_4ch_bclk_n', 'clk_u1_i2stx_4ch_bclk', 'clk_u1_i2stx_4ch_bclk_mux', 'clk_i2stx_4ch1_bclk_mst', 'clk_i2stx_4ch1_bclk_mst_icg', 'clk_i2stx_4ch1_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u1_i2stx_4ch.sclk_n']
  //clk_u1_i2stx_4ch_lrck:['clk_u1_i2stx_4ch_lrck', 'clk_u1_i2stx_4ch_lrck_mux', 'clk_i2stx_4ch1_lrck_mst', 'clk_i2stx_4ch1_lrck_mst_div', 'clk_i2stx_4ch1_lrck_mst_mux', 'clk_i2stx_4ch1_bclk_mst_inv', 'clk_i2stx_4ch1_bclk_mst', 'clk_i2stx_4ch1_bclk_mst_icg', 'clk_i2stx_4ch1_bclk_mst_div', 'clk_mclk', 'clk_mclk_mux', 'clk_mclk_inner', 'clk_mclk_inner_div', 'clk_audio_root', 'clk_audio_root_div', 'clk_pll2', 'clk_u0_pll_wrap_clk_pll2_o1'],dst:['u1_i2stx_4ch.ws_slv']
  //default:_SWITCH_CLOCK_CLK_U1_I2STX_4CH_LRCK_SOURCE_CLK_I2STX_4CH1_LRCK_MST_;
  //default:_SWITCH_CLOCK_CLK_I2STX_4CH1_LRCK_MST_SOURCE_CLK_I2STX_4CH1_BCLK_MST_INV_;
  //default:_DIVIDE_CLOCK_CLK_I2STX_4CH1_LRCK_MST_(64);

  //rstn_u1_i2stx_4ch_rstn_apb:['rstn_u1_i2stx_4ch_rstn_apb'],dst:['u1_i2stx_4ch.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_APB_;
  //rstn_u1_i2stx_4ch_rstn_bclk:['rstn_u1_i2stx_4ch_rstn_bclk'],dst:['u1_i2stx_4ch.sresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_BCLK_;

}


void u1_i2stx_4ch_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_I2STX_4CH_RSTN_BCLK_;

  _DISABLE_CLOCK_CLK_U1_I2STX_4CH_CLK_APB_;
  _DISABLE_CLOCK_CLK_I2STX_4CH1_BCLK_MST_;

}


void u0_pwm_8ch_enable(void){
  //clk_u0_pwm_8ch_clk_apb:['clk_u0_pwm_8ch_clk_apb', 'clk_u0_pwm_8ch_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_pwm_8ch.pclk']
  _ENABLE_CLOCK_CLK_U0_PWM_8CH_CLK_APB_;

  //rstn_u0_pwm_8ch_rstn_apb:['rstn_u0_pwm_8ch_rstn_apb'],dst:['u0_pwm_8ch.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PWM_8CH_RSTN_APB_;

}


void u0_pwm_8ch_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_PWM_8CH_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_PWM_8CH_CLK_APB_;

}


void u0_temp_sensor_enable(void){
  //clk_u0_temp_sensor_clk_apb:['clk_u0_temp_sensor_clk_apb', 'clk_u0_temp_sensor_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_temp_sensor.pclk']
  _ENABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_APB_;
  //clk_u0_temp_sensor_clk_temp:['clk_u0_temp_sensor_clk_temp', 'clk_u0_temp_sensor_clk_temp_icg', 'clk_u0_temp_sensor_clk_temp_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_temp_sensor.clk_temp_sense']
  //default:_DIVIDE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_TEMP_(24);
  _ENABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_TEMP_;

  //rstn_u0_temp_sensor_rstn_apb:['rstn_u0_temp_sensor_rstn_apb'],dst:['u0_temp_sensor.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_APB_;
  //rstn_u0_temp_sensor_rstn_temp:['rstn_u0_temp_sensor_rstn_temp'],dst:['u0_temp_sensor.rstn_temp_sense']
  _CLEAR_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_TEMP_;

}


void u0_temp_sensor_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_TEMP_SENSOR_RSTN_TEMP_;

  _DISABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_TEMP_SENSOR_CLK_TEMP_;

}


void u0_dskit_wdt_enable(void){
  //clk_u0_dskit_wdt_clk_apb:['clk_u0_dskit_wdt_clk_apb', 'clk_u0_dskit_wdt_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_dskit_wdt.PCLK']
  _ENABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_APB_;
  //clk_u0_dskit_wdt_clk_wdt:['clk_u0_dskit_wdt_clk_wdt', 'clk_u0_dskit_wdt_clk_wdt_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dskit_wdt.WDOGCLK']
  _ENABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_WDT_;

  //rstn_u0_dskit_wdt_rstn_apb:['rstn_u0_dskit_wdt_rstn_apb'],dst:['u0_dskit_wdt.PRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_APB_;
  //rstn_u0_dskit_wdt_rstn_wdt:['rstn_u0_dskit_wdt_rstn_wdt'],dst:['u0_dskit_wdt.WDOGRESn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_WDT_;

}


void u0_dskit_wdt_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DSKIT_WDT_RSTN_WDT_;

  _DISABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_DSKIT_WDT_CLK_WDT_;

}


void u0_si5_timer_enable(void){
  //clk_u0_si5_timer_clk_apb:['clk_u0_si5_timer_clk_apb', 'clk_u0_si5_timer_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_si5_timer.PCLK']
  _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_APB_;
  //clk_u0_si5_timer_clk_timer0:['clk_u0_si5_timer_clk_timer0', 'clk_u0_si5_timer_clk_timer0_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_si5_timer.TIMER0_CLK']
  _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER0_;
  //clk_u0_si5_timer_clk_timer1:['clk_u0_si5_timer_clk_timer1', 'clk_u0_si5_timer_clk_timer1_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_si5_timer.TIMER1_CLK']
  _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER1_;
  //clk_u0_si5_timer_clk_timer2:['clk_u0_si5_timer_clk_timer2', 'clk_u0_si5_timer_clk_timer2_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_si5_timer.TIMER2_CLK']
  _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER2_;
  //clk_u0_si5_timer_clk_timer3:['clk_u0_si5_timer_clk_timer3', 'clk_u0_si5_timer_clk_timer3_icg', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_si5_timer.TIMER3_CLK']
  _ENABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER3_;

  //rstn_u0_si5_timer_rstn_apb:['rstn_u0_si5_timer_rstn_apb'],dst:['u0_si5_timer.PRESETN']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_APB_;
  //rstn_u0_si5_timer_rstn_timer0:['rstn_u0_si5_timer_rstn_timer0'],dst:['u0_si5_timer.TIMER0_RESETN']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER0_;
  //rstn_u0_si5_timer_rstn_timer1:['rstn_u0_si5_timer_rstn_timer1'],dst:['u0_si5_timer.TIMER1_RESETN']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER1_;
  //rstn_u0_si5_timer_rstn_timer2:['rstn_u0_si5_timer_rstn_timer2'],dst:['u0_si5_timer.TIMER2_RESETN']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER2_;
  //rstn_u0_si5_timer_rstn_timer3:['rstn_u0_si5_timer_rstn_timer3'],dst:['u0_si5_timer.TIMER3_RESETN']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER3_;

}


void u0_si5_timer_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER0_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER1_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER2_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_SI5_TIMER_RSTN_TIMER3_;

  _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER0_;
  _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER1_;
  _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER2_;
  _DISABLE_CLOCK_CLK_U0_SI5_TIMER_CLK_TIMER3_;

}


void u0_int_ctrl_enable(void){
  //clk_u0_int_ctrl_clk_apb:['clk_u0_int_ctrl_clk_apb', 'clk_u0_int_ctrl_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_int_ctrl.pclk']
  _ENABLE_CLOCK_CLK_U0_INT_CTRL_CLK_APB_;

  //rstn_u0_int_ctrl_rstn_apb:['rstn_u0_int_ctrl_rstn_apb'],dst:['u0_int_ctrl.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_INT_CTRL_RSTN_APB_;

}


void u0_int_ctrl_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_INT_CTRL_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_INT_CTRL_CLK_APB_;

}


void u0_can_ctrl_enable(void){
  //clk_u0_can_ctrl_clk_apb:['clk_u0_can_ctrl_clk_apb', 'clk_u0_can_ctrl_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_can_ctrl.pclk']
  _ENABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_APB_;
  //clk_u0_can_ctrl_clk_can:['clk_u0_can_ctrl_clk_can', 'clk_u0_can_ctrl_clk_can_icg', 'clk_u0_can_ctrl_clk_can_div', 'clk_perh_root', 'clk_perh_root_div', 'clk_perh_root_mux', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u0_can_ctrl.can_clk']
  //default:_SWITCH_CLOCK_CLK_PERH_ROOT_SOURCE_CLK_PLL0_;
  //default:_DIVIDE_CLOCK_CLK_PERH_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_U0_CAN_CTRL_CLK_CAN_(8);
  _ENABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_CAN_;
  //clk_u0_can_ctrl_clk_timer:['clk_u0_can_ctrl_clk_timer', 'clk_u0_can_ctrl_clk_timer_icg', 'clk_u0_can_ctrl_clk_timer_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_can_ctrl.timer_clk']
  //default:_DIVIDE_CLOCK_CLK_U0_CAN_CTRL_CLK_TIMER_(24);
  _ENABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_TIMER_;

  //rstn_u0_can_ctrl_rstn_apb:['rstn_u0_can_ctrl_rstn_apb'],dst:['u0_can_ctrl.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_APB_;
  //rstn_u0_can_ctrl_rstn_can:['rstn_u0_can_ctrl_rstn_can'],dst:['u0_can_ctrl.can_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_CAN_;
  //rstn_u0_can_ctrl_rstn_timer:['rstn_u0_can_ctrl_rstn_timer'],dst:['u0_can_ctrl.timer_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_TIMER_;

}


void u0_can_ctrl_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_CAN_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CAN_CTRL_RSTN_TIMER_;

  _DISABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_CAN_;
  _DISABLE_CLOCK_CLK_U0_CAN_CTRL_CLK_TIMER_;

}


void u1_can_ctrl_enable(void){
  //clk_u1_can_ctrl_clk_apb:['clk_u1_can_ctrl_clk_apb', 'clk_u1_can_ctrl_clk_apb_icg', 'clk_apb12', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_can_ctrl.pclk']
  _ENABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_APB_;
  //clk_u1_can_ctrl_clk_can:['clk_u1_can_ctrl_clk_can', 'clk_u1_can_ctrl_clk_can_icg', 'clk_u1_can_ctrl_clk_can_div', 'clk_perh_root', 'clk_perh_root_div', 'clk_perh_root_mux', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u1_can_ctrl.can_clk']
  //default:_SWITCH_CLOCK_CLK_PERH_ROOT_SOURCE_CLK_PLL0_;
  //default:_DIVIDE_CLOCK_CLK_PERH_ROOT_(2);
  //default:_DIVIDE_CLOCK_CLK_U1_CAN_CTRL_CLK_CAN_(8);
  _ENABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_CAN_;
  //clk_u1_can_ctrl_clk_timer:['clk_u1_can_ctrl_clk_timer', 'clk_u1_can_ctrl_clk_timer_icg', 'clk_u1_can_ctrl_clk_timer_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_can_ctrl.timer_clk']
  //default:_DIVIDE_CLOCK_CLK_U1_CAN_CTRL_CLK_TIMER_(24);
  _ENABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_TIMER_;

  //rstn_u1_can_ctrl_rstn_apb:['rstn_u1_can_ctrl_rstn_apb'],dst:['u1_can_ctrl.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_APB_;
  //rstn_u1_can_ctrl_rstn_can:['rstn_u1_can_ctrl_rstn_can'],dst:['u1_can_ctrl.can_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_CAN_;
  //rstn_u1_can_ctrl_rstn_timer:['rstn_u1_can_ctrl_rstn_timer'],dst:['u1_can_ctrl.timer_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_TIMER_;

}


void u1_can_ctrl_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_CAN_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_CAN_CTRL_RSTN_TIMER_;

  _DISABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_APB_;
  _DISABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_CAN_;
  _DISABLE_CLOCK_CLK_U1_CAN_CTRL_CLK_TIMER_;

}


void u0_dw_sdio_enable(void){
  //clk_u0_dw_sdio_clk_ahb:['clk_u0_dw_sdio_clk_ahb', 'clk_u0_dw_sdio_clk_ahb_icg', 'clk_ahb0', 'clk_ahb0_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dw_sdio.clk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB0_;
  _ENABLE_CLOCK_CLK_U0_DW_SDIO_CLK_AHB_;
  //clk_u0_dw_sdio_clk_sdcard:['clk_u0_dw_sdio_clk_sdcard', 'clk_u0_dw_sdio_clk_sdcard_icg', 'clk_u0_dw_sdio_clk_sdcard_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dw_sdio.cclk_in']
  //default:_DIVIDE_CLOCK_CLK_U0_DW_SDIO_CLK_SDCARD_(2);
  _ENABLE_CLOCK_CLK_U0_DW_SDIO_CLK_SDCARD_;

  //rstn_u0_dw_sdio_rstn_ahb:['rstn_u0_dw_sdio_rstn_ahb'],dst:['u0_dw_sdio.reset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_SDIO_RSTN_AHB_;

}


void u0_dw_sdio_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_SDIO_RSTN_AHB_;

  _DISABLE_CLOCK_CLK_U0_DW_SDIO_CLK_AHB_;
  _DISABLE_CLOCK_CLK_U0_DW_SDIO_CLK_SDCARD_;

}


void u1_dw_sdio_enable(void){
  //clk_u1_dw_sdio_clk_ahb:['clk_u1_dw_sdio_clk_ahb', 'clk_u1_dw_sdio_clk_ahb_icg', 'clk_ahb0', 'clk_ahb0_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_dw_sdio.clk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB0_;
  _ENABLE_CLOCK_CLK_U1_DW_SDIO_CLK_AHB_;
  //clk_u1_dw_sdio_clk_sdcard:['clk_u1_dw_sdio_clk_sdcard', 'clk_u1_dw_sdio_clk_sdcard_icg', 'clk_u1_dw_sdio_clk_sdcard_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_dw_sdio.cclk_in']
  //default:_DIVIDE_CLOCK_CLK_U1_DW_SDIO_CLK_SDCARD_(2);
  _ENABLE_CLOCK_CLK_U1_DW_SDIO_CLK_SDCARD_;

  //rstn_u1_dw_sdio_rstn_ahb:['rstn_u1_dw_sdio_rstn_ahb'],dst:['u1_dw_sdio.reset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U1_DW_SDIO_RSTN_AHB_;

}


void u1_dw_sdio_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_DW_SDIO_RSTN_AHB_;

  _DISABLE_CLOCK_CLK_U1_DW_SDIO_CLK_AHB_;
  _DISABLE_CLOCK_CLK_U1_DW_SDIO_CLK_SDCARD_;

}


void u1_dw_gmac5_axi64_enable(void){
  //clk_u1_dw_gmac5_axi64_clk_tx:['clk_u1_dw_gmac5_axi64_clk_tx', 'clk_u1_dw_gmac5_axi64_clk_tx_icg', 'clk_u1_dw_gmac5_axi64_clk_tx_mux', 'clk_gmac1_gtxclk', 'clk_gmac1_gtxclk_div', 'clk_gmacusb_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u1_dw_gmac5_axi64.clk_tx_i']
  //default:_SWITCH_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_SOURCE_CLK_GMAC1_GTXCLK_;
  //default:_DIVIDE_CLOCK_CLK_GMAC1_GTXCLK_(8);
  _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_;
  //clk_u1_dw_gmac5_axi64_clk_rx:['clk_u1_dw_gmac5_axi64_clk_rx', 'clk_u1_dw_gmac5_axi64_clk_rx_mux', 'clk_gmac1_rgmii_rxin', 'clk_gmac1_rgmii_rx'],dst:['u1_dw_gmac5_axi64.clk_rx_i']
  //default:_SWITCH_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_RX_SOURCE_CLK_GMAC1_RGMII_RXIN_;
  //clk_u1_dw_gmac5_axi64_clk_tx_inv:['clk_u1_dw_gmac5_axi64_clk_tx_inv', 'clk_u1_dw_gmac5_axi64_clk_tx', 'clk_u1_dw_gmac5_axi64_clk_tx_icg', 'clk_u1_dw_gmac5_axi64_clk_tx_mux', 'clk_gmac1_gtxclk', 'clk_gmac1_gtxclk_div', 'clk_gmacusb_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u1_dw_gmac5_axi64.clk_tx_180_i']
  //clk_u1_dw_gmac5_axi64_clk_rx_inv:['clk_u1_dw_gmac5_axi64_clk_rx_inv', 'clk_u1_dw_gmac5_axi64_clk_rx', 'clk_u1_dw_gmac5_axi64_clk_rx_mux', 'clk_gmac1_rgmii_rxin', 'clk_gmac1_rgmii_rx'],dst:['u1_dw_gmac5_axi64.clk_rx_180_i']
  //clk_u1_dw_gmac5_axi64_clk_rmii:['clk_u1_dw_gmac5_axi64_clk_rmii', 'clk_gmac1_rmii_refin', 'clk_gmac1_rmii_ref'],dst:['u1_dw_gmac5_axi64.clk_rmii_i']
  //clk_u1_dw_gmac5_axi64_clk_ptp:['clk_u1_dw_gmac5_axi64_clk_ptp', 'clk_u1_dw_gmac5_axi64_clk_ptp_icg', 'clk_u1_dw_gmac5_axi64_clk_ptp_div', 'clk_gmac_src', 'clk_gmac_src_div', 'clk_gmacusb_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u1_dw_gmac5_axi64.clk_ptp_ref_i']
  //default:_DIVIDE_CLOCK_CLK_GMAC_SRC_(2);
  //default:_DIVIDE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_(10);
  _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_;
  //clk_u1_dw_gmac5_axi64_clk_ahb:['clk_u1_dw_gmac5_axi64_clk_ahb', 'clk_u1_dw_gmac5_axi64_clk_ahb_icg', 'clk_ahb0', 'clk_ahb0_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_dw_gmac5_axi64.hclk_i']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_AHB0_;
  _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AHB_;
  //clk_u1_dw_gmac5_axi64_clk_axi:['clk_u1_dw_gmac5_axi64_clk_axi', 'clk_u1_dw_gmac5_axi64_clk_axi_icg', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_dw_gmac5_axi64.aclk_i']
  _ENABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AXI_;

  //rstn_u1_dw_gmac5_axi64_hreset_n:['rstn_u1_dw_gmac5_axi64_hreset_n'],dst:['u1_dw_gmac5_axi64.hreset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_HRESET_N_;
  //rstn_u1_dw_gmac5_axi64_aresetn_i:['rstn_u1_dw_gmac5_axi64_aresetn_i'],dst:['u1_dw_gmac5_axi64.aresetn_i']
  _CLEAR_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_;

}


void u1_dw_gmac5_axi64_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_HRESET_N_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_DW_GMAC5_AXI64_ARESETN_I_;

  _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_TX_;
  _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_PTP_;
  _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AHB_;
  _DISABLE_CLOCK_CLK_U1_DW_GMAC5_AXI64_CLK_AXI_;

}


void u0_e2_sft7110_enable(void){
  //clk_u0_e2_sft7110_clk_core:['clk_u0_e2_sft7110_clk_core', 'clk_u0_e2_sft7110_clk_core_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_e2_sft7110.clock']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_E2_SFT7110_CLK_CORE_;
  //clk_u0_e2_sft7110_clk_dbg:['clk_u0_e2_sft7110_clk_dbg', 'clk_u0_e2_sft7110_clk_dbg_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_e2_sft7110.debug_clock']
  _ENABLE_CLOCK_CLK_U0_E2_SFT7110_CLK_DBG_;
  //clk_u0_e2_sft7110_debug_systemjtag_jtag_TCK:['clk_u0_e2_sft7110_debug_systemjtag_jtag_TCK', 'clk_u0_jtag_daisy_chain_jtag_tck_1'],dst:['u0_e2_sft7110.debug_systemjtag_jtag_TCK']
  //clk_u0_e2_sft7110_rtc_clk:['clk_u0_e2_sft7110_rtc_clk', 'clk_u0_e2_sft7110_rtc_clk_icg', 'clk_u0_e2_sft7110_rtc_clk_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_e2_sft7110.rtc_toggle']
  //default:_DIVIDE_CLOCK_CLK_U0_E2_SFT7110_RTC_CLK_(24);
  _ENABLE_CLOCK_CLK_U0_E2_SFT7110_RTC_CLK_;

  //rst_u0_e2_sft7110_rst_core:['rst_u0_e2_sft7110_rst_core'],dst:['u0_e2_sft7110.reset']
  _CLEAR_RESET_RSTGEN_RST_U0_E2_SFT7110_RST_CORE_;
  //rstn_u0_e2_sft7110_rst_hart0:['rstn_u0_e2_sft7110_rst_hart0'],dst:['u0_e2_sft7110.resetctrl_hartIsInReset_0']
  //rstn_u0_e2_sft7110_rst_dbg:['rstn_u0_e2_sft7110_rst_dbg'],dst:['u0_e2_sft7110.debug_reset']

}


void u0_e2_sft7110_disable(void){
  _ASSERT_RESET_RSTGEN_RST_U0_E2_SFT7110_RST_CORE_;

  _DISABLE_CLOCK_CLK_U0_E2_SFT7110_CLK_CORE_;
  _DISABLE_CLOCK_CLK_U0_E2_SFT7110_CLK_DBG_;
  _DISABLE_CLOCK_CLK_U0_E2_SFT7110_RTC_CLK_;

}


void u0_hifi4_enable(void){
  //clk_u0_hifi4_clk_core:['clk_u0_hifi4_clk_core', 'clk_u0_hifi4_clk_core_icg', 'clk_hifi4_core', 'clk_u0_sys_crg_clk_hifi4_core', 'clk_hifi4_core', 'clk_hifi4_core_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_hifi4.CLK']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_HIFI4_CORE_(3);
  _ENABLE_CLOCK_CLK_U0_HIFI4_CLK_CORE_;

  //rst_u0_hifi4_rst_axi:['rst_u0_hifi4_rst_axi'],dst:['u0_hifi4.DReset']
  _CLEAR_RESET_RSTGEN_RST_U0_HIFI4_RST_AXI_;
  //rst_u0_hifi4_rst_core:['rst_u0_hifi4_rst_core'],dst:['u0_hifi4.BReset']
  _CLEAR_RESET_RSTGEN_RST_U0_HIFI4_RST_CORE_;

}


void u0_hifi4_disable(void){
  _ASSERT_RESET_RSTGEN_RST_U0_HIFI4_RST_AXI_;
  _ASSERT_RESET_RSTGEN_RST_U0_HIFI4_RST_CORE_;

  _DISABLE_CLOCK_CLK_U0_HIFI4_CLK_CORE_;

}


void u0_dw_dma1p_8ch_56hs_enable(void){
  //clk_u0_dw_dma1p_8ch_56hs_clk_axi:['clk_u0_dw_dma1p_8ch_56hs_clk_axi', 'clk_u0_dw_dma1p_8ch_56hs_clk_axi_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dw_dma1p_8ch_56hs.dmac_core_clock']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_DW_DMA1P_8CH_56HS_CLK_AXI_;
  //clk_u0_dw_dma1p_8ch_56hs_clk_ahb:['clk_u0_dw_dma1p_8ch_56hs_clk_ahb', 'clk_u0_dw_dma1p_8ch_56hs_clk_ahb_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_dw_dma1p_8ch_56hs.hclk']
  _ENABLE_CLOCK_CLK_U0_DW_DMA1P_8CH_56HS_CLK_AHB_;

  //rstn_u0_dw_dma1p_8ch_56hs_rstn_axi:['rstn_u0_dw_dma1p_8ch_56hs_rstn_axi'],dst:['u0_dw_dma1p_8ch_56hs.dmac_core_resetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_DMA1P_8CH_56HS_RSTN_AXI_;
  //rstn_u0_dw_dma1p_8ch_56hs_rstn_ahb:['rstn_u0_dw_dma1p_8ch_56hs_rstn_ahb'],dst:['u0_dw_dma1p_8ch_56hs.hresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DW_DMA1P_8CH_56HS_RSTN_AHB_;

}


void u0_dw_dma1p_8ch_56hs_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_DMA1P_8CH_56HS_RSTN_AXI_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DW_DMA1P_8CH_56HS_RSTN_AHB_;

  _DISABLE_CLOCK_CLK_U0_DW_DMA1P_8CH_56HS_CLK_AXI_;
  _DISABLE_CLOCK_CLK_U0_DW_DMA1P_8CH_56HS_CLK_AHB_;

}


void u0_pcie01_slv_dec_enable(void){
  //clk_u0_pcie01_slv_dec_mainclk:['clk_u0_pcie01_slv_dec_mainclk', 'clk_u0_pcie01_slv_dec_mainclk_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_pcie01_slv_dec.mainclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_PCIE01_SLV_DEC_MAINCLK_;

  //rstn_u0_pcie01_slv_dec_mainresetn:['rstn_u0_pcie01_slv_dec_mainresetn'],dst:['u0_pcie01_slv_dec.mainresetn']

}


void u0_pcie01_slv_dec_disable(void){

  _DISABLE_CLOCK_CLK_U0_PCIE01_SLV_DEC_MAINCLK_;

}


void u0_plda_pcie_enable(void){
  //clk_u0_plda_pcie_clk_tl:['clk_u0_plda_pcie_clk_tl', 'clk_u0_plda_pcie_clk_tl_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_plda_pcie.tl_clk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_PLDA_PCIE_CLK_TL_;
  //clk_u0_plda_pcie_clk_axi_slv:['clk_u0_plda_pcie_clk_axi_slv', 'clk_u0_plda_pcie_clk_axi_mst0', 'clk_u0_plda_pcie_clk_axi_mst0_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_plda_pcie.axi4_slvl_aclk']
  _ENABLE_CLOCK_CLK_U0_PLDA_PCIE_CLK_AXI_MST0_;
  //clk_u0_plda_pcie_clk_axi_mst0:['clk_u0_plda_pcie_clk_axi_mst0', 'clk_u0_plda_pcie_clk_axi_mst0_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_plda_pcie.axi4_mst0_aclk']
  //clk_u0_plda_pcie_clk_axi_slv0:['clk_u0_plda_pcie_clk_axi_slv0', 'clk_u0_plda_pcie_clk_axi_mst0', 'clk_u0_plda_pcie_clk_axi_mst0_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_plda_pcie.axi4_slv0_aclk']
  //clk_u0_plda_pcie_clk_apb:['clk_u0_plda_pcie_clk_apb', 'clk_u0_plda_pcie_clk_apb_icg', 'clk_stg_apb', 'clk_u0_sys_crg_clk_apb_bus', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_plda_pcie.pclk']
  _ENABLE_CLOCK_CLK_U0_PLDA_PCIE_CLK_APB_;
  //clk_u0_plda_pcie_clk_osc:['clk_u0_plda_pcie_clk_osc', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_plda_pcie.pll_ckref_inner']

  //rstn_u0_plda_pcie_rstn_brg:['rstn_u0_plda_pcie_rstn_brg'],dst:['u0_plda_pcie.br_rstn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_BRG_;
  //rstn_u0_plda_pcie_rstn_pcie:['rstn_u0_plda_pcie_rstn_pcie'],dst:['u0_plda_pcie.pcie_resetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_PCIE_;
  //rstn_u0_plda_pcie_rstn_axi_slv:['rstn_u0_plda_pcie_rstn_axi_slv'],dst:['u0_plda_pcie.axi4_slvl_aresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_AXI_SLV_;
  //rstn_u0_plda_pcie_rstn_axi_mst0:['rstn_u0_plda_pcie_rstn_axi_mst0'],dst:['u0_plda_pcie.axi4_mst0_aresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_AXI_MST0_;
  //rstn_u0_plda_pcie_rstn_axi_slv0:['rstn_u0_plda_pcie_rstn_axi_slv0'],dst:['u0_plda_pcie.axi4_slv0_aresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_AXI_SLV0_;
  //rstn_u0_plda_pcie_rstn_apb:['rstn_u0_plda_pcie_rstn_apb'],dst:['u0_plda_pcie.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_APB_;

}


void u0_plda_pcie_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_BRG_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_PCIE_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_AXI_SLV_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_AXI_MST0_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_AXI_SLV0_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_PLDA_PCIE_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U0_PLDA_PCIE_CLK_TL_;
  _DISABLE_CLOCK_CLK_U0_PLDA_PCIE_CLK_AXI_MST0_;
  _DISABLE_CLOCK_CLK_U0_PLDA_PCIE_CLK_APB_;

}


void u1_plda_pcie_enable(void){
  //clk_u1_plda_pcie_clk_tl:['clk_u1_plda_pcie_clk_tl', 'clk_u1_plda_pcie_clk_tl_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_plda_pcie.tl_clk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U1_PLDA_PCIE_CLK_TL_;
  //clk_u1_plda_pcie_clk_axi_slv:['clk_u1_plda_pcie_clk_axi_slv', 'clk_u1_plda_pcie_clk_axi_mst0', 'clk_u1_plda_pcie_clk_axi_mst0_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_plda_pcie.axi4_slvl_aclk']
  _ENABLE_CLOCK_CLK_U1_PLDA_PCIE_CLK_AXI_MST0_;
  //clk_u1_plda_pcie_clk_axi_mst0:['clk_u1_plda_pcie_clk_axi_mst0', 'clk_u1_plda_pcie_clk_axi_mst0_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_plda_pcie.axi4_mst0_aclk']
  //clk_u1_plda_pcie_clk_axi_slv0:['clk_u1_plda_pcie_clk_axi_slv0', 'clk_u1_plda_pcie_clk_axi_mst0', 'clk_u1_plda_pcie_clk_axi_mst0_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_plda_pcie.axi4_slv0_aclk']
  //clk_u1_plda_pcie_clk_apb:['clk_u1_plda_pcie_clk_apb', 'clk_u1_plda_pcie_clk_apb_icg', 'clk_stg_apb', 'clk_u0_sys_crg_clk_apb_bus', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u1_plda_pcie.pclk']
  _ENABLE_CLOCK_CLK_U1_PLDA_PCIE_CLK_APB_;
  //clk_u1_plda_pcie_clk_osc:['clk_u1_plda_pcie_clk_osc', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u1_plda_pcie.pll_ckref_inner']

  //rstn_u1_plda_pcie_rstn_brg:['rstn_u1_plda_pcie_rstn_brg'],dst:['u1_plda_pcie.br_rstn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_BRG_;
  //rstn_u1_plda_pcie_rstn_pcie:['rstn_u1_plda_pcie_rstn_pcie'],dst:['u1_plda_pcie.pcie_resetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_PCIE_;
  //rstn_u1_plda_pcie_rstn_axi_slv:['rstn_u1_plda_pcie_rstn_axi_slv'],dst:['u1_plda_pcie.axi4_slvl_aresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_AXI_SLV_;
  //rstn_u1_plda_pcie_rstn_axi_mst0:['rstn_u1_plda_pcie_rstn_axi_mst0'],dst:['u1_plda_pcie.axi4_mst0_aresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_AXI_MST0_;
  //rstn_u1_plda_pcie_rstn_axi_slv0:['rstn_u1_plda_pcie_rstn_axi_slv0'],dst:['u1_plda_pcie.axi4_slv0_aresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_AXI_SLV0_;
  //rstn_u1_plda_pcie_rstn_apb:['rstn_u1_plda_pcie_rstn_apb'],dst:['u1_plda_pcie.presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_APB_;

}


void u1_plda_pcie_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_BRG_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_PCIE_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_AXI_SLV_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_AXI_MST0_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_AXI_SLV0_;
  _ASSERT_RESET_RSTGEN_RSTN_U1_PLDA_PCIE_RSTN_APB_;

  _DISABLE_CLOCK_CLK_U1_PLDA_PCIE_CLK_TL_;
  _DISABLE_CLOCK_CLK_U1_PLDA_PCIE_CLK_AXI_MST0_;
  _DISABLE_CLOCK_CLK_U1_PLDA_PCIE_CLK_APB_;

}


void u0_cdn_usb_enable(void){
  //clk_u0_cdn_usb_clk_app_125:['clk_u0_cdn_usb_clk_app_125', 'clk_u0_cdn_usb_clk_app_125_icg', 'clk_usb_125m', 'clk_u0_sys_crg_clk_usb_125m', 'clk_usb_125m', 'clk_usb_125m_div', 'clk_gmacusb_root', 'clk_pll0', 'clk_u0_pll_wrap_clk_pll0_o1'],dst:['u0_cdn_usb.app_clk_125_predft']
  //default:_DIVIDE_CLOCK_CLK_USB_125M_(8);
  _ENABLE_CLOCK_CLK_U0_CDN_USB_CLK_APP_125_;
  //clk_u0_cdn_usb_clk_lpm:['clk_u0_cdn_usb_clk_lpm', 'clk_u0_cdn_usb_clk_lpm_icg', 'clk_u0_cdn_usb_clk_lpm_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_cdn_usb.lpm_clk_predft']
  //default:_DIVIDE_CLOCK_CLK_U0_CDN_USB_CLK_LPM_(2);
  _ENABLE_CLOCK_CLK_U0_CDN_USB_CLK_LPM_;
  //clk_u0_cdn_usb_clk_stb:['clk_u0_cdn_usb_clk_stb', 'clk_u0_cdn_usb_clk_stb_icg', 'clk_u0_cdn_usb_clk_stb_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_cdn_usb.stb_clk_predft']
  //default:_DIVIDE_CLOCK_CLK_U0_CDN_USB_CLK_STB_(4);
  _ENABLE_CLOCK_CLK_U0_CDN_USB_CLK_STB_;
  //clk_u0_cdn_usb_clk_usb_apb:['clk_u0_cdn_usb_clk_usb_apb', 'clk_u0_cdn_usb_clk_usb_apb_icg', 'clk_stg_apb', 'clk_u0_sys_crg_clk_apb_bus', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_cdn_usb.pclk']
  _ENABLE_CLOCK_CLK_U0_CDN_USB_CLK_USB_APB_;
  //clk_u0_cdn_usb_clk_axi:['clk_u0_cdn_usb_clk_axi', 'clk_u0_cdn_usb_clk_axi_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_cdn_usb.aclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_CDN_USB_CLK_AXI_;
  //clk_u0_cdn_usb_refclk:['clk_u0_cdn_usb_refclk', 'clk_u0_cdn_usb_refclk_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_cdn_usb.refclk']
  //default:_DIVIDE_CLOCK_CLK_U0_CDN_USB_REFCLK_(2);
  //clk_u0_cdn_usb_clk_utmi_apb:['clk_u0_cdn_usb_clk_utmi_apb', 'clk_u0_cdn_usb_clk_utmi_apb_icg', 'clk_stg_apb', 'clk_u0_sys_crg_clk_apb_bus', 'clk_apb_bus', 'clk_u2_pclk_mux_pclk'],dst:['u0_cdn_usb.utmi_pclk']
  _ENABLE_CLOCK_CLK_U0_CDN_USB_CLK_UTMI_APB_;

  //rstn_u0_cdn_usb_rstn_pwrup:['rstn_u0_cdn_usb_rstn_pwrup'],dst:['u0_cdn_usb.pwrup_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_PWRUP_;
  //rstn_u0_cdn_usb_rstn_usb_apb:['rstn_u0_cdn_usb_rstn_usb_apb'],dst:['u0_cdn_usb.preset_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_USB_APB_;
  //rstn_u0_cdn_usb_rstn_axi:['rstn_u0_cdn_usb_rstn_axi'],dst:['u0_cdn_usb.aresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_AXI_;
  //rstn_u0_cdn_usb_rstn_utmi_apb:['rstn_u0_cdn_usb_rstn_utmi_apb'],dst:['u0_cdn_usb.utmi_presetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_UTMI_APB_;

}


void u0_cdn_usb_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_PWRUP_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_USB_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_AXI_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDN_USB_RSTN_UTMI_APB_;

  _DISABLE_CLOCK_CLK_U0_CDN_USB_CLK_APP_125_;
  _DISABLE_CLOCK_CLK_U0_CDN_USB_CLK_LPM_;
  _DISABLE_CLOCK_CLK_U0_CDN_USB_CLK_STB_;
  _DISABLE_CLOCK_CLK_U0_CDN_USB_CLK_USB_APB_;
  _DISABLE_CLOCK_CLK_U0_CDN_USB_CLK_AXI_;
  _DISABLE_CLOCK_CLK_U0_CDN_USB_CLK_UTMI_APB_;

}


void u0_sec_top_enable(void){
  //clk_u0_sec_top_hclk:['clk_u0_sec_top_hclk', 'clk_u0_sec_top_hclk_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sec_top.hclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_SEC_TOP_HCLK_;
  //clk_u0_sec_top_miscahb_clk:['clk_u0_sec_top_miscahb_clk', 'clk_u0_sec_top_miscahb_clk_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sec_top.sec_alg_clk']
  _ENABLE_CLOCK_CLK_U0_SEC_TOP_MISCAHB_CLK_;
  //clk_u0_sec_top_skp_clk:['clk_u0_sec_top_skp_clk', 'clk_u0_jtag_certification_trng_clk', 'clk_u0_jtag_certification_trng_clk_div', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_sec_top.skp_clk']
  //default:_DIVIDE_CLOCK_CLK_U0_JTAG_CERTIFICATION_TRNG_CLK_(4);

  //rstn_u0_sec_top_hresetn:['rstn_u0_sec_top_hresetn'],dst:['u0_sec_top.hresetn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_SEC_TOP_HRESETN_;

}


void u0_sec_top_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_SEC_TOP_HRESETN_;

  _DISABLE_CLOCK_CLK_U0_SEC_TOP_HCLK_;
  _DISABLE_CLOCK_CLK_U0_SEC_TOP_MISCAHB_CLK_;

}


void u0_stg_mtrx_grp0_enable(void){
  //clk_u0_stg_mtrx_grp0_clk_bus:['clk_u0_stg_mtrx_grp0_clk_bus', 'clk_u0_stg_mtrx_grp0_clk_bus_icg', 'clk_nocstg_bus', 'clk_u0_sys_crg_clk_nocstg_bus', 'clk_nocstg_bus', 'clk_nocstg_bus_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_stg_mtrx_grp0.busclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_NOCSTG_BUS_(3);
  _ENABLE_CLOCK_CLK_U0_STG_MTRX_GRP0_CLK_BUS_;
  //clk_u0_stg_mtrx_grp0_clk_main:['clk_u0_stg_mtrx_grp0_clk_main', 'clk_u0_stg_mtrx_grp0_clk_main_icg', 'clk_cpu_bus', 'clk_u0_sys_crg_clk_cpu_bus', 'clk_cpu_bus', 'clk_cpu_bus_div', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_stg_mtrx_grp0.mainclk']
  //default:_SWITCH_CLOCK_CLK_CPU_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_CPU_CORE_(1);
  //default:_DIVIDE_CLOCK_CLK_CPU_BUS_(2);
  _ENABLE_CLOCK_CLK_U0_STG_MTRX_GRP0_CLK_MAIN_;
  //clk_u0_stg_mtrx_grp0_clk_stg:['clk_u0_stg_mtrx_grp0_clk_stg', 'clk_u0_stg_mtrx_grp0_clk_stg_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_stg_mtrx_grp0.stgclk']
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_STG_MTRX_GRP0_CLK_STG_;

  //rstn_u0_stg_mtrx_grp0_rstn_bus:['rstn_u0_stg_mtrx_grp0_rstn_bus'],dst:['u0_stg_mtrx_grp0.busresetn']
  //rstn_u0_stg_mtrx_grp0_rstn_main:['rstn_u0_stg_mtrx_grp0_rstn_main'],dst:['u0_stg_mtrx_grp0.mainresetn']
  //rstn_u0_stg_mtrx_grp0_rstn_stg:['rstn_u0_stg_mtrx_grp0_rstn_stg'],dst:['u0_stg_mtrx_grp0.stgresetn']

}


void u0_stg_mtrx_grp0_disable(void){

  _DISABLE_CLOCK_CLK_U0_STG_MTRX_GRP0_CLK_BUS_;
  _DISABLE_CLOCK_CLK_U0_STG_MTRX_GRP0_CLK_MAIN_;
  _DISABLE_CLOCK_CLK_U0_STG_MTRX_GRP0_CLK_STG_;

}


void u0_stg_mtrx_grp1_enable(void){
  //clk_u0_stg_mtrx_grp1_clk_bus:['clk_u0_stg_mtrx_grp1_clk_bus', 'clk_u0_stg_mtrx_grp1_clk_bus_icg', 'clk_nocstg_bus', 'clk_u0_sys_crg_clk_nocstg_bus', 'clk_nocstg_bus', 'clk_nocstg_bus_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_stg_mtrx_grp1.busclk']
  //default:_SWITCH_CLOCK_CLK_BUS_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_NOCSTG_BUS_(3);
  _ENABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_BUS_;
  //clk_u0_stg_mtrx_grp1_clk_main:['clk_u0_stg_mtrx_grp1_clk_main', 'clk_u0_stg_mtrx_grp1_clk_main_icg', 'clk_cpu_bus', 'clk_u0_sys_crg_clk_cpu_bus', 'clk_cpu_bus', 'clk_cpu_bus_div', 'clk_cpu_core', 'clk_cpu_core_div', 'clk_cpu_root', 'clk_cpu_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_stg_mtrx_grp1.mainclk']
  //default:_SWITCH_CLOCK_CLK_CPU_ROOT_SOURCE_CLK_OSC_;
  //default:_DIVIDE_CLOCK_CLK_CPU_CORE_(1);
  //default:_DIVIDE_CLOCK_CLK_CPU_BUS_(2);
  _ENABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_MAIN_;
  //clk_u0_stg_mtrx_grp1_clk_stg:['clk_u0_stg_mtrx_grp1_clk_stg', 'clk_u0_stg_mtrx_grp1_clk_stg_icg', 'clk_stg_axiahb', 'clk_u0_sys_crg_clk_stg_axiahb', 'clk_stg_axiahb', 'clk_stg_axiahb_div', 'clk_axi_cfg0', 'clk_axi_cfg0_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_stg_mtrx_grp1.stgclk']
  //default:_DIVIDE_CLOCK_CLK_AXI_CFG0_(3);
  //default:_DIVIDE_CLOCK_CLK_STG_AXIAHB_(2);
  _ENABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_STG_;
  //clk_u0_stg_mtrx_grp1_clk_hifi:['clk_u0_stg_mtrx_grp1_clk_hifi', 'clk_u0_stg_mtrx_grp1_clk_hifi_icg', 'clk_hifi4_axi', 'clk_u0_sys_crg_clk_hifi4_axi', 'clk_hifi4_axi', 'clk_hifi4_axi_div', 'clk_hifi4_core', 'clk_hifi4_core_div', 'clk_bus_root', 'clk_bus_root_mux', 'clk_osc', 'clk_u0_clkrst_src_bypass_clk_24m'],dst:['u0_stg_mtrx_grp1.hificlk']
  //default:_DIVIDE_CLOCK_CLK_HIFI4_CORE_(3);
  //default:_DIVIDE_CLOCK_CLK_HIFI4_AXI_(2);
  _ENABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_HIFI_;

  //rstn_u0_stg_mtrx_grp1_rstn_bus:['rstn_u0_stg_mtrx_grp1_rstn_bus'],dst:['u0_stg_mtrx_grp1.busresetn']
  //rstn_u0_stg_mtrx_grp1_rstn_main:['rstn_u0_stg_mtrx_grp1_rstn_main'],dst:['u0_stg_mtrx_grp1.mainresetn']
  //rstn_u0_stg_mtrx_grp1_rstn_stg:['rstn_u0_stg_mtrx_grp1_rstn_stg'],dst:['u0_stg_mtrx_grp1.stgresetn']
  //rstn_u0_stg_mtrx_grp1_rstn_hifi:['rstn_u0_stg_mtrx_grp1_rstn_hifi'],dst:['u0_stg_mtrx_grp1.hifiresetn']

}


void u0_stg_mtrx_grp1_disable(void){

  _DISABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_BUS_;
  _DISABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_MAIN_;
  _DISABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_STG_;
  _DISABLE_CLOCK_CLK_U0_STG_MTRX_GRP1_CLK_HIFI_;

}


