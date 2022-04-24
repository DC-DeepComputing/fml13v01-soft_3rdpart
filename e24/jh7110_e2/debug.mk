###################################################
# Build Flags for the Debug Configuration
###################################################

# Set the optimization level
ASFLAGS += -O0
CFLAGS += -O0 -ffunction-sections -fdata-sections -fno-builtin
CXXFLAGS += -O0 -ffunction-sections -fdata-sections -fno-builtin

# Enable debug
ASFLAGS += -g
CFLAGS += -g
CXXFLAGS += -g

