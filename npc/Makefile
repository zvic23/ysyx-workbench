CXXSRC += csrc/sdb/sdb.cpp csrc/sdb/expr.cpp csrc/sdb/watchpoint.cpp csrc/infrastructure/trace.cpp csrc/infrastructure/dut.c  csrc/device/device.cpp  csrc/device/vga.cpp  csrc/device/keyboard.cpp  csrc/memory/paddr.cpp  csrc/cpu/cpu-exec.cpp  csrc/cpu/npc-pipeline-trace.cpp


CXXSRC += csrc/utils/disasm.cc
#CXXFLAGS += -I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS  -D__STDC_LIMIT_MACROS -fPIE  
#CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE  
ORIGINAL_CXXFLAGS := $(shell llvm-config --cxxflags)
MODIFIED_CXXFLAGS := $(filter-out -D__STDC_FORMAT_MACROS, $(ORIGINAL_CXXFLAGS))
CXXFLAGS += $(MODIFIED_CXXFLAGS) -fPIE
LIBS += $(shell llvm-config --libs)
LIBS += -lreadline  -lSDL2main -lSDL2



all:
	@echo "Write this Makefile by your self."

sim:
	verilator -Wall -Wno-UNUSED --cc --exe --build vsrc/ysyx_22050612_npc.v  csrc/main.cpp  $(CXXSRC) -CFLAGS "$(CXXFLAGS)" -LDFLAGS "$(LIBS)"  -Ivsrc/ 
	#add -Wall later      --trace if want to make wave   -Wno-UNUSED ignore unused warning
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile

exe:    sim 
	obj_dir/Vysyx_22050612_npc

wave:  
	gtkwave dump.vcd

clean:
	rm build/ -r  obj_dir/ -r  dump.vcd










#************  zsl: about nvboard   **********************
TOPNAME = top
NXDC_FILES = constr/pinset.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
-include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@$^

#clean:
#	rm -rf $(BUILD_DIR)

.PHONY: default all clean run
