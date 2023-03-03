CXXSRC = csrc/utils/disasm.cc
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)
LIBS +=  -L/home/zsl/ysyx-workbench/npc  -lnemu
#LIBS +=  -L.  riscv64-nemu-interpreter-so 



all:
	@echo "Write this Makefile by your self."

sim:
	verilator --cc --exe --build vsrc/ysyx_22050612_npc.v  csrc/main.cpp csrc/sdb/sdb.cpp csrc/sdb/expr.cpp csrc/sdb/watchpoint.cpp csrc/trace.cpp  $(CXXSRC) -CFLAGS "$(CXXFLAGS)" -LDFLAGS "$(LIBS)"  --trace -Ivsrc/ #add -Wall later 
	
	#verilator --cc --exe --build vsrc/ysyx_22050612_npc.v  csrc/main.cpp --trace -Ivsrc/ #add -Wall later 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile

exe:    sim 
	obj_dir/Vysyx_22050612_npc

wave:  
	gtkwave dump.vcd

clear:
	rm build/ -r  obj_dir/ -r  dump.vcd








#************zsl: about nvboard
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
include $(NVBOARD_HOME)/scripts/nvboard.mk

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

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run
