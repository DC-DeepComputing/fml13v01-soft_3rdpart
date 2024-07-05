# Copyright 2020 StarFive #
# SPDX-License-Identifier: Apache-2.0 #

# dirs for hal drivers
INCLUDE_DIRS += \
	$(HAL_DIR)/include \
	$(HAL_DIR)/src/audio \
	$(HAL_DIR)/include/linux \
	$(HAL_DIR)/include/usb \
	$(HAL_DIR)/src/pcie \

# dirs for hal driver tests
SOURCE_DIRS += \
	$(HAL_DIR)/src \
	$(HAL_DIR)/src/lib \
	$(HAL_DIR)/src/audio \
	$(HAL_DIR)/src/usb/cdns3 \
	$(HAL_DIR)/src/usb/common \
	$(HAL_DIR)/src/usb/host \
	$(HAL_DIR)/src/usb/cdn_host \
	$(HAL_DIR)/src/usb/device \
	$(HAL_DIR)/src/pcie \

INCLUDE_DIRS += \
	$(HAL_DIR)/tests/include \

SOURCE_DIRS += $(HAL_DIR)/tests/src

# hal/lib
INCLUDE_DIRS += $(HAL_DIR)/lib/include

SOURCE_DIRS += \
	$(HAL_DIR)/lib/src/cli \
	$(HAL_DIR)/lib/src/xmodem \
	$(HAL_DIR)/lib/src/simple_shell \
	$(HAL_DIR)/lib/src \
	$(HAL_DIR)/lib/src/mem \
	$(HAL_DIR)/lib/src/virtfile \
	$(HAL_DIR)/lib/src/mpatgen \
	$(HAL_DIR)/lib/src/cmd \
	$(HAL_DIR)/lib/src/phy \
	$(HAL_DIR)/lib/src/display \

# hal/intc
SOURCE_DIRS += $(HAL_DIR)/src/intc $(HAL_DIR)/tests/src/intc

# hal/uart
SOURCE_DIRS += $(HAL_DIR)/src/uart $(HAL_DIR)/tests/src/uart

# hal/gpio
SOURCE_DIRS += $(HAL_DIR)/src/gpio $(HAL_DIR)/tests/src/gpio

# hal/mailbox
SOURCE_DIRS += $(HAL_DIR)/src/mailbox $(HAL_DIR)/tests/src/mailbox
