/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file mem_test_porting.h
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#ifndef __MEM_TEST_PORTING_H_
#define __MEM_TEST_PORTING_H_

#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <stdlib.h>
#include <bsp_include.h>

typedef ulong vu_long;

#define debug               printf
#define ctrlc()             0
#define WATCHDOG_RESET()

#endif /* __MEM_TEST_PORTING_H_ */
