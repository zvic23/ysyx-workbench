// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(clr,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(vga_clk,0,0);
    VL_OUT8(vga_blank,0,0);
    VL_OUT8(vga_r,7,0);
    VL_OUT8(vga_g,7,0);
    VL_OUT8(vga_b,7,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(capital,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__press;
    CData/*0:0*/ top__DOT__enter;
    CData/*0:0*/ top__DOT__backspace;
    CData/*0:0*/ top__DOT__clk_1;
    CData/*0:0*/ top__DOT__kpring;
    CData/*7:0*/ top__DOT__dataascii;
    CData/*0:0*/ top__DOT__clk_2;
    CData/*6:0*/ top__DOT__x;
    CData/*4:0*/ top__DOT__y;
    CData/*7:0*/ top__DOT__kpr;
    CData/*6:0*/ top__DOT__h_n;
    CData/*6:0*/ top__DOT__v_n;
    CData/*3:0*/ top__DOT__p0__DOT__count;
    CData/*2:0*/ top__DOT__p0__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__p0__DOT__outing;
    CData/*1:0*/ top__DOT__p0__DOT__aim;
    SData/*9:0*/ top__DOT__h_c;
    SData/*9:0*/ top__DOT__v_c;
    SData/*9:0*/ top__DOT__p0__DOT__buffer;
    SData/*9:0*/ top__DOT__v0__DOT__x_cnt;
    SData/*9:0*/ top__DOT__v0__DOT__y_cnt;
    IData/*29:0*/ top__DOT__commandline;
    IData/*31:0*/ top__DOT__j;
    IData/*31:0*/ top__DOT__c1__DOT__clkcount;
    IData/*31:0*/ top__DOT__c2__DOT__clkcount;
    VlUnpacked<CData/*6:0*/, 30> top__DOT__nonull;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 30>, 70> top__DOT__ascii_mem;
    VlUnpacked<SData/*11:0*/, 4096> top__DOT__point_mem;
    VlUnpacked<CData/*7:0*/, 3> top__DOT__p0__DOT__buff;

    // LOCAL VARIABLES
    CData/*7:0*/ top__DOT____Vlvbound2;
    CData/*6:0*/ top__DOT____Vlvbound3;
    CData/*0:0*/ top__DOT____Vlvbound4;
    CData/*7:0*/ top__DOT____Vlvbound5;
    CData/*7:0*/ top__DOT____Vlvbound6;
    CData/*6:0*/ top__DOT____Vlvbound7;
    CData/*7:0*/ top__DOT____Vlvbound8;
    CData/*7:0*/ top__DOT____Vlvbound9;
    CData/*7:0*/ top__DOT____Vlvbound10;
    CData/*7:0*/ top__DOT____Vlvbound11;
    CData/*0:0*/ top__DOT____Vlvbound12;
    CData/*7:0*/ top__DOT____Vlvbound13;
    CData/*6:0*/ top__DOT____Vlvbound14;
    CData/*7:0*/ top__DOT____Vlvbound15;
    CData/*6:0*/ top__DOT____Vlvbound16;
    CData/*7:0*/ top__DOT____Vlvbound17;
    CData/*6:0*/ top__DOT____Vlvbound18;
    CData/*6:0*/ top__DOT____Vlvbound19;
    CData/*7:0*/ top__DOT____Vlvbound20;
    CData/*7:0*/ top__DOT____Vlvbound21;
    CData/*7:0*/ top__DOT____Vlvbound22;
    CData/*7:0*/ top__DOT____Vlvbound23;
    CData/*0:0*/ top__DOT____Vlvbound24;
    CData/*6:0*/ top__DOT____Vlvbound25;
    CData/*0:0*/ top__DOT____Vlvbound26;
    CData/*7:0*/ top__DOT____Vlvbound27;
    CData/*7:0*/ top__DOT____Vlvbound28;
    CData/*7:0*/ top__DOT____Vlvbound29;
    CData/*6:0*/ top__DOT____Vlvbound30;
    CData/*6:0*/ top__DOT____Vlvbound31;
    CData/*0:0*/ top__DOT____Vlvbound32;
    CData/*7:0*/ top__DOT____Vlvbound33;
    CData/*6:0*/ top__DOT____Vlvbound34;
    CData/*7:0*/ top__DOT____Vlvbound35;
    CData/*6:0*/ top__DOT____Vlvbound36;
    CData/*7:0*/ top__DOT__p0__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__p0__DOT____Vlvbound2;
    CData/*2:0*/ __Vdly__top__DOT__p0__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__top__DOT__p0__DOT__count;
    CData/*0:0*/ __Vdlyvset__top__DOT__p0__DOT__buff__v0;
    CData/*1:0*/ __Vdly__top__DOT__p0__DOT__aim;
    CData/*0:0*/ __Vdly__top__DOT__p0__DOT__outing;
    CData/*0:0*/ __Vdlyvset__top__DOT__p0__DOT__buff__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__p0__DOT__buff__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__p0__DOT__buff__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__p0__DOT__buff__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__p0__DOT__buff__v9;
    CData/*0:0*/ __VinpClk__TOP__top__DOT__press;
    CData/*0:0*/ __VinpClk__TOP__top__DOT__backspace;
    CData/*0:0*/ __VinpClk__TOP__top__DOT__enter;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__clk_1;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__press;
    CData/*0:0*/ __Vclklast__TOP__clr;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__backspace;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__enter;
    CData/*0:0*/ __Vclklast__TOP__top__DOT__kpring;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__press;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__enter;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__backspace;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
