// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22050612_npc___024root___sequent__TOP__1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0;
    // Body
    __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc);
    if ((1U & vlSelf->inst)) {
        __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0 
            = ((1U & vlSelf->inst) ? (((vlSelf->inst 
                                        >> 0x1fU) ? 
                                       (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                        : (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U)))) 
                                      + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                      [(0x1fU & (vlSelf->inst 
                                                 >> 0xfU))])
                : 0ULL);
        __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0 = 1U;
        __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[__Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0] 
            = __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5__v0;
    }
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

void Vysyx_22050612_npc___024root___eval(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050612_npc___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050612_npc___024root___change_request_1(Vysyx_22050612_npc___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050612_npc___024root___change_request(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___change_request\n"); );
    // Body
    return (Vysyx_22050612_npc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050612_npc___024root___change_request_1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050612_npc___024root___eval_debug_assertions(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
