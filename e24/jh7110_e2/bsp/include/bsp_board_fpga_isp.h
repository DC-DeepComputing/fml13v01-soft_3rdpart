/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_board_fpga.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_BOARD_FPGA_ISP_H_
#define __BSP_BOARD_FPGA_ISP_H_

/**
 * BOARD_FPGA types are expected to have many in common, "bsp_board_fpga_default.h" defines default configurations.
 * #undef then #define to override a default configuration.
 */

#undef SYS_BOARD_NAME
#define SYS_BOARD_NAME  "JH7110-FPGA-ISP"
#define GD25LB64G
#endif /* __BSP_BOARD_FPGA_ISP_H_ */

