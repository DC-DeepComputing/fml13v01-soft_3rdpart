/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file bsp_assert.h
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#ifndef __BSP_ASSERT_H_
#define __BSP_ASSERT_H_

#define SYS_ASSERT(value) \
    if (!(value)) { \
        printf("%s, ln%d, Assertion Failed: %s\n", __FILE__, __LINE__, #value); \
        while (1) __asm__ ("wfi"); \
    }

#endif /* __BSP_ASSERT_H_ */
