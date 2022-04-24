###################################################
# Build Flags for the Debug Configuration
###################################################

# Set the optimization level
ASFLAGS += -O0 -DRTL_SIM
CFLAGS += -O0 -DRTL_SIM
CXXFLAGS += -O0 -DRTL_SIM

# Enable debug
ASFLAGS += -g
CFLAGS += -g
CXXFLAGS += -g

