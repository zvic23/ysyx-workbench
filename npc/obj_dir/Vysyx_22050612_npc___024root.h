// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050612_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_22050612_NPC___024ROOT_H_
#define VERILATED_VYSYX_22050612_NPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050612_npc__Syms;
class Vysyx_22050612_npc_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050612_npc___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22050612_npc__DOT__opcode;
    CData/*0:0*/ ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__snpc;
    VlUnpacked<CData/*7:0*/, 1> ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 1> ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 1> ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT__gpr;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050612_npc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050612_npc___024root);  ///< Copying not allowed
  public:
    Vysyx_22050612_npc___024root(const char* name);
    ~Vysyx_22050612_npc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050612_npc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
