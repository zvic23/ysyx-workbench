// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriencode83.h for the primary calling header

#include "Vpriencode83___024root.h"
#include "Vpriencode83__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 512> Vpriencode83__ConstPool__TABLE_2ab4c310_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vpriencode83__ConstPool__TABLE_d484eecf_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vpriencode83__ConstPool__TABLE_0840e741_0;
extern const VlUnpacked<IData/*31:0*/, 512> Vpriencode83__ConstPool__TABLE_28ba1c6a_0;

VL_INLINE_OPT void Vpriencode83___024root___combo__TOP__1(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___combo__TOP__1\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->y = Vpriencode83__ConstPool__TABLE_2ab4c310_0
        [__Vtableidx1];
    vlSelf->z = Vpriencode83__ConstPool__TABLE_d484eecf_0
        [__Vtableidx1];
    if ((4U & Vpriencode83__ConstPool__TABLE_0840e741_0
         [__Vtableidx1])) {
        vlSelf->priencode83__DOT__i = Vpriencode83__ConstPool__TABLE_28ba1c6a_0
            [__Vtableidx1];
    }
}

void Vpriencode83___024root___eval(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___eval\n"); );
    // Body
    Vpriencode83___024root___combo__TOP__1(vlSelf);
}

QData Vpriencode83___024root___change_request_1(Vpriencode83___024root* vlSelf);

VL_INLINE_OPT QData Vpriencode83___024root___change_request(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___change_request\n"); );
    // Body
    return (Vpriencode83___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vpriencode83___024root___change_request_1(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpriencode83___024root___eval_debug_assertions(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
