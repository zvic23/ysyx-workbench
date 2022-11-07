// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__c = 1U;
    vlSelf->top__DOT__x = 1U;
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->hex0 = ((8U & (IData)(vlSelf->top__DOT__x))
                     ? ((4U & (IData)(vlSelf->top__DOT__x))
                         ? ((2U & (IData)(vlSelf->top__DOT__x))
                             ? ((1U & (IData)(vlSelf->top__DOT__x))
                                 ? 0x47U : 0x4fU) : 
                            ((1U & (IData)(vlSelf->top__DOT__x))
                              ? 0x3dU : 0x4eU)) : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__x))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x1fU
                                                     : 0x77U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x7bU
                                                     : 0x7fU)))
                     : ((4U & (IData)(vlSelf->top__DOT__x))
                         ? ((2U & (IData)(vlSelf->top__DOT__x))
                             ? ((1U & (IData)(vlSelf->top__DOT__x))
                                 ? 0x70U : 0x5fU) : 
                            ((1U & (IData)(vlSelf->top__DOT__x))
                              ? 0x5bU : 0x33U)) : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__x))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x79U
                                                     : 0x6dU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x30U
                                                     : 0x7eU))));
    vlSelf->hex0 = (0x7fU & (~ (IData)(vlSelf->hex0)));
    vlSelf->hex1 = ((0x80U & (IData)(vlSelf->top__DOT__x))
                     ? ((0x40U & (IData)(vlSelf->top__DOT__x))
                         ? ((0x20U & (IData)(vlSelf->top__DOT__x))
                             ? ((0x10U & (IData)(vlSelf->top__DOT__x))
                                 ? 0x47U : 0x4fU) : 
                            ((0x10U & (IData)(vlSelf->top__DOT__x))
                              ? 0x3dU : 0x4eU)) : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->top__DOT__x))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x1fU
                                                     : 0x77U)
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x7bU
                                                     : 0x7fU)))
                     : ((0x40U & (IData)(vlSelf->top__DOT__x))
                         ? ((0x20U & (IData)(vlSelf->top__DOT__x))
                             ? ((0x10U & (IData)(vlSelf->top__DOT__x))
                                 ? 0x70U : 0x5fU) : 
                            ((0x10U & (IData)(vlSelf->top__DOT__x))
                              ? 0x5bU : 0x33U)) : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->top__DOT__x))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x79U
                                                     : 0x6dU)
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__x))
                                                     ? 0x30U
                                                     : 0x7eU))));
    vlSelf->hex1 = (0x7fU & (~ (IData)(vlSelf->hex1)));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__clr = vlSelf->clr;
    Vtop___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clr = VL_RAND_RESET_I(1);
    vlSelf->hex0 = VL_RAND_RESET_I(7);
    vlSelf->hex1 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__x = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__c = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
