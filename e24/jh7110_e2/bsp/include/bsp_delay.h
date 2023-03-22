/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file bsp_delay.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_DELAY_H
#define __BSP_DELAY_H

#include <bsp_timer.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

static inline void sys_delay(int cycles)
{
    int i = 0;
    while (i++ < cycles) {
        /* blank */
    }
}

void sys_udelay(int us);

static inline void sys_mdelay(int ms)
{
    sys_udelay(ms * 1000);
}

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_DELAY_H */

