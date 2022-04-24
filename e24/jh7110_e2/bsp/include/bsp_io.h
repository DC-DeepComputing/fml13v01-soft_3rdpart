/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_io.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_IO_H_
#define __BSP_IO_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "bsp_iomem.h"

#define __IO    volatile
#define __I     const volatile
#define __O     volatile

static int sys_io_trace;
static inline void sys_set_io_trace(int on)
{
    sys_io_trace = on;
}

static inline void sys_writel(uint32_t val, void *addr)
{
    *(__O uint32_t *)addr = val;
    if (sys_io_trace) {
        printf("writel(0x%08x, %p)\n", val, addr);
    }
}

static inline uint32_t sys_readl(void *addr)
{
    uint32_t val = *(__I uint32_t *)addr;
    if (sys_io_trace) {
        printf("readl(%p) = 0x%08x\n", addr, val);
    }
    return val;
    //return *(__I uint32_t *)addr;
}

static inline void sys_modl(void *addr, uint32_t mask, uint32_t val)
{
    *(__O uint32_t *)addr = ((*(__O uint32_t *)addr) & ~mask) | (val & mask);
}

static inline uint64_t sys_to_sysport(uint64_t addr)
{
    return ((addr) >= DDR_MEMPORT_START && (addr) <= DDR_MEMPORT_END  ?  ((addr) + (DDR_SYSPORT_START - DDR_MEMPORT_START))  :  (addr));
}

static inline uint64_t sys_to_memport(uint64_t addr)
{
    return ((addr) >= DDR_SYSPORT_START && (addr) <= DDR_SYSPORT_END  ?  ((addr) - (DDR_SYSPORT_START - DDR_MEMPORT_START))  :  (addr));
}

/*FIXME:implement this function when need flush cache*/
static inline int sys_flush(uint64_t start, uint64_t len)
{
    return 0;
}


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_IO_H_ */

