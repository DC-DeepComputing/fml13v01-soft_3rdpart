/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file sys_timer_tests.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

//All boards share same testcases
#if defined(HAL_ALL_TESTS_ENABLED)

static int run_sys_timer_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    const uint32_t duration_sec = 5;
    uint32_t n = 0;
    uint64_t last = 0;

    printf("test cpu timer, now read %d seconds with different methods, go? [Y]", duration_sec);
    if (getchar() != '\n') {
        getchar(); //eat '\n'
    }

    printf("sys_get_timer\n");
    n = 0;
    last = sys_get_timer(0);
    while (n++ < duration_sec) {
        while (sys_get_timer(last) < 1000)
            ;
        last = sys_get_timer(0);
        printf("%d\n", n);
    }

    printf("\nsys_udelay\n");
    n = 0;
    while (n++ < duration_sec) {
        sys_udelay(1000000);
        printf("%d\n", n);
    }

    printf("\nsys_mdelay\n");
    n = 0;
    while (n++ < duration_sec) {
        sys_mdelay(1000);
        printf("%d\n", n);
    }

    printf("was the time counting correct? [y/N]");
    int c = getchar();
    if (c != '\n') {
        getchar(); //eat '\n'
    }
    
    return (c == 'Y' || c == 'y') ? 0 : 1;
}

DEFINE_MODULE_TESTCASES_BEGIN(sys_timer)
    {"sys_timer", NULL, NULL, 0, 0, 0, 0, run_sys_timer_tests, 0, 0, 0, 0 },
DEFINE_MODULE_TESTCASES_END(sys_timer)

REGISTER_MODULE_TESTSUITE(sys_timer,st)

#endif /* HAL_ALL_TESTS_ENABLED */

