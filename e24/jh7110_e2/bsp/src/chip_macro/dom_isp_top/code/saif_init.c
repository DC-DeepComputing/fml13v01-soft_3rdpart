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

void u0_vin_enable(void){
  //clk_u0_vin_ACLK:['clk_u0_vin_ACLK', 'clk_isp_axi', 'clk_dom_isp_top_clk_isp_axi'],dst:['u0_vin.ACLK']
  //clk_u0_vin_clk_p_axiwr:['clk_u0_vin_clk_p_axiwr', 'clk_u0_vin_clk_p_axiwr_mux', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_vin.clk_p_axiwr']
  //default:_SWITCH_CLOCK_CLK_U0_VIN_CLK_P_AXIWR_SOURCE_CLK_MIPI_RX0_PXL_;
  //default:_DIVIDE_CLOCK_CLK_MIPI_RX0_PXL_(3);
  //clk_u0_vin_clk_p_axird:['clk_u0_vin_clk_p_axird', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_vin.clk_p_axird']
  //clk_u0_vin_sys_clk:['clk_u0_vin_sys_clk', 'clk_u0_vin_sys_clk_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_vin.sys_clk']
  //default:_DIVIDE_CLOCK_CLK_U0_VIN_SYS_CLK_(2);
  //clk_u0_vin_pclk:['clk_u0_vin_pclk', 'clk_u0_vin_pclk_icg', 'clk_dom4_apb', 'clk_u3_pclk_mux_pclk'],dst:['u0_vin.pclk']
  _ENABLE_CLOCK_CLK_U0_VIN_PCLK_;
  //clk_u0_vin_pclk_free:['clk_u0_vin_pclk_free', 'clk_dom4_apb', 'clk_u3_pclk_mux_pclk'],dst:['u0_vin.pclk_free']
  //clk_u0_vin_pixel_clk_if0:['clk_u0_vin_pixel_clk_if0', 'clk_u0_vin_pixel_clk_if0_icg', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_vin.pixel_clk_if0']
  _ENABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF0_;
  //clk_u0_vin_pixel_clk_if1:['clk_u0_vin_pixel_clk_if1', 'clk_u0_vin_pixel_clk_if1_icg', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_vin.pixel_clk_if1']
  _ENABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF1_;
  //clk_u0_vin_pixel_clk_if2:['clk_u0_vin_pixel_clk_if2', 'clk_u0_vin_pixel_clk_if2_icg', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_vin.pixel_clk_if2']
  _ENABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF2_;
  //clk_u0_vin_pixel_clk_if3:['clk_u0_vin_pixel_clk_if3', 'clk_u0_vin_pixel_clk_if3_icg', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_vin.pixel_clk_if3']
  _ENABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF3_;

  //rstn_u0_vin_ARESETn:['rstn_u0_vin_ARESETn'],dst:['u0_vin.ARESETn']
  //rstn_u0_vin_rst_p_axiwr:['rstn_u0_vin_rst_p_axiwr'],dst:['u0_vin.rst_p_axiwr']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_P_AXIWR_;
  //rstn_u0_vin_rst_p_axird:['rstn_u0_vin_rst_p_axird'],dst:['u0_vin.rst_p_axird']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_P_AXIRD_;
  //rstn_u0_vin_rst_n_sys_clk:['rstn_u0_vin_rst_n_sys_clk'],dst:['u0_vin.rst_n_sys_clk']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_N_SYS_CLK_;
  //rstn_u0_vin_rst_n_pclk:['rstn_u0_vin_rst_n_pclk'],dst:['u0_vin.rst_n_pclk']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PCLK_;
  //rstn_u0_vin_rst_n_pixel_clk_if0:['rstn_u0_vin_rst_n_pixel_clk_if0'],dst:['u0_vin.rst_n_pixel_clk_if0']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF0_;
  //rstn_u0_vin_rst_n_pixel_clk_if1:['rstn_u0_vin_rst_n_pixel_clk_if1'],dst:['u0_vin.rst_n_pixel_clk_if1']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF1_;
  //rstn_u0_vin_rst_n_pixel_clk_if2:['rstn_u0_vin_rst_n_pixel_clk_if2'],dst:['u0_vin.rst_n_pixel_clk_if2']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF2_;
  //rstn_u0_vin_rst_n_pixel_clk_if3:['rstn_u0_vin_rst_n_pixel_clk_if3'],dst:['u0_vin.rst_n_pixel_clk_if3']
  _CLEAR_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF3_;

}


