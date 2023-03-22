/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file bsp_board.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */

#include "bsp_include.h"

__WEAK int sys_board_init(void)
{
    //no board specific init needed by default
    //if any, implement in bsp_board_xxx.c without __WEAK prefix
    return 0;
}

//Components Initialization for board.
//This function must be called after sys_cpu_init(),sys_board_init(),sys_init_clocks(),sys_gpio_init(),sys_console_init().
__WEAK int sys_board_components_init(void)
{
    //no board specific init needed by default
    //if any, implement in bsp_board_xxx.c without __WEAK prefix
    return 0;
}
