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
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0;
    // Body
    __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc);
    if (VL_UNLIKELY((1U & vlSelf->inst))) {
        VL_WRITEF("%20#,%2#,%1#,%20#\n",64,vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata,
                  5,(0x1fU & (vlSelf->inst >> 7U)),
                  1,(1U & vlSelf->inst),64,vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                  [(0x1fU & (vlSelf->inst >> 7U))]);
        __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0 
            = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata;
        __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[__Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf__v0;
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__snpc 
        = (4ULL + vlSelf->pc);
}

VL_INLINE_OPT void Vysyx_22050612_npc___024root___combo__TOP__3(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata 
        = ((1U & vlSelf->inst) ? (((vlSelf->inst >> 0x1fU)
                                    ? (0xfffffffffffff000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U))))
                                    : (QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x14U)))) 
                                  + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                  [(0x1fU & (vlSelf->inst 
                                             >> 0xfU))])
            : 0ULL);
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
    Vysyx_22050612_npc___024root___combo__TOP__3(vlSelf);
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
