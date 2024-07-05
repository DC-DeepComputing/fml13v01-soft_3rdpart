/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_conf.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_CONF_H_
#define __BSP_CONF_H_

/**
 * select BSP_BOARD type
 */
#define BSP_BOARD_EVB
// #define BSP_BOARD_FPGA

/**
 * select BSP_BOARD_EVB type
 */
#ifdef BSP_BOARD_EVB
#define BSP_BOARD_EVB_V1
#endif /* BSP_BOARD_EVB */

/**
 * select BSP_BOARD_FPGA type
 */
#ifdef BSP_BOARD_FPGA
#define BSP_BOARD_FPGA_ISP
//#define BSP_BOARD_FPGA_MISC
//#define BSP_BOARD_FPGA_AIC
//#define BSP_BOARD_FPGA_PERIPHERAL
//#define BSP_BOARD_FPGA_VIDEO
#endif /* BSP_BOARD_FPGA */

#endif /* __BSP_CONF_H_ */

