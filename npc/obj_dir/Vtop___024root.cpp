// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->ovfl = 0U;
    vlSelf->z = 0U;
    vlSelf->c = 0U;
    vlSelf->out = 0U;
    vlSelf->top__DOT__D = 0U;
    if ((0U == (IData)(vlSelf->mode))) {
        vlSelf->out = (0xfU & ((IData)(vlSelf->A) + (IData)(vlSelf->B)));
        vlSelf->c = (1U & (((IData)(vlSelf->A) + (IData)(vlSelf->B)) 
                           >> 4U));
        vlSelf->z = (0U == (IData)(vlSelf->out));
        vlSelf->ovfl = (((1U & ((IData)(vlSelf->A) 
                                >> 3U)) == (1U & ((IData)(vlSelf->B) 
                                                  >> 3U))) 
                        & ((1U & ((IData)(vlSelf->out) 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U))));
    } else if ((1U == (IData)(vlSelf->mode))) {
        vlSelf->top__DOT__D = vlSelf->B;
        vlSelf->top__DOT__D = (0xfU & ((IData)(1U) 
                                       + (~ (IData)(vlSelf->top__DOT__D))));
        vlSelf->c = (1U & (((IData)(vlSelf->A) + (IData)(vlSelf->top__DOT__D)) 
                           >> 4U));
        vlSelf->out = (0xfU & ((IData)(vlSelf->A) + (IData)(vlSelf->top__DOT__D)));
        vlSelf->z = (0U == (IData)(vlSelf->out));
        vlSelf->ovfl = (((1U & ((IData)(vlSelf->A) 
                                >> 3U)) == (1U & ((IData)(vlSelf->B) 
                                                  >> 3U))) 
                        & ((1U & ((IData)(vlSelf->out) 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U))));
    } else if ((2U == (IData)(vlSelf->mode))) {
        vlSelf->out = (0xfU & (~ (IData)(vlSelf->A)));
    } else if ((3U == (IData)(vlSelf->mode))) {
        vlSelf->out = ((IData)(vlSelf->A) & (IData)(vlSelf->B));
    } else if ((4U == (IData)(vlSelf->mode))) {
        vlSelf->out = ((IData)(vlSelf->A) | (IData)(vlSelf->B));
    } else if ((5U == (IData)(vlSelf->mode))) {
        vlSelf->out = ((IData)(vlSelf->A) ^ (IData)(vlSelf->B));
    } else if ((6U == (IData)(vlSelf->mode))) {
        vlSelf->out = ((0xeU & (IData)(vlSelf->out)) 
                       | (1U & (((1U & ((IData)(vlSelf->A) 
                                        >> 3U)) != 
                                 (1U & ((IData)(vlSelf->B) 
                                        >> 3U))) ? 
                                ((IData)(vlSelf->A) 
                                 >> 3U) : ((7U & (IData)(vlSelf->A)) 
                                           < (7U & (IData)(vlSelf->B))))));
    } else if ((7U == (IData)(vlSelf->mode))) {
        vlSelf->out = ((0xeU & (IData)(vlSelf->out)) 
                       | ((IData)(vlSelf->A) == (IData)(vlSelf->B)));
    }
    vlSelf->hex = ((8U & (IData)(vlSelf->out)) ? ((4U 
                                                   & (IData)(vlSelf->out))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->out))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->out))
                                                     ? 0x47U
                                                     : 0x4fU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->out))
                                                     ? 0x3dU
                                                     : 0x4eU))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->out))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->out))
                                                     ? 0x1fU
                                                     : 0x77U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->out))
                                                     ? 0x7bU
                                                     : 0x7fU)))
                    : ((4U & (IData)(vlSelf->out)) ? 
                       ((2U & (IData)(vlSelf->out))
                         ? ((1U & (IData)(vlSelf->out))
                             ? 0x70U : 0x5fU) : ((1U 
                                                  & (IData)(vlSelf->out))
                                                  ? 0x5bU
                                                  : 0x33U))
                        : ((2U & (IData)(vlSelf->out))
                            ? ((1U & (IData)(vlSelf->out))
                                ? 0x79U : 0x6dU) : 
                           ((1U & (IData)(vlSelf->out))
                             ? 0x30U : 0x7eU))));
    vlSelf->hex = (0x7fU & (~ (IData)(vlSelf->hex)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->mode & 0xf8U))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
