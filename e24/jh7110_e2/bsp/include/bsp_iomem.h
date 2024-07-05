/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file bsp_iomem.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_IOMEM_H
#define __BSP_IOMEM_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// base referenced in c_macro


// base of modules

// DRAM memory map
#define DDR_SIZE                   GIGAx(8)
#define DDR_U7_SIZE                MEGAx(256)
#define DDR_E2_SIZE                MEGAx(128)
#define DDR_HIFI4_SIZE             MEGAx(128)
#define DDR_SHARE_SIZE             (DDR_SIZE - DDR_U7_SIZE - DDR_E2_SIZE - DDR_HIFI4_SIZE)

#define DDR_MEMPORT_START          0x40000000UL
#define DDR_MEMPORT_END            (DDR_MEMPORT_START + DDR_SIZE - 1)
#define DDR_SYSPORT_START          0x440000000UL
#define DDR_SYSPORT_END            (DDR_SYSPORT_START + DDR_SIZE - 1)

#define DDR_U7_OFFSET              0
#define DDR_E2_OFFSET              (DDR_U7_OFFSET + DDR_U7_SIZE)
#define DDR_HIFI4_OFFSET           (DDR_E2_OFFSET + DDR_E2_SIZE)
#define DDR_SHARE_OFFSET           (DDR_HIFI4_OFFSET + DDR_HIFI4_SIZE)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_IOMEM_H */

