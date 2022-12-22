// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->vga_clk = vlSelf->clk;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ top__DOT__v0__DOT__h_valid;
    CData/*0:0*/ top__DOT__v0__DOT__v_valid;
    SData/*9:0*/ __Vdly__top__DOT__v0__DOT__x_cnt;
    SData/*9:0*/ __Vdly__top__DOT__v0__DOT__y_cnt;
    // Body
    vlSelf->__Vdly__top__DOT__p0__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__p0__DOT__ps2_clk_sync;
    vlSelf->__Vdly__top__DOT__p0__DOT__outing = vlSelf->top__DOT__p0__DOT__outing;
    vlSelf->__Vdly__top__DOT__p0__DOT__count = vlSelf->top__DOT__p0__DOT__count;
    vlSelf->__Vdly__top__DOT__p0__DOT__aim = vlSelf->top__DOT__p0__DOT__aim;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v1 = 0U;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v3 = 0U;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v6 = 0U;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v8 = 0U;
    vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v9 = 0U;
    __Vdly__top__DOT__v0__DOT__y_cnt = vlSelf->top__DOT__v0__DOT__y_cnt;
    __Vdly__top__DOT__v0__DOT__x_cnt = vlSelf->top__DOT__v0__DOT__x_cnt;
    if (vlSelf->clr) {
        vlSelf->top__DOT__c2__DOT__clkcount = 0U;
        vlSelf->top__DOT__clk_2 = 0U;
    } else {
        vlSelf->top__DOT__c2__DOT__clkcount = ((IData)(1U) 
                                               + vlSelf->top__DOT__c2__DOT__clkcount);
        if ((0x3d090U <= vlSelf->top__DOT__c2__DOT__clkcount)) {
            vlSelf->top__DOT__clk_2 = (1U & (~ (IData)(vlSelf->top__DOT__clk_2)));
            vlSelf->top__DOT__c2__DOT__clkcount = 0U;
        }
    }
    if (vlSelf->clr) {
        vlSelf->top__DOT__c1__DOT__clkcount = 0U;
        vlSelf->top__DOT__clk_1 = 0U;
    } else {
        vlSelf->top__DOT__c1__DOT__clkcount = ((IData)(1U) 
                                               + vlSelf->top__DOT__c1__DOT__clkcount);
        if ((0x3d090U <= vlSelf->top__DOT__c1__DOT__clkcount)) {
            vlSelf->top__DOT__clk_1 = (1U & (~ (IData)(vlSelf->top__DOT__clk_1)));
            vlSelf->top__DOT__c1__DOT__clkcount = 0U;
        }
    }
    vlSelf->__Vdly__top__DOT__p0__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__p0__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clr) {
        __Vdly__top__DOT__v0__DOT__x_cnt = 1U;
        __Vdly__top__DOT__v0__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->top__DOT__v0__DOT__x_cnt))) {
        __Vdly__top__DOT__v0__DOT__y_cnt = ((0x20dU 
                                             == (IData)(vlSelf->top__DOT__v0__DOT__y_cnt))
                                             ? 1U : 
                                            (0x3ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__v0__DOT__y_cnt))));
        __Vdly__top__DOT__v0__DOT__x_cnt = 1U;
    } else {
        __Vdly__top__DOT__v0__DOT__x_cnt = (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__v0__DOT__x_cnt)));
    }
    vlSelf->top__DOT__v0__DOT__x_cnt = __Vdly__top__DOT__v0__DOT__x_cnt;
    vlSelf->top__DOT__v0__DOT__y_cnt = __Vdly__top__DOT__v0__DOT__y_cnt;
    vlSelf->hsync = (0x60U < (IData)(vlSelf->top__DOT__v0__DOT__x_cnt));
    top__DOT__v0__DOT__h_valid = ((0x90U < (IData)(vlSelf->top__DOT__v0__DOT__x_cnt)) 
                                  & (0x310U >= (IData)(vlSelf->top__DOT__v0__DOT__x_cnt)));
    vlSelf->vsync = (2U < (IData)(vlSelf->top__DOT__v0__DOT__y_cnt));
    top__DOT__v0__DOT__v_valid = ((0x23U < (IData)(vlSelf->top__DOT__v0__DOT__y_cnt)) 
                                  & (0x203U >= (IData)(vlSelf->top__DOT__v0__DOT__y_cnt)));
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__kpr = ((IData)(vlSelf->clr) ? 0U
                              : ((IData)(vlSelf->top__DOT__press)
                                  ? (0xffU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__kpr)))
                                  : 0U));
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__kpring = ((4U < (IData)(vlSelf->top__DOT__kpr))
                                 ? (1U & (IData)(vlSelf->top__DOT__clk_1))
                                 : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__7\n"); );
    // Variables
    CData/*6:0*/ __Vdly__top__DOT__x;
    CData/*4:0*/ __Vdly__top__DOT__y;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v20;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v21;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v22;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v23;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v24;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v25;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v26;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v27;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v28;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v29;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v30;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v5;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v31;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v7;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v32;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v33;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v33;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v34;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v34;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v35;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v35;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v36;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v36;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v37;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v37;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v38;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v38;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v39;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v39;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v40;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v40;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v41;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v41;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v42;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v42;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v43;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v43;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v44;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v44;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v45;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v45;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v46;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v46;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v47;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v47;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v48;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v48;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v49;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v49;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v50;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v50;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v51;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v51;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v52;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v52;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v53;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v53;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v54;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v54;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v55;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v55;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v56;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v56;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v57;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v57;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v58;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v58;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v59;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v59;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v60;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v61;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v61;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v61;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v8;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v9;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v10;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v11;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__ascii_mem__v12;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v12;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v62;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v62;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v62;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v63;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v63;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v63;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v13;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v14;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v15;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v16;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__ascii_mem__v17;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v17;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v64;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v64;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v64;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v18;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v65;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v65;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v65;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v66;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v66;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v67;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v67;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v68;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v68;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v69;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v69;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v70;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v70;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v71;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v71;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v72;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v72;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v73;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v73;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v74;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v74;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v75;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v75;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v76;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v76;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v77;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v77;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v78;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v78;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v79;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v79;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v80;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v80;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v81;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v81;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v82;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v82;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v83;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v83;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v84;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v84;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v85;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v85;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v86;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v86;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v87;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v87;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v88;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v88;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v89;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v89;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v90;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v90;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v91;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v91;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v92;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v92;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v93;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v93;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v94;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v94;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__ascii_mem__v19;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v19;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v95;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v95;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v95;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v96;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v96;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v96;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__ascii_mem__v20;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v20;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v20;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v97;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v97;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v97;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__ascii_mem__v21;
    CData/*4:0*/ __Vdlyvdim1__top__DOT__ascii_mem__v21;
    CData/*7:0*/ __Vdlyvval__top__DOT__ascii_mem__v21;
    CData/*0:0*/ __Vdlyvset__top__DOT__ascii_mem__v21;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__nonull__v98;
    CData/*6:0*/ __Vdlyvval__top__DOT__nonull__v98;
    CData/*0:0*/ __Vdlyvset__top__DOT__nonull__v98;
    IData/*29:0*/ __Vdly__top__DOT__commandline;
    // Body
    __Vdly__top__DOT__commandline = vlSelf->top__DOT__commandline;
    __Vdly__top__DOT__y = vlSelf->top__DOT__y;
    __Vdly__top__DOT__x = vlSelf->top__DOT__x;
    __Vdlyvset__top__DOT__ascii_mem__v0 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v3 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v4 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v6 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v8 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v9 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v10 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v11 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v12 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v13 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v14 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v15 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v16 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v17 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v18 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v19 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v20 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v21 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v1 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v2 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v5 = 0U;
    __Vdlyvset__top__DOT__ascii_mem__v7 = 0U;
    __Vdlyvset__top__DOT__nonull__v0 = 0U;
    __Vdlyvset__top__DOT__nonull__v1 = 0U;
    __Vdlyvset__top__DOT__nonull__v4 = 0U;
    __Vdlyvset__top__DOT__nonull__v5 = 0U;
    __Vdlyvset__top__DOT__nonull__v6 = 0U;
    __Vdlyvset__top__DOT__nonull__v7 = 0U;
    __Vdlyvset__top__DOT__nonull__v8 = 0U;
    __Vdlyvset__top__DOT__nonull__v9 = 0U;
    __Vdlyvset__top__DOT__nonull__v10 = 0U;
    __Vdlyvset__top__DOT__nonull__v11 = 0U;
    __Vdlyvset__top__DOT__nonull__v12 = 0U;
    __Vdlyvset__top__DOT__nonull__v13 = 0U;
    __Vdlyvset__top__DOT__nonull__v14 = 0U;
    __Vdlyvset__top__DOT__nonull__v15 = 0U;
    __Vdlyvset__top__DOT__nonull__v16 = 0U;
    __Vdlyvset__top__DOT__nonull__v17 = 0U;
    __Vdlyvset__top__DOT__nonull__v18 = 0U;
    __Vdlyvset__top__DOT__nonull__v19 = 0U;
    __Vdlyvset__top__DOT__nonull__v20 = 0U;
    __Vdlyvset__top__DOT__nonull__v21 = 0U;
    __Vdlyvset__top__DOT__nonull__v22 = 0U;
    __Vdlyvset__top__DOT__nonull__v23 = 0U;
    __Vdlyvset__top__DOT__nonull__v24 = 0U;
    __Vdlyvset__top__DOT__nonull__v25 = 0U;
    __Vdlyvset__top__DOT__nonull__v26 = 0U;
    __Vdlyvset__top__DOT__nonull__v27 = 0U;
    __Vdlyvset__top__DOT__nonull__v28 = 0U;
    __Vdlyvset__top__DOT__nonull__v29 = 0U;
    __Vdlyvset__top__DOT__nonull__v30 = 0U;
    __Vdlyvset__top__DOT__nonull__v33 = 0U;
    __Vdlyvset__top__DOT__nonull__v34 = 0U;
    __Vdlyvset__top__DOT__nonull__v35 = 0U;
    __Vdlyvset__top__DOT__nonull__v36 = 0U;
    __Vdlyvset__top__DOT__nonull__v37 = 0U;
    __Vdlyvset__top__DOT__nonull__v38 = 0U;
    __Vdlyvset__top__DOT__nonull__v39 = 0U;
    __Vdlyvset__top__DOT__nonull__v40 = 0U;
    __Vdlyvset__top__DOT__nonull__v41 = 0U;
    __Vdlyvset__top__DOT__nonull__v42 = 0U;
    __Vdlyvset__top__DOT__nonull__v43 = 0U;
    __Vdlyvset__top__DOT__nonull__v44 = 0U;
    __Vdlyvset__top__DOT__nonull__v45 = 0U;
    __Vdlyvset__top__DOT__nonull__v46 = 0U;
    __Vdlyvset__top__DOT__nonull__v47 = 0U;
    __Vdlyvset__top__DOT__nonull__v48 = 0U;
    __Vdlyvset__top__DOT__nonull__v49 = 0U;
    __Vdlyvset__top__DOT__nonull__v50 = 0U;
    __Vdlyvset__top__DOT__nonull__v51 = 0U;
    __Vdlyvset__top__DOT__nonull__v52 = 0U;
    __Vdlyvset__top__DOT__nonull__v53 = 0U;
    __Vdlyvset__top__DOT__nonull__v54 = 0U;
    __Vdlyvset__top__DOT__nonull__v55 = 0U;
    __Vdlyvset__top__DOT__nonull__v56 = 0U;
    __Vdlyvset__top__DOT__nonull__v57 = 0U;
    __Vdlyvset__top__DOT__nonull__v58 = 0U;
    __Vdlyvset__top__DOT__nonull__v59 = 0U;
    __Vdlyvset__top__DOT__nonull__v60 = 0U;
    __Vdlyvset__top__DOT__nonull__v61 = 0U;
    __Vdlyvset__top__DOT__nonull__v62 = 0U;
    __Vdlyvset__top__DOT__nonull__v63 = 0U;
    __Vdlyvset__top__DOT__nonull__v64 = 0U;
    __Vdlyvset__top__DOT__nonull__v65 = 0U;
    __Vdlyvset__top__DOT__nonull__v66 = 0U;
    __Vdlyvset__top__DOT__nonull__v67 = 0U;
    __Vdlyvset__top__DOT__nonull__v68 = 0U;
    __Vdlyvset__top__DOT__nonull__v69 = 0U;
    __Vdlyvset__top__DOT__nonull__v70 = 0U;
    __Vdlyvset__top__DOT__nonull__v71 = 0U;
    __Vdlyvset__top__DOT__nonull__v72 = 0U;
    __Vdlyvset__top__DOT__nonull__v73 = 0U;
    __Vdlyvset__top__DOT__nonull__v74 = 0U;
    __Vdlyvset__top__DOT__nonull__v75 = 0U;
    __Vdlyvset__top__DOT__nonull__v76 = 0U;
    __Vdlyvset__top__DOT__nonull__v77 = 0U;
    __Vdlyvset__top__DOT__nonull__v78 = 0U;
    __Vdlyvset__top__DOT__nonull__v79 = 0U;
    __Vdlyvset__top__DOT__nonull__v80 = 0U;
    __Vdlyvset__top__DOT__nonull__v81 = 0U;
    __Vdlyvset__top__DOT__nonull__v82 = 0U;
    __Vdlyvset__top__DOT__nonull__v83 = 0U;
    __Vdlyvset__top__DOT__nonull__v84 = 0U;
    __Vdlyvset__top__DOT__nonull__v85 = 0U;
    __Vdlyvset__top__DOT__nonull__v86 = 0U;
    __Vdlyvset__top__DOT__nonull__v87 = 0U;
    __Vdlyvset__top__DOT__nonull__v88 = 0U;
    __Vdlyvset__top__DOT__nonull__v89 = 0U;
    __Vdlyvset__top__DOT__nonull__v90 = 0U;
    __Vdlyvset__top__DOT__nonull__v91 = 0U;
    __Vdlyvset__top__DOT__nonull__v92 = 0U;
    __Vdlyvset__top__DOT__nonull__v93 = 0U;
    __Vdlyvset__top__DOT__nonull__v94 = 0U;
    __Vdlyvset__top__DOT__nonull__v95 = 0U;
    __Vdlyvset__top__DOT__nonull__v96 = 0U;
    __Vdlyvset__top__DOT__nonull__v97 = 0U;
    __Vdlyvset__top__DOT__nonull__v98 = 0U;
    if (vlSelf->clr) {
        vlSelf->top__DOT__j = 0U;
        __Vdly__top__DOT__x = 4U;
        __Vdly__top__DOT__y = 0U;
        __Vdlyvset__top__DOT__nonull__v0 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__ascii_mem__v0 = 1U;
        __Vdly__top__DOT__commandline = (1U | __Vdly__top__DOT__commandline);
        __Vdlyvset__top__DOT__nonull__v1 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__ascii_mem__v1 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][1U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__ascii_mem__v2 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__ascii_mem__v3 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][2U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v4 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v5 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][3U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v6 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v7 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][4U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v8 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v9 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][5U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v10 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v11 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][6U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v12 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v13 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][7U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v14 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v15 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][8U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v16 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v17 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][9U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v18 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v19 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0xaU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v20 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v21 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0xbU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v22 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v23 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0xcU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v24 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v25 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0xdU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v26 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v27 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0xeU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v28 = 1U;
        vlSelf->top__DOT__j = 0U;
        __Vdlyvset__top__DOT__nonull__v29 = 1U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0xfU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        __Vdlyvset__top__DOT__nonull__v30 = 1U;
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x10U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x11U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x12U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x13U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x14U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x15U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x16U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x17U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x18U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x19U] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x1aU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x1bU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x1cU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
        vlSelf->top__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
            vlSelf->top__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                vlSelf->top__DOT__ascii_mem[(0x7fU 
                                             & vlSelf->top__DOT__j)][0x1dU] 
                    = vlSelf->top__DOT____Vlvbound2;
            }
            vlSelf->top__DOT__j = ((IData)(1U) + vlSelf->top__DOT__j);
        }
    } else if (vlSelf->top__DOT__enter) {
        if ((0x1dU == (IData)(vlSelf->top__DOT__y))) {
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [1U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][1U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            __Vdlyvset__top__DOT__ascii_mem__v4 = 1U;
            __Vdly__top__DOT__x = 4U;
            vlSelf->top__DOT__j = 0U;
            __Vdlyvset__top__DOT__ascii_mem__v5 = 1U;
            __Vdlyvval__top__DOT__nonull__v31 = vlSelf->top__DOT____Vlvbound3;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][2U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][1U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            __Vdlyvset__top__DOT__ascii_mem__v6 = 1U;
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [2U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvset__top__DOT__ascii_mem__v7 = 1U;
            __Vdlyvval__top__DOT__nonull__v32 = vlSelf->top__DOT____Vlvbound3;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][3U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][2U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [3U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v33 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v33 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][4U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][3U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [4U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v34 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v34 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][5U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][4U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [5U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v35 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v35 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][6U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][5U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [6U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v36 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v36 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][7U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][6U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [7U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v37 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v37 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][8U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][7U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [8U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v38 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v38 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][9U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][8U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [9U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v39 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v39 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xaU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][9U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0xaU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v40 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v40 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xbU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xaU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0xbU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v41 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v41 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xcU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xbU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0xcU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v42 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v42 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xdU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xcU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0xdU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v43 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v43 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xeU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xdU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0xeU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v44 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v44 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xfU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xeU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0xfU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v45 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v45 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x10U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xfU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x10U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v46 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v46 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x11U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x10U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x11U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v47 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v47 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x12U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x11U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x12U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v48 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v48 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x13U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x12U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x13U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v49 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v49 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x14U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x13U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x14U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v50 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v50 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x15U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x14U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x15U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v51 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v51 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x16U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x15U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x16U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v52 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v52 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x17U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x16U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x17U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v53 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v53 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x18U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x17U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x18U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v54 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v54 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x19U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x18U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x19U];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v55 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v55 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1aU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x19U] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x1aU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v56 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v56 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1bU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1aU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x1bU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v57 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v57 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1cU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1bU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x1cU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v58 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v58 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound5 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1dU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1cU] 
                        = vlSelf->top__DOT____Vlvbound5;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound3 = vlSelf->top__DOT__nonull
                [0x1dU];
            vlSelf->top__DOT____Vlvbound4 = ((0x1dU 
                                              >= (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))) 
                                             & (vlSelf->top__DOT__commandline 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v59 = vlSelf->top__DOT____Vlvbound3;
            __Vdlyvset__top__DOT__nonull__v59 = 1U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound4) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound6 = 0U;
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1dU] 
                        = vlSelf->top__DOT____Vlvbound6;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            __Vdly__top__DOT__commandline = (0x20000000U 
                                             | __Vdly__top__DOT__commandline);
            __Vdlyvset__top__DOT__nonull__v60 = 1U;
        } else {
            __Vdly__top__DOT__y = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__y)));
            vlSelf->top__DOT____Vlvbound7 = vlSelf->top__DOT__x;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdlyvval__top__DOT__nonull__v61 = vlSelf->top__DOT____Vlvbound7;
                __Vdlyvset__top__DOT__nonull__v61 = 1U;
                __Vdlyvdim0__top__DOT__nonull__v61 
                    = vlSelf->top__DOT__y;
            }
            vlSelf->top__DOT____Vlvbound8 = 0x5aU;
            __Vdly__top__DOT__x = 4U;
            if ((0x1dU >= (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y))))) {
                __Vdlyvval__top__DOT__ascii_mem__v8 
                    = vlSelf->top__DOT____Vlvbound8;
                __Vdlyvset__top__DOT__ascii_mem__v8 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v8 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y)));
            }
            vlSelf->top__DOT____Vlvbound9 = 0x53U;
            if ((0x1dU >= (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y))))) {
                __Vdlyvval__top__DOT__ascii_mem__v9 
                    = vlSelf->top__DOT____Vlvbound9;
                __Vdlyvset__top__DOT__ascii_mem__v9 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v9 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y)));
            }
            vlSelf->top__DOT____Vlvbound10 = 0x4cU;
            if ((0x1dU >= (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y))))) {
                __Vdlyvval__top__DOT__ascii_mem__v10 
                    = vlSelf->top__DOT____Vlvbound10;
                __Vdlyvset__top__DOT__ascii_mem__v10 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v10 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y)));
            }
            vlSelf->top__DOT____Vlvbound11 = 0x3aU;
            if ((0x1dU >= (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y))))) {
                __Vdlyvval__top__DOT__ascii_mem__v11 
                    = vlSelf->top__DOT____Vlvbound11;
                __Vdlyvset__top__DOT__ascii_mem__v11 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v11 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y)));
            }
            vlSelf->top__DOT____Vlvbound12 = 1U;
            if ((0x1dU >= (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__y))))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->top__DOT__y))))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound12) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->top__DOT__y))))));
            }
        }
    } else if (vlSelf->top__DOT__backspace) {
        if (((0x1dU >= (IData)(vlSelf->top__DOT__y)) 
             & (vlSelf->top__DOT__commandline >> (IData)(vlSelf->top__DOT__y)))) {
            if ((4U != (IData)(vlSelf->top__DOT__x))) {
                vlSelf->top__DOT____Vlvbound17 = 0U;
                if (((0x1dU >= (IData)(vlSelf->top__DOT__y)) 
                     & (0x45U >= (0x7fU & ((IData)(vlSelf->top__DOT__x) 
                                           - (IData)(1U)))))) {
                    __Vdlyvval__top__DOT__ascii_mem__v12 
                        = vlSelf->top__DOT____Vlvbound17;
                    __Vdlyvset__top__DOT__ascii_mem__v12 = 1U;
                    __Vdlyvdim1__top__DOT__ascii_mem__v12 
                        = vlSelf->top__DOT__y;
                    __Vdlyvdim0__top__DOT__ascii_mem__v12 
                        = (0x7fU & ((IData)(vlSelf->top__DOT__x) 
                                    - (IData)(1U)));
                }
                __Vdly__top__DOT__x = (0x7fU & ((IData)(vlSelf->top__DOT__x) 
                                                - (IData)(1U)));
                vlSelf->top__DOT____Vlvbound18 = (0x7fU 
                                                  & (((0x1dU 
                                                       >= (IData)(vlSelf->top__DOT__y))
                                                       ? 
                                                      vlSelf->top__DOT__nonull
                                                      [vlSelf->top__DOT__y]
                                                       : 0U) 
                                                     - (IData)(1U)));
                if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                    __Vdlyvval__top__DOT__nonull__v62 
                        = vlSelf->top__DOT____Vlvbound18;
                    __Vdlyvset__top__DOT__nonull__v62 = 1U;
                    __Vdlyvdim0__top__DOT__nonull__v62 
                        = vlSelf->top__DOT__y;
                }
            } else if (((4U == (IData)(vlSelf->top__DOT__x)) 
                        & (0U != (IData)(vlSelf->top__DOT__y)))) {
                __Vdly__top__DOT__x = ((0x1dU >= (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__y) 
                                                     - (IData)(1U))))
                                        ? vlSelf->top__DOT__nonull
                                       [(0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                                  - (IData)(1U)))]
                                        : 0U);
                __Vdly__top__DOT__y = (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                                - (IData)(1U)));
                vlSelf->top__DOT____Vlvbound19 = 0U;
                if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                    __Vdlyvval__top__DOT__nonull__v63 
                        = vlSelf->top__DOT____Vlvbound19;
                    __Vdlyvset__top__DOT__nonull__v63 = 1U;
                    __Vdlyvdim0__top__DOT__nonull__v63 
                        = vlSelf->top__DOT__y;
                }
                vlSelf->top__DOT____Vlvbound20 = 0U;
                if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                    __Vdlyvval__top__DOT__ascii_mem__v13 
                        = vlSelf->top__DOT____Vlvbound20;
                    __Vdlyvset__top__DOT__ascii_mem__v13 = 1U;
                    __Vdlyvdim1__top__DOT__ascii_mem__v13 
                        = vlSelf->top__DOT__y;
                }
                vlSelf->top__DOT____Vlvbound21 = 0U;
                if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                    __Vdlyvval__top__DOT__ascii_mem__v14 
                        = vlSelf->top__DOT____Vlvbound21;
                    __Vdlyvset__top__DOT__ascii_mem__v14 = 1U;
                    __Vdlyvdim1__top__DOT__ascii_mem__v14 
                        = vlSelf->top__DOT__y;
                }
                vlSelf->top__DOT____Vlvbound22 = 0U;
                if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                    __Vdlyvval__top__DOT__ascii_mem__v15 
                        = vlSelf->top__DOT____Vlvbound22;
                    __Vdlyvset__top__DOT__ascii_mem__v15 = 1U;
                    __Vdlyvdim1__top__DOT__ascii_mem__v15 
                        = vlSelf->top__DOT__y;
                }
                vlSelf->top__DOT____Vlvbound23 = 0U;
                if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                    __Vdlyvval__top__DOT__ascii_mem__v16 
                        = vlSelf->top__DOT____Vlvbound23;
                    __Vdlyvset__top__DOT__ascii_mem__v16 = 1U;
                    __Vdlyvdim1__top__DOT__ascii_mem__v16 
                        = vlSelf->top__DOT__y;
                }
                vlSelf->top__DOT____Vlvbound24 = 0U;
                if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                    __Vdly__top__DOT__commandline = 
                        (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__y))) 
                          & __Vdly__top__DOT__commandline) 
                         | (0x3fffffffU & ((IData)(vlSelf->top__DOT____Vlvbound24) 
                                           << (IData)(vlSelf->top__DOT__y))));
                }
            }
        } else if ((0U != (IData)(vlSelf->top__DOT__x))) {
            vlSelf->top__DOT____Vlvbound13 = 0U;
            if (((0x1dU >= (IData)(vlSelf->top__DOT__y)) 
                 & (0x45U >= (0x7fU & ((IData)(vlSelf->top__DOT__x) 
                                       - (IData)(1U)))))) {
                __Vdlyvval__top__DOT__ascii_mem__v17 
                    = vlSelf->top__DOT____Vlvbound13;
                __Vdlyvset__top__DOT__ascii_mem__v17 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v17 
                    = vlSelf->top__DOT__y;
                __Vdlyvdim0__top__DOT__ascii_mem__v17 
                    = (0x7fU & ((IData)(vlSelf->top__DOT__x) 
                                - (IData)(1U)));
            }
            __Vdly__top__DOT__x = (0x7fU & ((IData)(vlSelf->top__DOT__x) 
                                            - (IData)(1U)));
            vlSelf->top__DOT____Vlvbound14 = (0x7fU 
                                              & (((0x1dU 
                                                   >= (IData)(vlSelf->top__DOT__y))
                                                   ? 
                                                  vlSelf->top__DOT__nonull
                                                  [vlSelf->top__DOT__y]
                                                   : 0U) 
                                                 - (IData)(1U)));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdlyvval__top__DOT__nonull__v64 = vlSelf->top__DOT____Vlvbound14;
                __Vdlyvset__top__DOT__nonull__v64 = 1U;
                __Vdlyvdim0__top__DOT__nonull__v64 
                    = vlSelf->top__DOT__y;
            }
        } else if (((0U == (IData)(vlSelf->top__DOT__x)) 
                    & (0U != (IData)(vlSelf->top__DOT__y)))) {
            vlSelf->top__DOT____Vlvbound15 = 0U;
            if ((0x1dU >= (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                    - (IData)(1U))))) {
                __Vdlyvval__top__DOT__ascii_mem__v18 
                    = vlSelf->top__DOT____Vlvbound15;
                __Vdlyvset__top__DOT__ascii_mem__v18 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v18 
                    = (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                - (IData)(1U)));
            }
            __Vdly__top__DOT__x = 0x45U;
            __Vdly__top__DOT__y = (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                            - (IData)(1U)));
            vlSelf->top__DOT____Vlvbound16 = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdlyvval__top__DOT__nonull__v65 = vlSelf->top__DOT____Vlvbound16;
                __Vdlyvset__top__DOT__nonull__v65 = 1U;
                __Vdlyvdim0__top__DOT__nonull__v65 
                    = vlSelf->top__DOT__y;
            }
        }
    } else if (vlSelf->top__DOT__press) {
        if (((0x45U == (IData)(vlSelf->top__DOT__x)) 
             & (0x1dU == (IData)(vlSelf->top__DOT__y)))) {
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [1U];
            vlSelf->top__DOT__j = 0U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][1U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v66 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v66 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][2U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][1U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][3U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][2U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][4U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][3U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [2U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v67 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v67 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][5U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][4U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][6U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][5U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [3U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v68 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v68 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][7U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][6U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][8U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][7U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [4U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v69 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v69 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][9U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][8U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xaU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][9U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [5U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v70 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v70 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xbU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xaU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xcU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xbU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [6U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v71 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v71 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xdU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xcU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xeU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xdU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [7U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v72 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v72 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0xfU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xeU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x10U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0xfU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [8U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v73 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v73 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x11U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x10U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x12U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x11U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [9U];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v74 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v74 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x13U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x12U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x14U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x13U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0xaU];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v75 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v75 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x15U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x14U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x16U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x15U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0xbU];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v76 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v76 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x17U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x16U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x18U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x17U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0xcU];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v77 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v77 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x19U];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x18U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1aU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x19U] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0xdU];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v78 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v78 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1bU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1aU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1cU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1bU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0xeU];
            vlSelf->top__DOT__j = 0U;
            __Vdlyvval__top__DOT__nonull__v79 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v79 = 1U;
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound27 = vlSelf->top__DOT__ascii_mem
                    [((0x45U >= (0x7fU & vlSelf->top__DOT__j))
                       ? (0x7fU & vlSelf->top__DOT__j)
                       : 0U)][0x1dU];
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1cU] 
                        = vlSelf->top__DOT____Vlvbound27;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            vlSelf->top__DOT__j = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            while (VL_GTS_III(1,32,32, 0x46U, vlSelf->top__DOT__j)) {
                vlSelf->top__DOT____Vlvbound28 = 0U;
                if (VL_LIKELY((0x45U >= (0x7fU & vlSelf->top__DOT__j)))) {
                    vlSelf->top__DOT__ascii_mem[(0x7fU 
                                                 & vlSelf->top__DOT__j)][0x1dU] 
                        = vlSelf->top__DOT____Vlvbound28;
                }
                vlSelf->top__DOT__j = ((IData)(1U) 
                                       + vlSelf->top__DOT__j);
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0xfU];
            __Vdlyvval__top__DOT__nonull__v80 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v80 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x10U];
            __Vdlyvval__top__DOT__nonull__v81 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v81 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x11U];
            __Vdlyvval__top__DOT__nonull__v82 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v82 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x12U];
            __Vdlyvval__top__DOT__nonull__v83 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v83 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x13U];
            __Vdlyvval__top__DOT__nonull__v84 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v84 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x14U];
            __Vdlyvval__top__DOT__nonull__v85 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v85 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x15U];
            __Vdlyvval__top__DOT__nonull__v86 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v86 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x16U];
            __Vdlyvval__top__DOT__nonull__v87 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v87 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x17U];
            __Vdlyvval__top__DOT__nonull__v88 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v88 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x18U];
            __Vdlyvval__top__DOT__nonull__v89 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v89 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x19U];
            __Vdlyvval__top__DOT__nonull__v90 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v90 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x1aU];
            __Vdlyvval__top__DOT__nonull__v91 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v91 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x1bU];
            __Vdlyvval__top__DOT__nonull__v92 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v92 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x1cU];
            __Vdlyvval__top__DOT__nonull__v93 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v93 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound25 = vlSelf->top__DOT__nonull
                [0x1dU];
            __Vdlyvval__top__DOT__nonull__v94 = vlSelf->top__DOT____Vlvbound25;
            __Vdlyvset__top__DOT__nonull__v94 = 1U;
            vlSelf->top__DOT____Vlvbound26 = ((0x1dU 
                                               >= (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__y)))) 
                                              & (vlSelf->top__DOT__commandline 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__y)))));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound26) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
            vlSelf->top__DOT____Vlvbound29 = vlSelf->top__DOT__dataascii;
            if (((0x1dU >= (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                     - (IData)(1U)))) 
                 & (0x45U >= (IData)(vlSelf->top__DOT__x)))) {
                __Vdlyvval__top__DOT__ascii_mem__v19 
                    = vlSelf->top__DOT____Vlvbound29;
                __Vdlyvset__top__DOT__ascii_mem__v19 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v19 
                    = (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                - (IData)(1U)));
                __Vdlyvdim0__top__DOT__ascii_mem__v19 
                    = vlSelf->top__DOT__x;
            }
            vlSelf->top__DOT____Vlvbound30 = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdlyvval__top__DOT__nonull__v95 = vlSelf->top__DOT____Vlvbound30;
                __Vdlyvset__top__DOT__nonull__v95 = 1U;
                __Vdlyvdim0__top__DOT__nonull__v95 
                    = vlSelf->top__DOT__y;
            }
            __Vdly__top__DOT__x = 0U;
            vlSelf->top__DOT____Vlvbound31 = 0x46U;
            if ((0x1dU >= (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                    - (IData)(1U))))) {
                __Vdlyvval__top__DOT__nonull__v96 = vlSelf->top__DOT____Vlvbound31;
                __Vdlyvset__top__DOT__nonull__v96 = 1U;
                __Vdlyvdim0__top__DOT__nonull__v96 
                    = (0x1fU & ((IData)(vlSelf->top__DOT__y) 
                                - (IData)(1U)));
            }
            vlSelf->top__DOT____Vlvbound32 = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdly__top__DOT__commandline = (((~ 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->top__DOT__y))) 
                                                  & __Vdly__top__DOT__commandline) 
                                                 | (0x3fffffffU 
                                                    & ((IData)(vlSelf->top__DOT____Vlvbound32) 
                                                       << (IData)(vlSelf->top__DOT__y))));
            }
        } else if ((0x45U == (IData)(vlSelf->top__DOT__x))) {
            vlSelf->top__DOT____Vlvbound33 = vlSelf->top__DOT__dataascii;
            if (((0x1dU >= (IData)(vlSelf->top__DOT__y)) 
                 & (0x45U >= (IData)(vlSelf->top__DOT__x)))) {
                __Vdlyvval__top__DOT__ascii_mem__v20 
                    = vlSelf->top__DOT____Vlvbound33;
                __Vdlyvset__top__DOT__ascii_mem__v20 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v20 
                    = vlSelf->top__DOT__y;
                __Vdlyvdim0__top__DOT__ascii_mem__v20 
                    = vlSelf->top__DOT__x;
            }
            __Vdly__top__DOT__y = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__y)));
            vlSelf->top__DOT____Vlvbound34 = 0x46U;
            __Vdly__top__DOT__x = 0U;
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdlyvval__top__DOT__nonull__v97 = vlSelf->top__DOT____Vlvbound34;
                __Vdlyvset__top__DOT__nonull__v97 = 1U;
                __Vdlyvdim0__top__DOT__nonull__v97 
                    = vlSelf->top__DOT__y;
            }
        } else {
            vlSelf->top__DOT____Vlvbound35 = vlSelf->top__DOT__dataascii;
            if (((0x1dU >= (IData)(vlSelf->top__DOT__y)) 
                 & (0x45U >= (IData)(vlSelf->top__DOT__x)))) {
                __Vdlyvval__top__DOT__ascii_mem__v21 
                    = vlSelf->top__DOT____Vlvbound35;
                __Vdlyvset__top__DOT__ascii_mem__v21 = 1U;
                __Vdlyvdim1__top__DOT__ascii_mem__v21 
                    = vlSelf->top__DOT__y;
                __Vdlyvdim0__top__DOT__ascii_mem__v21 
                    = vlSelf->top__DOT__x;
            }
            __Vdly__top__DOT__x = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__x)));
            vlSelf->top__DOT____Vlvbound36 = (0x7fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((0x1dU 
                                                   >= (IData)(vlSelf->top__DOT__y))
                                                   ? 
                                                  vlSelf->top__DOT__nonull
                                                  [vlSelf->top__DOT__y]
                                                   : 0U)));
            if ((0x1dU >= (IData)(vlSelf->top__DOT__y))) {
                __Vdlyvval__top__DOT__nonull__v98 = vlSelf->top__DOT____Vlvbound36;
                __Vdlyvset__top__DOT__nonull__v98 = 1U;
                __Vdlyvdim0__top__DOT__nonull__v98 
                    = vlSelf->top__DOT__y;
            }
        }
    }
    vlSelf->top__DOT__commandline = __Vdly__top__DOT__commandline;
    vlSelf->top__DOT__x = __Vdly__top__DOT__x;
    vlSelf->top__DOT__y = __Vdly__top__DOT__y;
    if (__Vdlyvset__top__DOT__ascii_mem__v0) {
        vlSelf->top__DOT__ascii_mem[0U][0U] = 0x5aU;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v1) {
        vlSelf->top__DOT__ascii_mem[1U][0U] = 0x53U;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v2) {
        vlSelf->top__DOT__ascii_mem[2U][0U] = 0x4cU;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v3) {
        vlSelf->top__DOT__ascii_mem[3U][0U] = 0x3aU;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v4) {
        vlSelf->top__DOT__ascii_mem[0U][0x1dU] = 0x5aU;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v5) {
        vlSelf->top__DOT__ascii_mem[1U][0x1dU] = 0x53U;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v6) {
        vlSelf->top__DOT__ascii_mem[2U][0x1dU] = 0x4cU;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v7) {
        vlSelf->top__DOT__ascii_mem[3U][0x1dU] = 0x3aU;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v8) {
        vlSelf->top__DOT__ascii_mem[0U][__Vdlyvdim1__top__DOT__ascii_mem__v8] 
            = __Vdlyvval__top__DOT__ascii_mem__v8;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v9) {
        vlSelf->top__DOT__ascii_mem[1U][__Vdlyvdim1__top__DOT__ascii_mem__v9] 
            = __Vdlyvval__top__DOT__ascii_mem__v9;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v10) {
        vlSelf->top__DOT__ascii_mem[2U][__Vdlyvdim1__top__DOT__ascii_mem__v10] 
            = __Vdlyvval__top__DOT__ascii_mem__v10;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v11) {
        vlSelf->top__DOT__ascii_mem[3U][__Vdlyvdim1__top__DOT__ascii_mem__v11] 
            = __Vdlyvval__top__DOT__ascii_mem__v11;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v12) {
        vlSelf->top__DOT__ascii_mem[__Vdlyvdim0__top__DOT__ascii_mem__v12][__Vdlyvdim1__top__DOT__ascii_mem__v12] 
            = __Vdlyvval__top__DOT__ascii_mem__v12;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v13) {
        vlSelf->top__DOT__ascii_mem[0U][__Vdlyvdim1__top__DOT__ascii_mem__v13] 
            = __Vdlyvval__top__DOT__ascii_mem__v13;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v14) {
        vlSelf->top__DOT__ascii_mem[1U][__Vdlyvdim1__top__DOT__ascii_mem__v14] 
            = __Vdlyvval__top__DOT__ascii_mem__v14;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v15) {
        vlSelf->top__DOT__ascii_mem[2U][__Vdlyvdim1__top__DOT__ascii_mem__v15] 
            = __Vdlyvval__top__DOT__ascii_mem__v15;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v16) {
        vlSelf->top__DOT__ascii_mem[3U][__Vdlyvdim1__top__DOT__ascii_mem__v16] 
            = __Vdlyvval__top__DOT__ascii_mem__v16;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v17) {
        vlSelf->top__DOT__ascii_mem[__Vdlyvdim0__top__DOT__ascii_mem__v17][__Vdlyvdim1__top__DOT__ascii_mem__v17] 
            = __Vdlyvval__top__DOT__ascii_mem__v17;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v18) {
        vlSelf->top__DOT__ascii_mem[0x45U][__Vdlyvdim1__top__DOT__ascii_mem__v18] 
            = __Vdlyvval__top__DOT__ascii_mem__v18;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v19) {
        vlSelf->top__DOT__ascii_mem[__Vdlyvdim0__top__DOT__ascii_mem__v19][__Vdlyvdim1__top__DOT__ascii_mem__v19] 
            = __Vdlyvval__top__DOT__ascii_mem__v19;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v20) {
        vlSelf->top__DOT__ascii_mem[__Vdlyvdim0__top__DOT__ascii_mem__v20][__Vdlyvdim1__top__DOT__ascii_mem__v20] 
            = __Vdlyvval__top__DOT__ascii_mem__v20;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v21) {
        vlSelf->top__DOT__ascii_mem[__Vdlyvdim0__top__DOT__ascii_mem__v21][__Vdlyvdim1__top__DOT__ascii_mem__v21] 
            = __Vdlyvval__top__DOT__ascii_mem__v21;
    }
    if (__Vdlyvset__top__DOT__nonull__v0) {
        vlSelf->top__DOT__nonull[0U] = 4U;
    }
    if (__Vdlyvset__top__DOT__nonull__v1) {
        vlSelf->top__DOT__nonull[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v1) {
        vlSelf->top__DOT__nonull[1U] = 0U;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v2) {
        vlSelf->top__DOT__nonull[2U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v4) {
        vlSelf->top__DOT__nonull[3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v5) {
        vlSelf->top__DOT__nonull[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v6) {
        vlSelf->top__DOT__nonull[5U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v7) {
        vlSelf->top__DOT__nonull[6U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v8) {
        vlSelf->top__DOT__nonull[7U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v9) {
        vlSelf->top__DOT__nonull[8U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v10) {
        vlSelf->top__DOT__nonull[9U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v11) {
        vlSelf->top__DOT__nonull[0xaU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v12) {
        vlSelf->top__DOT__nonull[0xbU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v13) {
        vlSelf->top__DOT__nonull[0xcU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v14) {
        vlSelf->top__DOT__nonull[0xdU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v15) {
        vlSelf->top__DOT__nonull[0xeU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v16) {
        vlSelf->top__DOT__nonull[0xfU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v17) {
        vlSelf->top__DOT__nonull[0x10U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v18) {
        vlSelf->top__DOT__nonull[0x11U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v19) {
        vlSelf->top__DOT__nonull[0x12U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v20) {
        vlSelf->top__DOT__nonull[0x13U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v21) {
        vlSelf->top__DOT__nonull[0x14U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v22) {
        vlSelf->top__DOT__nonull[0x15U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v23) {
        vlSelf->top__DOT__nonull[0x16U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v24) {
        vlSelf->top__DOT__nonull[0x17U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v25) {
        vlSelf->top__DOT__nonull[0x18U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v26) {
        vlSelf->top__DOT__nonull[0x19U] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v27) {
        vlSelf->top__DOT__nonull[0x1aU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v28) {
        vlSelf->top__DOT__nonull[0x1bU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v29) {
        vlSelf->top__DOT__nonull[0x1cU] = 0U;
    }
    if (__Vdlyvset__top__DOT__nonull__v30) {
        vlSelf->top__DOT__nonull[0x1dU] = 0U;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v5) {
        vlSelf->top__DOT__nonull[0U] = __Vdlyvval__top__DOT__nonull__v31;
    }
    if (__Vdlyvset__top__DOT__ascii_mem__v7) {
        vlSelf->top__DOT__nonull[1U] = __Vdlyvval__top__DOT__nonull__v32;
    }
    if (__Vdlyvset__top__DOT__nonull__v33) {
        vlSelf->top__DOT__nonull[2U] = __Vdlyvval__top__DOT__nonull__v33;
    }
    if (__Vdlyvset__top__DOT__nonull__v34) {
        vlSelf->top__DOT__nonull[3U] = __Vdlyvval__top__DOT__nonull__v34;
    }
    if (__Vdlyvset__top__DOT__nonull__v35) {
        vlSelf->top__DOT__nonull[4U] = __Vdlyvval__top__DOT__nonull__v35;
    }
    if (__Vdlyvset__top__DOT__nonull__v36) {
        vlSelf->top__DOT__nonull[5U] = __Vdlyvval__top__DOT__nonull__v36;
    }
    if (__Vdlyvset__top__DOT__nonull__v37) {
        vlSelf->top__DOT__nonull[6U] = __Vdlyvval__top__DOT__nonull__v37;
    }
    if (__Vdlyvset__top__DOT__nonull__v38) {
        vlSelf->top__DOT__nonull[7U] = __Vdlyvval__top__DOT__nonull__v38;
    }
    if (__Vdlyvset__top__DOT__nonull__v39) {
        vlSelf->top__DOT__nonull[8U] = __Vdlyvval__top__DOT__nonull__v39;
    }
    if (__Vdlyvset__top__DOT__nonull__v40) {
        vlSelf->top__DOT__nonull[9U] = __Vdlyvval__top__DOT__nonull__v40;
    }
    if (__Vdlyvset__top__DOT__nonull__v41) {
        vlSelf->top__DOT__nonull[0xaU] = __Vdlyvval__top__DOT__nonull__v41;
    }
    if (__Vdlyvset__top__DOT__nonull__v42) {
        vlSelf->top__DOT__nonull[0xbU] = __Vdlyvval__top__DOT__nonull__v42;
    }
    if (__Vdlyvset__top__DOT__nonull__v43) {
        vlSelf->top__DOT__nonull[0xcU] = __Vdlyvval__top__DOT__nonull__v43;
    }
    if (__Vdlyvset__top__DOT__nonull__v44) {
        vlSelf->top__DOT__nonull[0xdU] = __Vdlyvval__top__DOT__nonull__v44;
    }
    if (__Vdlyvset__top__DOT__nonull__v45) {
        vlSelf->top__DOT__nonull[0xeU] = __Vdlyvval__top__DOT__nonull__v45;
    }
    if (__Vdlyvset__top__DOT__nonull__v46) {
        vlSelf->top__DOT__nonull[0xfU] = __Vdlyvval__top__DOT__nonull__v46;
    }
    if (__Vdlyvset__top__DOT__nonull__v47) {
        vlSelf->top__DOT__nonull[0x10U] = __Vdlyvval__top__DOT__nonull__v47;
    }
    if (__Vdlyvset__top__DOT__nonull__v48) {
        vlSelf->top__DOT__nonull[0x11U] = __Vdlyvval__top__DOT__nonull__v48;
    }
    if (__Vdlyvset__top__DOT__nonull__v49) {
        vlSelf->top__DOT__nonull[0x12U] = __Vdlyvval__top__DOT__nonull__v49;
    }
    if (__Vdlyvset__top__DOT__nonull__v50) {
        vlSelf->top__DOT__nonull[0x13U] = __Vdlyvval__top__DOT__nonull__v50;
    }
    if (__Vdlyvset__top__DOT__nonull__v51) {
        vlSelf->top__DOT__nonull[0x14U] = __Vdlyvval__top__DOT__nonull__v51;
    }
    if (__Vdlyvset__top__DOT__nonull__v52) {
        vlSelf->top__DOT__nonull[0x15U] = __Vdlyvval__top__DOT__nonull__v52;
    }
    if (__Vdlyvset__top__DOT__nonull__v53) {
        vlSelf->top__DOT__nonull[0x16U] = __Vdlyvval__top__DOT__nonull__v53;
    }
    if (__Vdlyvset__top__DOT__nonull__v54) {
        vlSelf->top__DOT__nonull[0x17U] = __Vdlyvval__top__DOT__nonull__v54;
    }
    if (__Vdlyvset__top__DOT__nonull__v55) {
        vlSelf->top__DOT__nonull[0x18U] = __Vdlyvval__top__DOT__nonull__v55;
    }
    if (__Vdlyvset__top__DOT__nonull__v56) {
        vlSelf->top__DOT__nonull[0x19U] = __Vdlyvval__top__DOT__nonull__v56;
    }
    if (__Vdlyvset__top__DOT__nonull__v57) {
        vlSelf->top__DOT__nonull[0x1aU] = __Vdlyvval__top__DOT__nonull__v57;
    }
    if (__Vdlyvset__top__DOT__nonull__v58) {
        vlSelf->top__DOT__nonull[0x1bU] = __Vdlyvval__top__DOT__nonull__v58;
    }
    if (__Vdlyvset__top__DOT__nonull__v59) {
        vlSelf->top__DOT__nonull[0x1cU] = __Vdlyvval__top__DOT__nonull__v59;
    }
    if (__Vdlyvset__top__DOT__nonull__v60) {
        vlSelf->top__DOT__nonull[0x1dU] = 4U;
    }
    if (__Vdlyvset__top__DOT__nonull__v61) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v61] 
            = __Vdlyvval__top__DOT__nonull__v61;
    }
    if (__Vdlyvset__top__DOT__nonull__v62) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v62] 
            = __Vdlyvval__top__DOT__nonull__v62;
    }
    if (__Vdlyvset__top__DOT__nonull__v63) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v63] 
            = __Vdlyvval__top__DOT__nonull__v63;
    }
    if (__Vdlyvset__top__DOT__nonull__v64) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v64] 
            = __Vdlyvval__top__DOT__nonull__v64;
    }
    if (__Vdlyvset__top__DOT__nonull__v65) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v65] 
            = __Vdlyvval__top__DOT__nonull__v65;
    }
    if (__Vdlyvset__top__DOT__nonull__v66) {
        vlSelf->top__DOT__nonull[0U] = __Vdlyvval__top__DOT__nonull__v66;
    }
    if (__Vdlyvset__top__DOT__nonull__v67) {
        vlSelf->top__DOT__nonull[1U] = __Vdlyvval__top__DOT__nonull__v67;
    }
    if (__Vdlyvset__top__DOT__nonull__v68) {
        vlSelf->top__DOT__nonull[2U] = __Vdlyvval__top__DOT__nonull__v68;
    }
    if (__Vdlyvset__top__DOT__nonull__v69) {
        vlSelf->top__DOT__nonull[3U] = __Vdlyvval__top__DOT__nonull__v69;
    }
    if (__Vdlyvset__top__DOT__nonull__v70) {
        vlSelf->top__DOT__nonull[4U] = __Vdlyvval__top__DOT__nonull__v70;
    }
    if (__Vdlyvset__top__DOT__nonull__v71) {
        vlSelf->top__DOT__nonull[5U] = __Vdlyvval__top__DOT__nonull__v71;
    }
    if (__Vdlyvset__top__DOT__nonull__v72) {
        vlSelf->top__DOT__nonull[6U] = __Vdlyvval__top__DOT__nonull__v72;
    }
    if (__Vdlyvset__top__DOT__nonull__v73) {
        vlSelf->top__DOT__nonull[7U] = __Vdlyvval__top__DOT__nonull__v73;
    }
    if (__Vdlyvset__top__DOT__nonull__v74) {
        vlSelf->top__DOT__nonull[8U] = __Vdlyvval__top__DOT__nonull__v74;
    }
    if (__Vdlyvset__top__DOT__nonull__v75) {
        vlSelf->top__DOT__nonull[9U] = __Vdlyvval__top__DOT__nonull__v75;
    }
    if (__Vdlyvset__top__DOT__nonull__v76) {
        vlSelf->top__DOT__nonull[0xaU] = __Vdlyvval__top__DOT__nonull__v76;
    }
    if (__Vdlyvset__top__DOT__nonull__v77) {
        vlSelf->top__DOT__nonull[0xbU] = __Vdlyvval__top__DOT__nonull__v77;
    }
    if (__Vdlyvset__top__DOT__nonull__v78) {
        vlSelf->top__DOT__nonull[0xcU] = __Vdlyvval__top__DOT__nonull__v78;
    }
    if (__Vdlyvset__top__DOT__nonull__v79) {
        vlSelf->top__DOT__nonull[0xdU] = __Vdlyvval__top__DOT__nonull__v79;
    }
    if (__Vdlyvset__top__DOT__nonull__v80) {
        vlSelf->top__DOT__nonull[0xeU] = __Vdlyvval__top__DOT__nonull__v80;
    }
    if (__Vdlyvset__top__DOT__nonull__v81) {
        vlSelf->top__DOT__nonull[0xfU] = __Vdlyvval__top__DOT__nonull__v81;
    }
    if (__Vdlyvset__top__DOT__nonull__v82) {
        vlSelf->top__DOT__nonull[0x10U] = __Vdlyvval__top__DOT__nonull__v82;
    }
    if (__Vdlyvset__top__DOT__nonull__v83) {
        vlSelf->top__DOT__nonull[0x11U] = __Vdlyvval__top__DOT__nonull__v83;
    }
    if (__Vdlyvset__top__DOT__nonull__v84) {
        vlSelf->top__DOT__nonull[0x12U] = __Vdlyvval__top__DOT__nonull__v84;
    }
    if (__Vdlyvset__top__DOT__nonull__v85) {
        vlSelf->top__DOT__nonull[0x13U] = __Vdlyvval__top__DOT__nonull__v85;
    }
    if (__Vdlyvset__top__DOT__nonull__v86) {
        vlSelf->top__DOT__nonull[0x14U] = __Vdlyvval__top__DOT__nonull__v86;
    }
    if (__Vdlyvset__top__DOT__nonull__v87) {
        vlSelf->top__DOT__nonull[0x15U] = __Vdlyvval__top__DOT__nonull__v87;
    }
    if (__Vdlyvset__top__DOT__nonull__v88) {
        vlSelf->top__DOT__nonull[0x16U] = __Vdlyvval__top__DOT__nonull__v88;
    }
    if (__Vdlyvset__top__DOT__nonull__v89) {
        vlSelf->top__DOT__nonull[0x17U] = __Vdlyvval__top__DOT__nonull__v89;
    }
    if (__Vdlyvset__top__DOT__nonull__v90) {
        vlSelf->top__DOT__nonull[0x18U] = __Vdlyvval__top__DOT__nonull__v90;
    }
    if (__Vdlyvset__top__DOT__nonull__v91) {
        vlSelf->top__DOT__nonull[0x19U] = __Vdlyvval__top__DOT__nonull__v91;
    }
    if (__Vdlyvset__top__DOT__nonull__v92) {
        vlSelf->top__DOT__nonull[0x1aU] = __Vdlyvval__top__DOT__nonull__v92;
    }
    if (__Vdlyvset__top__DOT__nonull__v93) {
        vlSelf->top__DOT__nonull[0x1bU] = __Vdlyvval__top__DOT__nonull__v93;
    }
    if (__Vdlyvset__top__DOT__nonull__v94) {
        vlSelf->top__DOT__nonull[0x1cU] = __Vdlyvval__top__DOT__nonull__v94;
    }
    if (__Vdlyvset__top__DOT__nonull__v95) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v95] 
            = __Vdlyvval__top__DOT__nonull__v95;
    }
    if (__Vdlyvset__top__DOT__nonull__v96) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v96] 
            = __Vdlyvval__top__DOT__nonull__v96;
    }
    if (__Vdlyvset__top__DOT__nonull__v97) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v97] 
            = __Vdlyvval__top__DOT__nonull__v97;
    }
    if (__Vdlyvset__top__DOT__nonull__v98) {
        vlSelf->top__DOT__nonull[__Vdlyvdim0__top__DOT__nonull__v98] 
            = __Vdlyvval__top__DOT__nonull__v98;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__8\n"); );
    // Variables
    CData/*7:0*/ __Vdlyvval__top__DOT__p0__DOT__buff__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__p0__DOT__buff__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__p0__DOT__buff__v6;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__p0__DOT__buff__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__p0__DOT__buff__v9;
    // Body
    if (vlSelf->clr) {
        vlSelf->__Vdly__top__DOT__p0__DOT__count = 0U;
        vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v0 = 1U;
        vlSelf->__Vdly__top__DOT__p0__DOT__aim = 0U;
        vlSelf->__Vdly__top__DOT__p0__DOT__outing = 0U;
        vlSelf->capital = 0U;
        vlSelf->top__DOT__backspace = 0U;
        vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v1 = 1U;
    } else if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__p0__DOT__ps2_clk_sync))))) {
        if (VL_UNLIKELY((0xaU == (IData)(vlSelf->top__DOT__p0__DOT__count)))) {
            VL_WRITEF("receive %x\n",8,(0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                 >> 1U)));
            if ((((~ (IData)(vlSelf->top__DOT__p0__DOT__buffer)) 
                  & (IData)(vlSelf->ps2_data)) & VL_REDXOR_32(
                                                              (0x1ffU 
                                                               & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                                  >> 1U))))) {
                if ((0xf0U == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                        >> 1U)))) {
                    vlSelf->__Vdly__top__DOT__p0__DOT__outing = 1U;
                } else if (vlSelf->top__DOT__p0__DOT__outing) {
                    if (((0x12U == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                             >> 1U))) 
                         | (0x14U == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                               >> 1U))))) {
                        vlSelf->capital = 0U;
                    } else if ((0x5aU == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                   >> 1U)))) {
                        vlSelf->top__DOT__enter = 0U;
                    } else if ((0x66U == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                   >> 1U)))) {
                        vlSelf->top__DOT__backspace = 0U;
                    } else if (((0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                          >> 1U)) == 
                                vlSelf->top__DOT__p0__DOT__buff
                                [0U])) {
                        vlSelf->__Vdly__top__DOT__p0__DOT__aim 
                            = (3U & ((IData)(vlSelf->top__DOT__p0__DOT__aim) 
                                     - (IData)(1U)));
                        __Vdlyvval__top__DOT__p0__DOT__buff__v3 
                            = vlSelf->top__DOT__p0__DOT__buff
                            [1U];
                        vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v3 = 1U;
                        __Vdlyvval__top__DOT__p0__DOT__buff__v4 
                            = vlSelf->top__DOT__p0__DOT__buff
                            [2U];
                    } else if (((0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                          >> 1U)) == 
                                vlSelf->top__DOT__p0__DOT__buff
                                [1U])) {
                        vlSelf->__Vdly__top__DOT__p0__DOT__aim 
                            = (3U & ((IData)(vlSelf->top__DOT__p0__DOT__aim) 
                                     - (IData)(1U)));
                        __Vdlyvval__top__DOT__p0__DOT__buff__v6 
                            = vlSelf->top__DOT__p0__DOT__buff
                            [2U];
                        vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v6 = 1U;
                    } else if (((0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                          >> 1U)) == 
                                vlSelf->top__DOT__p0__DOT__buff
                                [2U])) {
                        vlSelf->__Vdly__top__DOT__p0__DOT__aim 
                            = (3U & ((IData)(vlSelf->top__DOT__p0__DOT__aim) 
                                     - (IData)(1U)));
                        vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v8 = 1U;
                    }
                    vlSelf->__Vdly__top__DOT__p0__DOT__outing = 0U;
                } else if (((0x12U == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                >> 1U))) 
                            | (0x14U == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                  >> 1U))))) {
                    vlSelf->capital = 1U;
                } else if ((0x5aU == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                               >> 1U)))) {
                    vlSelf->top__DOT__enter = 1U;
                } else if ((0x66U == (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                               >> 1U)))) {
                    vlSelf->top__DOT__backspace = 1U;
                } else if (((((0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                        >> 1U)) != 
                              vlSelf->top__DOT__p0__DOT__buff
                              [0U]) & ((0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                 >> 1U)) 
                                       != vlSelf->top__DOT__p0__DOT__buff
                                       [1U])) & ((0xffU 
                                                  & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                                     >> 1U)) 
                                                 != 
                                                 vlSelf->top__DOT__p0__DOT__buff
                                                 [2U]))) {
                    vlSelf->__Vdly__top__DOT__p0__DOT__aim 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__p0__DOT__aim)));
                    vlSelf->top__DOT__p0__DOT____Vlvbound1 
                        = (0xffU & ((IData)(vlSelf->top__DOT__p0__DOT__buffer) 
                                    >> 1U));
                    if (VL_LIKELY((2U >= (IData)(vlSelf->top__DOT__p0__DOT__aim)))) {
                        __Vdlyvval__top__DOT__p0__DOT__buff__v9 
                            = vlSelf->top__DOT__p0__DOT____Vlvbound1;
                        vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v9 = 1U;
                        __Vdlyvdim0__top__DOT__p0__DOT__buff__v9 
                            = vlSelf->top__DOT__p0__DOT__aim;
                    }
                }
            }
            vlSelf->__Vdly__top__DOT__p0__DOT__count = 0U;
        } else {
            vlSelf->top__DOT__p0__DOT____Vlvbound2 
                = vlSelf->ps2_data;
            if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__p0__DOT__count)))) {
                vlSelf->top__DOT__p0__DOT__buffer = 
                    (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__p0__DOT__count))) 
                      & (IData)(vlSelf->top__DOT__p0__DOT__buffer)) 
                     | (0x3ffU & ((IData)(vlSelf->top__DOT__p0__DOT____Vlvbound2) 
                                  << (IData)(vlSelf->top__DOT__p0__DOT__count))));
            }
            vlSelf->__Vdly__top__DOT__p0__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__p0__DOT__count)));
        }
    }
    vlSelf->top__DOT__p0__DOT__count = vlSelf->__Vdly__top__DOT__p0__DOT__count;
    vlSelf->top__DOT__p0__DOT__outing = vlSelf->__Vdly__top__DOT__p0__DOT__outing;
    vlSelf->top__DOT__p0__DOT__ps2_clk_sync = vlSelf->__Vdly__top__DOT__p0__DOT__ps2_clk_sync;
    vlSelf->top__DOT__p0__DOT__aim = vlSelf->__Vdly__top__DOT__p0__DOT__aim;
    if (vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v0) {
        vlSelf->top__DOT__p0__DOT__buff[0U] = 0x80U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v1) {
        vlSelf->top__DOT__p0__DOT__buff[1U] = 0x80U;
        vlSelf->top__DOT__p0__DOT__buff[2U] = 0x80U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v3) {
        vlSelf->top__DOT__p0__DOT__buff[0U] = __Vdlyvval__top__DOT__p0__DOT__buff__v3;
        vlSelf->top__DOT__p0__DOT__buff[1U] = __Vdlyvval__top__DOT__p0__DOT__buff__v4;
        vlSelf->top__DOT__p0__DOT__buff[2U] = 0x80U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v6) {
        vlSelf->top__DOT__p0__DOT__buff[1U] = __Vdlyvval__top__DOT__p0__DOT__buff__v6;
        vlSelf->top__DOT__p0__DOT__buff[2U] = 0x80U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v8) {
        vlSelf->top__DOT__p0__DOT__buff[2U] = 0x80U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__p0__DOT__buff__v9) {
        vlSelf->top__DOT__p0__DOT__buff[__Vdlyvdim0__top__DOT__p0__DOT__buff__v9] 
            = __Vdlyvval__top__DOT__p0__DOT__buff__v9;
    }
    vlSelf->top__DOT__press = ((0U != (IData)(vlSelf->top__DOT__p0__DOT__aim))
                                ? 1U : 0U);
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__9\n"); );
    // Variables
    CData/*0:0*/ top__DOT__point;
    // Body
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