void u0_vin_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_P_AXIWR_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_P_AXIRD_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_N_SYS_CLK_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PCLK_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF0_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF1_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF2_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_VIN_RST_N_PIXEL_CLK_IF3_;

  _DISABLE_CLOCK_CLK_U0_VIN_PCLK_;
  _DISABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF0_;
  _DISABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF1_;
  _DISABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF2_;
  _DISABLE_CLOCK_CLK_U0_VIN_PIXEL_CLK_IF3_;

}


void u0_ispv2_top_wrapper_enable(void){
  //clk_u0_ispv2_top_wrapper_clk_isp:['clk_u0_ispv2_top_wrapper_clk_isp', 'clk_isp_axi', 'clk_dom_isp_top_clk_isp_axi'],dst:['u0_ispv2_top_wrapper.clk_isp']
  //clk_u0_ispv2_top_wrapper_clk_isp_x2:['clk_u0_ispv2_top_wrapper_clk_isp_x2', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_ispv2_top_wrapper.clk_isp_x2']
  //clk_u0_ispv2_top_wrapper_clk_c:['clk_u0_ispv2_top_wrapper_clk_c', 'clk_u0_ispv2_top_wrapper_clk_c_icg', 'clk_u0_ispv2_top_wrapper_clk_c_mux', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_ispv2_top_wrapper.clk_c']
  //default:_SWITCH_CLOCK_CLK_U0_ISPV2_TOP_WRAPPER_CLK_C_SOURCE_CLK_MIPI_RX0_PXL_;
  //default:_DIVIDE_CLOCK_CLK_MIPI_RX0_PXL_(3);
  _ENABLE_CLOCK_CLK_U0_ISPV2_TOP_WRAPPER_CLK_C_;
  //clk_u0_ispv2_top_wrapper_clk_p:['clk_u0_ispv2_top_wrapper_clk_p', 'clk_mipi_rx0_pxl', 'clk_mipi_rx0_pxl_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_ispv2_top_wrapper.clk_p']
  //clk_u0_ispv2_top_wrapper_clk_isp_axi_in:['clk_u0_ispv2_top_wrapper_clk_isp_axi_in', 'clk_isp_axi', 'clk_dom_isp_top_clk_isp_axi'],dst:['u0_ispv2_top_wrapper.clk_isp_axi_in']

  //rstn_u0_ispv2_top_wrapper_rstn_isp:['rstn_u0_ispv2_top_wrapper_rstn_isp'],dst:['u0_ispv2_top_wrapper.rstn_isp']
  //rst_u0_ispv2_top_wrapper_rst_c:['rst_u0_ispv2_top_wrapper_rst_c'],dst:['u0_ispv2_top_wrapper.rst_c']
  _CLEAR_RESET_RSTGEN_RST_U0_ISPV2_TOP_WRAPPER_RST_C_;
  //rst_u0_ispv2_top_wrapper_rst_p:['rst_u0_ispv2_top_wrapper_rst_p'],dst:['u0_ispv2_top_wrapper.rst_p']
  _CLEAR_RESET_RSTGEN_RST_U0_ISPV2_TOP_WRAPPER_RST_P_;
  //rstn_u0_ispv2_top_wrapper_rstn_isp_axi:['rstn_u0_ispv2_top_wrapper_rstn_isp_axi'],dst:['u0_ispv2_top_wrapper.rstn_isp_axi']

}


