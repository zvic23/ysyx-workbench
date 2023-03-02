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
    extern void ftrace_check(int pc_up, int pc_lo, int dnpc_up, int dnpc_lo, int dest_register, int src_register, int imm_up, int imm_lo);
    // DPI import at vsrc//ysyx_22050612_EXU.v:2:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
