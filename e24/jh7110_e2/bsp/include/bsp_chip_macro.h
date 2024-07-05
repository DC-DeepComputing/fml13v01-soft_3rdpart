/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file bsp_chip_macro.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_CHIP_MACRO_H
#define __BSP_CHIP_MACRO_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define MA_INW(io)          sys_readl(io)
#define MA_OUTW(io, val)    sys_writel(val, io)

//chip
#include "chip/c_macro/aon_crg_macro.h"
#include "chip/c_macro/aon_iomux_cfg_macro.h"
#include "chip/c_macro/aon_syscon_macro.h"
#include "chip/c_macro/dma_macro.h"
#include "chip/c_macro/fmux_idx.h"
#include "chip/c_macro/fmux_macro.h"
#include "chip/c_macro/irq_macro.h"
#include "chip/c_macro/memory_map.h"
#include "chip/c_macro/mem_map.h"
#include "chip/c_macro/stg_crg_macro.h"
#include "chip/c_macro/stg_syscon_macro.h"
#include "chip/c_macro/sys_crg_macro.h"
#include "chip/c_macro/sys_iomux_cfg_macro.h"
#include "chip/c_macro/sys_syscon_macro.h"
#include "chip/code/saif_init.h"
#include "chip/code/func_cfg.h"

//dom_vout_top
#include "dom_vout_top/c_macro/dom_vout_crg_macro.h"
#include "dom_vout_top/c_macro/dom_vout_syscon_macro.h"
//#include "dom_vout_top/c_macro/memory_map.h" //conflict with chip/c_macro/mem_map.h, commented after confirmed with RTL
#include "dom_vout_top/c_macro/mipitx_apbif_macro.h"
#include "dom_vout_top/code/saif_init.h"

//dom_isp_top
#include "dom_isp_top/c_macro/crg_macro.h"
#include "dom_isp_top/c_macro/m31dphy_apbcfg_macro.h"
#include "dom_isp_top/c_macro/syscon_macro.h"
#include "dom_isp_top/code/saif_init.h"

//#define TAG_2_6_1   1
#define TAG_2_7     1
uint32_t  saif_get_reg(uint32_t addr,uint32_t shift,uint32_t mask);
void      saif_set_reg(uint32_t addr,uint32_t data,uint32_t shift,uint32_t mask);
void      saif_assert_rst(uint32_t addr,uint32_t addr_status,uint32_t mask);
void      saif_clear_rst (uint32_t addr,uint32_t addr_status,uint32_t mask);

//rtl generated padshare function select interfaces
void set_sys_iomux_func(uint32_t func);
void set_sys_iomux_cfg(uint32_t gpio_num, uint32_t func);

//irq number rename
enum {
    VOUT_DC8200_DC_INT  = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_VOUT_TOP_VOUT_SYS_INT_0,
    VOUT_DC8200_SEC_INT = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_VOUT_TOP_VOUT_SYS_INT_1,
    VOUT_DC8200_MMU_INT = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_VOUT_TOP_VOUT_SYS_INT_2,
    VOUT_DSI_INT        = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_VOUT_TOP_VOUT_SYS_INT_3,
    VOUT_HDMI_0_INT     = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_VOUT_TOP_VOUT_SYS_INT_4,

    VIN_ISP_DONE_INT         = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_ISPV2_TOP_WRAPPER_ISP_INTERRUPT_OUT_0,
    VIN_ISP_SC_DUMP_DONE_INT = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_ISPV2_TOP_WRAPPER_ISP_INTERRUPT_OUT_1,
    VIN_ISP_CSI_DONE_INT     = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_ISPV2_TOP_WRAPPER_ISP_INTERRUPT_OUT_2,
    VIN_ISP_V_DONE_INT       = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_ISPV2_TOP_WRAPPER_ISP_INTERRUPT_OUT_3,
    VIN_AXIRD_INT            = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_VIN_AXIRD_INTR,
    VIN_AXIWR_INT            = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_VIN_AXIWR0_INTR,
    VIN_MIPI_INT             = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_VIN_IRQ,
    VIN_MIPI_ERR_INT         = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_DOM_ISP_TOP_U0_VIN_ERR_IRQ,
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_CHIP_MACRO_H */

