/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file bsp_compiler.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_COMPILER_H
#define __BSP_COMPILER_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// int __WEAK func()
#define __WEAK              __attribute__((weak))
#define __WEAK_INTTERRUPT   __attribute__((weak, interrupt))

#define __CONSTRUCTOR       __attribute__((constructor))
#define __CONSTRUCTOR_N(n)  __attribute__((constructor(n)))

#define typeof(x)           __typeof__(x)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_COMPILER_H */


