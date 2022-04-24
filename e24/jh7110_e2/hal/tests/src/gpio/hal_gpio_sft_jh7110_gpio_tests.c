/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_gpio_sft_jh7110_gpio_tests.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

#if defined(HAL_GPIO_ENABLED) && defined(HAL_GPIO_SFT_JH7110_GPIO)

#include "hal_gpio_tests.inc"

int run_gpio_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    const int PORTS[] = { (int)p0, (int)p1, (int)p2, (int)p3 };
    int port;
    int i, err = 0;

    for (i = 0; i < ARRAY_SIZE(PORTS); i++) {
        port = PORTS[i];
        if (port >= 0 && port < SYS_GPIO_NUM) {
            err += test_gpio_pull(port);
        }
    }

    return err ? 1 : 0;
}

int run_gpio_irq_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    int gpio_out = (int)p0;
    int gpio_in = (int)p1;

    return test_gpio_irq(gpio_out, gpio_in);
}

#endif /* HAL_GPIO_ENABLED && HAL_GPIO_SFT_JH7110_GPIO */

