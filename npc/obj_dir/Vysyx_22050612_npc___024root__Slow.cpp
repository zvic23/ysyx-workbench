// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

//==========


void Vysyx_22050612_npc___024root___ctor_var_reset(Vysyx_22050612_npc___024root* vlSelf);

Vysyx_22050612_npc___024root::Vysyx_22050612_npc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050612_npc___024root___ctor_var_reset(this);
}

void Vysyx_22050612_npc___024root::__Vconfigure(Vysyx_22050612_npc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050612_npc___024root::~Vysyx_22050612_npc___024root() {
}

void Vysyx_22050612_npc___024root___settle__TOP__2(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc 
        = (4ULL + vlSelf->pc);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x1fU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x1fU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x1eU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x1eU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x1dU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x1dU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x1cU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x1cU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x1bU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x1bU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x1aU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x1aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x19U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x19U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x18U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x18U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x17U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x17U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x16U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x16U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x15U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x15U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x14U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x14U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x13U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x13U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x12U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x12U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x11U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x11U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0x10U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0x10U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0xfU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0xfU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0xeU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0xeU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0xdU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0xdU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0xcU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0xcU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0xbU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0xbU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0xaU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[9U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[8U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [8U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[7U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [7U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[6U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [6U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[5U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [5U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[4U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [4U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[3U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [3U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[2U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [2U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5
        [0U];
}

void Vysyx_22050612_npc___024root___eval_initial(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22050612_npc___024root___eval_settle(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_22050612_npc___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22050612_npc___024root___final(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___final\n"); );
}

void Vysyx_22050612_npc___024root___ctor_var_reset(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
