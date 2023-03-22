/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_board_fpga_misc.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_BOARD_FPGA_MISC_H_
#define __BSP_BOARD_FPGA_MISC_H_

/**
 * BOARD_FPGA types are expected to have many in common, "bsp_board_fpga_default.h" defines default configurations.
 * #undef then #define to override a default configuration.
 */

#undef SYS_BOARD_NAME
#define SYS_BOARD_NAME  "JH7110-FPGA-MISC"
#define GD25Q64C
#endif /* __BSP_BOARD_FPGA_MISC_H_ */

