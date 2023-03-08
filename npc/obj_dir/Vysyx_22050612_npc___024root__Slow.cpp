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

void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(IData/*31:0*/ npc_inst);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_22050612_npc___024root___settle__TOP__1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<35>/*1119:0*/ __Vtemp112;
    VlWide<40>/*1279:0*/ __Vtemp116;
    VlWide<63>/*2015:0*/ __Vtemp133;
    VlWide<19>/*607:0*/ __Vtemp147;
    VlWide<82>/*2623:0*/ __Vtemp148;
    VlWide<84>/*2687:0*/ __Vtemp149;
    VlWide<19>/*607:0*/ __Vtemp163;
    VlWide<103>/*3295:0*/ __Vtemp164;
    VlWide<105>/*3359:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<9>/*287:0*/ __Vtemp173;
    VlWide<11>/*351:0*/ __Vtemp175;
    VlWide<13>/*415:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<9>/*287:0*/ __Vtemp186;
    VlWide<11>/*351:0*/ __Vtemp188;
    VlWide<13>/*415:0*/ __Vtemp190;
    VlWide<15>/*479:0*/ __Vtemp192;
    VlWide<17>/*543:0*/ __Vtemp193;
    VlWide<63>/*2015:0*/ __Vtemp240;
    VlWide<19>/*607:0*/ __Vtemp254;
    VlWide<82>/*2623:0*/ __Vtemp255;
    VlWide<84>/*2687:0*/ __Vtemp256;
    VlWide<19>/*607:0*/ __Vtemp270;
    VlWide<103>/*3295:0*/ __Vtemp271;
    VlWide<105>/*3359:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp1054;
    VlWide<3>/*95:0*/ __Vtemp1337;
    VlWide<3>/*95:0*/ __Vtemp1385;
    VlWide<10>/*319:0*/ __Vtemp1420;
    VlWide<63>/*2015:0*/ __Vtemp1503;
    VlWide<19>/*607:0*/ __Vtemp1517;
    VlWide<82>/*2623:0*/ __Vtemp1518;
    VlWide<84>/*2687:0*/ __Vtemp1519;
    VlWide<14>/*447:0*/ __Vtemp1528;
    VlWide<98>/*3135:0*/ __Vtemp1529;
    // Body
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0U] = 0x5fU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1U] = 0x55U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2U] = 0x31U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3U] = 0x2dU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4U] = 0x2bU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5U] = 0x27U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6U] = 0x1fU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7U] = 0x1dU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8U] = 0x1bU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9U] = 0x19U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0xaU] = 9U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0xbU] = 0x1801U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0xcU] = 0x1001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0xdU] = 0x801U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0xeU] = 0x601U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0xfU] = 0x401U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x10U] = 0x201U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x11U] = 0x50001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x12U] = 0x4c001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x13U] = 0x4a001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x14U] = 0x48001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x15U] = 0x44001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x16U] = 0x3a001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x17U] = 0x36001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x18U] = 0x34001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x19U] = 0x32001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x1aU] = 0x30001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x1bU] = 0x2e001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x1cU] = 0x2c001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x1dU] = 0x2a001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x1eU] = 0x28001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x1fU] = 0x26001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x20U] = 0x24001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x21U] = 0x10001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x22U] = 0xe001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x23U] = 0xa001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0x24U] = 0x8001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[0U] = 0x660U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[1U] = 0x530U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[2U] = 0x411U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[3U] = 0x308U;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0U] = 0x2f00U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1U] = 0x2b00U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2U] = 0x2a00U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3U] = 0x1804U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4U] = 0x1607U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5U] = 0x1503U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6U] = 0x1300U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7U] = 0x1200U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8U] = 0x1100U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9U] = 0x1000U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0xaU] = 0xf00U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0xbU] = 0xe00U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0xcU] = 0xd00U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0xdU] = 0xc00U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0xeU] = 0xa01U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0xfU] = 0x901U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x10U] = 0x801U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x11U] = 0x701U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x12U] = 0x601U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x13U] = 0x501U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x14U] = 0x400U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x15U] = 0xc000aU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x16U] = 0x80009U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x17U] = 0x40008U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x18U] = 0x30000U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x19U] = 0x20000U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x1aU] = 0x1b0000aU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x1bU] = 0x1a00009U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x1cU] = 0x1900008U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x1dU] = 0x1800001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x1eU] = 0x1700000U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x1fU] = 0x160000aU;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x20U] = 0x1500009U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x21U] = 0x1400008U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x22U] = 0x1300004U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x23U] = 0x1200006U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x24U] = 0x800003U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x25U] = 0x700002U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x26U] = 0x500001U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0x27U] = 0x400000U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0U] = 0x1bfU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1U] = 0x5eU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2U] = 0xddU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0U] = 0x10a4fU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[1U] = 0xa4eU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[2U] = 0x24dU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0U] = 0x73b28U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1U] = 0x63b26U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2U] = 0x43b25U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[3U] = 0x7b324U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[4U] = 0x6b322U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[5U] = 0x4331dU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[6U] = 0x82bb1bU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[7U] = 0x2bb1aU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[8U] = 0xbb19U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[9U] = 0x803b18U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0xaU] = 0x3b17U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0xbU] = 0x829b16U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0xcU] = 0x29b15U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0xdU] = 0x9b14U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0xeU] = 0x3b313U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0xfU] = 0x33312U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0x10U] = 0x1b308U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0x11U] = 0x13307U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0x12U] = 0x803305U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0x13U] = 0x3304U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0U] = 0xdafU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[1U] = 0xd1abU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[2U] = 0xc1aaU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[3U] = 0x1c998U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[4U] = 0x10996U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[5U] = 0xc995U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[6U] = 0x993U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[7U] = 0x9192U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[8U] = 0x5191U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[9U] = 0x1190U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0xaU] = 0x1418fU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0xbU] = 0x1018eU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0xcU] = 0x818dU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0xdU] = 0x418cU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0xeU] = 0x1f18aU;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0xfU] = 0x1b189U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0x10U] = 0x17188U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0x11U] = 0x13187U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0x12U] = 0x7186U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0x13U] = 0x3185U;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0x14U] = 0x3384U;
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
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix 
        = vlSelf->__Vtask_pmem_read__0__rdata;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xaU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xbU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xcU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xdU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xeU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xfU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x10U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x11U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x12U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x13U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x14U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x15U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x15U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x16U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x16U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x17U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x17U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x18U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x18U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x19U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x19U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1aU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1aU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1bU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1bU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1cU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1cU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1dU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1dU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1eU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1eU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1fU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1fU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x20U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x20U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x21U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x21U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x22U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x22U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x23U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x23U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x24U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x24U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xaU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xbU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xcU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xdU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xeU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0xfU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x10U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x11U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x12U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x13U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x14U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x15U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x15U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x16U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x16U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x17U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x17U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x18U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x18U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x19U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x19U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1aU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1aU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1bU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1bU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1cU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1cU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1dU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1dU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1eU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1eU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x1fU] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x1fU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x20U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x20U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x21U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x21U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x22U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x22U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x23U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x23U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0x24U] 
        = (1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
           [0x24U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [1U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [2U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [3U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [4U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [5U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [6U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [7U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [8U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [9U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xaU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xbU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xcU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xdU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xeU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xeU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xfU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xfU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x10U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x10U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x11U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x11U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x12U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x12U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x13U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x13U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x14U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x14U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x15U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x15U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x16U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x16U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x17U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x17U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x18U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x18U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x19U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x19U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1aU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1aU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1bU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1bU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1cU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1cU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1dU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1dU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1eU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1eU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1fU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1fU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x20U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x20U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x21U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x21U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x22U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x22U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x23U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x23U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x24U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x24U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [1U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [2U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [3U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [4U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [5U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [6U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [7U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [8U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [9U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xaU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xbU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xcU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xdU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xeU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xeU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0xfU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0xfU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x10U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x10U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x11U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x11U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x12U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x12U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x13U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x13U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x14U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x14U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x15U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x15U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x16U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x16U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x17U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x17U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x18U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x18U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x19U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x19U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1aU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1aU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1bU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1bU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1cU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1cU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1dU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1dU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1eU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1eU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x1fU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x1fU] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x20U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x20U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x21U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x21U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x22U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x22U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x23U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x23U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0x24U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list
                       [0x24U] >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list
                 [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [8U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [9U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xaU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xbU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xcU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xdU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xeU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xeU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xfU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xfU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x10U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x10U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x10U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x11U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x11U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x11U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x12U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x12U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x12U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x13U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x13U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x13U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x14U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x14U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x14U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x15U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x15U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x15U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x15U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x16U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x16U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x16U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x16U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x17U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x17U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x17U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x17U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x18U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x18U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x18U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x18U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x19U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x19U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x19U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x19U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1aU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1aU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1aU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1aU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1bU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1bU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1bU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1bU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1cU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1cU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1cU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1cU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1dU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1dU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1dU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1dU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1eU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1eU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1eU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1eU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1fU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1fU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1fU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1fU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x20U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x20U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x20U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x20U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x21U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x21U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x21U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x21U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x22U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x22U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x22U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x22U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x23U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x23U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x23U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x23U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x24U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x24U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x24U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x24U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x25U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x25U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x25U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x25U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x26U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x26U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x26U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x26U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x27U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x27U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x27U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x27U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [8U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [9U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xaU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xbU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xcU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xdU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xeU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xeU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0xfU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0xfU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x10U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x10U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x10U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x11U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x11U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x11U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x12U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x12U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x12U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x13U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x13U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x13U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x14U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x14U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x14U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x15U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x15U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x15U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x15U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x16U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x16U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x16U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x16U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x17U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x17U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x17U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x17U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x18U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x18U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x18U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x18U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x19U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x19U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x19U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x19U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1aU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1aU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1aU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1aU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1bU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1bU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1bU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1bU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1cU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1cU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1cU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1cU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1dU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1dU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1dU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1dU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1eU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1eU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1eU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1eU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x1fU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x1fU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x1fU] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x1fU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x20U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x20U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x20U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x20U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x21U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x21U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x21U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x21U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x22U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x22U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x22U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x22U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x23U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x23U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x23U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x23U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x24U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x24U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x24U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x24U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x25U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x25U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x25U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x25U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x26U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x26U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x26U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x26U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0x27U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
           [0x27U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0x27U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list
                       [0x27U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
                    [0U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
                    [1U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
                    [2U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
                    [0U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
                    [1U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list
                    [2U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0U] 
        = (0xffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
                      [0U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[1U] 
        = (0xffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
                      [1U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[2U] 
        = (0xffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
                      [2U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0U] 
        = (0xffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
                      [0U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[1U] 
        = (0xffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
                      [1U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[2U] 
        = (0xffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list
                      [2U] >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[3U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[4U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[5U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[6U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[7U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[8U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [8U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[9U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [9U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xaU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xaU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xbU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xbU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xcU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xcU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xdU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xdU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xeU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xeU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xfU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xfU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x10U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x10U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x10U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x11U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x11U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x11U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x12U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x12U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x12U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x13U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x13U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x13U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[3U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[4U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[5U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[6U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[7U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[8U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [8U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[9U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [9U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xaU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xaU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xbU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xbU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xcU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xcU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xdU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xdU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xeU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xeU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0xfU] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0xfU] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x10U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x10U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x10U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x11U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x11U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x11U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x12U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x12U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x12U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0x13U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0x13U] 
        = (0x1ffffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list
                       [0x13U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [1U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [2U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [3U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [4U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [5U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [6U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [7U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[8U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [8U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[9U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [9U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xaU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xaU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xbU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xbU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xcU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xcU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xdU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xdU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xeU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xeU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xfU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xfU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x10U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x10U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x10U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x11U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x11U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x11U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x12U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x12U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x12U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x13U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x13U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x13U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x14U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x14U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x14U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [1U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [2U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [3U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [4U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [5U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [6U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [7U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[8U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [8U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[9U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [9U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xaU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xaU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xbU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xbU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xcU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xcU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xdU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xdU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xeU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xeU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0xfU] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0xfU] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x10U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x10U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x10U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x10U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x11U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x11U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x11U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x11U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x12U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x12U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x12U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x12U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x13U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x13U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x13U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x13U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0x14U] 
        = (0x7fU & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
           [0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0x14U] 
        = (0x3ffU & (vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list
                     [0x14U] >> 7U));
    vlSelf->ysyx_22050612_npc__DOT__inst = ((1U & (IData)(
                                                          (vlSelf->pc 
                                                           >> 2U)))
                                             ? (IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix 
                                                        >> 0x20U))
                                             : (IData)(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix));
    Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__inst);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst) 
           == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__imm_B = ((vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x1fU)
                                              ? (0xffffffffffffe000ULL 
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
                                                                                >> 7U))))))))
                                              : (((QData)((IData)(
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
                                                                             >> 7U))))))));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfff7fU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | ((0x100073U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                 << 7U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst) 
                       == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1 
        = vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2 
        = ((0x380U & (vlSelf->ysyx_22050612_npc__DOT__inst 
                      >> 5U)) | (0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
        = ((0x1fc00U & (vlSelf->ysyx_22050612_npc__DOT__inst 
                        >> 0xfU)) | ((0x380U & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2 
        = ((0xfc00U & (vlSelf->ysyx_22050612_npc__DOT__inst 
                       >> 0x10U)) | ((0x380U & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)));
    if ((vlSelf->ysyx_22050612_npc__DOT__inst >> 0x1fU)) {
        vlSelf->ysyx_22050612_npc__DOT__imm_I = (0xfffffffffffff000ULL 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U))));
        vlSelf->ysyx_22050612_npc__DOT__imm_U = (0xffffffff00000000ULL 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->ysyx_22050612_npc__DOT__inst))));
        vlSelf->ysyx_22050612_npc__DOT__imm_S = (0xfffffffffffff000ULL 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 7U))))));
    } else {
        vlSelf->ysyx_22050612_npc__DOT__imm_I = (QData)((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0x14U)));
        vlSelf->ysyx_22050612_npc__DOT__imm_U = ((QData)((IData)(
                                                                 (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 0xcU))) 
                                                 << 0xcU);
        vlSelf->ysyx_22050612_npc__DOT__imm_S = (((QData)((IData)(
                                                                  (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x19U))) 
                                                  << 5U) 
                                                 | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                       >> 7U)))));
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
        [(0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
        [(0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                   >> 0x14U))];
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xffcffU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1) 
                                                 << 8U));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
           == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                       == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1 
        = vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
           == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                       == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1 
        = vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
           == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                       == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1 
        = vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out;
    __Vtemp112[0x10U] = (0x150U | ((0xff000U & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                                << 0xcU)) 
                                   | ((0xf00000U & 
                                       ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                        << 0xcU)) | 
                                      (0xff000000U 
                                       & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                          << 0xcU)))));
    __Vtemp112[0x11U] = ((((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                           >> 0x14U) | (0xff000U & 
                                        ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                  >> 0x20U)) 
                                         << 0xcU))) 
                         | ((0xf00000U & ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                   >> 0x20U)) 
                                          << 0xcU)) 
                            | (0xff000000U & ((IData)(
                                                      ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                       >> 0x20U)) 
                                              << 0xcU))));
    __Vtemp112[0x12U] = (0x14000000U | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                 >> 0x20U)) 
                                        >> 0x14U));
    __Vtemp112[0x14U] = ((0xfffffU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U))) 
                         | ((0xf00000U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  >> 0x20U))) 
                            | (0xff000000U & (IData)(
                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                      >> 0x20U)))));
    __Vtemp112[0x15U] = (0x13000U | ((0xf00000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                   << 0x14U)) 
                                     | (0xff000000U 
                                        & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                           << 0x14U))));
    __Vtemp112[0x16U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0xcU) | ((0xf00000U & 
                                       ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                 >> 0x20U)) 
                                        << 0x14U)) 
                                      | (0xff000000U 
                                         & ((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                     >> 0x20U)) 
                                            << 0x14U))));
    __Vtemp112[0x1cU] = ((0xfffffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 4U)) | ((0xf00000U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                              >> 0x20U)) 
                                                     >> 4U)) 
                                                 | (0xf000000U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                >> 0x20U)) 
                                                       >> 4U))));
    __Vtemp112[0x1dU] = (0x700U | ((0xf0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                << 0x10U)) 
                                   | ((0xf00000U & 
                                       ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                        << 0x10U)) 
                                      | (0xff000000U 
                                         & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                            << 0x10U)))));
    __Vtemp112[0x1eU] = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                           >> 0x10U) | (0xf0000U & 
                                        ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  >> 0x20U)) 
                                         << 0x10U))) 
                         | ((0xf00000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                   >> 0x20U)) 
                                          << 0x10U)) 
                            | (0xff000000U & ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                       >> 0x20U)) 
                                              << 0x10U))));
    __Vtemp116[0xcU] = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x1cU) | (0xf0U & ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                         >> 0x20U)) 
                                                << 4U))) 
                        | ((0xfffff00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                   >> 0x20U)) 
                                          << 4U)) | 
                           (0xf0000000U & ((IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                    >> 0x20U)) 
                                           << 4U))));
    __Vtemp116[0xdU] = (0x180000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 0x1cU) | (
                                                   (0xf000000U 
                                                    & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                       << 0x18U)) 
                                                   | (0xf0000000U 
                                                      & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                         << 0x18U)))));
    __Vtemp116[0xeU] = ((0xffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                  >> 8U)) | (((0xffff00U 
                                               & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                  >> 8U)) 
                                              | (0xf000000U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                             >> 0x20U)) 
                                                    << 0x18U))) 
                                             | (0xf0000000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   << 0x18U))));
    __Vtemp116[0x10U] = (0x170U | ((0xffff000U & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                                  << 0xcU)) 
                                   | (0xf0000000U & 
                                      ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                       << 0xcU))));
    __Vtemp116[0x11U] = ((0xffU & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                   >> 0x14U)) | (((0xf00U 
                                                   & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                                      >> 0x14U)) 
                                                  | (0xffff000U 
                                                     & ((IData)(
                                                                ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))) 
                                                 | (0xf0000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                                >> 0x20U)) 
                                                       << 0xcU))));
    __Vtemp116[0x12U] = (0x16000000U | ((0xffU & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                           >> 0x20U)) 
                                                  >> 0x14U)) 
                                        | (0xf00U & 
                                           ((IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                     >> 0x20U)) 
                                            >> 0x14U))));
    __Vtemp116[0x13U] = ((0xffU & (IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)))) 
                         | ((0xfffff00U & (IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)))) 
                            | (0xf0000000U & (IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))))));
    __Vtemp116[0x14U] = ((0xffU & (IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                           >> 0x20U))) 
                         | ((0xfffff00U & (IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                   >> 0x20U))) 
                            | (0xf0000000U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                      >> 0x20U)))));
    __Vtemp116[0x1dU] = (0x1200U | ((0xfff0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                   << 0x10U)) 
                                    | (0xf0000000U 
                                       & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                          << 0x10U))));
    __Vtemp116[0x1eU] = ((0xffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   >> 0x10U)) | (((0xff00U 
                                                   & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                      >> 0x10U)) 
                                                  | (0xfff0000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                 >> 0x20U)) 
                                                        << 0x10U))) 
                                                 | (0xf0000000U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                >> 0x20U)) 
                                                       << 0x10U))));
    __Vtemp116[0x1fU] = (0x80000000U | ((0xffU & ((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                           >> 0x20U)) 
                                                  >> 0x10U)) 
                                        | (0xff00U 
                                           & ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                       >> 0x20U)) 
                                              >> 0x10U))));
    __Vtemp116[0x20U] = ((0xf0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   << 4U)) | ((0xfffff00U 
                                               & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                  << 4U)) 
                                              | (0xf0000000U 
                                                 & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                    << 4U))));
    __Vtemp116[0x25U] = (0x50U | ((0xffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                 << 0xcU)) 
                                  | (0xf0000000U & 
                                     ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                      << 0xcU))));
    __Vtemp116[0x26U] = ((0xffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   >> 0x14U)) | (((0xf00U 
                                                   & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                      >> 0x14U)) 
                                                  | (0xffff000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                 >> 0x20U)) 
                                                        << 0xcU))) 
                                                 | (0xf0000000U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                >> 0x20U)) 
                                                       << 0xcU))));
    __Vtemp116[0x27U] = (0x4000000U | ((0xffU & ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                          >> 0x20U)) 
                                                 >> 0x14U)) 
                                       | (0xf00U & 
                                          ((IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                    >> 0x20U)) 
                                           >> 0x14U))));
    __Vtemp133[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    __Vtemp133[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                              >> 0x20U));
    __Vtemp133[2U] = (8U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                            << 0x14U));
    __Vtemp133[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp133[4U] = (0x700000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   >> 0xcU));
    __Vtemp133[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 8U);
    __Vtemp133[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp133[7U] = (0x600U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                 << 0x1cU) | ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                       >> 0x20U)) 
                                              >> 0x18U)));
    __Vtemp133[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp133[9U] = (0x50000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 4U));
    __Vtemp133[0xaU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        << 0x10U);
    __Vtemp133[0xbU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      << 0x10U));
    __Vtemp133[0xcU] = (0x40000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0x10U));
    __Vtemp133[0xdU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        << 4U);
    __Vtemp133[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      << 4U));
    __Vtemp133[0xfU] = (0xc000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                    << 0x18U) | ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                          >> 0x20U)) 
                                                 >> 0x1cU)));
    __Vtemp133[0x10U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp133[0x11U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                  >> 0x20U)) >> 8U);
    __Vtemp133[0x12U] = (8U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                               << 0xcU));
    __Vtemp133[0x13U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp133[0x14U] = (0x400000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 0x14U));
    __Vtemp133[0x15U] = (IData)(vlSelf->pc);
    __Vtemp133[0x16U] = (IData)((vlSelf->pc >> 0x20U));
    __Vtemp133[0x17U] = (0x300U | ((IData)(vlSelf->pc) 
                                   << 0x14U));
    __Vtemp133[0x18U] = (((IData)(vlSelf->pc) >> 0xcU) 
                         | ((IData)((vlSelf->pc >> 0x20U)) 
                            << 0x14U));
    __Vtemp133[0x19U] = (0x20000000U | ((IData)((vlSelf->pc 
                                                 >> 0x20U)) 
                                        >> 0xcU));
    __Vtemp133[0x1aU] = ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                  << 0x20U)) << 8U);
    __Vtemp133[0x1bU] = (((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                   << 0x20U)) >> 0x18U) 
                         | ((IData)((((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                      << 0x20U) >> 0x20U)) 
                            << 8U));
    __Vtemp133[0x1cU] = (0x1b00000U | (((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                 << 0x20U)) 
                                        << 0x1cU) | 
                                       ((IData)((((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                  << 0x20U) 
                                                 >> 0x20U)) 
                                        >> 0x18U)));
    __Vtemp133[0x1dU] = ((0xffU & ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                            << 0x20U)) 
                                   >> 4U)) | ((0xfffff00U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                           << 0x20U)) 
                                                  >> 4U)) 
                                              | ((IData)(
                                                         (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                           << 0x20U) 
                                                          >> 0x20U)) 
                                                 << 0x1cU)));
    __Vtemp133[0x1eU] = ((0xffU & ((IData)((((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                             << 0x20U) 
                                            >> 0x20U)) 
                                   >> 4U)) | (0xfffff00U 
                                              & ((IData)(
                                                         (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                           << 0x20U) 
                                                          >> 0x20U)) 
                                                 >> 4U)));
    __Vtemp133[0x1fU] = (0x1a00U | ((0xfff0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                   << 0x10U)) 
                                    | (0xf0000000U 
                                       & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                          << 0x10U))));
    __Vtemp133[0x20U] = ((0xffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   >> 0x10U)) | (((0xff00U 
                                                   & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                      >> 0x10U)) 
                                                  | (0xfff0000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                 >> 0x20U)) 
                                                        << 0x10U))) 
                                                 | (0xf0000000U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                >> 0x20U)) 
                                                       << 0x10U))));
    __Vtemp133[0x21U] = (0x90000000U | ((0xffU & ((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                           >> 0x20U)) 
                                                  >> 0x10U)) 
                                        | (0xff00U 
                                           & ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                       >> 0x20U)) 
                                              >> 0x10U))));
    __Vtemp133[0x22U] = (1U | ((0xf0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                         << 4U)) | 
                               ((0xfffff00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                               << 4U)) 
                                | (0xf0000000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                  << 4U)))));
    __Vtemp133[0x23U] = __Vtemp116[0xcU];
    __Vtemp133[0x24U] = __Vtemp116[0xdU];
    __Vtemp133[0x25U] = __Vtemp116[0xeU];
    __Vtemp133[0x26U] = ((0xffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   >> 8U)) | (0xffff00U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                          >> 0x20U)) 
                                                 >> 8U)));
    __Vtemp133[0x27U] = __Vtemp116[0x10U];
    __Vtemp133[0x28U] = __Vtemp116[0x11U];
    __Vtemp133[0x29U] = __Vtemp116[0x12U];
    __Vtemp133[0x2aU] = __Vtemp116[0x13U];
    __Vtemp133[0x2bU] = __Vtemp116[0x14U];
    __Vtemp133[0x2cU] = (__Vtemp112[0x10U] << 8U);
    __Vtemp133[0x2dU] = ((__Vtemp112[0x10U] >> 0x18U) 
                         | (__Vtemp112[0x11U] << 8U));
    __Vtemp133[0x2eU] = ((__Vtemp112[0x11U] >> 0x18U) 
                         | (__Vtemp112[0x12U] << 8U));
    __Vtemp133[0x2fU] = ((__Vtemp112[0x12U] >> 0x18U) 
                         | ((0xfffff00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                           << 8U)) 
                            | (0xf0000000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                              << 8U))));
    __Vtemp133[0x30U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x18U) | (__Vtemp112[0x14U] 
                                       << 8U));
    __Vtemp133[0x31U] = ((__Vtemp112[0x14U] >> 0x18U) 
                         | (__Vtemp112[0x15U] << 8U));
    __Vtemp133[0x32U] = ((__Vtemp112[0x15U] >> 0x18U) 
                         | (__Vtemp112[0x16U] << 8U));
    __Vtemp133[0x33U] = ((__Vtemp112[0x16U] >> 0x18U) 
                         | (0xfffff00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                   >> 0x20U)) 
                                          >> 4U)));
    __Vtemp133[0x34U] = __Vtemp116[0x1dU];
    __Vtemp133[0x35U] = __Vtemp116[0x1eU];
    __Vtemp133[0x36U] = __Vtemp116[0x1fU];
    __Vtemp133[0x37U] = __Vtemp116[0x20U];
    __Vtemp133[0x38U] = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                           >> 0x1cU) | (0xf0U & ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                          >> 0x20U)) 
                                                 << 4U))) 
                         | (__Vtemp112[0x1cU] << 8U));
    __Vtemp133[0x39U] = ((__Vtemp112[0x1cU] >> 0x18U) 
                         | (__Vtemp112[0x1dU] << 8U));
    __Vtemp133[0x3aU] = ((__Vtemp112[0x1dU] >> 0x18U) 
                         | (__Vtemp112[0x1eU] << 8U));
    __Vtemp133[0x3bU] = ((__Vtemp112[0x1eU] >> 0x18U) 
                         | (0xffff00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  >> 0x20U)) 
                                         >> 8U)));
    __Vtemp133[0x3cU] = __Vtemp116[0x25U];
    __Vtemp133[0x3dU] = __Vtemp116[0x26U];
    __Vtemp133[0x3eU] = __Vtemp116[0x27U];
    __Vtemp147[0U] = (0x11U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                               << 0x14U));
    __Vtemp147[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp147[2U] = (0x1000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp147[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 8U);
    __Vtemp147[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp147[5U] = (0xf00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                 << 0x1cU) | ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                       >> 0x20U)) 
                                              >> 0x18U)));
    __Vtemp147[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp147[7U] = (0xe0000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 4U));
    __Vtemp147[8U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 0x10U);
    __Vtemp147[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x10U));
    __Vtemp147[0xaU] = (0xd0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0x10U));
    __Vtemp147[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        << 4U);
    __Vtemp147[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      << 4U));
    __Vtemp147[0xdU] = (0xc0U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                  << 0x18U) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U)) 
                                               >> 0x1cU)));
    __Vtemp147[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   << 0x18U));
    __Vtemp147[0xfU] = (0xa000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 8U));
    __Vtemp147[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         << 0xcU);
    __Vtemp147[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp147[0x12U] = (0x9000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0x14U));
    VL_CONCAT_WWW(2624,2016,608, __Vtemp148, __Vtemp133, __Vtemp147);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp149, __Vtemp148, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    __Vtemp163[0U] = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                               << 0x14U));
    __Vtemp163[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp163[2U] = (0x2b00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp163[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 8U);
    __Vtemp163[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp163[5U] = (0x2a00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                  << 0x1cU) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp163[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp163[7U] = (0x80000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 4U));
    __Vtemp163[8U] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                            << 0x10U));
    __Vtemp163[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x10U));
    __Vtemp163[0xaU] = (0x160000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0x10U));
    __Vtemp163[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        << 4U);
    __Vtemp163[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      << 4U));
    __Vtemp163[0xdU] = (0x150U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   << 0x18U) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
    __Vtemp163[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   << 0x18U));
    __Vtemp163[0xfU] = (0x13000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       >> 8U));
    __Vtemp163[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         << 0xcU);
    __Vtemp163[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp163[0x12U] = (0x12000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WWW(3296,2688,608, __Vtemp164, __Vtemp149, __Vtemp163);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp165, __Vtemp164, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    VL_ASSIGN_W(3360,vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3, __Vtemp165);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
        = ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
           * (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
        = VL_DIVS_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
        = VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    VL_EXTEND_WI(67,16, __Vtemp166, (0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    __Vtemp173[4U] = (0x80U | ((7U & ((IData)((((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x10U) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)(((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 8U)) << 9U) 
                                | (0x38U & ((IData)(
                                                    (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x10U) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp173[5U] = ((7U & ((IData)(((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                      << 8U)) >> 0x17U)) 
                      | ((0x38U & ((IData)(((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                            << 8U)) 
                                   >> 0x17U)) | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 8U)) 
                                                     >> 0x17U)) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 8U) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    __Vtemp173[6U] = (0x200U | ((7U & ((IData)((((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 8U) 
                                                >> 0x20U)) 
                                       >> 0x17U)) | 
                                ((0x38U & ((IData)(
                                                   (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                     << 8U) 
                                                    >> 0x20U)) 
                                           >> 0x17U)) 
                                 | ((__Vtemp166[0U] 
                                     << 0xcU) | (0x1c0U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 8U) 
                                                             >> 0x20U)) 
                                                    >> 0x17U))))));
    __Vtemp173[7U] = ((7U & (__Vtemp166[0U] >> 0x14U)) 
                      | ((0x38U & (__Vtemp166[0U] >> 0x14U)) 
                         | ((0x1c0U & (__Vtemp166[0U] 
                                       >> 0x14U)) | 
                            ((0xe00U & (__Vtemp166[0U] 
                                        >> 0x14U)) 
                             | (__Vtemp166[1U] << 0xcU)))));
    __Vtemp173[8U] = ((7U & (__Vtemp166[1U] >> 0x14U)) 
                      | ((0x38U & (__Vtemp166[1U] >> 0x14U)) 
                         | ((0x1c0U & (__Vtemp166[1U] 
                                       >> 0x14U)) | 
                            ((0xe00U & (__Vtemp166[1U] 
                                        >> 0x14U)) 
                             | (__Vtemp166[2U] << 0xcU)))));
    __Vtemp175[4U] = (0xc0U | ((7U & ((IData)((((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x18U) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)(((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 0x10U)) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x18U) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp175[5U] = ((7U & ((IData)(((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                      << 0x10U)) >> 0x17U)) 
                      | ((0x38U & ((IData)(((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                            << 0x10U)) 
                                   >> 0x17U)) | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x10U)) 
                                                     >> 0x17U)) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x10U) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    __Vtemp177[4U] = (0x100U | ((7U & ((IData)((((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x20U) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (((IData)(((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 0x18U)) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)))));
    __Vtemp177[5U] = ((7U & ((IData)(((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                      << 0x18U)) >> 0x17U)) 
                      | ((0x38U & ((IData)(((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                            << 0x18U)) 
                                   >> 0x17U)) | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x18U)) 
                                                     >> 0x17U)) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x18U) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    __Vtemp177[9U] = ((7U & (__Vtemp173[4U] >> 0x1aU)) 
                      | ((0x38U & (__Vtemp173[4U] >> 0x1aU)) 
                         | (__Vtemp173[5U] << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0U] 
        = (IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                   << 0x30U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[1U] 
        = (IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                    << 0x30U) >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[2U] 
        = (6U | ((IData)(((QData)((IData)((0xffffU 
                                           & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                          << 0x28U)) << 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[3U] 
        = (((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                     << 0x28U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x28U) 
                                                      >> 0x20U)) 
                                             << 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
        = (0x28U | (((IData)(((QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                              << 0x20U)) << 6U) | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x28U) 
                                                            >> 0x20U)) 
                                                   >> 0x1dU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[5U] 
        = ((7U & ((IData)(((QData)((IData)((0xffffU 
                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                           << 0x20U)) >> 0x1aU)) | 
           ((0x38U & ((IData)(((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                               << 0x20U)) >> 0x1aU)) 
            | ((IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                         << 0x20U) >> 0x20U)) << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
        = __Vtemp177[4U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[7U] 
        = __Vtemp177[5U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
        = ((7U & ((IData)((((QData)((IData)((0xffffU 
                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                            << 0x18U) >> 0x20U)) >> 0x17U)) 
           | (__Vtemp175[4U] << 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[9U] 
        = ((__Vtemp175[4U] >> 0x1dU) | (__Vtemp175[5U] 
                                        << 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
        = ((__Vtemp175[5U] >> 0x1dU) | ((0x38U & ((IData)(
                                                          (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 0x10U) 
                                                           >> 0x20U)) 
                                                  >> 0x14U)) 
                                        | (__Vtemp173[4U] 
                                           << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xbU] 
        = __Vtemp177[9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
        = ((7U & (__Vtemp173[5U] >> 0x1aU)) | ((0x38U 
                                                & (__Vtemp173[5U] 
                                                   >> 0x1aU)) 
                                               | (__Vtemp173[6U] 
                                                  << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xdU] 
        = ((7U & (__Vtemp173[6U] >> 0x1aU)) | ((0x38U 
                                                & (__Vtemp173[6U] 
                                                   >> 0x1aU)) 
                                               | (__Vtemp173[7U] 
                                                  << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xeU] 
        = ((7U & (__Vtemp173[7U] >> 0x1aU)) | ((0x38U 
                                                & (__Vtemp173[7U] 
                                                   >> 0x1aU)) 
                                               | (__Vtemp173[8U] 
                                                  << 6U)));
    VL_EXTEND_WI(67,8, __Vtemp179, (0xffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    __Vtemp186[4U] = (0x80U | ((7U & ((IData)((((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x10U) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)(((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 8U)) << 9U) 
                                | (0x38U & ((IData)(
                                                    (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x10U) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp186[5U] = ((7U & ((IData)(((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                      << 8U)) >> 0x17U)) 
                      | ((0x38U & ((IData)(((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                            << 8U)) 
                                   >> 0x17U)) | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 8U)) 
                                                     >> 0x17U)) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 8U) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    __Vtemp186[6U] = (0x200U | ((7U & ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 8U) 
                                                >> 0x20U)) 
                                       >> 0x17U)) | 
                                ((0x38U & ((IData)(
                                                   (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                     << 8U) 
                                                    >> 0x20U)) 
                                           >> 0x17U)) 
                                 | ((__Vtemp179[0U] 
                                     << 0xcU) | (0x1c0U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 8U) 
                                                             >> 0x20U)) 
                                                    >> 0x17U))))));
    __Vtemp186[7U] = ((7U & (__Vtemp179[0U] >> 0x14U)) 
                      | ((0x38U & (__Vtemp179[0U] >> 0x14U)) 
                         | ((0x1c0U & (__Vtemp179[0U] 
                                       >> 0x14U)) | 
                            ((0xe00U & (__Vtemp179[0U] 
                                        >> 0x14U)) 
                             | (__Vtemp179[1U] << 0xcU)))));
    __Vtemp186[8U] = ((7U & (__Vtemp179[1U] >> 0x14U)) 
                      | ((0x38U & (__Vtemp179[1U] >> 0x14U)) 
                         | ((0x1c0U & (__Vtemp179[1U] 
                                       >> 0x14U)) | 
                            ((0xe00U & (__Vtemp179[1U] 
                                        >> 0x14U)) 
                             | (__Vtemp179[2U] << 0xcU)))));
    __Vtemp188[4U] = (0xc0U | ((7U & ((IData)((((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x18U) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)(((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 0x10U)) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x18U) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp188[5U] = ((7U & ((IData)(((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                      << 0x10U)) >> 0x17U)) 
                      | ((0x38U & ((IData)(((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                            << 0x10U)) 
                                   >> 0x17U)) | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x10U)) 
                                                     >> 0x17U)) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x10U) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    __Vtemp190[4U] = (0x100U | ((7U & ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x20U) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (((IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 0x18U)) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)))));
    __Vtemp190[5U] = ((7U & ((IData)(((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                      << 0x18U)) >> 0x17U)) 
                      | ((0x38U & ((IData)(((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                            << 0x18U)) 
                                   >> 0x17U)) | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x18U)) 
                                                     >> 0x17U)) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x18U) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    __Vtemp190[9U] = ((7U & (__Vtemp186[4U] >> 0x1aU)) 
                      | ((0x38U & (__Vtemp186[4U] >> 0x1aU)) 
                         | (__Vtemp186[5U] << 6U)));
    __Vtemp192[4U] = (0x14000U | ((0x7ffU & ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x28U) 
                                                      >> 0x20U)) 
                                             >> 0x12U)) 
                                  | (((IData)(((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                               << 0x20U)) 
                                      << 0x11U) | (0x3800U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                << 0x28U) 
                                                               >> 0x20U)) 
                                                      >> 0x12U)))));
    __Vtemp192[5U] = ((0x7ffU & ((IData)(((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                          << 0x20U)) 
                                 >> 0xfU)) | ((0x3800U 
                                               & ((IData)(
                                                          ((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                           << 0x20U)) 
                                                  >> 0xfU)) 
                                              | ((0x1c000U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x20U)) 
                                                     >> 0xfU)) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                              << 0x20U) 
                                                             >> 0x20U)) 
                                                    << 0x11U))));
    __Vtemp192[9U] = ((0x7ffU & (__Vtemp188[4U] >> 0x12U)) 
                      | ((0x3800U & (__Vtemp188[4U] 
                                     >> 0x12U)) | (
                                                   __Vtemp188[5U] 
                                                   << 0xeU)));
    __Vtemp192[0xaU] = ((0x7ffU & (__Vtemp188[5U] >> 0x12U)) 
                        | ((0x3800U & (__Vtemp188[5U] 
                                       >> 0x12U)) | 
                           ((0x1c000U & ((IData)((((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                   << 0x10U) 
                                                  >> 0x20U)) 
                                         >> 9U)) | 
                            (__Vtemp186[4U] << 0x11U))));
    __Vtemp192[0xbU] = ((0x7ffU & (__Vtemp186[4U] >> 0xfU)) 
                        | (__Vtemp190[9U] << 0xbU));
    __Vtemp193[3U] = ((((IData)(((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                 << 0x30U)) >> 0x1dU) 
                       | (0xfffff8U & ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x30U) 
                                                >> 0x20U)) 
                                       << 3U))) | (0xff000000U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                << 0x30U) 
                                                               >> 0x20U)) 
                                                      << 3U)));
    __Vtemp193[4U] = (0x30U | (((0xffffc0U & ((IData)(
                                                      ((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x28U)) 
                                              << 6U)) 
                                | ((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                             << 0x30U) 
                                            >> 0x20U)) 
                                   >> 0x1dU)) | (0xff000000U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x28U)) 
                                                    << 6U))));
    __Vtemp193[8U] = (((7U & ((IData)((((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                        << 0x20U) >> 0x20U)) 
                              >> 0x17U)) | (0xfffff8U 
                                            & (__Vtemp190[4U] 
                                               << 3U))) 
                      | (0xff000000U & (__Vtemp190[4U] 
                                        << 3U)));
    __Vtemp193[9U] = (((__Vtemp190[4U] >> 0x1dU) | 
                       (0xfffff8U & (__Vtemp190[5U] 
                                     << 3U))) | (0xff000000U 
                                                 & (__Vtemp190[5U] 
                                                    << 3U)));
    __Vtemp193[0xaU] = (((__Vtemp190[5U] >> 0x1dU) 
                         | ((0x38U & ((IData)((((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x18U) 
                                               >> 0x20U)) 
                                      >> 0x14U)) | 
                            (0xffffc0U & (__Vtemp188[4U] 
                                          << 6U)))) 
                        | (__Vtemp192[9U] << 0x18U));
    __Vtemp193[0xeU] = (((__Vtemp190[9U] >> 0x1dU) 
                         | ((0x38U & (__Vtemp186[5U] 
                                      >> 0x17U)) | 
                            ((0x1c0U & (__Vtemp186[5U] 
                                        >> 0x17U)) 
                             | (0xfffe00U & (__Vtemp186[6U] 
                                             << 9U))))) 
                        | (0xff000000U & (__Vtemp186[6U] 
                                          << 9U)));
    __Vtemp193[0xfU] = (((7U & (__Vtemp186[6U] >> 0x17U)) 
                         | ((0x38U & (__Vtemp186[6U] 
                                      >> 0x17U)) | 
                            ((0x1c0U & (__Vtemp186[6U] 
                                        >> 0x17U)) 
                             | (0xfffe00U & (__Vtemp186[7U] 
                                             << 9U))))) 
                        | (0xff000000U & (__Vtemp186[7U] 
                                          << 9U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0U] = 0U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[1U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
           << 0x18U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[2U] 
        = (7U | ((0xfffff8U & ((IData)(((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                        << 0x30U)) 
                               << 3U)) | (0xff000000U 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                      << 0x30U)) 
                                             << 3U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[3U] 
        = __Vtemp193[3U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
        = __Vtemp193[4U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[5U] 
        = (((7U & ((IData)(((QData)((IData)((0xffU 
                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                            << 0x28U)) >> 0x1aU)) | 
            ((0x38U & ((IData)(((QData)((IData)((0xffU 
                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                << 0x28U)) >> 0x1aU)) 
             | (0xffffc0U & ((IData)((((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                       << 0x28U) >> 0x20U)) 
                             << 6U)))) | (__Vtemp192[4U] 
                                          << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
        = ((__Vtemp192[4U] >> 8U) | (__Vtemp192[5U] 
                                     << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
        = ((__Vtemp192[5U] >> 8U) | (0xff000000U & 
                                     ((IData)((((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                << 0x20U) 
                                               >> 0x20U)) 
                                      << 9U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
        = __Vtemp193[8U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
        = __Vtemp193[9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
        = __Vtemp193[0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
        = ((__Vtemp192[9U] >> 8U) | (__Vtemp192[0xaU] 
                                     << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
        = ((__Vtemp192[0xaU] >> 8U) | (__Vtemp192[0xbU] 
                                       << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
        = ((__Vtemp192[0xbU] >> 8U) | (0xff000000U 
                                       & (__Vtemp190[9U] 
                                          << 3U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
        = __Vtemp193[0xeU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
        = __Vtemp193[0xfU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
        = ((7U & (__Vtemp186[7U] >> 0x17U)) | ((0x38U 
                                                & (__Vtemp186[7U] 
                                                   >> 0x17U)) 
                                               | ((0x1c0U 
                                                   & (__Vtemp186[7U] 
                                                      >> 0x17U)) 
                                                  | (0xfffe00U 
                                                     & (__Vtemp186[8U] 
                                                        << 9U)))));
    __Vtemp240[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2);
    __Vtemp240[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                              >> 0x20U));
    __Vtemp240[2U] = (8U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                            << 0x14U));
    __Vtemp240[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                       >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp240[4U] = (0x700000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                            >> 0x20U)) 
                                   >> 0xcU));
    __Vtemp240[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      << 8U);
    __Vtemp240[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                       >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp240[7U] = (0x600U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                 << 0x1cU) | ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                       >> 0x20U)) 
                                              >> 0x18U)));
    __Vtemp240[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                       >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp240[9U] = (0x50000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     >> 4U));
    __Vtemp240[0xaU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        << 0x10U);
    __Vtemp240[0xbU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                         >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      << 0x10U));
    __Vtemp240[0xcU] = (0x40000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    >> 0x10U));
    __Vtemp240[0xdU] = ((IData)((QData)((IData)((0x3fU 
                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                    >> 0x14U))))) 
                        << 4U);
    __Vtemp240[0xeU] = (((IData)((QData)((IData)((0x3fU 
                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                     >> 0x14U))))) 
                         >> 0x1cU) | ((IData)(((QData)((IData)(
                                                               (0x3fU 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      << 4U));
    __Vtemp240[0xfU] = (0xc000U | (((IData)((QData)((IData)(
                                                            (0x3fU 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0x14U))))) 
                                    << 0x18U) | ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                              >> 0x14U)))) 
                                                          >> 0x20U)) 
                                                 >> 0x1cU)));
    __Vtemp240[0x10U] = (((IData)((QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U))))) 
                          >> 8U) | ((IData)(((QData)((IData)(
                                                             (0x3fU 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0x14U)))) 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp240[0x11U] = ((IData)(((QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U)))) 
                                  >> 0x20U)) >> 8U);
    __Vtemp240[0x12U] = (8U | ((IData)((QData)((IData)(
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x14U))))) 
                               << 0xcU));
    __Vtemp240[0x13U] = (((IData)((QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U))))) 
                          >> 0x14U) | ((IData)(((QData)((IData)(
                                                                (0x3fU 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U)))) 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp240[0x14U] = (0x400000U | ((IData)(((QData)((IData)(
                                                               (0x3fU 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      >> 0x14U));
    __Vtemp240[0x15U] = (IData)(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
                                                                            >> 0x14U)))))))));
    __Vtemp240[0x16U] = (IData)((((vlSelf->ysyx_22050612_npc__DOT__inst 
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
                                 >> 0x20U));
    __Vtemp240[0x17U] = (0x300U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                                   << 0x14U));
    __Vtemp240[0x18U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                          >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                               >> 0x20U)) 
                                      << 0x14U));
    __Vtemp240[0x19U] = (0x20000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                                 >> 0x20U)) 
                                        >> 0xcU));
    __Vtemp240[0x1aU] = ((IData)((QData)((IData)((0x1fU 
                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                         << 8U);
    __Vtemp240[0x1bU] = (((IData)((QData)((IData)((0x1fU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                          >> 0x18U) | ((IData)(((QData)((IData)(
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                >> 0x20U)) 
                                       << 8U));
    __Vtemp240[0x1cU] = (0x1b00000U | (((IData)((QData)((IData)(
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                                        << 0x1cU) | 
                                       ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 >> 0x20U)) 
                                        >> 0x18U)));
    __Vtemp240[0x1dU] = (((IData)((QData)((IData)((0x1fU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                          >> 4U) | ((IData)(((QData)((IData)(
                                                             (0x1fU 
                                                              & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                             >> 0x20U)) 
                                    << 0x1cU));
    __Vtemp240[0x1eU] = ((IData)(((QData)((IData)((0x1fU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                  >> 0x20U)) >> 4U);
    __Vtemp240[0x1fU] = (0x1a00U | ((IData)((QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                                    << 0x10U));
    __Vtemp240[0x20U] = (((IData)((QData)((IData)((0x1fU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                          >> 0x10U) | ((IData)(((QData)((IData)(
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp240[0x21U] = (0x90000000U | ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 >> 0x20U)) 
                                        >> 0x10U));
    __Vtemp240[0x22U] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                               << 4U));
    __Vtemp240[0x23U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp240[0x24U] = (0x180000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                       << 0x18U) | 
                                      ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       >> 0x1cU)));
    __Vtemp240[0x25U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp240[0x26U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                  >> 0x20U)) >> 8U);
    __Vtemp240[0x27U] = (0x170U | ((IData)((QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0x14U))))) 
                                   << 0xcU));
    __Vtemp240[0x28U] = (((IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U))))) 
                          >> 0x14U) | ((IData)(((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U)))) 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp240[0x29U] = (0x16000000U | ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 0x14U)))) 
                                                 >> 0x20U)) 
                                        >> 0x14U));
    __Vtemp240[0x2aU] = (IData)((QData)((IData)((0x1fU 
                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                    >> 0x14U)))));
    __Vtemp240[0x2bU] = (IData)(((QData)((IData)((0x1fU 
                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                     >> 0x14U)))) 
                                 >> 0x20U));
    __Vtemp240[0x2cU] = (0x15000U | ((IData)((QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0x14U))))) 
                                     << 0x14U));
    __Vtemp240[0x2dU] = (((IData)((QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U))))) 
                          >> 0xcU) | ((IData)(((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      << 0x14U));
    __Vtemp240[0x2eU] = ((IData)(((QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U)))) 
                                  >> 0x20U)) >> 0xcU);
    __Vtemp240[0x2fU] = (0x14U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                  << 8U));
    __Vtemp240[0x30U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 8U));
    __Vtemp240[0x31U] = (0x1300000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                        << 0x1cU) | 
                                       ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        >> 0x18U)));
    __Vtemp240[0x32U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x1cU));
    __Vtemp240[0x33U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                  >> 0x20U)) >> 4U);
    __Vtemp240[0x34U] = (0x1200U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                    << 0x10U));
    __Vtemp240[0x35U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp240[0x36U] = (0x80000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        >> 0x10U));
    __Vtemp240[0x37U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                         << 4U);
    __Vtemp240[0x38U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp240[0x39U] = (0x70000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                      << 0x18U) | ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                            >> 0x20U)) 
                                                   >> 0x1cU)));
    __Vtemp240[0x3aU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp240[0x3bU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                  >> 0x20U)) >> 8U);
    __Vtemp240[0x3cU] = (0x50U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                  << 0xcU));
    __Vtemp240[0x3dU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp240[0x3eU] = (0x4000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       >> 0x14U));
    __Vtemp254[0U] = (0x11U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                               << 0x14U));
    __Vtemp254[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                       >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp254[2U] = (0x1000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp254[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                      << 8U);
    __Vtemp254[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp254[5U] = (0xf00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                 << 0x1cU) | ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                       >> 0x20U)) 
                                              >> 0x18U)));
    __Vtemp254[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp254[7U] = (0xe0000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     >> 4U));
    __Vtemp254[8U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                      << 0x10U);
    __Vtemp254[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    << 0x10U));
    __Vtemp254[0xaU] = (0xd0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    >> 0x10U));
    __Vtemp254[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        << 4U);
    __Vtemp254[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                         >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      << 4U));
    __Vtemp254[0xdU] = (0xc0U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                  << 0x18U) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                        >> 0x20U)) 
                                               >> 0x1cU)));
    __Vtemp254[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                         >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                            >> 0x20U)) 
                                   << 0x18U));
    __Vtemp254[0xfU] = (0xa000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                               >> 0x20U)) 
                                      >> 8U));
    __Vtemp254[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                         << 0xcU);
    __Vtemp254[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp254[0x12U] = (0x9000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    >> 0x14U));
    VL_CONCAT_WWW(2624,2016,608, __Vtemp255, __Vtemp240, __Vtemp254);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp256, __Vtemp255, vlSelf->ysyx_22050612_npc__DOT__imm_S);
    __Vtemp270[0U] = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                               << 0x14U));
    __Vtemp270[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                       >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp270[2U] = (0x2b00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp270[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                      << 8U);
    __Vtemp270[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp270[5U] = (0x2a00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                  << 0x1cU) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp270[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp270[7U] = (0x80000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     >> 4U));
    __Vtemp270[8U] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                            << 0x10U));
    __Vtemp270[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    << 0x10U));
    __Vtemp270[0xaU] = (0x160000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     >> 0x10U));
    __Vtemp270[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        << 4U);
    __Vtemp270[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                         >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      << 4U));
    __Vtemp270[0xdU] = (0x150U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                   << 0x18U) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
    __Vtemp270[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                         >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                            >> 0x20U)) 
                                   << 0x18U));
    __Vtemp270[0xfU] = (0x13000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                >> 0x20U)) 
                                       >> 8U));
    __Vtemp270[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                         << 0xcU);
    __Vtemp270[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                          >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                                >> 0x20U)) 
                                       << 0xcU));
    __Vtemp270[0x12U] = (0x12000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WWW(3296,2688,608, __Vtemp271, __Vtemp256, __Vtemp270);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp272, __Vtemp271, vlSelf->ysyx_22050612_npc__DOT__imm_I);
    VL_ASSIGN_W(3360,vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3, __Vtemp272);
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfff80U 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | (IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0x3ffU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | (((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1) 
                                                  << 0xcU) 
                                                 | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1) 
                                                    << 0xaU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xcU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xdU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xeU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xfU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x10U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x11U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x12U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x11U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x13U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x12U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x14U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x13U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x14U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x15U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x16U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x17U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x18U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x17U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x19U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x18U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1aU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x19U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1bU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1aU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1cU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1bU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1cU] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1dU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1cU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1eU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1dU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1fU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1eU] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x20U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1fU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x21U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x20U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x22U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x21U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x23U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x22U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x24U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x23U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x24U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x25U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x24U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x26U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x25U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x27U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x26U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x28U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x27U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x29U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x28U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x29U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x10U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x10U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2bU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2cU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2dU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2cU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2eU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2dU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2fU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2eU] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x30U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2fU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x31U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x30U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x31U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x32U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x31U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x33U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x32U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x34U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x33U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x35U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x34U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x36U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x35U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x37U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x36U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x38U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x37U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x39U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x38U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x39U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3aU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x39U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3bU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3aU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3cU] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3bU] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x17U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3dU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3cU] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x17U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3eU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3dU] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x17U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3eU] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x18U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3fU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x18U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x40U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x18U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x41U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x19U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x42U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x41U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x19U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x43U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x42U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x19U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x44U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x43U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x45U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x44U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x46U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x45U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x46U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x47U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x46U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x48U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x47U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x49U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x48U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4aU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x49U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4bU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4aU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4cU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4bU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4dU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4cU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4eU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4dU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4eU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4fU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4eU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x50U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x4fU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x51U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x50U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1fU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x52U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x51U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1fU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x53U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x52U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x1fU][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x53U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x20U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x54U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x20U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x55U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x20U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x56U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x21U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x57U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x56U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x21U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x58U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x57U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x21U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x59U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x58U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x22U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5aU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x59U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x22U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5bU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5aU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x22U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5bU] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x23U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5cU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5bU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x23U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5dU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5cU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x23U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5eU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5dU] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x24U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5fU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5eU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x24U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x60U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x5fU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x24U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x61U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x60U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x25U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x62U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x61U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x25U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x63U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x62U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x25U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x63U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x26U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x64U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x63U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x26U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x65U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x64U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x26U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x66U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x65U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x27U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x67U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x66U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x27U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x68U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x67U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x27U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x68U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[2U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[3U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
                 >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[4U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[5U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
                 >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[7U] 
            << 0x17U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[6U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
            << 0x17U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[7U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
                 >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[9U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[9U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
                 >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xbU] 
            << 0x11U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
            << 0x11U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xbU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
                 >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xdU] 
            << 0xeU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xeU] 
            << 0xeU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xdU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xeU] 
                 >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[2U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[3U] 
                         >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
                 >> 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[5U] 
                         >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
                 >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
            << 0x17U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
            << 0x17U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
                         >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
                 >> 9U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
                 >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
            << 0x11U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
            << 0x11U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
                         >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
                 >> 0xfU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
            << 0xeU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
            << 0xeU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
                        >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
                 >> 0x12U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
            << 0xbU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
                        >> 0x15U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
            << 0xbU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
                        >> 0x15U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7U][2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
                 >> 0x15U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xcU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xdU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xeU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xfU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x10U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x11U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x12U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x11U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x13U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x12U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x14U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x13U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x14U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x15U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x16U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x17U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x18U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x17U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x19U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x18U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1aU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x19U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1bU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1aU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1cU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1bU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1cU] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1dU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1cU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1eU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1dU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1fU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1eU] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x20U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1fU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x21U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x20U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x22U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x21U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x23U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x22U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x24U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x23U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x24U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x25U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x24U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x26U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x25U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x27U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x26U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x28U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x27U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x29U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x28U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x29U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x10U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x10U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2bU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2cU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2dU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2cU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2eU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2dU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2fU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2eU] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x30U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2fU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x31U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x30U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x31U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x32U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x31U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x33U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x32U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x34U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x33U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x35U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x34U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x36U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x35U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x37U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x36U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x38U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x37U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x39U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x38U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x39U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3aU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x39U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3bU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3aU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3cU] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3bU] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x17U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3dU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3cU] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x17U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3eU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3dU] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x17U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3eU] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x18U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3fU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x18U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x40U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x18U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x41U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x19U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x42U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x41U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x19U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x43U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x42U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x19U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x44U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x43U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x45U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x44U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x46U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x45U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x46U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x47U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x46U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x48U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x47U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x49U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x48U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4aU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x49U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4bU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4aU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4cU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4bU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4dU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4cU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4eU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4dU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4eU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4fU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4eU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x50U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x4fU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x51U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x50U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1fU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x52U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x51U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1fU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x53U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x52U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x1fU][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x53U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x20U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x54U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x20U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x55U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x20U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x56U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x21U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x57U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x56U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x21U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x58U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x57U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x21U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x59U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x58U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x22U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5aU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x59U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x22U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5bU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5aU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x22U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5bU] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x23U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5cU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5bU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x23U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5dU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5cU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x23U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5eU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5dU] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x24U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5fU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5eU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x24U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x60U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x5fU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x24U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x61U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x60U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x25U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x62U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x61U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x25U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x63U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x62U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x25U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x63U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x26U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x64U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x63U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x26U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x65U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x64U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x26U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x66U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x65U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x27U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x67U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x66U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x27U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x68U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x67U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x27U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x68U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((vlSelf->ysyx_22050612_npc__DOT__opcode 
            == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [1U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [2U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [3U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [4U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [5U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [6U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [7U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [8U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [9U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0xaU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0xbU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0xcU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0xdU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0xeU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0xfU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x10U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x11U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x12U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x13U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x14U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x15U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x16U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x17U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x18U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x19U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x20U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x21U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x22U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x23U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x24U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x27U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x10U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x11U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x12U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x13U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x14U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x15U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x16U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x17U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x17U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x18U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x18U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x19U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x19U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x1aU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x1aU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x1bU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x1bU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x1cU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x1cU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x1dU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x1dU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x1eU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x1eU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x1fU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x1fU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x1fU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x1fU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x1fU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x20U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x20U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x20U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x20U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x20U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x21U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x21U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x21U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x21U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x21U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x22U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x22U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x22U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x22U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x22U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x23U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x23U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x23U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x23U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x23U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x24U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x24U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x24U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x24U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x24U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x25U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x25U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x25U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x25U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x25U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x26U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x26U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x26U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x26U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x26U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x27U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x27U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x27U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x27U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x27U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0xeU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0xfU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x10U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x11U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x12U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x13U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x14U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x15U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x16U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x17U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x17U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x18U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x18U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x19U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x19U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x1aU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x1aU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x1bU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x1bU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x1cU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x1cU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x1dU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x1dU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x1eU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x1eU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x1fU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x1fU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x1fU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x1fU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x1fU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x20U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x20U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x20U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x20U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x20U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x21U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x21U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x21U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x21U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x21U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x22U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x22U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x22U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x22U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x22U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x23U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x23U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x23U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x23U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x23U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x24U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x24U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x24U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x24U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x24U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x25U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x25U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x25U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x25U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x25U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x26U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x26U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x26U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x26U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x26U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x27U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x27U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x27U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x27U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x27U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x1fU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x20U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x21U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x22U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x23U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x24U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x25U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x26U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x27U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x1fU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x20U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x21U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x22U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x23U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x24U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x25U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x26U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x27U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
           + ((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
               ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
               : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    VL_EXTEND_WQ(72,64, __Vtemp1054, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0U] 
        = (IData)(VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[1U] 
        = (IData)((VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[2U] 
        = (0xaU | ((IData)(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                   << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[3U] 
        = (((IData)(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
            >> 0x18U) | ((IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
        = (0x900U | (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                      << 0x10U) | ((IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[5U] 
        = (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
            >> 0x10U) | ((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
        = (0x80000U | (((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                 >> 0x20U)) >> 0x10U) 
                       | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                   ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                          << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[7U] 
        = ((0xffffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                       >> 8U)) | ((0xff0000U & ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                         ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                                                >> 8U)) 
                                  | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                               ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                              >> 0x20U)) 
                                     << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[8U] 
        = (0x7000000U | ((0xffffU & ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                               ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                              >> 0x20U)) 
                                     >> 8U)) | (0xff0000U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                             ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                            >> 0x20U)) 
                                                   >> 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[9U] 
        = ((0xffffU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                               | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))) 
           | (0xffff0000U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xaU] 
        = ((0xffffU & (IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                               >> 0x20U))) | (0xffff0000U 
                                              & (IData)(
                                                        ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                          | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                         >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xbU] 
        = (6U | ((0xff00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                             << 8U)) | (0xffff0000U 
                                        & ((IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                    & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                                           << 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xcU] 
        = ((((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                      & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
             >> 0x18U) | (0xff00U & ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                               & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                              >> 0x20U)) 
                                     << 8U))) | (0xffff0000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                              & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                             >> 0x20U)) 
                                                    << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
        = (0x400U | (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                               >> 0x20U)) >> 0x18U) 
                     | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                  < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                  ? 1ULL : 0ULL)) << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xeU] 
        = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                      < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                      ? 1ULL : 0ULL)) >> 0x10U) | ((IData)(
                                                           (((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                              < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
        = (0x30000U | (((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                   < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                   ? 1ULL : 0ULL) >> 0x20U)) 
                        >> 0x10U) | ((IData)((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                               ? 1ULL
                                               : 0ULL)) 
                                     << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x10U] 
        = ((0xffffU & ((IData)((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                 ? 1ULL : 0ULL)) >> 8U)) 
           | ((0xff0000U & ((IData)((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)) 
                            >> 8U)) | ((IData)(((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                  ? 1ULL
                                                  : 0ULL) 
                                                >> 0x20U)) 
                                       << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x11U] 
        = (0x2000000U | ((0xffffU & ((IData)(((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                ? 1ULL
                                                : 0ULL) 
                                              >> 0x20U)) 
                                     >> 8U)) | (0xff0000U 
                                                & ((IData)(
                                                           ((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   >> 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x12U] 
        = ((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result)) 
           | (0xffff0000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x13U] 
        = ((0xffffU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
                               >> 0x20U))) | (0xffff0000U 
                                              & (IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
                                                         >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x14U] 
        = (1U | ((0xff00U & (__Vtemp1054[0U] << 8U)) 
                 | (0xffff0000U & (__Vtemp1054[0U] 
                                   << 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
        = (((__Vtemp1054[0U] >> 0x18U) | (0xff00U & 
                                          (__Vtemp1054[1U] 
                                           << 8U))) 
           | (0xffff0000U & (__Vtemp1054[1U] << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
        = ((__Vtemp1054[1U] >> 0x18U) | (0xff00U & 
                                         (__Vtemp1054[2U] 
                                          << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[3U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[2U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[3U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
                    >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[5U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[5U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
                    >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[7U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[8U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[7U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[8U] 
           >> 0x18U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xbU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xcU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xbU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xcU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
                    >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xeU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xeU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
                    >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x10U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x11U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x11U] 
           >> 0x18U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x12U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x13U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x14U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x14U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0U] 
        = (IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x3fU))) ? (4ULL 
                                                 + vlSelf->pc)
                    : (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                       + vlSelf->pc)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[1U] 
        = (IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x3fU))) ? (4ULL 
                                                  + vlSelf->pc)
                     : (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc)) >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[2U] 
        = (0xaU | ((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x3fU)))
                             ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                + vlSelf->pc) : (4ULL 
                                                 + vlSelf->pc))) 
                   << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[3U] 
        = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x3fU))) ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                   + vlSelf->pc)
                      : (4ULL + vlSelf->pc))) >> 0xcU) 
           | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                       >> 0x3fU))) ? 
                        (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc)) 
                       >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[4U] 
        = (0x900000U | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x3fU)))
                                   ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                      + vlSelf->pc)
                                   : (4ULL + vlSelf->pc)) 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[5U] 
        = ((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x3fU))) ? (4ULL 
                                                  + vlSelf->pc)
                     : (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc))) << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[6U] 
        = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x3fU))) ? (4ULL 
                                                   + vlSelf->pc)
                      : (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc))) >> 0x18U) 
           | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                       >> 0x3fU))) ? 
                        (4ULL + vlSelf->pc) : (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                               + vlSelf->pc)) 
                       >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
        = (0x800U | (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x3fU)))
                                ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                   + vlSelf->pc) : 
                               (4ULL + vlSelf->pc))) 
                      << 0x1cU) | ((IData)((((1U & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                            >> 0x3fU)))
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                 + vlSelf->pc)) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[8U] 
        = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x3fU))) ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                   + vlSelf->pc)
                      : (4ULL + vlSelf->pc))) >> 4U) 
           | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                       >> 0x3fU))) ? 
                        (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc)) 
                       >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[9U] 
        = (0x70000000U | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                        + vlSelf->pc)
                                     : (4ULL + vlSelf->pc)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xaU] 
        = ((IData)(((0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                     ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc) : (4ULL + vlSelf->pc))) 
           << 0x10U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xbU] 
        = (((IData)(((0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                      ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc))) 
            >> 0x10U) | ((IData)((((0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                    ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                       + vlSelf->pc)
                                    : (4ULL + vlSelf->pc)) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xcU] 
        = (0x60000U | ((IData)((((0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                  ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                     + vlSelf->pc) : 
                                 (4ULL + vlSelf->pc)) 
                                >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xdU] 
        = ((IData)(((0ULL == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                     ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                        + vlSelf->pc) : (4ULL + vlSelf->pc))) 
           << 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xeU] 
        = (((IData)(((0ULL == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                      ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                         + vlSelf->pc) : (4ULL + vlSelf->pc))) 
            >> 0x1cU) | ((IData)((((0ULL == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                    ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                       + vlSelf->pc)
                                    : (4ULL + vlSelf->pc)) 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
        = (0x50U | (((IData)((0xfffffffffffffffeULL 
                              & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)) 
                     << 0x18U) | ((IData)((((0ULL == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                             ? (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                + vlSelf->pc)
                                             : (4ULL 
                                                + vlSelf->pc)) 
                                           >> 0x20U)) 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x10U] 
        = (((IData)((0xfffffffffffffffeULL & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)) 
            >> 8U) | ((IData)(((0xfffffffffffffffeULL 
                                & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x11U] 
        = (0x4000000U | ((IData)(((0xfffffffffffffffeULL 
                                   & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                  >> 0x20U)) >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x12U] 
        = ((0xfff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                         << 0xcU)) | (0xff000000U & 
                                      ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                       << 0xcU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x13U] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
             >> 0x14U) | (0xfff000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       << 0xcU))) | 
           (0xff000000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                    >> 0x20U)) << 0xcU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x14U] 
        = (0x300000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[2U] 
        = (0x2aU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[3U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[4U] 
        = (0xf00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
        = (0xe00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                      << 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[8U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[9U] 
        = (0xd0000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xaU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 0x10U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xbU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xcU] 
        = (0xc0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xdU] = 0U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[2U] 
        = (0x2bU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[3U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[4U] 
        = (0x1200000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
        = (0x1100U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x20U)) 
                                    >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[8U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[9U] 
        = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                    >> 0x20U)) >> 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0xaU] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xbU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xcU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xdU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xeU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x10U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x11U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x12U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x11U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x13U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x12U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x14U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x13U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0x14U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xcU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xdU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[9U] 
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [4U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__dnpc = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit)
                                             ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out
                                             : (4ULL 
                                                + vlSelf->pc));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out;
    __Vtemp1337[1U] = (((IData)((0x11000000000ULL | 
                                 (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                   << 0x38U) | (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                                 << 0x1cU) 
                                                | (QData)((IData)(
                                                                  (0x1200U 
                                                                   | ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                                >> 2U)))
                                                                       ? 0xf0U
                                                                       : 0xfU)))))))) 
                        >> 4U) | ((IData)(((0x11000000000ULL 
                                            | (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                                << 0x38U) 
                                               | (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                                   << 0x1cU) 
                                                  | (QData)((IData)(
                                                                    (0x1200U 
                                                                     | ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                                >> 2U)))
                                                                         ? 0xf0U
                                                                         : 0xfU))))))) 
                                           >> 0x20U)) 
                                  << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[0U] 
        = (0x2bffU | ((IData)((0x11000000000ULL | (
                                                   ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                                       << 0x1cU) 
                                                      | (QData)((IData)(
                                                                        (0x1200U 
                                                                         | ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                                >> 2U)))
                                                                             ? 0xf0U
                                                                             : 0xfU)))))))) 
                      << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[1U] 
        = __Vtemp1337[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[2U] 
        = ((IData)(((0x11000000000ULL | (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)) 
                                             << 0x1cU) 
                                            | (QData)((IData)(
                                                              (0x1200U 
                                                               | ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                                              >> 2U)))
                                                                   ? 0xf0U
                                                                   : 0xfU))))))) 
                    >> 0x20U)) >> 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[3U] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[2U] 
        = (0x2bU | ((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                            >> 2U)))
                              ? ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                 << 0x20U) : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[3U] 
        = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                    >> 2U))) ? ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                                << 0x20U)
                      : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
            >> 0xcU) | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                 >> 2U)))
                                   ? ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                      << 0x20U) : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[4U] 
        = (0x1200000U | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                                  >> 2U)))
                                    ? ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                       << 0x20U) : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))) 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
        = (0x1100U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte) 
                       << 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte 
                                             >> 0x20U)) 
                                    >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[8U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte) 
            >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[9U] 
        = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte 
                    >> 0x20U)) >> 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0xaU] = 1U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0U] 
        = (0xfffffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1U] 
        = (0xfffffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[1U] 
                          << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[0U] 
                                    >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[2U] 
        = (0xfffffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[2U] 
                          << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[1U] 
                                    >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[3U] 
        = (0xfffffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[3U] 
                          << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3[2U] 
                                      >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list
                       [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out;
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr, vlSelf->__Vtask_pmem_read__2__rdata);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
        = vlSelf->__Vtask_pmem_read__2__rdata;
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[0U] 
        = (IData)((0x100002800000000ULL | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                        >> 0x20U))))) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                           >> 0x28U))))) 
                                               << 0x13U) 
                                              | (QData)((IData)(
                                                                (0x60000U 
                                                                 | (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                               >> 0x30U))))))))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
        = (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                     >> 0x18U)) << 0x19U) | (IData)(
                                                    ((0x100002800000000ULL 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x20U))))) 
                                                          << 0x26U) 
                                                         | (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x28U))))) 
                                                             << 0x13U) 
                                                            | (QData)((IData)(
                                                                              (0x60000U 
                                                                               | (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x30U))))))))) 
                                                     >> 0x20U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
        = (0x20000600U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                    >> 8U)) << 0x1fU) 
                          | ((0xffff000U & ((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                     >> 0x10U)) 
                                            << 0xcU)) 
                             | (0x1ffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                   >> 0x18U)) 
                                          >> 7U)))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[3U] 
        = (0x8000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata) 
                       << 0x12U) | (0x7fffU & ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                        >> 8U)) 
                                               >> 1U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[4U] 
        = (3U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata) 
                 >> 0xeU));
    __Vtemp1385[0U] = (IData)((0x30080140000000ULL 
                               | (((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x10U))))) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                             >> 0x18U))))) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x20U))))) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x300700U 
                                                                      | ((0x3fc00000U 
                                                                          & ((IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x28U)) 
                                                                             << 0x16U)) 
                                                                         | ((0x7f800U 
                                                                             & ((IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x30U)) 
                                                                                << 0xbU)) 
                                                                            | (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x38U)))))))))))));
    __Vtemp1385[1U] = (IData)(((0x30080140000000ULL 
                                | (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                >> 0x10U))))) 
                                    << 0x37U) | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                              >> 0x18U))))) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x20U))))) 
                                                     << 0x21U) 
                                                    | (QData)((IData)(
                                                                      (0x300700U 
                                                                       | ((0x3fc00000U 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x28U)) 
                                                                              << 0x16U)) 
                                                                          | ((0x7f800U 
                                                                              & ((IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x30U)) 
                                                                                << 0xbU)) 
                                                                             | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                                >> 0x38U)))))))))))) 
                               >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U] 
        = __Vtemp1385[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
        = __Vtemp1385[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
        = (0x401U | ((0x1fe000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata) 
                                   << 0xdU)) | (0x3fcU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 8U)) 
                                                   << 2U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
                        << 0xdU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[0U] 
                                    >> 0x13U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
                       >> 6U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
                        << 7U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[1U] 
                                  >> 0x19U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
                       >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[3U] 
                        << 1U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[2U] 
                                  >> 0x1fU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[4U] 
                        << 0xeU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3[3U] 
                                    >> 0x12U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U] 
                     >> 0xbU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                      << 0xaU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[0U] 
                                  >> 0x16U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                     >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                     >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
                      << 9U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
                                >> 0x17U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
                     >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[2U] 
                     >> 0xdU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[0U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[2U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[3U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[4U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[5U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[6U] 
        = (0xffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [0U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [1U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [2U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [3U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [4U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [5U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list
                 [6U] >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list
                 [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out;
    __Vtemp1420[7U] = (0xe00U | (((IData)(((1U & (IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                           >> 0x3fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                      >> 0x20U))))
                                                : (QData)((IData)(
                                                                  (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                   >> 0x20U))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata))))) 
                                  << 0x1cU) | ((IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp1420[8U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                >> 2U)))
                                  ? ((1U & (IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                    >> 0x3fU)))
                                      ? (0xffffffff00000000ULL 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 0x20U))))
                                      : (QData)((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                         >> 0x20U))))
                                  : ((1U & (IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                    >> 0x1fU)))
                                      ? (0xffffffff00000000ULL 
                                         | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                      : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata))))) 
                        >> 4U) | ((IData)((((1U & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                           >> 2U)))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 0x3fU)))
                                                 ? 
                                                (0xffffffff00000000ULL 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                    >> 0x20U))))
                                                 : (QData)((IData)(
                                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                    >> 0x20U))))
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 0x1fU)))
                                                 ? 
                                                (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                                 : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))) 
                                           >> 0x20U)) 
                                  << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U] 
        = (0x2aU | ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
        = (((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
            >> 0xcU) | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
        = (0xf00000U | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)) 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
        = ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
        = (((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
            >> 0x18U) | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
        = __Vtemp1420[7U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[8U] 
        = __Vtemp1420[8U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[9U] 
        = (0xd0000000U | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                   >> 2U)))
                                     ? ((1U & (IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                       >> 0x3fU)))
                                         ? (0xffffffff00000000ULL 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x20U))))
                                         : (QData)((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 0x20U))))
                                     : ((1U & (IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                       >> 0x1fU)))
                                         ? (0xffffffff00000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                         : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))) 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xaU] 
        = ((IData)(((0x8000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                     ? (0xffffffffffff0000ULL | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))) 
           << 0x10U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xbU] 
        = (((IData)(((0x8000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                      ? (0xffffffffffff0000ULL | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                      : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))) 
            >> 0x10U) | ((IData)((((0x8000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                    ? (0xffffffffffff0000ULL 
                                       | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xcU] 
        = (0xc0000U | ((IData)((((0x8000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                  ? (0xffffffffffff0000ULL 
                                     | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
                                >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xdU] = 0U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xcU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xdU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out;
    __Vtemp1503[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    __Vtemp1503[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U));
    __Vtemp1503[2U] = (0x400U | ((IData)((4ULL + vlSelf->pc)) 
                                 << 0x14U));
    __Vtemp1503[3U] = (((IData)((4ULL + vlSelf->pc)) 
                        >> 0xcU) | ((IData)(((4ULL 
                                              + vlSelf->pc) 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp1503[4U] = (0x30000000U | ((IData)(((4ULL 
                                                + vlSelf->pc) 
                                               >> 0x20U)) 
                                      >> 0xcU));
    __Vtemp1503[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 8U);
    __Vtemp1503[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp1503[7U] = (0x20000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                                    << 0x1cU) | ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
    __Vtemp1503[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp1503[9U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                >> 0x20U)) >> 4U);
    __Vtemp1503[0xaU] = (0x10U | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                            >> 0x1fU)
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                            : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))) 
                                  << 0x10U));
    __Vtemp1503[0xbU] = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                    >> 0x1fU) ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))) 
                          >> 0x10U) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                                  >> 0x1fU)
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0))) 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp1503[0xcU] = (0x80000000U | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                                   >> 0x1fU)
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0))) 
                                                 >> 0x20U)) 
                                        >> 0x10U));
    __Vtemp1503[0xdU] = (2U | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                         >> 0x1fU) ? 
                                        (0xffffffff00000000ULL 
                                         | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                         : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))) 
                               << 4U));
    __Vtemp1503[0xeU] = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                    >> 0x1fU) ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))) 
                          >> 0x1cU) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                                  >> 0x1fU)
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0))) 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp1503[0xfU] = (0x260000U | (((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                            >> 0x1fU)))
                                                 ? 
                                                (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                                 : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))) 
                                       << 0x18U) | 
                                      ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                                  >> 0x1fU)
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0))) 
                                                >> 0x20U)) 
                                       >> 0x1cU)));
    __Vtemp1503[0x10U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))) 
                           >> 8U) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0))) 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp1503[0x11U] = ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0))) 
                                   >> 0x20U)) >> 8U);
    __Vtemp1503[0x12U] = (0x250U | ((IData)(VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                    << 0xcU));
    __Vtemp1503[0x13U] = (((IData)(VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                           >> 0x14U) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp1503[0x14U] = (0x24000000U | ((IData)((VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                  >> 0x20U)) 
                                         >> 0x14U));
    __Vtemp1503[0x15U] = (IData)(VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    __Vtemp1503[0x16U] = (IData)((VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                  >> 0x20U));
    __Vtemp1503[0x17U] = (0x22000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                      << 0x14U));
    __Vtemp1503[0x18U] = (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                    * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                           >> 0xcU) | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                 * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                >> 0x20U)) 
                                       << 0x14U));
    __Vtemp1503[0x19U] = ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                    * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                   >> 0x20U)) >> 0xcU);
    __Vtemp1503[0x1aU] = (0x1dU | ((IData)(((1U & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x3fU)))
                                             ? (0xffffffff00000000ULL 
                                                | (QData)((IData)(
                                                                  (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                   >> 0x20U))))
                                             : (QData)((IData)(
                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                >> 0x20U))))) 
                                   << 8U));
    __Vtemp1503[0x1bU] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x20U))))
                                     : (QData)((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x20U))))) 
                           >> 0x18U) | ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x3fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))
                                                   : (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U)))) 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp1503[0x1cU] = (0x1b00000U | (((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x3fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))
                                                   : (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                 >> 0x3fU)))
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                         >> 0x20U))))
                                                      : (QData)((IData)(
                                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                         >> 0x20U)))) 
                                                    >> 0x20U)) 
                                           >> 0x18U)));
    __Vtemp1503[0x1dU] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x20U))))
                                     : (QData)((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x20U))))) 
                           >> 4U) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x3fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))
                                                : (QData)((IData)(
                                                                  (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                   >> 0x20U)))) 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp1503[0x1eU] = ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x20U))))
                                     : (QData)((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x20U)))) 
                                   >> 0x20U)) >> 4U);
    __Vtemp1503[0x1fU] = (0x1a00U | ((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                             >> 0x1fU)))
                                               ? (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                               : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                     << 0x10U));
    __Vtemp1503[0x20U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                           >> 0x10U) | ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
    __Vtemp1503[0x21U] = (0x90000000U | ((IData)(((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                               >> 0x1fU)))
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                  >> 0x20U)) 
                                         >> 0x10U));
    __Vtemp1503[0x22U] = (1U | ((IData)(((1U & (IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x1fU)))
                                          ? (0xffffffff00000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                          : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                << 4U));
    __Vtemp1503[0x23U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                           >> 0x1cU) | ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                 >> 0x20U)) 
                                        << 4U));
    __Vtemp1503[0x24U] = (0x180000U | (((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                             >> 0x1fU)))
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                        << 0x18U) | 
                                       ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                 >> 0x20U)) 
                                        >> 0x1cU)));
    __Vtemp1503[0x25U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                           >> 8U) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp1503[0x26U] = ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                   >> 0x20U)) >> 8U);
    __Vtemp1503[0x27U] = (0x170U | ((IData)(((1U & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                            >> 0x1fU)))
                                              ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                              : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                    << 0xcU));
    __Vtemp1503[0x28U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                           >> 0x14U) | ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp1503[0x29U] = (0x16000000U | ((IData)(((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                               >> 0x1fU)))
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                  >> 0x20U)) 
                                         >> 0x14U));
    __Vtemp1503[0x2aU] = (IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x1fU)))
                                   ? (0xffffffff00000000ULL 
                                      | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))));
    __Vtemp1503[0x2bU] = (IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x1fU)))
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                  >> 0x20U));
    __Vtemp1503[0x2cU] = (0x15000U | ((IData)(((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                      << 0x14U));
    __Vtemp1503[0x2dU] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                           >> 0xcU) | ((IData)((((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                             >> 0x1fU)))
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                >> 0x20U)) 
                                       << 0x14U));
    __Vtemp1503[0x2eU] = ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                   >> 0x20U)) >> 0xcU);
    __Vtemp1503[0x2fU] = (0x14U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 8U));
    __Vtemp1503[0x30U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp1503[0x31U] = (0x1300000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                    >> 0x20U)) 
                                           >> 0x18U)));
    __Vtemp1503[0x32U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp1503[0x33U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 4U);
    __Vtemp1503[0x34U] = (0x1200U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                     << 0x10U));
    __Vtemp1503[0x35U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 0x10U));
    __Vtemp1503[0x36U] = (0x80000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x20U)) 
                                         >> 0x10U));
    __Vtemp1503[0x37U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                          << 4U);
    __Vtemp1503[0x38U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 4U));
    __Vtemp1503[0x39U] = (0x70000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                       << 0x18U) | 
                                      ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       >> 0x1cU)));
    __Vtemp1503[0x3aU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp1503[0x3bU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 8U);
    __Vtemp1503[0x3cU] = (0x50U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 0xcU));
    __Vtemp1503[0x3dU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp1503[0x3eU] = (0x4000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        >> 0x14U));
    __Vtemp1517[0U] = (0x13U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                                << 0x14U));
    __Vtemp1517[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp1517[2U] = (0xf00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp1517[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                       << 8U);
    __Vtemp1517[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp1517[5U] = (0xe00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                                  << 0x1cU) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp1517[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp1517[7U] = (0xd0000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp1517[8U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                       << 0x10U);
    __Vtemp1517[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     << 0x10U));
    __Vtemp1517[0xaU] = (0xc0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     >> 0x10U));
    __Vtemp1517[0xbU] = ((IData)((4ULL + vlSelf->pc)) 
                         << 4U);
    __Vtemp1517[0xcU] = (((IData)((4ULL + vlSelf->pc)) 
                          >> 0x1cU) | ((IData)(((4ULL 
                                                 + vlSelf->pc) 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp1517[0xdU] = (0x40U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 0x18U) | ((IData)(
                                                        ((4ULL 
                                                          + vlSelf->pc) 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
    __Vtemp1517[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp1517[0xfU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 8U);
    __Vtemp1517[0x10U] = (0xcU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                  << 0xcU));
    __Vtemp1517[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp1517[0x12U] = (0x800000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       >> 0x14U));
    VL_CONCAT_WWW(2624,2016,608, __Vtemp1518, __Vtemp1503, __Vtemp1517);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp1519, __Vtemp1518, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    __Vtemp1528[0U] = (IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x1fU)))
                                ? (0xffffffff00000000ULL 
                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))));
    __Vtemp1528[1U] = (IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x1fU)))
                                 ? (0xffffffff00000000ULL 
                                    | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                 : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                               >> 0x20U));
    __Vtemp1528[2U] = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                                << 0x14U));
    __Vtemp1528[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp1528[4U] = (0x2a00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     >> 0xcU));
    __Vtemp1528[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 8U);
    __Vtemp1528[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp1528[7U] = (0x1800U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 0x1cU) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp1528[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp1528[9U] = (0x60000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp1528[0xaU] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                               << 0x10U));
    __Vtemp1528[0xbU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                          >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp1528[0xcU] = (0x150000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x20U)) 
                                      >> 0x10U));
    __Vtemp1528[0xdU] = 0U;
    VL_CONCAT_WWW(3108,2688,420, __Vtemp1529, __Vtemp1519, __Vtemp1528);
    VL_ASSIGN_W(3108,vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3, __Vtemp1529);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[3U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[2U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[4U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[3U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[5U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[4U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[6U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[5U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[7U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[6U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[7U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[8U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[7U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[9U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xaU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[9U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xcU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xbU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xdU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xcU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xeU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xfU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x10U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x11U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x12U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x11U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x13U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x12U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x14U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x13U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x14U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x15U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x16U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x17U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x18U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x17U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x19U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x18U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1aU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x19U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1bU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1aU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1cU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1bU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1cU] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1dU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1cU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1eU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1dU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1fU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1eU] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x20U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1fU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x21U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x20U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x22U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x21U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x23U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x22U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x24U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x23U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x24U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x25U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x24U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x26U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x25U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x27U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x26U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x28U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x27U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x29U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x28U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x29U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x10U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x10U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2bU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2cU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2dU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2cU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2eU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2dU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2fU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2eU] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x30U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2fU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x31U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x30U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x31U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x13U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x32U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x31U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x13U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x33U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x32U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x13U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x34U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x33U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x14U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x35U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x34U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x14U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x36U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x35U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x14U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x37U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x36U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x15U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x38U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x37U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x15U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x39U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x38U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x15U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x39U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x16U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3aU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x39U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x16U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3bU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3aU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x16U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3cU] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3bU] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x17U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3dU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3cU] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x17U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3eU] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3dU] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x17U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3eU] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x18U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x3fU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x18U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x40U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x18U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x41U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x19U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x42U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x41U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x19U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x43U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x42U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x19U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x44U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x43U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x45U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x44U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x46U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x45U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x46U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x47U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x46U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x48U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x47U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x49U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x48U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4aU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x49U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4bU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4aU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4cU] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4bU] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4dU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4cU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4eU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4dU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4eU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4fU] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4eU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x50U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x4fU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x51U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x50U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1fU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x52U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x51U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1fU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x53U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x52U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x1fU][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x53U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x20U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x54U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x20U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x55U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x20U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x56U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x21U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x57U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x56U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x21U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x58U] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x57U] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x21U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x59U] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x58U] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x22U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5aU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x59U] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x22U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5bU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5aU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x22U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5bU] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x23U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5cU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5bU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x23U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5dU] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5cU] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x23U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5eU] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5dU] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x24U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5fU] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5eU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x24U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x60U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x5fU] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x24U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x61U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x60U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
}
