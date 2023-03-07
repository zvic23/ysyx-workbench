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
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*6:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit;
        CData/*1:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit;
        CData/*7:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__wen;
        CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__mode;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit;
        CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit;
        IData/*31:0*/ ysyx_22050612_npc__DOT__inst;
        IData/*19:0*/ ysyx_22050612_npc__DOT__opcode;
        QData/*63:0*/ ysyx_22050612_npc__DOT__dnpc;
        QData/*63:0*/ ysyx_22050612_npc__DOT__imm_I;
        QData/*63:0*/ ysyx_22050612_npc__DOT__imm_U;
        QData/*63:0*/ ysyx_22050612_npc__DOT__ifu__DOT__inst_mix;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__src1;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__src2;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator_a;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator_b;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_alu0;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__raddr;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out;
        VlUnpacked<IData/*16:0*/, 7> ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 7> ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*6:0*/, 7> ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 3> ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 3> ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*24:0*/, 2> ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*16:0*/, 2> ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 2> ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT__gpr;
        VlUnpacked<IData/*20:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*19:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*83:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*19:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*83:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*19:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*83:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*19:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*83:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*19:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<IData/*27:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*19:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 11> ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*71:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*83:0*/, 2> ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*19:0*/, 2> ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*6:0*/ ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1;
    CData/*1:0*/ ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1;
    CData/*7:0*/ ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*9:0*/ ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2;
    IData/*16:0*/ ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2;
    VlWide<29>/*923:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3;
    VlWide<8>/*251:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4;
    VlWide<29>/*923:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3;
    VlWide<29>/*923:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3;
    VlWide<6>/*167:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3;
    VlWide<7>/*215:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__rdata;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5;
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
