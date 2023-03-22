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

void u0_pclk_mux_enable(void){
  //clk_u0_pclk_mux_func_pclk:['clk_u0_pclk_mux_func_pclk', 'clk_apb', 'clk_apb_div', 'clk_disp_ahb', 'clk_dom_vout_top_clk_vout_ahb'],dst:['u0_pclk_mux.func_pclk']
  //default:_DIVIDE_CLOCK_CLK_APB_(4);


}


void u0_pclk_mux_disable(void){


}


void u0_dc8200_enable(void){
  //clk_u0_dc8200_clk_pix0:['clk_u0_dc8200_clk_pix0', 'clk_u0_dc8200_clk_pix0_icg', 'clk_u0_dc8200_clk_pix0_mux', 'clk_dc8200_pix0', 'clk_dc8200_pix0_div', 'clk_disp_root', 'clk_dom_vout_top_clk_vout_src'],dst:['u0_dc8200.pixelClk0']
  //default:_SWITCH_CLOCK_CLK_U0_DC8200_CLK_PIX0_SOURCE_CLK_DC8200_PIX0_;
  //default:_DIVIDE_CLOCK_CLK_DC8200_PIX0_(4);
  _ENABLE_CLOCK_CLK_U0_DC8200_CLK_PIX0_;
  //clk_u0_dc8200_clk_pix1:['clk_u0_dc8200_clk_pix1', 'clk_u0_dc8200_clk_pix1_icg', 'clk_u0_dc8200_clk_pix1_mux', 'clk_dc8200_pix0', 'clk_dc8200_pix0_div', 'clk_disp_root', 'clk_dom_vout_top_clk_vout_src'],dst:['u0_dc8200.pixelClk1']
  //default:_SWITCH_CLOCK_CLK_U0_DC8200_CLK_PIX1_SOURCE_CLK_DC8200_PIX0_;
  _ENABLE_CLOCK_CLK_U0_DC8200_CLK_PIX1_;
  //clk_u0_dc8200_clk_axi:['clk_u0_dc8200_clk_axi', 'clk_u0_dc8200_clk_axi_icg', 'clk_disp_axi', 'clk_dom_vout_top_clk_vout_axi'],dst:['u0_dc8200.ACLK']
  _ENABLE_CLOCK_CLK_U0_DC8200_CLK_AXI_;
  //clk_u0_dc8200_clk_core:['clk_u0_dc8200_clk_core', 'clk_u0_dc8200_clk_core_icg', 'clk_disp_axi', 'clk_dom_vout_top_clk_vout_axi'],dst:['u0_dc8200.clk']
  _ENABLE_CLOCK_CLK_U0_DC8200_CLK_CORE_;
  //clk_u0_dc8200_clk_ahb:['clk_u0_dc8200_clk_ahb', 'clk_u0_dc8200_clk_ahb_icg', 'clk_disp_ahb', 'clk_dom_vout_top_clk_vout_ahb'],dst:['u0_dc8200.HCLK']
  _ENABLE_CLOCK_CLK_U0_DC8200_CLK_AHB_;

  //rstn_u0_dc8200_rstn_axi:['rstn_u0_dc8200_rstn_axi'],dst:['u0_dc8200.ARESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DC8200_RSTN_AXI_;
  //rstn_u0_dc8200_rstn_core:['rstn_u0_dc8200_rstn_core'],dst:['u0_dc8200.resetPin_']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DC8200_RSTN_CORE_;
  //rstn_u0_dc8200_rstn_ahb:['rstn_u0_dc8200_rstn_ahb'],dst:['u0_dc8200.HRESETn']
  _CLEAR_RESET_RSTGEN_RSTN_U0_DC8200_RSTN_AHB_;

}


void u0_dc8200_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_DC8200_RSTN_AXI_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DC8200_RSTN_CORE_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_DC8200_RSTN_AHB_;

  _DISABLE_CLOCK_CLK_U0_DC8200_CLK_PIX0_;
  _DISABLE_CLOCK_CLK_U0_DC8200_CLK_PIX1_;
  _DISABLE_CLOCK_CLK_U0_DC8200_CLK_AXI_;
  _DISABLE_CLOCK_CLK_U0_DC8200_CLK_CORE_;
  _DISABLE_CLOCK_CLK_U0_DC8200_CLK_AHB_;

}


void u0_ahb2apb_enable(void){
  //clk_u0_ahb2apb_clk_ahb:['clk_u0_ahb2apb_clk_ahb', 'clk_disp_ahb', 'clk_dom_vout_top_clk_vout_ahb'],dst:['u0_ahb2apb.HCLK']

  //rstn_u0_ahb2apb_rstn_ahb:['rstn_u0_ahb2apb_rstn_ahb'],dst:['u0_ahb2apb.HRESETn']

}


void u0_ahb2apb_disable(void){


}


