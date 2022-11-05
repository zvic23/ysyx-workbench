// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbcd7seg.h for the primary calling header

#include "Vbcd7seg___024root.h"
#include "Vbcd7seg__Syms.h"

//==========


void Vbcd7seg___024root___ctor_var_reset(Vbcd7seg___024root* vlSelf);

Vbcd7seg___024root::Vbcd7seg___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vbcd7seg___024root___ctor_var_reset(this);
}

void Vbcd7seg___024root::__Vconfigure(Vbcd7seg__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vbcd7seg___024root::~Vbcd7seg___024root() {
}

void Vbcd7seg___024root___eval_initial(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___eval_initial\n"); );
}

void Vbcd7seg___024root___combo__TOP__1(Vbcd7seg___024root* vlSelf);

void Vbcd7seg___024root___eval_settle(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___eval_settle\n"); );
    // Body
    Vbcd7seg___024root___combo__TOP__1(vlSelf);
}

void Vbcd7seg___024root___final(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___final\n"); );
}

void Vbcd7seg___024root___ctor_var_reset(Vbcd7seg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd7seg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->h = VL_RAND_RESET_I(7);
}
