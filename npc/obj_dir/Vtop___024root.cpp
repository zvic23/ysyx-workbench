// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__x = vlSelf->x;
    vlSelf->__Vdly__x = ((IData)(vlSelf->clr) ? 1U : 
                         (((IData)(vlSelf->top__DOT__c) 
                           << 7U) | (0x7fU & ((IData)(vlSelf->x) 
                                              >> 1U))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__c = (1U & ((IData)(vlSelf->clr) 
                                 | (1U & VL_REDXOR_32(
                                                      (0x1dU 
                                                       & (IData)(vlSelf->x))))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->x = vlSelf->__Vdly__x;
    vlSelf->hex0 = ((8U & (IData)(vlSelf->x)) ? ((4U 
                                                  & (IData)(vlSelf->x))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->x))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->x))
                                                    ? 0x47U
                                                    : 0x4fU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->x))
                                                    ? 0x3dU
                                                    : 0x4eU))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->x))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->x))
                                                    ? 0x1fU
                                                    : 0x77U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->x))
                                                    ? 0x7bU
                                                    : 0x7fU)))
                     : ((4U & (IData)(vlSelf->x)) ? 
                        ((2U & (IData)(vlSelf->x)) ? 
                         ((1U & (IData)(vlSelf->x))
                           ? 0x70U : 0x5fU) : ((1U 
                                                & (IData)(vlSelf->x))
                                                ? 0x5bU
                                                : 0x33U))
                         : ((2U & (IData)(vlSelf->x))
                             ? ((1U & (IData)(vlSelf->x))
                                 ? 0x79U : 0x6dU) : 
                            ((1U & (IData)(vlSelf->x))
                              ? 0x30U : 0x7eU))));
    vlSelf->hex0 = (0x7fU & (~ (IData)(vlSelf->hex0)));
    vlSelf->hex1 = ((0x80U & (IData)(vlSelf->x)) ? 
                    ((0x40U & (IData)(vlSelf->x)) ? 
                     ((0x20U & (IData)(vlSelf->x)) ? 
                      ((0x10U & (IData)(vlSelf->x))
                        ? 0x47U : 0x4fU) : ((0x10U 
                                             & (IData)(vlSelf->x))
                                             ? 0x3dU
                                             : 0x4eU))
                      : ((0x20U & (IData)(vlSelf->x))
                          ? ((0x10U & (IData)(vlSelf->x))
                              ? 0x1fU : 0x77U) : ((0x10U 
                                                   & (IData)(vlSelf->x))
                                                   ? 0x7bU
                                                   : 0x7fU)))
                     : ((0x40U & (IData)(vlSelf->x))
                         ? ((0x20U & (IData)(vlSelf->x))
                             ? ((0x10U & (IData)(vlSelf->x))
                                 ? 0x70U : 0x5fU) : 
                            ((0x10U & (IData)(vlSelf->x))
                              ? 0x5bU : 0x33U)) : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->x))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->x))
                                                     ? 0x79U
                                                     : 0x6dU)
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->x))
                                                     ? 0x30U
                                                     : 0x7eU))));
    vlSelf->hex1 = (0x7fU & (~ (IData)(vlSelf->hex1)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->clr) & (~ (IData)(vlSelf->__Vclklast__TOP__clr))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->clr) & (~ (IData)(vlSelf->__Vclklast__TOP__clr))))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->clr) & (~ (IData)(vlSelf->__Vclklast__TOP__clr))))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__clr = vlSelf->clr;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clr & 0xfeU))) {
        Verilated::overWidthError("clr");}
}
#endif  // VL_DEBUG
