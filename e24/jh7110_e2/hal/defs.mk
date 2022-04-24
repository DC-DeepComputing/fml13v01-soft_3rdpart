# Copyright 2020 StarFive #
# SPDX-License-Identifier: Apache-2.0 #

# dirs for hal drivers
INCLUDE_DIRS += \
	$(HAL_DIR)/include \

# dirs for hal driver tests
SOURCE_DIRS += \
	$(HAL_DIR)/src \

INCLUDE_DIRS += \
	$(HAL_DIR)/tests/include \

INCLUDE_DIRS += $(HAL_DIR)/lib/include

SOURCE_DIRS += \
	$(HAL_DIR)/tests/src \

# hal/lib
SOURCE_DIRS += $(HAL_DIR)/lib/src/cli $(HAL_DIR)/lib/src/xmodem
SOURCE_DIRS += $(HAL_DIR)/lib/src/simple_shell
SOURCE_DIRS += $(HAL_DIR)/lib/src

# hal/intc
SOURCE_DIRS += $(HAL_DIR)/src/intc $(HAL_DIR)/tests/src/intc

# hal/uart
SOURCE_DIRS += $(HAL_DIR)/src/uart $(HAL_DIR)/tests/src/uart

# hal/gpio
SOURCE_DIRS += $(HAL_DIR)/src/gpio $(HAL_DIR)/tests/src/gpio

# hal/mailbox
SOURCE_DIRS += $(HAL_DIR)/src/mailbox $(HAL_DIR)/tests/src/mailbox
