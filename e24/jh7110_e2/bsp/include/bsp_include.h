/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_include.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_INCLUDE_H_
#define __BSP_INCLUDE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#include "bsp_types.h"
#include "bsp_conf.h"
#include "bsp_compiler.h"
#include "bsp_cpu.h"
#include "bsp_board.h"
#include "bsp_console.h"
#include "bsp_chip_macro.h"
#include "bsp_clock.h"
#include "bsp_iomem.h"
#include "bsp_io.h"
#include "bsp_irq.h"
#include "bsp_init.h"
#include "bsp_delay.h"
#include "bsp_console.h"
#include "bsp_assert.h"
#include "bsp_math.h"

#include "bsp_hal_conf.h"
#include "bsp_hal_mailbox.h"
#include "bsp_hal_intc.h"
#include "bsp_hal_uart.h"
#include "bsp_hal_gpio.h"
#include "bsp_hal_pmu.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_INCLUDE_H_ */

