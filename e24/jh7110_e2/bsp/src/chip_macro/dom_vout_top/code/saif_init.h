
//uint32_t  saif_get_reg(uint32_t addr,uint32_t shift,uint32_t mask);
//void      saif_set_reg(uint32_t addr,uint32_t data,uint32_t shift,uint32_t mask);
//
//void      saif_assert_rst(uint32_t addr,uint32_t addr_status,uint32_t mask);
//void      saif_clear_rst (uint32_t addr,uint32_t addr_status,uint32_t mask);

void u0_pclk_mux_enable(void);
void u0_pclk_mux_disable(void);
void u0_dc8200_enable(void);
void u0_dc8200_disable(void);
void u0_ahb2apb_enable(void);
void u0_ahb2apb_disable(void);
void u0_p2p_async_enable(void);
void u0_p2p_async_disable(void);
void u0_cdns_dsiTx_enable(void);
void u0_cdns_dsiTx_disable(void);
void u0_mipitx_dphy_enable(void);
void u0_mipitx_dphy_disable(void);
void u0_hdmi_tx_enable(void);
void u0_hdmi_tx_disable(void);