extern const VlUnpacked<CData/*7:0*/, 512> Vtop__ConstPool__TABLE_a0ebf2e4_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__10\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = ((((IData)(vlSelf->top__DOT__press)
                       ? ((2U >= (3U & ((IData)(vlSelf->top__DOT__p0__DOT__aim) 
                                        - (IData)(1U))))
                           ? (0xffU & vlSelf->top__DOT__p0__DOT__buff
                              [(3U & ((IData)(vlSelf->top__DOT__p0__DOT__aim) 
                                      - (IData)(1U)))])
                           : 0U) : 0U) << 1U) | (IData)(vlSelf->capital));
    vlSelf->top__DOT__dataascii = Vtop__ConstPool__TABLE_a0ebf2e4_0
        [__Vtableidx1];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->top__DOT__clk_1) & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clk_1))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__press)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__press)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->top__DOT__clk_1) & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__clk_1)))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__press)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__press)))) {
        Vtop___024root___multiclk__TOP__6(vlSelf);
    }
    if (((((((IData)(vlSelf->clr) & (~ (IData)(vlSelf->__Vclklast__TOP__clr))) 
            | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__backspace) 
               & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__backspace)))) 
           | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__enter) 
              & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__enter)))) 
          | ((IData)(vlSelf->top__DOT__kpring) & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__kpring)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__press) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__press))))) {
        Vtop___024root___sequent__TOP__7(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__8(vlSelf);
    }
    if ((((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
             | ((IData)(vlSelf->clr) & (~ (IData)(vlSelf->__Vclklast__TOP__clr)))) 
            | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__backspace) 
               & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__backspace)))) 
           | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__enter) 
              & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__enter)))) 
          | ((IData)(vlSelf->top__DOT__kpring) & (~ (IData)(vlSelf->__Vclklast__TOP__top__DOT__kpring)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__press) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__press))))) {
        Vtop___024root___multiclk__TOP__9(vlSelf);
    }
    Vtop___024root___combo__TOP__10(vlSelf);
    // Final
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
    vlSelf->__VinpClk__TOP__top__DOT__press = vlSelf->top__DOT__press;
    vlSelf->__VinpClk__TOP__top__DOT__backspace = vlSelf->top__DOT__backspace;
    vlSelf->__VinpClk__TOP__top__DOT__enter = vlSelf->top__DOT__enter;
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
    __req |= ((vlSelf->top__DOT__press ^ vlSelf->__Vchglast__TOP__top__DOT__press)
         | (vlSelf->top__DOT__enter ^ vlSelf->__Vchglast__TOP__top__DOT__enter)
         | (vlSelf->top__DOT__backspace ^ vlSelf->__Vchglast__TOP__top__DOT__backspace));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__press ^ vlSelf->__Vchglast__TOP__top__DOT__press))) VL_DBG_MSGF("        CHANGE: /home/zsl/ysyx-workbench/npc/vsrc/top.v:12: top.press\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__enter ^ vlSelf->__Vchglast__TOP__top__DOT__enter))) VL_DBG_MSGF("        CHANGE: /home/zsl/ysyx-workbench/npc/vsrc/top.v:12: top.enter\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__backspace ^ vlSelf->__Vchglast__TOP__top__DOT__backspace))) VL_DBG_MSGF("        CHANGE: /home/zsl/ysyx-workbench/npc/vsrc/top.v:12: top.backspace\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__press = vlSelf->top__DOT__press;
    vlSelf->__Vchglast__TOP__top__DOT__enter = vlSelf->top__DOT__enter;
    vlSelf->__Vchglast__TOP__top__DOT__backspace = vlSelf->top__DOT__backspace;
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
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
