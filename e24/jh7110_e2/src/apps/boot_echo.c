/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * 
 * @file boot_echo.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

static int run_boot_echo(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    const uint32_t MAGIC_ADDR=0x50A00000;
    const uint32_t MAGIC_NUM=0xdeadbabe;
    uint32_t magic_r = 0;

    magic_r = sys_readl((void *)MAGIC_ADDR);
    if(magic_r == (~MAGIC_NUM))
    {
        sys_writel(MAGIC_NUM, (void *)MAGIC_ADDR);
    }
    
    return 0;
}

int boot_echo_main(void)
{
    return run_boot_echo(0, 0, 0, 0, 0);
}

DEFINE_MODULE_TESTCASES_BEGIN(boot_echo)
    {"boot_echo", NULL, NULL, 0, 0, 0, 0, run_boot_echo, 0, 0, 0, 0 },
DEFINE_MODULE_TESTCASES_END(boot_echo)

REGISTER_MODULE_TESTSUITE(boot_echo,be)

