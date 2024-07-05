/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_gpio_tests.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_GPIO_TESTS_H_
#define __HAL_GPIO_TESTS_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int run_gpio_tests(void *dev, void *p0, void *p1, void *p2, void *p3);
int run_gpio_irq_tests(void *dev, void *p0, void *p1, void *p2, void *p3);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_GPIO_TESTS_H_ */

