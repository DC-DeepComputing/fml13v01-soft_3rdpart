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
