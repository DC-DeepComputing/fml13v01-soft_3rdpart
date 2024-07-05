/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file dhry_portme.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"

long time(const long *base)
{
    uint64_t _base = base ? (uint64_t)(*base)*1000 : 0;
    return sys_get_timer(_base)/1000;
}

float cpu_mhz(void)
{
    clock_freq_t cpu_hz = sys_clock_freq(CLK_STG_AXIAHB);
    return (float)((double)cpu_hz/1000000.0);
}