// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024unit.h"
#include "Vysyx_22050612_npc__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak(int r);

VL_INLINE_OPT void Vysyx_22050612_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050612_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int r__Vcvt;
    for (size_t r__Vidx = 0; r__Vidx < 1; ++r__Vidx) r__Vcvt = r;
    ebreak(r__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22050612_npc___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050612_npc___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ftrace_check(int pc_up, int pc_lo, int dnpc_up, int dnpc_lo, int dest_register, int src_register, int imm_up, int imm_lo);

VL_INLINE_OPT void Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit(IData/*31:0*/ pc_up, IData/*31:0*/ pc_lo, IData/*31:0*/ dnpc_up, IData/*31:0*/ dnpc_lo, IData/*31:0*/ dest_register, IData/*31:0*/ src_register, IData/*31:0*/ imm_up, IData/*31:0*/ imm_lo) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit\n"); );
    // Body
    int pc_up__Vcvt;
    for (size_t pc_up__Vidx = 0; pc_up__Vidx < 1; ++pc_up__Vidx) pc_up__Vcvt = pc_up;
    int pc_lo__Vcvt;
    for (size_t pc_lo__Vidx = 0; pc_lo__Vidx < 1; ++pc_lo__Vidx) pc_lo__Vcvt = pc_lo;
    int dnpc_up__Vcvt;
    for (size_t dnpc_up__Vidx = 0; dnpc_up__Vidx < 1; ++dnpc_up__Vidx) dnpc_up__Vcvt = dnpc_up;
    int dnpc_lo__Vcvt;
    for (size_t dnpc_lo__Vidx = 0; dnpc_lo__Vidx < 1; ++dnpc_lo__Vidx) dnpc_lo__Vcvt = dnpc_lo;
    int dest_register__Vcvt;
    for (size_t dest_register__Vidx = 0; dest_register__Vidx < 1; ++dest_register__Vidx) dest_register__Vcvt = dest_register;
    int src_register__Vcvt;
    for (size_t src_register__Vidx = 0; src_register__Vidx < 1; ++src_register__Vidx) src_register__Vcvt = src_register;
    int imm_up__Vcvt;
    for (size_t imm_up__Vidx = 0; imm_up__Vidx < 1; ++imm_up__Vidx) imm_up__Vcvt = imm_up;
    int imm_lo__Vcvt;
    for (size_t imm_lo__Vidx = 0; imm_lo__Vidx < 1; ++imm_lo__Vidx) imm_lo__Vcvt = imm_lo;
    ftrace_check(pc_up__Vcvt, pc_lo__Vcvt, dnpc_up__Vcvt, dnpc_lo__Vcvt, dest_register__Vcvt, src_register__Vcvt, imm_up__Vcvt, imm_lo__Vcvt);
}
