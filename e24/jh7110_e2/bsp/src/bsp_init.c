/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file bsp_init.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"

void sys_init(void)
{
    sys_cpu_init();
    sys_board_init();
    sys_init_clocks();
    sys_gpio_init();
    //sys_console_init();

    //print version banner with commit id, good for debug
    //printf("\n%s, version:%s\n", SYS_BOARD_NAME, VERSION);
}

