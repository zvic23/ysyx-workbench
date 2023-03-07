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

extern "C" void ftrace_check(long long pc, long long dnpc, int dest_register, int src_register, long long imm);

VL_INLINE_OPT void Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ dnpc, IData/*31:0*/ dest_register, IData/*31:0*/ src_register, QData/*63:0*/ imm) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long dnpc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) dnpc__Vcvt = dnpc;
    int dest_register__Vcvt;
    for (size_t dest_register__Vidx = 0; dest_register__Vidx < 1; ++dest_register__Vidx) dest_register__Vcvt = dest_register;
    int src_register__Vcvt;
    for (size_t src_register__Vidx = 0; src_register__Vidx < 1; ++src_register__Vidx) src_register__Vcvt = src_register;
    long long imm__Vcvt;
    for (size_t imm__Vidx = 0; imm__Vidx < 1; ++imm__Vidx) imm__Vcvt = imm;
    ftrace_check(pc__Vcvt, dnpc__Vcvt, dest_register__Vcvt, src_register__Vcvt, imm__Vcvt);
}

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}
