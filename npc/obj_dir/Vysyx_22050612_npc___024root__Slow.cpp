// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050612_npc___024root___ctor_var_reset(Vysyx_22050612_npc___024root* vlSelf);

Vysyx_22050612_npc___024root::Vysyx_22050612_npc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050612_npc___024root___ctor_var_reset(this);
}

void Vysyx_22050612_npc___024root::__Vconfigure(Vysyx_22050612_npc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050612_npc___024root::~Vysyx_22050612_npc___024root() {
}

void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_pc_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(IData/*31:0*/ npc_inst);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_22050612_npc___024root___settle__TOP__1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___settle__TOP__1\n"); );
    // Variables
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__mode;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte;
    CData/*0:0*/ ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out;
    SData/*15:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte;
    SData/*15:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out;
    VlWide<21>/*671:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_divw0;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_remw0;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_divuw0;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_remuw0;
    VlWide<17>/*535:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3;
    VlWide<15>/*468:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3;
    VlWide<19>/*587:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3;
    VlWide<11>/*335:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3;
    VlWide<11>/*335:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3;
    VlWide<4>/*111:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3;
    VlWide<19>/*587:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3;
    VlWide<3>/*87:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3;
    VlWide<5>/*132:0*/ ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3;
    VlWide<23>/*719:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<9>/*287:0*/ __Vtemp8;
    VlWide<11>/*351:0*/ __Vtemp10;
    VlWide<13>/*415:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<9>/*287:0*/ __Vtemp21;
    VlWide<11>/*351:0*/ __Vtemp23;
    VlWide<13>/*415:0*/ __Vtemp25;
    VlWide<15>/*479:0*/ __Vtemp27;
    VlWide<17>/*543:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp104;
    VlWide<3>/*95:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp403;
    VlWide<13>/*415:0*/ __Vtemp427;
    QData/*63:0*/ ysyx_22050612_npc__DOT__imm_U;
    QData/*63:0*/ ysyx_22050612_npc__DOT__imm_B;
    QData/*63:0*/ ysyx_22050612_npc__DOT__imm_S;
    QData/*63:0*/ ysyx_22050612_npc__DOT__ifu__DOT__inst_mix;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__src1;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__src2;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator_a;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator_b;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_alu0;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_mulw0;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__raddr;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__waddr;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_fix;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out;
    // Body
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[0U] = 0x6c0U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[1U] = 0x560U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[2U] = 0x430U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[3U] = 0x318U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[4U] = 0x20cU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[5U] = 0x106U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[6U] = 3U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[0U] = 0x780U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[1U] = 0x640U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[2U] = 0x520U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[3U] = 0x410U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[4U] = 0x308U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[5U] = 0x204U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[6U] = 0x102U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[7U] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1fU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x1fU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1eU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x1eU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1dU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x1dU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1cU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x1cU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1bU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x1bU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x1aU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x1aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x19U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x19U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x18U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x18U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x17U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x17U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x16U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x16U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x15U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x15U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x14U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x14U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x13U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x13U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x12U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x12U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x11U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x11U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0x10U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0x10U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xfU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0xfU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xeU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0xeU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xdU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0xdU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xcU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0xcU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xbU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0xbU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0xaU] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [8U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [7U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [6U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [5U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [4U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [3U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [2U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5
        [0U];
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_pc_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read_pc__0__rdata);
    ysyx_22050612_npc__DOT__ifu__DOT__inst_mix = vlSelf->__Vtask_pmem_read_pc__0__rdata;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__inst = ((1U & (IData)(
                                                          (vlSelf->pc 
                                                           >> 2U)))
                                             ? (IData)(
                                                       (ysyx_22050612_npc__DOT__ifu__DOT__inst_mix 
                                                        >> 0x20U))
                                             : (IData)(ysyx_22050612_npc__DOT__ifu__DOT__inst_mix));
    Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__inst);
    if ((vlSelf->ysyx_22050612_npc__DOT__inst >> 0x1fU)) {
        ysyx_22050612_npc__DOT__imm_B = (0xffffffffffffe000ULL 
                                         | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                        >> 7U))))))));
        vlSelf->ysyx_22050612_npc__DOT__imm_I = (0xfffffffffffff000ULL 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U))));
        ysyx_22050612_npc__DOT__imm_U = (0xffffffff00000000ULL 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->ysyx_22050612_npc__DOT__inst))));
        ysyx_22050612_npc__DOT__imm_S = (0xfffffffffffff000ULL 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 7U))))));
    } else {
        ysyx_22050612_npc__DOT__imm_B = (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x1fU))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0x800U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 7U)))))));
        vlSelf->ysyx_22050612_npc__DOT__imm_I = (QData)((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0x14U)));
        ysyx_22050612_npc__DOT__imm_U = ((QData)((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                          >> 0xcU))) 
                                         << 0xcU);
        ysyx_22050612_npc__DOT__imm_S = (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x19U))) 
                                          << 5U) | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                       >> 7U)))));
    }
    ysyx_22050612_npc__DOT__exu__DOT__src1 = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
        [(0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                   >> 0xfU))];
    ysyx_22050612_npc__DOT__exu__DOT__src2 = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
        [(0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                   >> 0x14U))];
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfff80U 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | ((0x4000U 
                                                  & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0xaU
                                                           : 0U)
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x18U
                                                           : 0U)
                                                          : 0U)))
                                                       : 0U)))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 9U
                                                           : 0U)
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x17U
                                                           : 0U)
                                                          : 0U)))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x29U
                                                           : 0U)
                                                          : 0U)))))))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 8U
                                                           : 0U)
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0xfU
                                                           : 0U)
                                                          : 0U))))))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 7U
                                                           : 0U)
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x16U
                                                           : 0U)
                                                          : 0U)))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0xeU
                                                           : 0U)
                                                          : 0U))))))))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x2bU
                                                           : 0U)
                                                          : 0U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x15U
                                                           : 0U)
                                                          : 0U)))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x2aU
                                                           : 0U)
                                                          : 0U))))))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x12U
                                                           : 0U)
                                                          : 0U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x14U
                                                           : 0U)
                                                          : 0U)))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0xdU
                                                           : 0U)
                                                          : 0U)))))))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 6U
                                                           : 0U)
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x11U
                                                           : 0U)
                                                          : 0U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0xcU
                                                           : 0U)
                                                          : 0U))))))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 4U
                                                           : 0U)
                                                          : 0U)
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 5U
                                                           : 0U)
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x10U
                                                           : 0U)
                                                          : 0U))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x2fU
                                                           : 0U)
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0x13U
                                                           : 0U)
                                                          : 0U)))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                           ? 0xbU
                                                           : 0U)
                                                          : 0U))))))))));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xffcffU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | (((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22050612_npc__DOT__inst))
                                                   ? 1U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22050612_npc__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst))
                                                     ? 3U
                                                     : 0U))) 
                                                 << 8U));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfffU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | ((((((((((0x33U 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst)))) 
                                                         | (0x8033U 
                                                            == 
                                                            ((0x1fc00U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0xfU)) 
                                                             | ((0x380U 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 5U)) 
                                                                | (0x7fU 
                                                                   & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                        | (0xb3U 
                                                           == 
                                                           ((0x1fc00U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0xfU)) 
                                                            | ((0x380U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 5U)) 
                                                               | (0x7fU 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                       | (0x133U 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                      | (0x1b3U 
                                                         == 
                                                         ((0x1fc00U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0xfU)) 
                                                          | ((0x380U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 5U)) 
                                                             | (0x7fU 
                                                                & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                     | (0x233U 
                                                        == 
                                                        ((0x1fc00U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                    | (0x333U 
                                                       == 
                                                       ((0x1fc00U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 0xfU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                   | (0x3b3U 
                                                      == 
                                                      ((0x1fc00U 
                                                        & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->ysyx_22050612_npc__DOT__inst)))))
                                                   ? 
                                                  ((0x33U 
                                                    == 
                                                    ((0x1fc00U 
                                                      & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                         >> 0xfU)) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 5U)) 
                                                        | (0x7fU 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                    ? 4U
                                                    : 
                                                   ((0x8033U 
                                                     == 
                                                     ((0x1fc00U 
                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                          >> 0xfU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                     ? 5U
                                                     : 
                                                    ((0xb3U 
                                                      == 
                                                      ((0x1fc00U 
                                                        & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                      ? 6U
                                                      : 
                                                     ((0x133U 
                                                       == 
                                                       ((0x1fc00U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 0xfU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                       ? 7U
                                                       : 
                                                      ((0x1b3U 
                                                        == 
                                                        ((0x1fc00U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                        ? 8U
                                                        : 
                                                       ((0x233U 
                                                         == 
                                                         ((0x1fc00U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0xfU)) 
                                                          | ((0x380U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 5U)) 
                                                             | (0x7fU 
                                                                & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                         ? 9U
                                                         : 
                                                        ((0x333U 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                          ? 0x12U
                                                          : 0x13U)))))))
                                                   : 
                                                  (((((((((0x9bU 
                                                           == 
                                                           ((0x1fc00U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0xfU)) 
                                                            | ((0x380U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 5U)) 
                                                               | (0x7fU 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst)))) 
                                                          | (0x29bU 
                                                             == 
                                                             ((0x1fc00U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 0xfU)) 
                                                              | ((0x380U 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 5U)) 
                                                                 | (0x7fU 
                                                                    & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                         | (0x829bU 
                                                            == 
                                                            ((0x1fc00U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0xfU)) 
                                                             | ((0x380U 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 5U)) 
                                                                | (0x7fU 
                                                                   & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                        | (0x3bU 
                                                           == 
                                                           ((0x1fc00U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0xfU)) 
                                                            | ((0x380U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 5U)) 
                                                               | (0x7fU 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                       | (0x803bU 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                      | (0xbbU 
                                                         == 
                                                         ((0x1fc00U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0xfU)) 
                                                          | ((0x380U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 5U)) 
                                                             | (0x7fU 
                                                                & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                     | (0x2bbU 
                                                        == 
                                                        ((0x1fc00U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                    | (0x82bbU 
                                                       == 
                                                       ((0x1fc00U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 0xfU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & vlSelf->ysyx_22050612_npc__DOT__inst)))))
                                                    ? 
                                                   ((0x9bU 
                                                     == 
                                                     ((0x1fc00U 
                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                          >> 0xfU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                     ? 0x14U
                                                     : 
                                                    ((0x29bU 
                                                      == 
                                                      ((0x1fc00U 
                                                        & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                      ? 0x15U
                                                      : 
                                                     ((0x829bU 
                                                       == 
                                                       ((0x1fc00U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 0xfU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                       ? 0x16U
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        ((0x1fc00U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                        ? 0x17U
                                                        : 
                                                       ((0x803bU 
                                                         == 
                                                         ((0x1fc00U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0xfU)) 
                                                          | ((0x380U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 5U)) 
                                                             | (0x7fU 
                                                                & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                         ? 0x18U
                                                         : 
                                                        ((0xbbU 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                          ? 0x19U
                                                          : 
                                                         ((0x2bbU 
                                                           == 
                                                           ((0x1fc00U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0xfU)) 
                                                            | ((0x380U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 5U)) 
                                                               | (0x7fU 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                           ? 0x1aU
                                                           : 0x1bU)))))))
                                                    : 
                                                   (((((((((0x433U 
                                                            == 
                                                            ((0x1fc00U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0xfU)) 
                                                             | ((0x380U 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 5U)) 
                                                                | (0x7fU 
                                                                   & vlSelf->ysyx_22050612_npc__DOT__inst)))) 
                                                           | (0x6b3U 
                                                              == 
                                                              ((0x1fc00U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0xfU)) 
                                                               | ((0x380U 
                                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                      >> 5U)) 
                                                                  | (0x7fU 
                                                                     & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                          | (0x7b3U 
                                                             == 
                                                             ((0x1fc00U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 0xfU)) 
                                                              | ((0x380U 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 5U)) 
                                                                 | (0x7fU 
                                                                    & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                         | (0x43bU 
                                                            == 
                                                            ((0x1fc00U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0xfU)) 
                                                             | ((0x380U 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 5U)) 
                                                                | (0x7fU 
                                                                   & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                        | (0x63bU 
                                                           == 
                                                           ((0x1fc00U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0xfU)) 
                                                            | ((0x380U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 5U)) 
                                                               | (0x7fU 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                       | (0x6bbU 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                      | (0x73bU 
                                                         == 
                                                         ((0x1fc00U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0xfU)) 
                                                          | ((0x380U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 5U)) 
                                                             | (0x7fU 
                                                                & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                     | (0x7bbU 
                                                        == 
                                                        ((0x1fc00U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->ysyx_22050612_npc__DOT__inst)))))
                                                     ? 
                                                    ((0x433U 
                                                      == 
                                                      ((0x1fc00U 
                                                        & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                      ? 0x1dU
                                                      : 
                                                     ((0x6b3U 
                                                       == 
                                                       ((0x1fc00U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 0xfU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                       ? 0x22U
                                                       : 
                                                      ((0x7b3U 
                                                        == 
                                                        ((0x1fc00U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                        ? 0x24U
                                                        : 
                                                       ((0x43bU 
                                                         == 
                                                         ((0x1fc00U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0xfU)) 
                                                          | ((0x380U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 5U)) 
                                                             | (0x7fU 
                                                                & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                         ? 0x25U
                                                         : 
                                                        ((0x63bU 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                          ? 0x26U
                                                          : 
                                                         ((0x6bbU 
                                                           == 
                                                           ((0x1fc00U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0xfU)) 
                                                            | ((0x380U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 5U)) 
                                                               | (0x7fU 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                           ? 0x27U
                                                           : 
                                                          ((0x73bU 
                                                            == 
                                                            ((0x1fc00U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0xfU)) 
                                                             | ((0x380U 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 5U)) 
                                                                | (0x7fU 
                                                                   & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                            ? 0x28U
                                                            : 0x29U)))))))
                                                     : 0U))) 
                                                 << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xff3ffU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | (((0x93U 
                                                   == 
                                                   ((0xfc00U 
                                                     & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                        >> 0x10U)) 
                                                    | ((0x380U 
                                                        & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 5U)) 
                                                       | (0x7fU 
                                                          & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                   ? 1U
                                                   : 
                                                  ((0x293U 
                                                    == 
                                                    ((0xfc00U 
                                                      & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                         >> 0x10U)) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 5U)) 
                                                        | (0x7fU 
                                                           & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                    ? 2U
                                                    : 
                                                   ((0x4293U 
                                                     == 
                                                     ((0xfc00U 
                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                          >> 0x10U)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                     ? 3U
                                                     : 0U))) 
                                                 << 0xaU));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfff7fU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | ((0x100073U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                 << 7U));
    ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
        = ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src1)) 
           * (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)));
    ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
        = VL_DIVS_III(32, (IData)(ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2));
    ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
        = VL_MODDIVS_III(32, (IData)(ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2));
    ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
        = VL_DIV_III(32, (IData)(ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2));
    ysyx_22050612_npc__DOT__exu__DOT__result_remuw0 
        = VL_MODDIV_III(32, (IData)(ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2));
    VL_EXTEND_WI(67,16, __Vtemp1, (0xffffU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)));
    __Vtemp8[4U] = (0x80U | ((7U & ((IData)((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x10U) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (((IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 8U)) 
                                                   << 9U) 
                                                  | (0x38U 
                                                     & ((IData)(
                                                                (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                  << 0x10U) 
                                                                 >> 0x20U)) 
                                                        >> 0x1aU)))));
    __Vtemp8[5U] = ((7U & ((IData)(((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                    << 8U)) >> 0x17U)) 
                    | ((0x38U & ((IData)(((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 8U)) >> 0x17U)) 
                       | ((0x1c0U & ((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 8U)) 
                                     >> 0x17U)) | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 8U) 
                                                            >> 0x20U)) 
                                                   << 9U))));
    __Vtemp8[6U] = (0x200U | ((7U & ((IData)((((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                               << 8U) 
                                              >> 0x20U)) 
                                     >> 0x17U)) | (
                                                   (0x38U 
                                                    & ((IData)(
                                                               (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                 << 8U) 
                                                                >> 0x20U)) 
                                                       >> 0x17U)) 
                                                   | ((__Vtemp1[0U] 
                                                       << 0xcU) 
                                                      | (0x1c0U 
                                                         & ((IData)(
                                                                    (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                      << 8U) 
                                                                     >> 0x20U)) 
                                                            >> 0x17U))))));
    __Vtemp8[7U] = ((7U & (__Vtemp1[0U] >> 0x14U)) 
                    | ((0x38U & (__Vtemp1[0U] >> 0x14U)) 
                       | ((0x1c0U & (__Vtemp1[0U] >> 0x14U)) 
                          | ((0xe00U & (__Vtemp1[0U] 
                                        >> 0x14U)) 
                             | (__Vtemp1[1U] << 0xcU)))));
    __Vtemp8[8U] = ((7U & (__Vtemp1[1U] >> 0x14U)) 
                    | ((0x38U & (__Vtemp1[1U] >> 0x14U)) 
                       | ((0x1c0U & (__Vtemp1[1U] >> 0x14U)) 
                          | ((0xe00U & (__Vtemp1[1U] 
                                        >> 0x14U)) 
                             | (__Vtemp1[2U] << 0xcU)))));
    __Vtemp10[4U] = (0xc0U | ((7U & ((IData)((((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                               << 0x18U) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (
                                                   ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x10U)) 
                                                    << 9U) 
                                                   | (0x38U 
                                                      & ((IData)(
                                                                 (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                   << 0x18U) 
                                                                  >> 0x20U)) 
                                                         >> 0x1aU)))));
    __Vtemp10[5U] = ((7U & ((IData)(((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                     << 0x10U)) >> 0x17U)) 
                     | ((0x38U & ((IData)(((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 0x10U)) 
                                  >> 0x17U)) | ((0x1c0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x10U)) 
                                                    >> 0x17U)) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x10U) 
                                                            >> 0x20U)) 
                                                   << 9U))));
    __Vtemp12[4U] = (0x100U | ((7U & ((IData)((((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x20U) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)(((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 0x18U)) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x20U) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp12[5U] = ((7U & ((IData)(((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                     << 0x18U)) >> 0x17U)) 
                     | ((0x38U & ((IData)(((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 0x18U)) 
                                  >> 0x17U)) | ((0x1c0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x18U)) 
                                                    >> 0x17U)) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x18U) 
                                                            >> 0x20U)) 
                                                   << 9U))));
    __Vtemp12[9U] = ((7U & (__Vtemp8[4U] >> 0x1aU)) 
                     | ((0x38U & (__Vtemp8[4U] >> 0x1aU)) 
                        | (__Vtemp8[5U] << 6U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0U] 
        = (IData)(((QData)((IData)((0xffffU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                   << 0x30U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[1U] 
        = (IData)((((QData)((IData)((0xffffU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                    << 0x30U) >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[2U] 
        = (6U | ((IData)(((QData)((IData)((0xffffU 
                                           & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                          << 0x28U)) << 3U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[3U] 
        = (((IData)(((QData)((IData)((0xffffU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                     << 0x28U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x28U) 
                                                      >> 0x20U)) 
                                             << 3U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
        = (0x28U | (((IData)(((QData)((IData)((0xffffU 
                                               & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                              << 0x20U)) << 6U) | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x28U) 
                                                            >> 0x20U)) 
                                                   >> 0x1dU)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[5U] 
        = ((7U & ((IData)(((QData)((IData)((0xffffU 
                                            & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                           << 0x20U)) >> 0x1aU)) | 
           ((0x38U & ((IData)(((QData)((IData)((0xffffU 
                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                               << 0x20U)) >> 0x1aU)) 
            | ((IData)((((QData)((IData)((0xffffU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                         << 0x20U) >> 0x20U)) << 6U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
        = __Vtemp12[4U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[7U] 
        = __Vtemp12[5U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
        = ((7U & ((IData)((((QData)((IData)((0xffffU 
                                             & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                            << 0x18U) >> 0x20U)) >> 0x17U)) 
           | (__Vtemp10[4U] << 3U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[9U] 
        = ((__Vtemp10[4U] >> 0x1dU) | (__Vtemp10[5U] 
                                       << 3U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
        = ((__Vtemp10[5U] >> 0x1dU) | ((0x38U & ((IData)(
                                                         (((QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                           << 0x10U) 
                                                          >> 0x20U)) 
                                                 >> 0x14U)) 
                                       | (__Vtemp8[4U] 
                                          << 6U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xbU] 
        = __Vtemp12[9U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
        = ((7U & (__Vtemp8[5U] >> 0x1aU)) | ((0x38U 
                                              & (__Vtemp8[5U] 
                                                 >> 0x1aU)) 
                                             | (__Vtemp8[6U] 
                                                << 6U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xdU] 
        = ((7U & (__Vtemp8[6U] >> 0x1aU)) | ((0x38U 
                                              & (__Vtemp8[6U] 
                                                 >> 0x1aU)) 
                                             | (__Vtemp8[7U] 
                                                << 6U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xeU] 
        = ((7U & (__Vtemp8[7U] >> 0x1aU)) | ((0x38U 
                                              & (__Vtemp8[7U] 
                                                 >> 0x1aU)) 
                                             | (__Vtemp8[8U] 
                                                << 6U)));
    VL_EXTEND_WI(67,8, __Vtemp14, (0xffU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)));
    __Vtemp21[4U] = (0x80U | ((7U & ((IData)((((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                               << 0x10U) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (
                                                   ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 8U)) 
                                                    << 9U) 
                                                   | (0x38U 
                                                      & ((IData)(
                                                                 (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                   << 0x10U) 
                                                                  >> 0x20U)) 
                                                         >> 0x1aU)))));
    __Vtemp21[5U] = ((7U & ((IData)(((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                     << 8U)) >> 0x17U)) 
                     | ((0x38U & ((IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 8U)) 
                                  >> 0x17U)) | ((0x1c0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 8U)) 
                                                    >> 0x17U)) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 8U) 
                                                            >> 0x20U)) 
                                                   << 9U))));
    __Vtemp21[6U] = (0x200U | ((7U & ((IData)((((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 8U) 
                                               >> 0x20U)) 
                                      >> 0x17U)) | 
                               ((0x38U & ((IData)((
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                    << 8U) 
                                                   >> 0x20U)) 
                                          >> 0x17U)) 
                                | ((__Vtemp14[0U] << 0xcU) 
                                   | (0x1c0U & ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                          << 8U) 
                                                         >> 0x20U)) 
                                                >> 0x17U))))));
    __Vtemp21[7U] = ((7U & (__Vtemp14[0U] >> 0x14U)) 
                     | ((0x38U & (__Vtemp14[0U] >> 0x14U)) 
                        | ((0x1c0U & (__Vtemp14[0U] 
                                      >> 0x14U)) | 
                           ((0xe00U & (__Vtemp14[0U] 
                                       >> 0x14U)) | 
                            (__Vtemp14[1U] << 0xcU)))));
    __Vtemp21[8U] = ((7U & (__Vtemp14[1U] >> 0x14U)) 
                     | ((0x38U & (__Vtemp14[1U] >> 0x14U)) 
                        | ((0x1c0U & (__Vtemp14[1U] 
                                      >> 0x14U)) | 
                           ((0xe00U & (__Vtemp14[1U] 
                                       >> 0x14U)) | 
                            (__Vtemp14[2U] << 0xcU)))));
    __Vtemp23[4U] = (0xc0U | ((7U & ((IData)((((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                               << 0x18U) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (
                                                   ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x10U)) 
                                                    << 9U) 
                                                   | (0x38U 
                                                      & ((IData)(
                                                                 (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                   << 0x18U) 
                                                                  >> 0x20U)) 
                                                         >> 0x1aU)))));
    __Vtemp23[5U] = ((7U & ((IData)(((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                     << 0x10U)) >> 0x17U)) 
                     | ((0x38U & ((IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 0x10U)) 
                                  >> 0x17U)) | ((0x1c0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x10U)) 
                                                    >> 0x17U)) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x10U) 
                                                            >> 0x20U)) 
                                                   << 9U))));
    __Vtemp25[4U] = (0x100U | ((7U & ((IData)((((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x20U) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)(((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 0x18U)) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x20U) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp25[5U] = ((7U & ((IData)(((QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                     << 0x18U)) >> 0x17U)) 
                     | ((0x38U & ((IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 0x18U)) 
                                  >> 0x17U)) | ((0x1c0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x18U)) 
                                                    >> 0x17U)) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x18U) 
                                                            >> 0x20U)) 
                                                   << 9U))));
    __Vtemp25[9U] = ((7U & (__Vtemp21[4U] >> 0x1aU)) 
                     | ((0x38U & (__Vtemp21[4U] >> 0x1aU)) 
                        | (__Vtemp21[5U] << 6U)));
    __Vtemp27[4U] = (0x14000U | ((0x7ffU & ((IData)(
                                                    (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x28U) 
                                                     >> 0x20U)) 
                                            >> 0x12U)) 
                                 | (((IData)(((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x20U)) 
                                     << 0x11U) | (0x3800U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                               << 0x28U) 
                                                              >> 0x20U)) 
                                                     >> 0x12U)))));
    __Vtemp27[5U] = ((0x7ffU & ((IData)(((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                         << 0x20U)) 
                                >> 0xfU)) | ((0x3800U 
                                              & ((IData)(
                                                         ((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                          << 0x20U)) 
                                                 >> 0xfU)) 
                                             | ((0x1c000U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x20U)) 
                                                    >> 0xfU)) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x20U) 
                                                            >> 0x20U)) 
                                                   << 0x11U))));
    __Vtemp27[9U] = ((0x7ffU & (__Vtemp23[4U] >> 0x12U)) 
                     | ((0x3800U & (__Vtemp23[4U] >> 0x12U)) 
                        | (__Vtemp23[5U] << 0xeU)));
    __Vtemp27[0xaU] = ((0x7ffU & (__Vtemp23[5U] >> 0x12U)) 
                       | ((0x3800U & (__Vtemp23[5U] 
                                      >> 0x12U)) | 
                          ((0x1c000U & ((IData)((((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                  << 0x10U) 
                                                 >> 0x20U)) 
                                        >> 9U)) | (
                                                   __Vtemp21[4U] 
                                                   << 0x11U))));
    __Vtemp27[0xbU] = ((0x7ffU & (__Vtemp21[4U] >> 0xfU)) 
                       | (__Vtemp25[9U] << 0xbU));
    __Vtemp28[3U] = ((((IData)(((QData)((IData)((0xffU 
                                                 & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                << 0x30U)) >> 0x1dU) 
                      | (0xfffff8U & ((IData)((((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x30U) 
                                               >> 0x20U)) 
                                      << 3U))) | (0xff000000U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                               << 0x30U) 
                                                              >> 0x20U)) 
                                                     << 3U)));
    __Vtemp28[4U] = (0x30U | (((0xffffc0U & ((IData)(
                                                     ((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x28U)) 
                                             << 6U)) 
                               | ((IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                            << 0x30U) 
                                           >> 0x20U)) 
                                  >> 0x1dU)) | (0xff000000U 
                                                & ((IData)(
                                                           ((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 0x28U)) 
                                                   << 6U))));
    __Vtemp28[8U] = (((7U & ((IData)((((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                       << 0x20U) >> 0x20U)) 
                             >> 0x17U)) | (0xfffff8U 
                                           & (__Vtemp25[4U] 
                                              << 3U))) 
                     | (0xff000000U & (__Vtemp25[4U] 
                                       << 3U)));
    __Vtemp28[9U] = (((__Vtemp25[4U] >> 0x1dU) | (0xfffff8U 
                                                  & (__Vtemp25[5U] 
                                                     << 3U))) 
                     | (0xff000000U & (__Vtemp25[5U] 
                                       << 3U)));
    __Vtemp28[0xaU] = (((__Vtemp25[5U] >> 0x1dU) | 
                        ((0x38U & ((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                             << 0x18U) 
                                            >> 0x20U)) 
                                   >> 0x14U)) | (0xffffc0U 
                                                 & (__Vtemp23[4U] 
                                                    << 6U)))) 
                       | (__Vtemp27[9U] << 0x18U));
    __Vtemp28[0xeU] = (((__Vtemp25[9U] >> 0x1dU) | 
                        ((0x38U & (__Vtemp21[5U] >> 0x17U)) 
                         | ((0x1c0U & (__Vtemp21[5U] 
                                       >> 0x17U)) | 
                            (0xfffe00U & (__Vtemp21[6U] 
                                          << 9U))))) 
                       | (0xff000000U & (__Vtemp21[6U] 
                                         << 9U)));
    __Vtemp28[0xfU] = (((7U & (__Vtemp21[6U] >> 0x17U)) 
                        | ((0x38U & (__Vtemp21[6U] 
                                     >> 0x17U)) | (
                                                   (0x1c0U 
                                                    & (__Vtemp21[6U] 
                                                       >> 0x17U)) 
                                                   | (0xfffe00U 
                                                      & (__Vtemp21[7U] 
                                                         << 9U))))) 
                       | (0xff000000U & (__Vtemp21[7U] 
                                         << 9U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0U] = 0U;
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[1U] 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2) 
           << 0x18U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[2U] 
        = (7U | ((0xfffff8U & ((IData)(((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                        << 0x30U)) 
                               << 3U)) | (0xff000000U 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x30U)) 
                                             << 3U))));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[3U] 
        = __Vtemp28[3U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
        = __Vtemp28[4U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[5U] 
        = (((7U & ((IData)(((QData)((IData)((0xffU 
                                             & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                            << 0x28U)) >> 0x1aU)) | 
            ((0x38U & ((IData)(((QData)((IData)((0xffU 
                                                 & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                << 0x28U)) >> 0x1aU)) 
             | (0xffffc0U & ((IData)((((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                       << 0x28U) >> 0x20U)) 
                             << 6U)))) | (__Vtemp27[4U] 
                                          << 0x18U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
        = ((__Vtemp27[4U] >> 8U) | (__Vtemp27[5U] << 0x18U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
        = ((__Vtemp27[5U] >> 8U) | (0xff000000U & ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x20U) 
                                                            >> 0x20U)) 
                                                   << 9U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
        = __Vtemp28[8U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
        = __Vtemp28[9U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
        = __Vtemp28[0xaU];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
        = ((__Vtemp27[9U] >> 8U) | (__Vtemp27[0xaU] 
                                    << 0x18U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
        = ((__Vtemp27[0xaU] >> 8U) | (__Vtemp27[0xbU] 
                                      << 0x18U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
        = ((__Vtemp27[0xbU] >> 8U) | (0xff000000U & 
                                      (__Vtemp25[9U] 
                                       << 3U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
        = __Vtemp28[0xeU];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
        = __Vtemp28[0xfU];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
        = ((7U & (__Vtemp21[7U] >> 0x17U)) | ((0x38U 
                                               & (__Vtemp21[7U] 
                                                  >> 0x17U)) 
                                              | ((0x1c0U 
                                                  & (__Vtemp21[7U] 
                                                     >> 0x17U)) 
                                                 | (0xfffe00U 
                                                    & (__Vtemp21[8U] 
                                                       << 9U)))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = 
        (((((((((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                | (0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
           | (0x12000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
          | (0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
         | (((((((((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                   | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (((((((((0x1d000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                      | (0x22000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x24000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x25000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x26000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x27000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x28000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x29000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (((((((((0x100U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                         | (0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (4U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (((((((((0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                            | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | ((0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                        | ((0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                           | ((0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                              | ((0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                 | (0x2fU == vlSelf->ysyx_22050612_npc__DOT__opcode))))))))));
    if (((((((((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
               | (0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
           | (0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
          | (0x12000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
         | (0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode))) {
        ysyx_22050612_npc__DOT__exu__DOT__mode = ((0x4000U 
                                                   == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                   ? 0U
                                                   : 
                                                  ((0x5000U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? 1U
                                                    : 
                                                   ((0x6000U 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                     ? 8U
                                                     : 
                                                    ((0x7000U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 2U
                                                      : 
                                                     ((0x8000U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 3U
                                                       : 
                                                      ((0x9000U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? 7U
                                                        : 
                                                       ((0x12000U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 6U
                                                         : 4U)))))));
        ysyx_22050612_npc__DOT__exu__DOT__operator_a 
            = ysyx_22050612_npc__DOT__exu__DOT__src1;
        ysyx_22050612_npc__DOT__exu__DOT__operator_b 
            = ((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? ysyx_22050612_npc__DOT__exu__DOT__src2
                : ((0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? ysyx_22050612_npc__DOT__exu__DOT__src2
                    : ((0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? (QData)((IData)((0x3fU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2))))
                        : ysyx_22050612_npc__DOT__exu__DOT__src2)));
    } else {
        ysyx_22050612_npc__DOT__exu__DOT__mode = ((
                                                   (((((((0x14000U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                         | (0x15000U 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                        | (0x16000U 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                       | (0x17000U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                      | (0x18000U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                     | (0x19000U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                    | (0x1a000U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                   | (0x1b000U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                                   ? 
                                                  ((0x14000U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? 8U
                                                    : 
                                                   ((0x15000U 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                     ? 9U
                                                     : 
                                                    ((0x16000U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 0xaU
                                                      : 
                                                     ((0x17000U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 0U
                                                       : 
                                                      ((0x18000U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? 1U
                                                        : 
                                                       ((0x19000U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 8U
                                                         : 
                                                        ((0x1a000U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                          ? 9U
                                                          : 0xaU)))))))
                                                   : 
                                                  (((((((((0x200U 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                          | (0x300U 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                         | (0x400U 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                        | (0x800U 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                       | (0xc00U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                      | (4U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                     | (5U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                    | (6U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                                    ? 
                                                   ((0x200U 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                     ? 0U
                                                     : 
                                                    ((0x300U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 0U
                                                      : 
                                                     ((0x400U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 8U
                                                       : 
                                                      ((0x800U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? 9U
                                                        : 
                                                       ((0xc00U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 0xaU
                                                         : 
                                                        ((4U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                          ? 0U
                                                          : 1U))))))
                                                    : 
                                                   (((((((((7U 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                           | (8U 
                                                              == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                          | (9U 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                         | (0xaU 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                        | (0xbU 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                       | (0xcU 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                      | (0xdU 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                     | (0xeU 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                                     ? 
                                                    ((7U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 1U
                                                      : 
                                                     ((8U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 1U
                                                       : 
                                                      ((9U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? 1U
                                                        : 
                                                       ((0xaU 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 1U
                                                         : 0U))))
                                                     : 
                                                    (((((((((0xfU 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                            | (0x10U 
                                                               == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                           | (0x11U 
                                                              == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                          | (0x12U 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                         | (0x13U 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                        | (0x14U 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                       | (0x15U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                      | (0x16U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                                      ? 
                                                     ((0xfU 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 0U
                                                       : 
                                                      ((0x10U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? 0U
                                                        : 
                                                       ((0x11U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 0U
                                                         : 
                                                        ((0x12U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                          ? 0U
                                                          : 
                                                         ((0x13U 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                           ? 0U
                                                           : 
                                                          ((0x14U 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                            ? 2U
                                                            : 
                                                           ((0x15U 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                             ? 3U
                                                             : 7U)))))))
                                                      : 
                                                     ((0x17U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 6U
                                                       : 
                                                      ((0x18U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? 4U
                                                        : 0U))))));
        ysyx_22050612_npc__DOT__exu__DOT__operator_a 
            = (((((((((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                      | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                ? ((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src1))
                    : ((0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src1))
                        : ((0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                               << 0x20U) : ((0x17000U 
                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                             ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                             : ((0x18000U 
                                                 == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                 ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                                 : 
                                                ((0x19000U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                  ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                                  : 
                                                 ((0x1a000U 
                                                   == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                   ? 
                                                  ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                   << 0x20U))))))))
                : (((((((((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                          | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (4U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (5U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (6U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                    ? ((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? vlSelf->pc : ((0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                         ? vlSelf->pc
                                         : ysyx_22050612_npc__DOT__exu__DOT__src1))
                    : (((((((((7U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                              | (8U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (9U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0xaU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode))
                        ? ysyx_22050612_npc__DOT__exu__DOT__src1
                        : (((((((((0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  | (0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                               | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                            ? ysyx_22050612_npc__DOT__exu__DOT__src1
                            : ((0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                : ((0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                    : ((0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                        : ((0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                            : ((0x2bU 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                                : (
                                                   (0x2fU 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? ysyx_22050612_npc__DOT__exu__DOT__src1
                                                    : 0ULL))))))))));
        ysyx_22050612_npc__DOT__exu__DOT__operator_b 
            = (((((((((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                      | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                ? ((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? (QData)((IData)((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                >> 0x14U))))
                    : ((0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 0x14U))))
                        : ((0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                  >> 0x14U))))
                            : ((0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ysyx_22050612_npc__DOT__exu__DOT__src2
                                : ((0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__exu__DOT__src2
                                    : ((0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? (QData)((IData)(
                                                          (0x1fU 
                                                           & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2))))
                                        : ((0x1a000U 
                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? (QData)((IData)(
                                                              (0x1fU 
                                                               & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2))))
                                            : (QData)((IData)(
                                                              (0x1fU 
                                                               & (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))))))))))
                : (((((((((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                          | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (4U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (5U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (6U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                    ? ((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? ysyx_22050612_npc__DOT__imm_U
                        : ((0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? ((vlSelf->ysyx_22050612_npc__DOT__inst 
                                >> 0x1fU) ? (0xffffffffffe00000ULL 
                                             | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                            >> 0x14U))))))))
                                : (((QData)((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                     >> 0x1fU))) 
                                    << 0x14U) | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 0x14U))))))))
                            : ((0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? (QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U))))
                                : ((0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? (QData)((IData)(
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                          >> 0x14U))))
                                    : ((0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? (QData)((IData)(
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0x14U))))
                                        : ((4U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                            : ysyx_22050612_npc__DOT__exu__DOT__src2))))))
                    : (((((((((7U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                              | (8U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (9U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0xaU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode))
                        ? ((7U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? ysyx_22050612_npc__DOT__exu__DOT__src2
                            : ((8U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ysyx_22050612_npc__DOT__exu__DOT__src2
                                : ((9U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__exu__DOT__src2
                                    : ((0xaU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ysyx_22050612_npc__DOT__exu__DOT__src2
                                        : vlSelf->ysyx_22050612_npc__DOT__imm_I))))
                        : (((((((((0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  | (0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                               | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                            ? ((0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                : ((0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__imm_S
                                    : ((0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ysyx_22050612_npc__DOT__imm_S
                                        : ((0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ysyx_22050612_npc__DOT__imm_S
                                            : vlSelf->ysyx_22050612_npc__DOT__imm_I))))
                            : ((0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                : ((0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                    : ((0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                        : ((0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                            : ((0x2bU 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? ysyx_22050612_npc__DOT__imm_S
                                                : (
                                                   (0x2fU 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                                    : 0ULL))))))))));
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[3U] 
            << 0x1dU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[2U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
            << 0x1dU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[3U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
                 >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[5U] 
            << 0x1aU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
            << 0x1aU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[5U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
                 >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[7U] 
            << 0x17U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
            << 0x17U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[7U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
                 >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[9U] 
            << 0x14U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
            << 0x14U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[9U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
                 >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xbU] 
            << 0x11U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
            << 0x11U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xbU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
                 >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xdU] 
            << 0xeU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xeU] 
            << 0xeU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xdU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xeU] 
                 >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[3U] 
            << 0x1dU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[2U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
            << 0x1dU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[3U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
                 >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[5U] 
            << 0x1aU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
            << 0x1aU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[5U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
                 >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
            << 0x17U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
            << 0x17U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
                 >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
            << 0x14U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
            << 0x14U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
                 >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
            << 0x11U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
            << 0x11U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
                 >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
            << 0xeU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
            << 0xeU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
                 >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
            << 0xbU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
                        >> 0x15U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
            << 0xbU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
                        >> 0x15U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7U][2U] 
        = (7U & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
                 >> 0x15U));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
        = (ysyx_22050612_npc__DOT__exu__DOT__operator_a 
           + ((1U == (IData)(ysyx_22050612_npc__DOT__exu__DOT__mode))
               ? (1ULL + (~ ysyx_22050612_npc__DOT__exu__DOT__operator_b))
               : ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [7U][2U]);
    VL_EXTEND_WQ(72,64, __Vtemp104, ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result);
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0U] 
        = (IData)(VL_SHIFTRS_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[1U] 
        = (IData)((VL_SHIFTRS_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                   >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[2U] 
        = (0xaU | ((IData)(VL_SHIFTR_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                   << 8U));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[3U] 
        = (((IData)(VL_SHIFTR_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
            >> 0x18U) | ((IData)((VL_SHIFTR_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                  >> 0x20U)) << 8U));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
        = (0x900U | (((IData)(VL_SHIFTL_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                      << 0x10U) | ((IData)((VL_SHIFTR_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[5U] 
        = (((IData)(VL_SHIFTL_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
            >> 0x10U) | ((IData)((VL_SHIFTL_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                  >> 0x20U)) << 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
        = (0x80000U | (((IData)((VL_SHIFTL_QQQ(64,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                 >> 0x20U)) >> 0x10U) 
                       | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                   ^ ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                          << 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[7U] 
        = ((0xffffU & ((IData)((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                ^ ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                       >> 8U)) | ((0xff0000U & ((IData)(
                                                        (ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                         ^ ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                                                >> 8U)) 
                                  | ((IData)(((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                               ^ ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                              >> 0x20U)) 
                                     << 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[8U] 
        = (0x7000000U | ((0xffffU & ((IData)(((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                               ^ ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                              >> 0x20U)) 
                                     >> 8U)) | (0xff0000U 
                                                & ((IData)(
                                                           ((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                             ^ ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                            >> 0x20U)) 
                                                   >> 8U))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[9U] 
        = ((0xffffU & (IData)((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                               | ysyx_22050612_npc__DOT__exu__DOT__operator_b))) 
           | (0xffff0000U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     | ysyx_22050612_npc__DOT__exu__DOT__operator_b))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xaU] 
        = ((0xffffU & (IData)(((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                | ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                               >> 0x20U))) | (0xffff0000U 
                                              & (IData)(
                                                        ((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                          | ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                         >> 0x20U))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xbU] 
        = (6U | ((0xff00U & ((IData)((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      & ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                             << 8U)) | (0xffff0000U 
                                        & ((IData)(
                                                   (ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                    & ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                                           << 8U))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xcU] 
        = ((((IData)((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                      & ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
             >> 0x18U) | (0xff00U & ((IData)(((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                               & ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                              >> 0x20U)) 
                                     << 8U))) | (0xffff0000U 
                                                 & ((IData)(
                                                            ((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                              & ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                             >> 0x20U)) 
                                                    << 8U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
        = (0x400U | (((IData)(((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                & ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                               >> 0x20U)) >> 0x18U) 
                     | ((IData)(((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                  < ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                  ? 1ULL : 0ULL)) << 0x10U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xeU] 
        = (((IData)(((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                      < ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                      ? 1ULL : 0ULL)) >> 0x10U) | ((IData)(
                                                           (((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                              < ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
        = (0x30000U | (((IData)((((ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                   < ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                   ? 1ULL : 0ULL) >> 0x20U)) 
                        >> 0x10U) | ((IData)((VL_LTS_IQQ(1,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                               ? 1ULL
                                               : 0ULL)) 
                                     << 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x10U] 
        = ((0xffffU & ((IData)((VL_LTS_IQQ(1,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                 ? 1ULL : 0ULL)) >> 8U)) 
           | ((0xff0000U & ((IData)((VL_LTS_IQQ(1,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)) 
                            >> 8U)) | ((IData)(((VL_LTS_IQQ(1,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                  ? 1ULL
                                                  : 0ULL) 
                                                >> 0x20U)) 
                                       << 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x11U] 
        = (0x2000000U | ((0xffffU & ((IData)(((VL_LTS_IQQ(1,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                ? 1ULL
                                                : 0ULL) 
                                              >> 0x20U)) 
                                     >> 8U)) | (0xff0000U 
                                                & ((IData)(
                                                           ((VL_LTS_IQQ(1,64,64, ysyx_22050612_npc__DOT__exu__DOT__operator_a, ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   >> 8U))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x12U] 
        = ((0xffffU & (IData)(ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result)) 
           | (0xffff0000U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x13U] 
        = ((0xffffU & (IData)((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
                               >> 0x20U))) | (0xffff0000U 
                                              & (IData)(
                                                        (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
                                                         >> 0x20U))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x14U] 
        = (1U | ((0xff00U & (__Vtemp104[0U] << 8U)) 
                 | (0xffff0000U & (__Vtemp104[0U] << 8U))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
        = (((__Vtemp104[0U] >> 0x18U) | (0xff00U & 
                                         (__Vtemp104[1U] 
                                          << 8U))) 
           | (0xffff0000U & (__Vtemp104[1U] << 8U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
        = ((__Vtemp104[1U] >> 0x18U) | (0xff00U & (
                                                   __Vtemp104[2U] 
                                                   << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xffU & ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[3U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[2U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[3U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xffU & (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
                    >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[5U] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[5U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xffU & (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
                    >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[7U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[8U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[7U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[8U] 
           >> 0x18U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xffU & ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xcU] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xbU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xcU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xffU & (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
                    >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xeU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xeU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xffU & (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
                    >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x10U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x11U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7U][2U] 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x11U] 
           >> 0x18U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x12U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x13U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xffU & ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x14U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xffU & (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
                    >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[9U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [9U][2U]);
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [7U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [8U]));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [9U]));
    ysyx_22050612_npc__DOT__exu__DOT__result_alu0 = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0U] 
        = (IData)(((ysyx_22050612_npc__DOT__exu__DOT__src1 
                    >= ysyx_22050612_npc__DOT__exu__DOT__src2)
                    ? (ysyx_22050612_npc__DOT__imm_B 
                       + vlSelf->pc) : (4ULL + vlSelf->pc)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[1U] 
        = (IData)((((ysyx_22050612_npc__DOT__exu__DOT__src1 
                     >= ysyx_22050612_npc__DOT__exu__DOT__src2)
                     ? (ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc) : (4ULL + vlSelf->pc)) 
                   >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[2U] 
        = (0xaU | ((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x3fU)))
                             ? (ysyx_22050612_npc__DOT__imm_B 
                                + vlSelf->pc) : (4ULL 
                                                 + vlSelf->pc))) 
                   << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[3U] 
        = (((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x3fU))) ? (ysyx_22050612_npc__DOT__imm_B 
                                                   + vlSelf->pc)
                      : (4ULL + vlSelf->pc))) >> 0xcU) 
           | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                       >> 0x3fU))) ? 
                        (ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc)) 
                       >> 0x20U)) << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[4U] 
        = (0x900000U | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x3fU)))
                                   ? (ysyx_22050612_npc__DOT__imm_B 
                                      + vlSelf->pc)
                                   : (4ULL + vlSelf->pc)) 
                                 >> 0x20U)) >> 0xcU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[5U] 
        = ((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x3fU))) ? (4ULL 
                                                  + vlSelf->pc)
                     : (ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc))) << 8U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[6U] 
        = (((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x3fU))) ? (4ULL 
                                                   + vlSelf->pc)
                      : (ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc))) >> 0x18U) 
           | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                       >> 0x3fU))) ? 
                        (4ULL + vlSelf->pc) : (ysyx_22050612_npc__DOT__imm_B 
                                               + vlSelf->pc)) 
                       >> 0x20U)) << 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
        = (0x800U | (((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x3fU)))
                                ? (ysyx_22050612_npc__DOT__imm_B 
                                   + vlSelf->pc) : 
                               (4ULL + vlSelf->pc))) 
                      << 0x1cU) | ((IData)((((1U & (IData)(
                                                           (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                            >> 0x3fU)))
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : (ysyx_22050612_npc__DOT__imm_B 
                                                 + vlSelf->pc)) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[8U] 
        = (((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x3fU))) ? (ysyx_22050612_npc__DOT__imm_B 
                                                   + vlSelf->pc)
                      : (4ULL + vlSelf->pc))) >> 4U) 
           | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                       >> 0x3fU))) ? 
                        (ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc)) 
                       >> 0x20U)) << 0x1cU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[9U] 
        = (0x70000000U | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (ysyx_22050612_npc__DOT__imm_B 
                                        + vlSelf->pc)
                                     : (4ULL + vlSelf->pc)) 
                                   >> 0x20U)) >> 4U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xaU] 
        = ((IData)(((0ULL != ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                     ? (ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc) : (4ULL + vlSelf->pc))) 
           << 0x10U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xbU] 
        = (((IData)(((0ULL != ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                      ? (ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc))) 
            >> 0x10U) | ((IData)((((0ULL != ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                    ? (ysyx_22050612_npc__DOT__imm_B 
                                       + vlSelf->pc)
                                    : (4ULL + vlSelf->pc)) 
                                  >> 0x20U)) << 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xcU] 
        = (0x60000U | ((IData)((((0ULL != ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                  ? (ysyx_22050612_npc__DOT__imm_B 
                                     + vlSelf->pc) : 
                                 (4ULL + vlSelf->pc)) 
                                >> 0x20U)) >> 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xdU] 
        = ((IData)(((0ULL == ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                     ? (ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc) : (4ULL + vlSelf->pc))) 
           << 4U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xeU] 
        = (((IData)(((0ULL == ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                      ? (ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc))) 
            >> 0x1cU) | ((IData)((((0ULL == ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                    ? (ysyx_22050612_npc__DOT__imm_B 
                                       + vlSelf->pc)
                                    : (4ULL + vlSelf->pc)) 
                                  >> 0x20U)) << 4U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
        = (0x50U | (((IData)((0xfffffffffffffffeULL 
                              & ysyx_22050612_npc__DOT__exu__DOT__result_alu0)) 
                     << 0x18U) | ((IData)((((0ULL == ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                             ? (ysyx_22050612_npc__DOT__imm_B 
                                                + vlSelf->pc)
                                             : (4ULL 
                                                + vlSelf->pc)) 
                                           >> 0x20U)) 
                                  >> 0x1cU)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x10U] 
        = (((IData)((0xfffffffffffffffeULL & ysyx_22050612_npc__DOT__exu__DOT__result_alu0)) 
            >> 8U) | ((IData)(((0xfffffffffffffffeULL 
                                & ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                               >> 0x20U)) << 0x18U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x11U] 
        = (0x4000000U | ((IData)(((0xfffffffffffffffeULL 
                                   & ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                  >> 0x20U)) >> 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x12U] 
        = ((0xfff000U & ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                         << 0xcU)) | (0xff000000U & 
                                      ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                       << 0xcU)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x13U] 
        = ((((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
             >> 0x14U) | (0xfff000U & ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       << 0xcU))) | 
           (0xff000000U & ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x20U)) << 0xcU)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x14U] 
        = (0x300000U | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) >> 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0U] 
        = (IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[1U] 
        = (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                   >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[2U] 
        = (0x2aU | ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[3U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0xcU) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[4U] 
        = (0x2900000U | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 0xcU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
        = (0xf00U | (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                      << 0x1cU) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[8U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 4U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x1cU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[9U] 
        = (0xe0000000U | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 4U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xaU] 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 0x10U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xbU] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x10U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xcU] 
        = (0xd0000U | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                >> 0x20U)) >> 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xdU] 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 4U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xeU] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x1cU) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 4U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
        = (0xc0U | (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                     << 0x18U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  >> 0x1cU)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x10U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 8U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x18U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x11U] 
        = (0xb000000U | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x12U] = 0U;
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0U] 
        = (IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[1U] 
        = (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                   >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[2U] 
        = (0x2bU | ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[3U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0xcU) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[4U] 
        = (0x1200000U | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 0xcU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[5U] 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[6U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
        = (0x1100U | (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 0x1cU) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x20U)) 
                                    >> 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[8U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 4U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x1cU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[9U] 
        = ((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                    >> 0x20U)) >> 4U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0xaU] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[3U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[4U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[5U] 
                        << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[6U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[8U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[9U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xaU] 
                        << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xbU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xcU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xdU] 
                        << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xeU] 
            << 0x1cU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
            << 0x1cU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x10U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x11U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x12U] 
                        << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x11U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x13U] 
            << 0x14U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x12U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x14U] 
            << 0x14U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x13U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7U][2U] 
        = (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x14U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[3U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[4U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
                        << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[8U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[9U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xaU] 
                        << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xbU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xcU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xdU] 
                        << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[5U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xeU] 
            << 0x1cU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[5U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
            << 0x1cU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[6U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x10U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[6U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x11U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x12U] 
                        << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x11U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[3U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[4U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[5U] 
                        << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[6U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[8U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[9U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0xaU] 
                        << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
           [3U][2U]);
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [7U]));
    ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__dnpc = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit)
                                             ? ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out
                                             : (4ULL 
                                                + vlSelf->pc));
    ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__raddr = ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__waddr = ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [7U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte = ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte = ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [7U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte = ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte = ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out;
    __Vtemp361[1U] = (((IData)((0x11000000000ULL | 
                                (((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                  << 0x38U) | (((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                                << 0x1cU) 
                                               | (QData)((IData)(
                                                                 (0x1200U 
                                                                  | ((1U 
                                                                      & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                                >> 2U)))
                                                                      ? 0xf0U
                                                                      : 0xfU)))))))) 
                       >> 4U) | ((IData)(((0x11000000000ULL 
                                           | (((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                               << 0x38U) 
                                              | (((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                                  << 0x1cU) 
                                                 | (QData)((IData)(
                                                                   (0x1200U 
                                                                    | ((1U 
                                                                        & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                                >> 2U)))
                                                                        ? 0xf0U
                                                                        : 0xfU))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[0U] 
        = (0x2bffU | ((IData)((0x11000000000ULL | (
                                                   ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                                       << 0x1cU) 
                                                      | (QData)((IData)(
                                                                        (0x1200U 
                                                                         | ((1U 
                                                                             & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                                >> 2U)))
                                                                             ? 0xf0U
                                                                             : 0xfU)))))))) 
                      << 0x1cU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[1U] 
        = __Vtemp361[1U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[2U] 
        = ((IData)(((0x11000000000ULL | (((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                             << 0x1cU) 
                                            | (QData)((IData)(
                                                              (0x1200U 
                                                               | ((1U 
                                                                   & (IData)(
                                                                             (ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                              >> 2U)))
                                                                   ? 0xf0U
                                                                   : 0xfU))))))) 
                    >> 0x20U)) >> 4U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[3U] = 1U;
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0U] 
        = (IData)(ysyx_22050612_npc__DOT__exu__DOT__src2);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[1U] 
        = (IData)((ysyx_22050612_npc__DOT__exu__DOT__src2 
                   >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[2U] 
        = (0x2bU | ((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                            >> 2U)))
                              ? ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                 << 0x20U) : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                    << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[3U] 
        = (((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                    >> 2U))) ? ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                                << 0x20U)
                      : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
            >> 0xcU) | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                 >> 2U)))
                                   ? ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                      << 0x20U) : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2))) 
                                 >> 0x20U)) << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[4U] 
        = (0x1200000U | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                  >> 2U)))
                                    ? ((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                       << 0x20U) : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__src2))) 
                                  >> 0x20U)) >> 0xcU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[5U] 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte) 
           << 8U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[6U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte) 
            >> 0x18U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte 
                                  >> 0x20U)) << 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
        = (0x1100U | (((IData)(ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte) 
                       << 0x1cU) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte 
                                             >> 0x20U)) 
                                    >> 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[8U] 
        = (((IData)(ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte) 
            >> 4U) | ((IData)((ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte 
                               >> 0x20U)) << 0x1cU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[9U] 
        = ((IData)((ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte 
                    >> 0x20U)) >> 4U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0xaU] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0U] 
        = (0xfffffffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1U] 
        = (0xfffffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[1U] 
                          << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[0U] 
                                    >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[2U] 
        = (0xfffffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[2U] 
                          << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[1U] 
                                    >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[3U] 
        = (0xfffffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[3U] 
                          << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[2U] 
                                      >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[3U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[4U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[5U] 
                        << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[6U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[8U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[9U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0xaU] 
                        << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [3U][2U]);
    ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__wmask = ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__wdata = ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out;
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(ysyx_22050612_npc__DOT__exu__DOT__raddr, vlSelf->__Vtask_pmem_read__2__rdata);
    ysyx_22050612_npc__DOT__exu__DOT__rdata = vlSelf->__Vtask_pmem_read__2__rdata;
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(ysyx_22050612_npc__DOT__exu__DOT__waddr, ysyx_22050612_npc__DOT__exu__DOT__wdata, (IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[0U] 
        = (IData)((0x100002800000000ULL | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                        >> 0x20U))))) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                           >> 0x28U))))) 
                                               << 0x13U) 
                                              | (QData)((IData)(
                                                                (0x60000U 
                                                                 | (0xffffU 
                                                                    & (IData)(
                                                                              (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                               >> 0x30U))))))))));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
        = (((IData)((ysyx_22050612_npc__DOT__exu__DOT__rdata 
                     >> 0x18U)) << 0x19U) | (IData)(
                                                    ((0x100002800000000ULL 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x20U))))) 
                                                          << 0x26U) 
                                                         | (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x28U))))) 
                                                             << 0x13U) 
                                                            | (QData)((IData)(
                                                                              (0x60000U 
                                                                               | (0xffffU 
                                                                                & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x30U))))))))) 
                                                     >> 0x20U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
        = (0x20000600U | (((IData)((ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                    >> 8U)) << 0x1fU) 
                          | ((0xffff000U & ((IData)(
                                                    (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                     >> 0x10U)) 
                                            << 0xcU)) 
                             | (0x1ffU & ((IData)((ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                   >> 0x18U)) 
                                          >> 7U)))));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[3U] 
        = (0x8000U | (((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata) 
                       << 0x12U) | (0x7fffU & ((IData)(
                                                       (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                        >> 8U)) 
                                               >> 1U))));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[4U] 
        = (3U & ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata) 
                 >> 0xeU));
    __Vtemp403[0U] = (IData)((0x30080140000000ULL | 
                              (((QData)((IData)((0xffU 
                                                 & (IData)(
                                                           (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 0x10U))))) 
                                << 0x37U) | (((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                          >> 0x18U))))) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                             >> 0x20U))))) 
                                                 << 0x21U) 
                                                | (QData)((IData)(
                                                                  (0x300700U 
                                                                   | ((0x3fc00000U 
                                                                       & ((IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x28U)) 
                                                                          << 0x16U)) 
                                                                      | ((0x7f800U 
                                                                          & ((IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x30U)) 
                                                                             << 0xbU)) 
                                                                         | (0xffU 
                                                                            & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x38U)))))))))))));
    __Vtemp403[1U] = (IData)(((0x30080140000000ULL 
                               | (((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(
                                                              (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x10U))))) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                             >> 0x18U))))) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x20U))))) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x300700U 
                                                                      | ((0x3fc00000U 
                                                                          & ((IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x28U)) 
                                                                             << 0x16U)) 
                                                                         | ((0x7f800U 
                                                                             & ((IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x30U)) 
                                                                                << 0xbU)) 
                                                                            | (0xffU 
                                                                               & (IData)(
                                                                                (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x38U)))))))))))) 
                              >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U] 
        = __Vtemp403[0U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
        = __Vtemp403[1U];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
        = (0x401U | ((0x1fe000U & ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata) 
                                   << 0xdU)) | (0x3fcU 
                                                & ((IData)(
                                                           (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 8U)) 
                                                   << 2U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
                        << 0xdU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[0U] 
                                    >> 0x13U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
                       >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
                        << 7U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
                                  >> 0x19U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
                       >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[3U] 
                        << 1U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
                                  >> 0x1fU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[4U] 
                        << 0xeU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[3U] 
                                    >> 0x12U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U] 
                     >> 0xbU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                      << 0xaU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U] 
                                  >> 0x16U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                     >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                     >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
                      << 9U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                                >> 0x17U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
                     >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
                     >> 0xdU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[0U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [0U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [1U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[2U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [2U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[3U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [3U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[4U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [4U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[5U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [5U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[6U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [6U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [7U] >> 8U));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte = ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out;
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [7U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte = ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out;
    __Vtemp427[0xbU] = (((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                     >> 0x3fU)))
                                       ? (0xffffffff00000000ULL 
                                          | (QData)((IData)(
                                                            (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                             >> 0x20U))))
                                       : (QData)((IData)(
                                                         (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                          >> 0x20U))))
                                   : ((1U & (IData)(
                                                    (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                     >> 0x1fU)))
                                       ? (0xffffffff00000000ULL 
                                          | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                       : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata))))) 
                         >> 0x10U) | ((IData)((((1U 
                                                 & (IData)(
                                                           (ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                             >> 0x3fU)))
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(
                                                                    (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                     >> 0x20U))))
                                                  : (QData)((IData)(
                                                                    (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                     >> 0x20U))))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                             >> 0x1fU)))
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                                  : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)))) 
                                               >> 0x20U)) 
                                      << 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0U] 
        = (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[1U] 
        = (IData)((ysyx_22050612_npc__DOT__exu__DOT__rdata 
                   >> 0x20U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U] 
        = (0x2aU | ((IData)((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata))) 
                    << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
        = (((IData)((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata))) 
            >> 0xcU) | ((IData)(((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)) 
                                 >> 0x20U)) << 0x14U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
        = (0x2900000U | ((IData)(((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)) 
                                  >> 0x20U)) >> 0xcU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
        = ((IData)((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
           << 8U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
        = (((IData)((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
            >> 0x18U) | ((IData)(((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)) 
                                  >> 0x20U)) << 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
        = (0xf00U | (((IData)((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
                      << 0x1cU) | ((IData)(((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[8U] 
        = (((IData)((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
            >> 4U) | ((IData)(((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                               >> 0x20U)) << 0x1cU));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[9U] 
        = (0xe0000000U | ((IData)(((QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                                   >> 0x20U)) >> 4U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xaU] 
        = ((IData)(((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                   >> 2U))) ? ((1U 
                                                & (IData)(
                                                          (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                           >> 0x3fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                      >> 0x20U))))
                                                : (QData)((IData)(
                                                                  (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                   >> 0x20U))))
                     : ((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                       >> 0x1fU))) ? 
                        (0xffffffff00000000ULL | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                         : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata))))) 
           << 0x10U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xbU] 
        = __Vtemp427[0xbU];
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xcU] 
        = (0xd0000U | ((IData)((((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                >> 2U)))
                                  ? ((1U & (IData)(
                                                   (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                    >> 0x3fU)))
                                      ? (0xffffffff00000000ULL 
                                         | (QData)((IData)(
                                                           (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 0x20U))))
                                      : (QData)((IData)(
                                                        (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                         >> 0x20U))))
                                  : ((1U & (IData)(
                                                   (ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                    >> 0x1fU)))
                                      ? (0xffffffff00000000ULL 
                                         | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                      : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata)))) 
                                >> 0x20U)) >> 0x10U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xdU] 
        = ((IData)(((0x8000U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                     ? (0xffffffffffff0000ULL | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                     : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))) 
           << 4U);
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xeU] 
        = (((IData)(((0x8000U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                      ? (0xffffffffffff0000ULL | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                      : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))) 
            >> 0x1cU) | ((IData)((((0x8000U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                    ? (0xffffffffffff0000ULL 
                                       | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
                                  >> 0x20U)) << 4U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
        = (0xc0U | (((IData)(((0x80U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                               ? (0xffffffffffffff00ULL 
                                  | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                               : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))) 
                     << 0x18U) | ((IData)((((0x8000U 
                                             & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                             ? (0xffffffffffff0000ULL 
                                                | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                             : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
                                           >> 0x20U)) 
                                  >> 0x1cU)));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x10U] 
        = (((IData)(((0x80U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                      ? (0xffffffffffffff00ULL | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                      : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))) 
            >> 8U) | ((IData)((((0x80U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                                 ? (0xffffffffffffff00ULL 
                                    | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                                 : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
                               >> 0x20U)) << 0x18U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x11U] 
        = (0xb000000U | ((IData)((((0x80U & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                                    ? (0xffffffffffffff00ULL 
                                       | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
                                  >> 0x20U)) >> 8U));
    ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x12U] = 0U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0U][0U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0U][1U] 
        = ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
            << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
                        << 0xcU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
            << 0x18U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[8U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[9U] 
            << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xaU] 
                        << 4U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xbU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xcU] 
            << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xdU] 
                        << 0x10U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[5U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xeU] 
            << 0x1cU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[5U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
            << 0x1cU) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[6U][0U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x10U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[6U][1U] 
        = ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x11U] 
            << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x12U] 
                        << 8U) | (ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x11U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [6U][2U]);
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
           [0U]);
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [1U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [2U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [3U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [4U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [5U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [6U]));
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fix = ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg 
        = (((((((((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                  | (0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x12000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
            ? ysyx_22050612_npc__DOT__exu__DOT__result_alu0
            : (((((((((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                      | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                ? ((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? ((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                      >> 0x1fU))) ? 
                       (0xffffffff00000000ULL | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                        : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                    : ((0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? ((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                          >> 0x1fU)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                            : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                        : ((0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? ((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x3fU)))
                                ? (0xffffffff00000000ULL 
                                   | (QData)((IData)(
                                                     (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                      >> 0x20U))))
                                : (QData)((IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x20U))))
                            : ((0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ((1U & (IData)((ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x1fU)))
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                : ((0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ((1U & (IData)(
                                                     (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                      >> 0x1fU)))
                                        ? (0xffffffff00000000ULL 
                                           | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                        : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                    : ((0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ((1U & (IData)(
                                                         (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                          >> 0x1fU)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                            : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                        : ((0x1a000U 
                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ((1U 
                                                & (IData)(
                                                          (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x3fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))
                                                : (QData)((IData)(
                                                                  (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                   >> 0x20U))))
                                            : ((1U 
                                                & (IData)(
                                                          (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x3fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))
                                                : (QData)((IData)(
                                                                  (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                   >> 0x20U)))))))))))
                : (((((((((0x1d000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                          | (0x22000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x24000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x25000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x26000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0x27000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x28000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x28000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                    ? ((0x1d000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? (ysyx_22050612_npc__DOT__exu__DOT__src1 
                           * ysyx_22050612_npc__DOT__exu__DOT__src2)
                        : ((0x22000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? VL_DIV_QQQ(64, ysyx_22050612_npc__DOT__exu__DOT__src1, ysyx_22050612_npc__DOT__exu__DOT__src2)
                            : ((0x24000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? VL_MODDIV_QQQ(64, ysyx_22050612_npc__DOT__exu__DOT__src1, ysyx_22050612_npc__DOT__exu__DOT__src2)
                                : ((0x25000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ((1U & (IData)(
                                                     (ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                      >> 0x1fU)))
                                        ? (0xffffffff00000000ULL 
                                           | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                        : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                    : ((0x26000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ((ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                            >> 0x1fU)
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                            : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                        : ((0x27000U 
                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ((ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
                                                >> 0x1fU)
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))
                                                : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))
                                            : ((0x28000U 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? (
                                                   (ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                                : (
                                                   (ysyx_22050612_npc__DOT__exu__DOT__result_remuw0 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remuw0)))
                                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remuw0))))))))))
                    : (((((((((0x100U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                              | (0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (4U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode))
                        ? ((0x100U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? ysyx_22050612_npc__DOT__imm_U
                            : ((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                : ((0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? (4ULL + vlSelf->pc)
                                    : ((0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                        : ((0x800U 
                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                            : ((0xc00U 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                                : (
                                                   (4U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : ysyx_22050612_npc__DOT__exu__DOT__rdata_fix)))))))
                        : (((((((((0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                               | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                            ? ((0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                : ((0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                    : ((0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                        : ((0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                            : ysyx_22050612_npc__DOT__exu__DOT__result_alu0))))
                            : ((0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                : ((0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                    : ((0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                        : ((0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                            : ((0x2fU 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                               >> 0x1fU)))
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                : 0ULL))))))))));
}

void Vysyx_22050612_npc___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22050612_npc___024root___initial__TOP__3(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___initial__TOP__3\n"); );
    // Body
    Vysyx_22050612_npc___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr);
}

void Vysyx_22050612_npc___024root___eval_initial(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22050612_npc___024root___initial__TOP__3(vlSelf);
}

void Vysyx_22050612_npc___024root___eval_settle(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_22050612_npc___024root___settle__TOP__1(vlSelf);
}

void Vysyx_22050612_npc___024root___final(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___final\n"); );
}

void Vysyx_22050612_npc___024root___ctor_var_reset(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22050612_npc__DOT__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__imm_I = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__opcode = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vtask_pmem_read_pc__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__2__rdata = 0;
}
