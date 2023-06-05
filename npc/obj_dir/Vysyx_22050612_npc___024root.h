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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22050612_npc__DOT__pc_update;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu_block;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arvalid_pc;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arready_pc;
        CData/*0:0*/ ysyx_22050612_npc__DOT__rvalid_pc;
        CData/*0:0*/ ysyx_22050612_npc__DOT__awvalid_pc;
        CData/*0:0*/ ysyx_22050612_npc__DOT__wvalid_pc;
        CData/*7:0*/ ysyx_22050612_npc__DOT__wstrb_pc;
        CData/*0:0*/ ysyx_22050612_npc__DOT__bvalid_pc;
        CData/*0:0*/ ysyx_22050612_npc__DOT__bready_pc;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arvalid_lsu;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arready_lsu;
        CData/*0:0*/ ysyx_22050612_npc__DOT__rvalid_lsu;
        CData/*1:0*/ ysyx_22050612_npc__DOT__rresp_lsu;
        CData/*0:0*/ ysyx_22050612_npc__DOT__awvalid_lsu;
        CData/*0:0*/ ysyx_22050612_npc__DOT__awready_lsu;
        CData/*0:0*/ ysyx_22050612_npc__DOT__wvalid_lsu;
        CData/*7:0*/ ysyx_22050612_npc__DOT__wstrb_lsu;
        CData/*1:0*/ ysyx_22050612_npc__DOT__bresp_lsu;
        CData/*0:0*/ ysyx_22050612_npc__DOT__bvalid_lsu;
        CData/*0:0*/ ysyx_22050612_npc__DOT__rvalid;
        CData/*1:0*/ ysyx_22050612_npc__DOT__rresp;
        CData/*1:0*/ ysyx_22050612_npc__DOT__bresp;
        CData/*0:0*/ ysyx_22050612_npc__DOT__bvalid;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__wen;
        CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__exu_block_ls;
        CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask;
        CData/*1:0*/ ysyx_22050612_npc__DOT__sram__DOT__write_current_state;
        CData/*1:0*/ ysyx_22050612_npc__DOT__sram__DOT__write_next_state;
        CData/*1:0*/ ysyx_22050612_npc__DOT__sram__DOT__read_current_state;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arbiter__DOT__writing_1;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arbiter__DOT__writing_2;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arbiter__DOT__writing;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arbiter__DOT__reading_1;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arbiter__DOT__reading_2;
        CData/*0:0*/ ysyx_22050612_npc__DOT__arbiter__DOT__reading;
        IData/*31:0*/ ysyx_22050612_npc__DOT__inst;
        IData/*23:0*/ ysyx_22050612_npc__DOT__opcode;
        IData/*31:0*/ ysyx_22050612_npc__DOT__araddr_pc;
        IData/*31:0*/ ysyx_22050612_npc__DOT__awaddr_pc;
        IData/*31:0*/ ysyx_22050612_npc__DOT__araddr_lsu;
        IData/*31:0*/ ysyx_22050612_npc__DOT__awaddr_lsu;
        IData/*31:0*/ ysyx_22050612_npc__DOT__araddr;
        IData/*23:0*/ ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle;
        QData/*63:0*/ ysyx_22050612_npc__DOT__dnpc;
        QData/*63:0*/ ysyx_22050612_npc__DOT__imm_I;
        QData/*63:0*/ ysyx_22050612_npc__DOT__imm_B;
        QData/*63:0*/ ysyx_22050612_npc__DOT__imm_S;
        QData/*63:0*/ ysyx_22050612_npc__DOT__rdata_pc;
        QData/*63:0*/ ysyx_22050612_npc__DOT__wdata_pc;
        QData/*63:0*/ ysyx_22050612_npc__DOT__rdata_lsu;
        QData/*63:0*/ ysyx_22050612_npc__DOT__wdata_lsu;
        QData/*63:0*/ ysyx_22050612_npc__DOT__rdata;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__src1;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__src2;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_reg;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__mtvec;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__mepc;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__mcause;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__mstatus;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_alu0;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__raddr;
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__waddr;
    };
    struct {
        QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050612_npc__DOT__exu__DOT__gpr;
        VlUnpacked<VlWide<3>/*71:0*/, 10> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 10> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 10> ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_pmem_read__20__rdata;
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
