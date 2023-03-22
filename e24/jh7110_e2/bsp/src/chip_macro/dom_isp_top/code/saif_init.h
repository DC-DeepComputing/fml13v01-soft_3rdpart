
//uint32_t  saif_get_reg(uint32_t addr,uint32_t shift,uint32_t mask);
//void      saif_set_reg(uint32_t addr,uint32_t data,uint32_t shift,uint32_t mask);
//
//void      saif_assert_rst(uint32_t addr,uint32_t addr_status,uint32_t mask);
//void      saif_clear_rst (uint32_t addr,uint32_t addr_status,uint32_t mask);

void u0_vin_enable(void);
void u0_vin_disable(void);
void u0_ispv2_top_wrapper_enable(void);
void u0_ispv2_top_wrapper_disable(void);
void u0_axi2apb_bridge_enable(void);
void u0_axi2apb_bridge_disable(void);
void u3_pclk_mux_enable(void);
void u3_pclk_mux_disable(void);
void u0_m31dphy_enable(void);
void u0_m31dphy_disable(void);
