/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file bsp_chip_macro.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"

#include "chip/code/saif_init.c"
#include "chip/code/func_cfg.c"
#include "dom_vout_top/code/saif_init.c"
#include "dom_isp_top/code/saif_init.c"

uint32_t saif_get_reg(uint32_t addr,uint32_t shift,uint32_t mask)
{
    uint32_t tmp;
    tmp = MA_INW(addr);
    tmp = (tmp & mask) >> shift;
    return tmp;
}

void saif_set_reg(uint32_t addr,uint32_t data,uint32_t shift,uint32_t mask)
{
    uint32_t tmp;
    tmp = MA_INW(addr);
    tmp &= ~mask;
    tmp |= (data<<shift) & mask;
    MA_OUTW(addr,tmp);
}

void saif_assert_rst(uint32_t addr,uint32_t addr_status,uint32_t mask)
{
    uint32_t tmp;
    tmp = MA_INW(addr);
    tmp |= mask;
    MA_OUTW(addr,tmp);
    do{
        tmp = MA_INW(addr_status);
    }while((tmp&mask)!=0);
}

void saif_clear_rst (uint32_t addr,uint32_t addr_status,uint32_t mask)
{
    uint32_t tmp;
    tmp = MA_INW(addr);
    tmp &= ~mask;
    MA_OUTW(addr,tmp);
    do{
        tmp = MA_INW(addr_status);
    }while((tmp&mask)!=mask);
}
