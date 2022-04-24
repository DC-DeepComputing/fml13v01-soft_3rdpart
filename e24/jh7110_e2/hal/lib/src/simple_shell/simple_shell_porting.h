/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file simple_shell_porting.h
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#ifndef __SIMPLE_SHELL_PORTING_H_

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <bsp_console.h>

#define PRINTF      printf

#define GETS(buf)   gets(buf)

#endif /* __SIMPLE_SHELL_PORTING_H_ */
