/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file bsp_types.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_TYPES_H
#define __BSP_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef GENMASK
#define GENMASK(h, l) \
    (((~0UL) - (1UL << (l)) + 1) & (~0UL >> (32 - 1 - (h))))
#endif

#define BIT(x)              (1UL<<(x))

#define ARRAY_SIZE(arry)    (sizeof(arry)/sizeof((arry)[0]))

#define MAX(a,b)            ((a) > (b) ? (a) : (b))

#define MIN(a,b)            ((a) < (b) ? (a) : (b))

#define KILOx(n)			((uint64_t)(n)<<10)
#define MEGAx(n)			(KILOx(n)<<10)
#define GIGAx(n)			(MEGAx(n)<<10)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_TYPES_H */

