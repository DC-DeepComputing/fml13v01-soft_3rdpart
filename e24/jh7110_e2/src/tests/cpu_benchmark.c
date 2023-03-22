/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * 
 * @file cpu_benchmark.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

#if defined(HAL_BENCHMARK_TESTS_ENABLED) || defined(HAL_ALL_TESTS_ENABLED)

//---------------------- dhrystone --------------------------

//dhrystone need to run at least 2 seconds to get accurate result,
//once we figure out the num of interations needed, define and uncomment this const
//#define DHRY_ITERS  0

extern void dhrystone_main(long *dhry_iters);

static int run_testcase_dhrystone(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    long dhry_iters = 0;

#ifdef DHRY_ITERS
    dhry_iters = DHRY_ITERS;
#else
    printf ("Please give the number of runs through the benchmark: ");
    {
        int n;
        scanf ("%d", &n);
        dhry_iters = n;
    }
    printf ("\n");
#endif
    dhrystone_main(&dhry_iters);
    return 0;
}

//---------------------- coremark --------------------------

extern int coremark_main(void);

static int run_testcase_coremark(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    coremark_main();
    return 0;
}

int power_test_main(void)
{
    long dhry_iters = 1000000;

    printf("start power test,input 'q' to quit test\n");
    while (1)
    {
        if(sys_tstc() == 1 && sys_getchar() == 'q')
        {
            break;
        }
        coremark_main();
        dhrystone_main(&dhry_iters);
    }
    
    return 0;
}

DEFINE_MODULE_TESTCASES_BEGIN(benchmark)
    {"dhrystone", NULL, NULL, 0, 0, 0, 0, run_testcase_dhrystone, 0, 0, 0, 0 },
    {"coremark" , NULL, NULL, 0, 0, 0, 0, run_testcase_coremark , 0, 0, 0, 0 },
DEFINE_MODULE_TESTCASES_END(benchmark)

REGISTER_MODULE_TESTSUITE(benchmark,bench)

#endif  /* HAL_BENCHMARK_TESTS_ENABLED */