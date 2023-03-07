// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc//ysyx_22050612_EXU.v:1:30
    extern void ebreak(int r);
    // DPI import at vsrc//ysyx_22050612_EXU.v:3:30
    extern void ftrace_check(long long pc, long long dnpc, int dest_register, int src_register, long long imm);
    // DPI import at vsrc//ysyx_22050612_EXU.v:5:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc//ysyx_22050612_EXU.v:7:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc//ysyx_22050612_EXU.v:2:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
