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