void u0_p2p_async_enable(void){
  //clk_u0_p2p_async_clk_apbs:['clk_u0_p2p_async_clk_apbs', 'clk_disp_apb', 'clk_u0_pclk_mux_pclk'],dst:['u0_p2p_async.pclks']
  //clk_u0_p2p_async_clk_apbm:['clk_u0_p2p_async_clk_apbm', 'clk_dsi_sys', 'clk_dsi_sys_div', 'clk_disp_root', 'clk_dom_vout_top_clk_vout_src'],dst:['u0_p2p_async.pclkm']
  //default:_DIVIDE_CLOCK_CLK_DSI_SYS_(4);

  //rstn_u0_p2p_async_rstn_apbs:['rstn_u0_p2p_async_rstn_apbs'],dst:['u0_p2p_async.presetsn']
  //rstn_u0_p2p_async_rstn_apbm:['rstn_u0_p2p_async_rstn_apbm'],dst:['u0_p2p_async.presetmn']

}


void u0_p2p_async_disable(void){


}


void u0_cdns_dsiTx_enable(void){
#if 0
  //clk_u0_cdns_dsiTx_clk_sys:['clk_u0_cdns_dsiTx_clk_sys', 'clk_u0_cdns_dsiTx_clk_sys_icg', 'clk_dsi_sys', 'clk_dsi_sys_div', 'clk_disp_root', 'clk_dom_vout_top_clk_vout_src'],dst:['u0_cdns_dsiTx.dsi_sys_clk']
  //default:_DIVIDE_CLOCK_CLK_DSI_SYS_(4);
  _ENABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_SYS_;
  //clk_u0_cdns_dsiTx_clk_apb:['clk_u0_cdns_dsiTx_clk_apb', 'clk_u0_cdns_dsiTx_clk_apb_icg', 'clk_dsi_sys', 'clk_dsi_sys_div', 'clk_disp_root', 'clk_dom_vout_top_clk_vout_src'],dst:['u0_cdns_dsiTx.dsi_p_clk']
  _ENABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_APB_;
  //clk_u0_cdns_dsiTx_clk_txesc:['clk_u0_cdns_dsiTx_clk_txesc', 'clk_u0_cdns_dsiTx_clk_txesc_icg', 'clk_tx_esc', 'clk_tx_esc_div', 'clk_disp_ahb', 'clk_dom_vout_top_clk_vout_ahb'],dst:['u0_cdns_dsiTx.dsi_tx_esc_clk']
  //default:_DIVIDE_CLOCK_CLK_TX_ESC_(12);
  _ENABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_TXESC_;
  //clk_u0_cdns_dsiTx_clk_txbytehs:['clk_u0_cdns_dsiTx_clk_txbytehs', 'clk_mipitx_dphy_txbytehs', 'clk_u0_mipitx_dphy_clk_txbytehs'],dst:['u0_cdns_dsiTx.dsi_tx_byte_hs_clk']
  //clk_u0_cdns_dsiTx_clk_rxesc:['clk_u0_cdns_dsiTx_clk_rxesc', 'clk_mipitx_dphy_rxesc', 'clk_u0_mipitx_dphy_clk_rxesc'],dst:['u0_cdns_dsiTx.dsi_rx_esc_clk']
  //clk_u0_cdns_dsiTx_clk_dpi:['clk_u0_cdns_dsiTx_clk_dpi', 'clk_u0_cdns_dsiTx_clk_dpi_icg', 'clk_u0_cdns_dsiTx_clk_dpi_mux', 'clk_dc8200_pix0', 'clk_dc8200_pix0_div', 'clk_disp_root', 'clk_dom_vout_top_clk_vout_src'],dst:['u0_cdns_dsiTx.dsi_dpi_pixel_clk']
  //default:_SWITCH_CLOCK_CLK_U0_CDNS_DSITX_CLK_DPI_SOURCE_CLK_DC8200_PIX0_;
  //default:_DIVIDE_CLOCK_CLK_DC8200_PIX0_(4);
  _ENABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_DPI_;
#endif

  //rstn_u0_cdns_dsiTx_rstn_sys:['rstn_u0_cdns_dsiTx_rstn_sys'],dst:['u0_cdns_dsiTx.dsi_sys_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_SYS_;
  //rstn_u0_cdns_dsiTx_rstn_txbytehs:['rstn_u0_cdns_dsiTx_rstn_txbytehs'],dst:['u0_cdns_dsiTx.dsi_tx_byte_hs_rst_n']
  //_CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_TXBYTEHS_; //commentted by larry
  //rstn_u0_cdns_dsiTx_rstn_apb:['rstn_u0_cdns_dsiTx_rstn_apb'],dst:['u0_cdns_dsiTx.dsi_p_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_APB_;
  //rstn_u0_cdns_dsiTx_rstn_txesc:['rstn_u0_cdns_dsiTx_rstn_txesc'],dst:['u0_cdns_dsiTx.dsi_tx_esc_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_TXESC_;
  //rstn_u0_cdns_dsiTx_rstn_rxesc:['rstn_u0_cdns_dsiTx_rstn_rxesc'],dst:['u0_cdns_dsiTx.dsi_rx_esc_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_RXESC_;
  //rstn_u0_cdns_dsiTx_rstn_dpi:['rstn_u0_cdns_dsiTx_rstn_dpi'],dst:['u0_cdns_dsiTx.dsi_dpi_pixel_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_DPI_;

}


