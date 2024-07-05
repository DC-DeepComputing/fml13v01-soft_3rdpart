###################################################
# Build Flags for the Release Configuration
###################################################

# Set the optimization level
ASFLAGS += -Os
CFLAGS += -Os -ffunction-sections -fdata-sections -fno-builtin
CXXFLAGS += -Os -ffunction-sections -fdata-sections -fno-builtin
