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