void u0_cdns_dsiTx_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_SYS_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_TXBYTEHS_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_APB_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_TXESC_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_RXESC_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_CDNS_DSITX_RSTN_DPI_;

  _DISABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_SYS_;
  _DISABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_APB_;
  _DISABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_TXESC_;
  _DISABLE_CLOCK_CLK_U0_CDNS_DSITX_CLK_DPI_;

}


void u0_mipitx_dphy_enable(void){
  //clk_u0_mipitx_dphy_clk_dphy_ref:['clk_u0_mipitx_dphy_clk_dphy_ref', 'clk_mipi_dphy_ref', 'clk_dom_vout_top_clk_mipiphy_ref'],dst:['u0_mipitx_dphy.refclk_in']
  //clk_u0_mipitx_dphy_clk_txesc:['clk_u0_mipitx_dphy_clk_txesc', 'clk_u0_mipitx_dphy_clk_txesc_icg', 'clk_tx_esc', 'clk_tx_esc_div', 'clk_disp_ahb', 'clk_dom_vout_top_clk_vout_ahb'],dst:['u0_mipitx_dphy.ppi_tx_esc_clk']
  //default:_DIVIDE_CLOCK_CLK_TX_ESC_(12);
  _ENABLE_CLOCK_CLK_U0_MIPITX_DPHY_CLK_TXESC_;
  //clk_u0_mipitx_dphy_clk_sys:['clk_u0_mipitx_dphy_clk_sys', 'clk_disp_apb', 'clk_u0_pclk_mux_pclk'],dst:['u0_mipitx_dphy.clk_sys']

  //rstn_u0_mipitx_dphy_rstn_sys:['rstn_u0_mipitx_dphy_rstn_sys'],dst:['u0_mipitx_dphy.rstn_sys']
  _CLEAR_RESET_RSTGEN_RSTN_U0_MIPITX_DPHY_RSTN_SYS_;
  //rstn_u0_mipitx_dphy_rstn_txbytehs:['rstn_u0_mipitx_dphy_rstn_txbytehs'],dst:['u0_mipitx_dphy.rstn_txbyte_hs']
  _CLEAR_RESET_RSTGEN_RSTN_U0_MIPITX_DPHY_RSTN_TXBYTEHS_;

}


void u0_mipitx_dphy_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_MIPITX_DPHY_RSTN_SYS_;
  _ASSERT_RESET_RSTGEN_RSTN_U0_MIPITX_DPHY_RSTN_TXBYTEHS_;

  _DISABLE_CLOCK_CLK_U0_MIPITX_DPHY_CLK_TXESC_;

}


void u0_hdmi_tx_enable(void){
  //clk_u0_hdmi_tx_clk_sys:['clk_u0_hdmi_tx_clk_sys', 'clk_u0_hdmi_tx_clk_sys_icg', 'clk_disp_apb', 'clk_u0_pclk_mux_pclk'],dst:['u0_hdmi_tx.pin_sys_clk']
  _ENABLE_CLOCK_CLK_U0_HDMI_TX_CLK_SYS_;
  //clk_u0_hdmi_tx_clk_ref:['clk_u0_hdmi_tx_clk_ref', 'clk_hdmi_phy_ref', 'clk_dom_vout_top_clk_hdmiphy_ref'],dst:['u0_hdmi_tx.pin_ref_clk']
  //clk_u0_hdmi_tx_clk_mclk:['clk_u0_hdmi_tx_clk_mclk', 'clk_u0_hdmi_tx_clk_mclk_icg', 'clk_hdmitx0_mclk', 'clk_dom_vout_top_clk_hdmitx0_mclk'],dst:['u0_hdmi_tx.pin_mclk']
  _ENABLE_CLOCK_CLK_U0_HDMI_TX_CLK_MCLK_;
  //clk_u0_hdmi_tx_clk_bclk:['clk_u0_hdmi_tx_clk_bclk', 'clk_u0_hdmi_tx_clk_bclk_icg', 'clk_hdmitx0_sck', 'clk_dom_vout_top_clk_hdmitx0_bclk'],dst:['u0_hdmi_tx.pin_sck']
  _ENABLE_CLOCK_CLK_U0_HDMI_TX_CLK_BCLK_;

  //rstn_u0_hdmi_tx_rstn_hdmi:['rstn_u0_hdmi_tx_rstn_hdmi'],dst:['u0_hdmi_tx.pin_func_rst_n']
  _CLEAR_RESET_RSTGEN_RSTN_U0_HDMI_TX_RSTN_HDMI_;

}


void u0_hdmi_tx_disable(void){
  _ASSERT_RESET_RSTGEN_RSTN_U0_HDMI_TX_RSTN_HDMI_;

  _DISABLE_CLOCK_CLK_U0_HDMI_TX_CLK_SYS_;
  _DISABLE_CLOCK_CLK_U0_HDMI_TX_CLK_MCLK_;
  _DISABLE_CLOCK_CLK_U0_HDMI_TX_CLK_BCLK_;

}


