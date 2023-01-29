// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

#include "verilated_dpi.h"

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

void Vysyx_22050612_npc___024root___settle__TOP__1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[0U] = 3U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc 
        = (4ULL + vlSelf->pc);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1fU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x1fU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1eU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x1eU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1dU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x1dU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1cU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x1cU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1bU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x1bU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1aU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x1aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x19U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x19U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x18U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x18U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x17U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x17U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x16U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x16U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x15U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x15U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x14U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x14U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x13U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x13U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x12U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x12U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x11U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x11U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x10U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0x10U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xfU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0xfU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xeU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0xeU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xdU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0xdU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xcU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0xcU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xbU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0xbU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xaU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [8U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [7U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [6U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [5U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [4U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [3U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [2U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5
        [0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (1U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (1U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)((((vlSelf->inst >> 0x1fU) ? (0xfffffffffffff000ULL 
                                               | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x14U))))
                     : (QData)((IData)((vlSelf->inst 
                                        >> 0x14U)))) 
                   + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                   [(0x1fU & (vlSelf->inst >> 0xfU))]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)(((((vlSelf->inst >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))))
                      : (QData)((IData)((vlSelf->inst 
                                         >> 0x14U)))) 
                    + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                    [(0x1fU & (vlSelf->inst >> 0xfU))]) 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out 
        = (((0x13U == (0x7fU & vlSelf->inst)) == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((0x13U == (0x7fU & vlSelf->inst)) 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out;
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
    Vysyx_22050612_npc___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
