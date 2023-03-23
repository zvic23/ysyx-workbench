// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050612_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_22050612_NPC___024ROOT_H_
#define VERILATED_VYSYX_22050612_NPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050612_npc__Syms;
class Vysyx_22050612_npc___024unit;


//----------

VL_MODULE(Vysyx_22050612_npc___024root) {
  public:
    // CELLS
    Vysyx_22050612_npc___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__wen;
    IData/*31:0*/ ysyx_22050612_npc__DOT__inst;
    IData/*19:0*/ ysyx_22050612_npc__DOT__opcode;
    QData/*63:0*/ ysyx_22050612_npc__DOT__dnpc;
    QData/*63:0*/ ysyx_22050612_npc__DOT__imm_I;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_reg;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT__gpr;
    VlUnpacked<IData/*20:0*/, 45> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 45> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 45> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 45> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 45> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 45> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*27:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 46> ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*71:0*/, 10> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*7:0*/, 10> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 10> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list;
    VlUnpacked<SData/*10:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list;
    VlUnpacked<SData/*10:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*27:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 4> ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*83:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*19:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list;
    VlUnpacked<SData/*10:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 8> ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*18:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list;
    VlUnpacked<SData/*15:0*/, 7> ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_pmem_read_pc__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__rdata;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5;

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
