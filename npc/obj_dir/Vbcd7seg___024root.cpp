// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbcd7seg.h for the primary calling header

#include "Vbcd7seg___024root.h"
#include "Vbcd7seg__Syms.h"

//==========

extern const VlUnpacked<CData/*6:0*/, 16> Vbcd7seg__ConstPool__TABLE_312cd52d_0;

VL_INLINE_OPT void Vbcd7seg___024root___combo__TOP__1(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___combo__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = vlSelf->b;
    vlSelf->h = Vbcd7seg__ConstPool__TABLE_312cd52d_0
        [__Vtableidx1];
}

void Vbcd7seg___024root___eval(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___eval\n"); );
    // Body
    Vbcd7seg___024root___combo__TOP__1(vlSelf);
}

QData Vbcd7seg___024root___change_request_1(Vbcd7seg___024root* vlSelf);

VL_INLINE_OPT QData Vbcd7seg___024root___change_request(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___change_request\n"); );
    // Body
    return (Vbcd7seg___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vbcd7seg___024root___change_request_1(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vbcd7seg___024root___eval_debug_assertions(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