void u0_ispv2_top_wrapper_disable(void){
  _ASSERT_RESET_RSTGEN_RST_U0_ISPV2_TOP_WRAPPER_RST_C_;
  _ASSERT_RESET_RSTGEN_RST_U0_ISPV2_TOP_WRAPPER_RST_P_;

  _DISABLE_CLOCK_CLK_U0_ISPV2_TOP_WRAPPER_CLK_C_;

}


void u0_axi2apb_bridge_enable(void){
  //clk_u0_axi2apb_bridge_isp_axi4slv_clk:['clk_u0_axi2apb_bridge_isp_axi4slv_clk', 'clk_isp_axi', 'clk_dom_isp_top_clk_isp_axi'],dst:['u0_axi2apb_bridge.isp_axi4slv_clk']
  //clk_u0_axi2apb_bridge_clk_dom4_apb:['clk_u0_axi2apb_bridge_clk_dom4_apb', 'clk_dom4_apb', 'clk_u3_pclk_mux_pclk'],dst:['u0_axi2apb_bridge.clk_dom4_apb']

  //rstn_u0_axi2apb_bridge_isp_axi4slv_rstn:['rstn_u0_axi2apb_bridge_isp_axi4slv_rstn'],dst:['u0_axi2apb_bridge.isp_axi4slv_rstn']
  //rstn_u0_axi2apb_bridge_ip_top_reset_n:['rstn_u0_axi2apb_bridge_ip_top_reset_n'],dst:['u0_axi2apb_bridge.ip_top_reset_n']

}


void u0_axi2apb_bridge_disable(void){


}


void u3_pclk_mux_enable(void){
  //clk_u3_pclk_mux_func_pclk:['clk_u3_pclk_mux_func_pclk', 'clk_dom4_apb_func', 'clk_dom4_apb_func_div', 'clk_isp_axi', 'clk_dom_isp_top_clk_isp_axi'],dst:['u3_pclk_mux.func_pclk']
  //default:_DIVIDE_CLOCK_CLK_DOM4_APB_FUNC_(6);


}


void u3_pclk_mux_disable(void){


}


void u0_m31dphy_enable(void){
  //clk_u0_m31dphy_cfgclk_in:['clk_u0_m31dphy_cfgclk_in', 'clk_u0_m31dphy_cfgclk_in_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_m31dphy.cfgclk_in']
  //default:_DIVIDE_CLOCK_CLK_U0_M31DPHY_CFGCLK_IN_(6);
  //clk_u0_m31dphy_refclk_in:['clk_u0_m31dphy_refclk_in', 'clk_u0_m31dphy_refclk_in_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_m31dphy.refclk_in']
  //default:_DIVIDE_CLOCK_CLK_U0_M31DPHY_REFCLK_IN_(12);
  //clk_u0_m31dphy_txclkesc_lan0:['clk_u0_m31dphy_txclkesc_lan0', 'clk_u0_m31dphy_txclkesc_lan0_div', 'clk_isp_2x', 'clk_dom_isp_top_clk_ispcore_2x'],dst:['u0_m31dphy.txclkesc_lan0']
  //default:_DIVIDE_CLOCK_CLK_U0_M31DPHY_TXCLKESC_LAN0_(30);

  //rstn_u0_m31dphy_RSTB09_ALWAYS_ON:['rstn_u0_m31dphy_RSTB09_ALWAYS_ON'],dst:['u0_m31dphy.RSTB09_ALWAYS_ON']
  _CLEAR_RESET_RSTGEN_RSTN_U0_M31DPHY_RSTB09_ALWAYS_ON_;
  //rstn_u0_m31dphy_hw_rstn:['rstn_u0_m31dphy_hw_rstn'],dst:['u0_m31dphy.hw_rstn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_M31DPHY_HW_RSTN_;

}


void u0_m31dphy_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_M31DPHY_RSTB09_ALWAYS_ON_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_M31DPHY_HW_RSTN_;


}


