// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050612_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_22050612_NPC___024ROOT_H_
#define VERILATED_VYSYX_22050612_NPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050612_npc__Syms;
class Vysyx_22050612_npc_VerilatedVcd;
class Vysyx_22050612_npc___024unit;


//----------

VL_MODULE(Vysyx_22050612_npc___024root) {
  public:
    // CELLS
    Vysyx_22050612_npc___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__wen;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__hit;
    SData/*9:0*/ ysyx_22050612_npc__DOT__opcode;
    SData/*9:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out;
    SData/*9:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__dnpc;
    QData/*63:0*/ ysyx_22050612_npc__DOT__imm_U;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__addend_a;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__addend_b;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__sum_add0;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out;
    VlUnpacked<IData/*16:0*/, 4> ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 4> ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list;
    VlUnpacked<SData/*9:0*/, 4> ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*19:0*/, 1> ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list;
    VlUnpacked<SData/*9:0*/, 1> ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list;
    VlUnpacked<SData/*9:0*/, 1> ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT__gpr;
    VlUnpacked<SData/*10:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list;
    VlUnpacked<SData/*9:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*73:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list;
    VlUnpacked<SData/*9:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*73:0*/, 1> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list;
    VlUnpacked<SData/*9:0*/, 1> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 1> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*73:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list;
    VlUnpacked<SData/*9:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*73:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list;
    VlUnpacked<SData/*9:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*9:0*/ ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode1____pinNumber2;
    VlWide<10>/*295:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3;
    VlWide<7>/*221:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend0____pinNumber3;
    VlWide<7>/*221:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend1____pinNumber3;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
