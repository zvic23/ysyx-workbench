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

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x652f3131U;
    __Vtemp1[2U] = 0x6f757263U;
    __Vtemp1[3U] = 0x726573U;
    VL_READMEM_N(true, 12, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 ,  &(vlSelf->top__DOT__point_mem), 0
                 , ~0ULL);
}

extern const VlUnpacked<CData/*7:0*/, 512> Vtop__ConstPool__TABLE_a0ebf2e4_0;

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    CData/*0:0*/ top__DOT__point;
    CData/*0:0*/ top__DOT__v0__DOT__h_valid;
    CData/*0:0*/ top__DOT__v0__DOT__v_valid;
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->vga_clk = vlSelf->clk;
    vlSelf->hsync = (0x60U < (IData)(vlSelf->top__DOT__v0__DOT__x_cnt));
    vlSelf->vsync = (2U < (IData)(vlSelf->top__DOT__v0__DOT__y_cnt));
    top__DOT__v0__DOT__h_valid = ((0x90U < (IData)(vlSelf->top__DOT__v0__DOT__x_cnt)) 
                                  & (0x310U >= (IData)(vlSelf->top__DOT__v0__DOT__x_cnt)));
    top__DOT__v0__DOT__v_valid = ((0x23U < (IData)(vlSelf->top__DOT__v0__DOT__y_cnt)) 
                                  & (0x203U >= (IData)(vlSelf->top__DOT__v0__DOT__y_cnt)));
    vlSelf->top__DOT__kpring = ((4U < (IData)(vlSelf->top__DOT__kpr))
                                 ? (1U & (IData)(vlSelf->top__DOT__clk_1))
                                 : 0U);
    vlSelf->top__DOT__press = ((0U != (IData)(vlSelf->top__DOT__p0__DOT__aim))
                                ? 1U : 0U);
    __Vtableidx1 = ((((IData)(vlSelf->top__DOT__press)
                       ? ((2U >= (3U & ((IData)(vlSelf->top__DOT__p0__DOT__aim) 
                                        - (IData)(1U))))
                           ? (0xffU & vlSelf->top__DOT__p0__DOT__buff
                              [(3U & ((IData)(vlSelf->top__DOT__p0__DOT__aim) 
                                      - (IData)(1U)))])
                           : 0U) : 0U) << 1U) | (IData)(vlSelf->capital));
    vlSelf->top__DOT__dataascii = Vtop__ConstPool__TABLE_a0ebf2e4_0
        [__Vtableidx1];
    vlSelf->top__DOT__h_c = ((IData)(top__DOT__v0__DOT__h_valid)
                              ? (0x3ffU & ((IData)(vlSelf->top__DOT__v0__DOT__x_cnt) 
                                           - (IData)(0x91U)))
                              : 0U);
    vlSelf->top__DOT__h_n = 0U;
    while ((9U <= (IData)(vlSelf->top__DOT__h_c))) {
        vlSelf->top__DOT__h_c = (0x3ffU & ((IData)(vlSelf->top__DOT__h_c) 
                                           - (IData)(9U)));
        vlSelf->top__DOT__h_n = (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__h_n)));
    }
    vlSelf->vga_blank = ((IData)(top__DOT__v0__DOT__h_valid) 
                         & (IData)(top__DOT__v0__DOT__v_valid));
    vlSelf->top__DOT__v_c = ((IData)(top__DOT__v0__DOT__v_valid)
                              ? (0x3ffU & ((IData)(vlSelf->top__DOT__v0__DOT__y_cnt) 
                                           - (IData)(0x24U)))
                              : 0U);
    vlSelf->top__DOT__v_n = 0U;
    while ((0x10U <= (IData)(vlSelf->top__DOT__v_c))) {
        vlSelf->top__DOT__v_c = (0x3ffU & ((IData)(vlSelf->top__DOT__v_c) 
                                           - (IData)(0x10U)));
        vlSelf->top__DOT__v_n = (0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__v_n)));
    }
    top__DOT__point = ((0x45U >= (IData)(vlSelf->top__DOT__h_n))
                        ? (1U & ((0xbU >= (0xfU & (IData)(vlSelf->top__DOT__h_c))) 
                                 & (((((((IData)(vlSelf->top__DOT__h_n) 
                                         == (IData)(vlSelf->top__DOT__x)) 
                                        & ((IData)(vlSelf->top__DOT__v_n) 
                                           == (IData)(vlSelf->top__DOT__y))) 
                                       & (2U >= (IData)(vlSelf->top__DOT__h_c))) 
                                      & (IData)(vlSelf->top__DOT__clk_2))
                                      ? 0xfffU : vlSelf->top__DOT__point_mem
                                     [(0xfffU & ((IData)(1U) 
                                                 + 
                                                 ((((0x1dU 
                                                     >= 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->top__DOT__v_n)))
                                                     ? 
                                                    vlSelf->top__DOT__ascii_mem
                                                    [
                                                    ((0x45U 
                                                      >= (IData)(vlSelf->top__DOT__h_n))
                                                      ? (IData)(vlSelf->top__DOT__h_n)
                                                      : 0U)]
                                                    [
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__v_n))]
                                                     : 0U) 
                                                   << 4U) 
                                                  + (IData)(vlSelf->top__DOT__v_c))))]) 
                                    >> (0xfU & (IData)(vlSelf->top__DOT__h_c)))))
                        : 0U);
    vlSelf->vga_r = (0xffU & (((IData)(top__DOT__point)
                                ? 0xffff00U : 0U) >> 0x10U));
    vlSelf->vga_g = (0xffU & (((IData)(top__DOT__point)
                                ? 0xffff00U : 0U) >> 8U));
    vlSelf->vga_b = 0U;
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__top__DOT__clk_1 = vlSelf->top__DOT__clk_1;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__press 
        = vlSelf->__VinpClk__TOP__top__DOT__press;
    vlSelf->__Vclklast__TOP__clr = vlSelf->clr;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__backspace 
        = vlSelf->__VinpClk__TOP__top__DOT__backspace;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__enter 
        = vlSelf->__VinpClk__TOP__top__DOT__enter;
    vlSelf->__Vclklast__TOP__top__DOT__kpring = vlSelf->top__DOT__kpring;
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
    vlSelf->clk = 0;
    vlSelf->clr = 0;
    vlSelf->hsync = 0;
    vlSelf->vsync = 0;
    vlSelf->vga_clk = 0;
    vlSelf->vga_blank = 0;
    vlSelf->vga_r = 0;
    vlSelf->vga_g = 0;
    vlSelf->vga_b = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->capital = 0;
    vlSelf->top__DOT__press = 0;
    vlSelf->top__DOT__enter = 0;
    vlSelf->top__DOT__backspace = 0;
    vlSelf->top__DOT__dataascii = 0;
    vlSelf->top__DOT__clk_1 = 0;
    vlSelf->top__DOT__clk_2 = 0;
    vlSelf->top__DOT__x = 0;
    vlSelf->top__DOT__y = 0;
    vlSelf->top__DOT__kpr = 0;
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        vlSelf->top__DOT__nonull[__Vi0] = 0;
    }
    vlSelf->top__DOT__commandline = 0;
    vlSelf->top__DOT__j = 0;
    vlSelf->top__DOT__kpring = 0;
    vlSelf->top__DOT__h_c = 0;
    vlSelf->top__DOT__v_c = 0;
    vlSelf->top__DOT__h_n = 0;
    vlSelf->top__DOT__v_n = 0;
    for (int __Vi0=0; __Vi0<70; ++__Vi0) {
        for (int __Vi1=0; __Vi1<30; ++__Vi1) {
            vlSelf->top__DOT__ascii_mem[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__point_mem[__Vi0] = 0;
    }
    vlSelf->top__DOT____Vlvbound2 = 0;
    vlSelf->top__DOT____Vlvbound3 = 0;
    vlSelf->top__DOT____Vlvbound4 = 0;
    vlSelf->top__DOT____Vlvbound5 = 0;
    vlSelf->top__DOT____Vlvbound6 = 0;
    vlSelf->top__DOT____Vlvbound7 = 0;
    vlSelf->top__DOT____Vlvbound8 = 0;
    vlSelf->top__DOT____Vlvbound9 = 0;
    vlSelf->top__DOT____Vlvbound10 = 0;
    vlSelf->top__DOT____Vlvbound11 = 0;
    vlSelf->top__DOT____Vlvbound12 = 0;
    vlSelf->top__DOT____Vlvbound13 = 0;
    vlSelf->top__DOT____Vlvbound14 = 0;
    vlSelf->top__DOT____Vlvbound15 = 0;
    vlSelf->top__DOT____Vlvbound16 = 0;
    vlSelf->top__DOT____Vlvbound17 = 0;
    vlSelf->top__DOT____Vlvbound18 = 0;
    vlSelf->top__DOT____Vlvbound19 = 0;
    vlSelf->top__DOT____Vlvbound20 = 0;
    vlSelf->top__DOT____Vlvbound21 = 0;
    vlSelf->top__DOT____Vlvbound22 = 0;
    vlSelf->top__DOT____Vlvbound23 = 0;
    vlSelf->top__DOT____Vlvbound24 = 0;
    vlSelf->top__DOT____Vlvbound25 = 0;
    vlSelf->top__DOT____Vlvbound26 = 0;
    vlSelf->top__DOT____Vlvbound27 = 0;
    vlSelf->top__DOT____Vlvbound28 = 0;
    vlSelf->top__DOT____Vlvbound29 = 0;
    vlSelf->top__DOT____Vlvbound30 = 0;
    vlSelf->top__DOT____Vlvbound31 = 0;
    vlSelf->top__DOT____Vlvbound32 = 0;
    vlSelf->top__DOT____Vlvbound33 = 0;
    vlSelf->top__DOT____Vlvbound34 = 0;
    vlSelf->top__DOT____Vlvbound35 = 0;
    vlSelf->top__DOT____Vlvbound36 = 0;
    vlSelf->top__DOT__p0__DOT__buffer = 0;
    vlSelf->top__DOT__p0__DOT__count = 0;
    vlSelf->top__DOT__p0__DOT__ps2_clk_sync = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__p0__DOT__buff[__Vi0] = 0;
    }
    vlSelf->top__DOT__p0__DOT__outing = 0;
    vlSelf->top__DOT__p0__DOT__aim = 0;
    vlSelf->top__DOT__p0__DOT____Vlvbound1 = 0;
    vlSelf->top__DOT__p0__DOT____Vlvbound2 = 0;
    vlSelf->top__DOT__c1__DOT__clkcount = 0;
    vlSelf->top__DOT__c2__DOT__clkcount = 0;
    vlSelf->top__DOT__v0__DOT__x_cnt = 0;
    vlSelf->top__DOT__v0__DOT__y_cnt = 0;
    vlSelf->__Vdly__top__DOT__p0__DOT__ps2_clk_sync = 0;
    vlSelf->__Vdly__top__DOT__p0__DOT__count = 0;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v0 = 0;
    vlSelf->__Vdly__top__DOT__p0__DOT__aim = 0;
    vlSelf->__Vdly__top__DOT__p0__DOT__outing = 0;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v1 = 0;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v3 = 0;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v6 = 0;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v8 = 0;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v9 = 0;
    vlSelf->__VinpClk__TOP__top__DOT__press = 0;
    vlSelf->__VinpClk__TOP__top__DOT__backspace = 0;
    vlSelf->__VinpClk__TOP__top__DOT__enter = 0;
    vlSelf->__Vchglast__TOP__top__DOT__press = 0;
    vlSelf->__Vchglast__TOP__top__DOT__enter = 0;
    vlSelf->__Vchglast__TOP__top__DOT__backspace = 0;
}
