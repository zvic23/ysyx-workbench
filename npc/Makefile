CXXSRC += csrc/sdb/sdb.cpp csrc/sdb/expr.cpp csrc/sdb/watchpoint.cpp csrc/infrastructure/trace.cpp csrc/infrastructure/dut.c 


CXXSRC += csrc/utils/disasm.cc
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)
LIBS += -lreadline




all:
	@echo "Write this Makefile by your self."

sim:
	verilator --cc --exe --build vsrc/ysyx_22050612_npc.v  csrc/main.cpp  $(CXXSRC) -CFLAGS "$(CXXFLAGS)" -LDFLAGS "$(LIBS)"  -Ivsrc/ #add -Wall later      and --trace if want to make wave
	
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








