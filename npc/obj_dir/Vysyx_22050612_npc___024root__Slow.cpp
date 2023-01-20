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

void Vysyx_22050612_npc___024root___settle__TOP__1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[0U] = 3U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[0U] = 0x99U;
    VL_WRITEF("%b\n",7,(0x7fU & vlSelf->inst));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc 
        = (4ULL + vlSelf->pc);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)((((vlSelf->inst >> 0x1fU) ? (0xfffffffffffff000ULL 
                                               | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x14U))))
                     : (QData)((IData)((vlSelf->inst 
                                        >> 0x14U)))) 
                   + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                   [(0x1fU & (vlSelf->inst >> 0xfU))]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)(((((vlSelf->inst >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))))
                      : (QData)((IData)((vlSelf->inst 
                                         >> 0x14U)))) 
                    + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                    [(0x1fU & (vlSelf->inst >> 0xfU))]) 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__opcode = vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out;
    VL_WRITEF("%b\n%b\n",3,vlSelf->ysyx_22050612_npc__DOT__opcode,
              3,(IData)(vlSelf->ysyx_22050612_npc__DOT__opcode));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
            == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
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
    vlSelf->ysyx_22050612_npc__DOT__opcode = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
