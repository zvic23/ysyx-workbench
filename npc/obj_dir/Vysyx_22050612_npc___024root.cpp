// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ dnpc, IData/*31:0*/ dest_register, IData/*31:0*/ src_register, QData/*63:0*/ imm);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ r);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_pc_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(IData/*31:0*/ npc_inst);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_22050612_npc___024root___sequent__TOP__3(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    VlWide<38>/*1215:0*/ __Vtemp2177;
    VlWide<40>/*1279:0*/ __Vtemp2179;
    VlWide<63>/*2015:0*/ __Vtemp2197;
    VlWide<19>/*607:0*/ __Vtemp2211;
    VlWide<82>/*2623:0*/ __Vtemp2212;
    VlWide<84>/*2687:0*/ __Vtemp2213;
    VlWide<19>/*607:0*/ __Vtemp2227;
    VlWide<103>/*3295:0*/ __Vtemp2228;
    VlWide<105>/*3359:0*/ __Vtemp2229;
    VlWide<16>/*511:0*/ __Vtemp2240;
    VlWide<121>/*3871:0*/ __Vtemp2241;
    VlWide<3>/*95:0*/ __Vtemp2242;
    VlWide<9>/*287:0*/ __Vtemp2249;
    VlWide<11>/*351:0*/ __Vtemp2251;
    VlWide<13>/*415:0*/ __Vtemp2253;
    VlWide<3>/*95:0*/ __Vtemp2255;
    VlWide<9>/*287:0*/ __Vtemp2262;
    VlWide<11>/*351:0*/ __Vtemp2264;
    VlWide<13>/*415:0*/ __Vtemp2266;
    VlWide<15>/*479:0*/ __Vtemp2268;
    VlWide<17>/*543:0*/ __Vtemp2269;
    VlWide<16>/*511:0*/ __Vtemp2311;
    VlWide<63>/*2015:0*/ __Vtemp2316;
    VlWide<19>/*607:0*/ __Vtemp2330;
    VlWide<82>/*2623:0*/ __Vtemp2331;
    VlWide<84>/*2687:0*/ __Vtemp2332;
    VlWide<19>/*607:0*/ __Vtemp2346;
    VlWide<103>/*3295:0*/ __Vtemp2347;
    VlWide<105>/*3359:0*/ __Vtemp2348;
    VlWide<16>/*511:0*/ __Vtemp2359;
    VlWide<121>/*3871:0*/ __Vtemp2360;
    VlWide<3>/*95:0*/ __Vtemp3254;
    VlWide<3>/*95:0*/ __Vtemp3562;
    VlWide<3>/*95:0*/ __Vtemp3603;
    VlWide<13>/*415:0*/ __Vtemp3640;
    VlWide<63>/*2015:0*/ __Vtemp3739;
    VlWide<19>/*607:0*/ __Vtemp3753;
    VlWide<82>/*2623:0*/ __Vtemp3754;
    VlWide<84>/*2687:0*/ __Vtemp3755;
    VlWide<19>/*607:0*/ __Vtemp3769;
    VlWide<103>/*3295:0*/ __Vtemp3770;
    VlWide<105>/*3359:0*/ __Vtemp3771;
    VlWide<14>/*447:0*/ __Vtemp3780;
    VlWide<119>/*3807:0*/ __Vtemp3781;
    QData/*63:0*/ __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    // Body
    __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 = 0U;
    if ((3U == (3U & (vlSelf->ysyx_22050612_npc__DOT__opcode 
                      >> 8U)))) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit(vlSelf->pc, vlSelf->ysyx_22050612_npc__DOT__dnpc, 1U, 0U, 1ULL);
    } else if ((4U == (0x7fU & vlSelf->ysyx_22050612_npc__DOT__opcode))) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit(vlSelf->pc, vlSelf->ysyx_22050612_npc__DOT__dnpc, 
                                                                               (0x1fU 
                                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                                >> 7U)), 
                                                                               (0x1fU 
                                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                                >> 0xfU)), vlSelf->ysyx_22050612_npc__DOT__imm_I);
    }
    if (((vlSelf->ysyx_22050612_npc__DOT__opcode >> 7U) 
         & (0ULL == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
            [0xaU]))) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(0U);
    } else if (((vlSelf->ysyx_22050612_npc__DOT__opcode 
                 >> 7U) & (0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                           [0xaU]))) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(1U);
    }
    if (((0U != (0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                          >> 7U))) & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))) {
        __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 
            = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg;
        __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 = 1U;
        __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 
            = (0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                        >> 7U));
    }
    if (__Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[__Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0] 
            = __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : vlSelf->ysyx_22050612_npc__DOT__dnpc);
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
    vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix 
        = vlSelf->__Vtask_pmem_read_pc__0__rdata;
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
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
              [0x18U]));
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
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2) 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list
              [0x18U]));
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
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
              == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
              [0x17U]));
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
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 
                          == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list
              [0x17U]));
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
    __Vtemp2177[0x16U] = (((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                      >> 0xcU)) | (0xf000U 
                                                   & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                      >> 0xcU))) 
                          | ((0xf0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                          >> 0xcU)) 
                             | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                         >> 0x20U)) 
                                << 0x14U)));
    __Vtemp2177[0x17U] = (((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 0xcU)) | (0xf000U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                               >> 0x20U)) 
                                                      >> 0xcU))) 
                          | (0xf0000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  >> 0x20U)) 
                                         >> 0xcU)));
    __Vtemp2177[0x18U] = (9U | (((0xf00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                            << 8U)) 
                                 | (0xf000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                               << 8U))) 
                                | (0xffff0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                  << 8U))));
    __Vtemp2177[0x1eU] = (((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                      >> 0x10U)) | 
                           (0xf000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                       >> 0x10U))) 
                          | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                      >> 0x20U)) << 0x10U));
    __Vtemp2177[0x1fU] = (0x60000000U | ((0xfffU & 
                                          ((IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                    >> 0x20U)) 
                                           >> 0x10U)) 
                                         | (0xf000U 
                                            & ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U)) 
                                               >> 0x10U))));
    __Vtemp2177[0x20U] = (((0xff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                      << 4U)) | (0xf000U 
                                                 & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                    << 4U))) 
                          | (0xffff0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                            << 4U)));
    __Vtemp2179[0xdU] = (0x60000U | (((IData)((((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                << 0x20U) 
                                               >> 0x20U)) 
                                      >> 0x1cU) | (0x100000U 
                                                   | ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                                      << 0x18U))));
    __Vtemp2179[0xeU] = (((0xfU & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                   >> 8U)) | (0xffff0U 
                                              & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                                 >> 8U))) 
                         | ((0xf00000U & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                          >> 8U)) | 
                            ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                      >> 0x20U)) << 0x18U)));
    __Vtemp2179[0xfU] = (((0xfU & ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                            >> 0x20U)) 
                                   >> 8U)) | (0xffff0U 
                                              & ((IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                          >> 0x20U)) 
                                                 >> 8U))) 
                         | (0xf00000U & ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                  >> 0x20U)) 
                                         >> 8U)));
    __Vtemp2179[0x10U] = (0x150U | ((0xff000U & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                                 << 0xcU)) 
                                    | (0xfff00000U 
                                       & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                          << 0xcU))));
    __Vtemp2179[0x11U] = (((0xfU & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                    >> 0x14U)) | ((0xff0U 
                                                   & ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                                                      >> 0x14U)) 
                                                  | (0xff000U 
                                                     & ((IData)(
                                                                ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                                 >> 0x20U)) 
                                                        << 0xcU)))) 
                          | (0xfff00000U & ((IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                     >> 0x20U)) 
                                            << 0xcU)));
    __Vtemp2179[0x12U] = (0x14000000U | ((0xfU & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                           >> 0x20U)) 
                                                  >> 0x14U)) 
                                         | (0xff0U 
                                            & ((IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                        >> 0x20U)) 
                                               >> 0x14U))));
    __Vtemp2179[0x13U] = (((0xfU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                           | (0xffff0U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))) 
                          | (0xfff00000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)));
    __Vtemp2179[0x14U] = (((0xfU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U))) 
                           | (0xffff0U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  >> 0x20U)))) 
                          | (0xfff00000U & (IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                    >> 0x20U))));
    __Vtemp2179[0x15U] = (0x13000U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                      << 0x14U));
    __Vtemp2179[0x16U] = (((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                    >> 0xcU)) | (0xffff0U 
                                                 & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                    >> 0xcU))) 
                          | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                      >> 0x20U)) << 0x14U));
    __Vtemp2179[0x17U] = ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   >> 0xcU)) | (0xffff0U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   >> 0xcU)));
    __Vtemp2179[0x1cU] = (((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 4U)) | (0xffff0U 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                           >> 0x20U)) 
                                                  >> 4U))) 
                          | (0xff00000U & ((IData)(
                                                   (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                    >> 0x20U)) 
                                           >> 4U)));
    __Vtemp2179[0x1dU] = (0x800U | ((0xf0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                 << 0x10U)) 
                                    | (0xfff00000U 
                                       & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                          << 0x10U))));
    __Vtemp2179[0x1eU] = (((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                    >> 0x10U)) | ((0xfff0U 
                                                   & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                      >> 0x10U)) 
                                                  | (0xf0000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                 >> 0x20U)) 
                                                        << 0x10U)))) 
                          | (0xfff00000U & ((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                     >> 0x20U)) 
                                            << 0x10U)));
    __Vtemp2179[0x1fU] = (0x70000000U | ((0xfU & ((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                           >> 0x20U)) 
                                                  >> 0x10U)) 
                                         | (0xfff0U 
                                            & ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U)) 
                                               >> 0x10U))));
    __Vtemp2179[0x24U] = (((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 8U)) | (0xffff0U 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                           >> 0x20U)) 
                                                  >> 8U))) 
                          | (0xf00000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                   >> 0x20U)) 
                                          >> 8U)));
    __Vtemp2179[0x25U] = (0x50U | ((0xff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                << 0xcU)) 
                                   | (0xfff00000U & 
                                      ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                       << 0xcU))));
    __Vtemp2179[0x26U] = (((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                    >> 0x14U)) | ((0xff0U 
                                                   & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                      >> 0x14U)) 
                                                  | (0xff000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                                 >> 0x20U)) 
                                                        << 0xcU)))) 
                          | (0xfff00000U & ((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                     >> 0x20U)) 
                                            << 0xcU)));
    __Vtemp2197[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    __Vtemp2197[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U));
    __Vtemp2197[2U] = (6U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                             << 0x14U));
    __Vtemp2197[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2197[4U] = (0x500000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp2197[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       << 8U);
    __Vtemp2197[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2197[7U] = (0x400U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                  << 0x1cU) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp2197[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2197[9U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                >> 0x20U)) >> 4U);
    __Vtemp2197[0xaU] = (0xc0U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                  << 0x10U));
    __Vtemp2197[0xbU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp2197[0xcU] = (0x8000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       >> 0x10U));
    __Vtemp2197[0xdU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         << 4U);
    __Vtemp2197[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2197[0xfU] = (0x4000U | (((IData)(vlSelf->pc) 
                                     << 0x18U) | ((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                           >> 0x20U)) 
                                                  >> 0x1cU)));
    __Vtemp2197[0x10U] = (((IData)(vlSelf->pc) >> 8U) 
                          | ((IData)((vlSelf->pc >> 0x20U)) 
                             << 0x18U));
    __Vtemp2197[0x11U] = ((IData)((vlSelf->pc >> 0x20U)) 
                          >> 8U);
    __Vtemp2197[0x12U] = (3U | ((IData)(vlSelf->pc) 
                                << 0xcU));
    __Vtemp2197[0x13U] = (((IData)(vlSelf->pc) >> 0x14U) 
                          | ((IData)((vlSelf->pc >> 0x20U)) 
                             << 0xcU));
    __Vtemp2197[0x14U] = (0x200000U | ((IData)((vlSelf->pc 
                                                >> 0x20U)) 
                                       >> 0x14U));
    __Vtemp2197[0x15U] = 0U;
    __Vtemp2197[0x16U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    __Vtemp2197[0x17U] = (0x1b000U | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                               << 0x20U)) 
                                      << 0x14U));
    __Vtemp2197[0x18U] = (((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                    << 0x20U)) >> 0xcU) 
                          | ((IData)((((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                       << 0x20U) >> 0x20U)) 
                             << 0x14U));
    __Vtemp2197[0x19U] = ((IData)((((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                    << 0x20U) >> 0x20U)) 
                          >> 0xcU);
    __Vtemp2197[0x1aU] = (0x1aU | ((0xfff00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                << 8U)) 
                                   | (0xfff00000U & 
                                      ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                       << 8U))));
    __Vtemp2197[0x1bU] = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                            >> 0x18U) | (0xfff00U & 
                                         ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                   >> 0x20U)) 
                                          << 8U))) 
                          | (0xfff00000U & ((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                     >> 0x20U)) 
                                            << 8U)));
    __Vtemp2197[0x1cU] = (0x1900000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  >> 0x20U)) 
                                         >> 0x18U) 
                                        | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                           << 0x1cU)));
    __Vtemp2197[0x1dU] = ((0xfffffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                       >> 4U)) | ((0xff00000U 
                                                   & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                      >> 4U)) 
                                                  | ((IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                              >> 0x20U)) 
                                                     << 0x1cU)));
    __Vtemp2197[0x1eU] = ((0xfffffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       >> 4U)) | (0xff00000U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                              >> 0x20U)) 
                                                     >> 4U)));
    __Vtemp2197[0x1fU] = (0x1800U | ((0xf0000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                  << 0x10U)) 
                                     | (0xfff00000U 
                                        & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                           << 0x10U))));
    __Vtemp2197[0x20U] = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                            >> 0x10U) | (0xf0000U & 
                                         ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                   >> 0x20U)) 
                                          << 0x10U))) 
                          | (0xfff00000U & ((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                     >> 0x20U)) 
                                            << 0x10U)));
    __Vtemp2197[0x21U] = (0x70000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  >> 0x20U)) 
                                         >> 0x10U));
    __Vtemp2197[0x22U] = (1U | ((0xffff0U & ((IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                      << 0x20U)) 
                                             << 4U)) 
                                | (0xfff00000U & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                           << 0x20U)) 
                                                  << 4U))));
    __Vtemp2197[0x23U] = ((((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                     << 0x20U)) >> 0x1cU) 
                           | (0xffff0U & ((IData)((
                                                   ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                    << 0x20U) 
                                                   >> 0x20U)) 
                                          << 4U))) 
                          | (0xfff00000U & ((IData)(
                                                    (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                      << 0x20U) 
                                                     >> 0x20U)) 
                                            << 4U)));
    __Vtemp2197[0x24U] = __Vtemp2179[0xdU];
    __Vtemp2197[0x25U] = __Vtemp2179[0xeU];
    __Vtemp2197[0x26U] = __Vtemp2179[0xfU];
    __Vtemp2197[0x27U] = __Vtemp2179[0x10U];
    __Vtemp2197[0x28U] = __Vtemp2179[0x11U];
    __Vtemp2197[0x29U] = __Vtemp2179[0x12U];
    __Vtemp2197[0x2aU] = __Vtemp2179[0x13U];
    __Vtemp2197[0x2bU] = __Vtemp2179[0x14U];
    __Vtemp2197[0x2cU] = __Vtemp2179[0x15U];
    __Vtemp2197[0x2dU] = __Vtemp2179[0x16U];
    __Vtemp2197[0x2eU] = __Vtemp2179[0x17U];
    __Vtemp2197[0x2fU] = (0x12U | ((0xfff00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                << 8U)) 
                                   | (__Vtemp2177[0x16U] 
                                      << 0x14U)));
    __Vtemp2197[0x30U] = ((__Vtemp2177[0x16U] >> 0xcU) 
                          | (__Vtemp2177[0x17U] << 0x14U));
    __Vtemp2197[0x31U] = ((__Vtemp2177[0x17U] >> 0xcU) 
                          | (__Vtemp2177[0x18U] << 0x14U));
    __Vtemp2197[0x32U] = ((__Vtemp2177[0x18U] >> 0xcU) 
                          | ((0xff00000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                            >> 4U)) 
                             | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                         >> 0x20U)) 
                                << 0x1cU)));
    __Vtemp2197[0x33U] = __Vtemp2179[0x1cU];
    __Vtemp2197[0x34U] = __Vtemp2179[0x1dU];
    __Vtemp2197[0x35U] = __Vtemp2179[0x1eU];
    __Vtemp2197[0x36U] = __Vtemp2179[0x1fU];
    __Vtemp2197[0x37U] = ((0xffff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                       << 4U)) | (__Vtemp2177[0x1eU] 
                                                  << 0x14U));
    __Vtemp2197[0x38U] = ((__Vtemp2177[0x1eU] >> 0xcU) 
                          | (__Vtemp2177[0x1fU] << 0x14U));
    __Vtemp2197[0x39U] = ((__Vtemp2177[0x1fU] >> 0xcU) 
                          | (__Vtemp2177[0x20U] << 0x14U));
    __Vtemp2197[0x3aU] = ((__Vtemp2177[0x20U] >> 0xcU) 
                          | ((0xf00000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                           >> 8U)) 
                             | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                         >> 0x20U)) 
                                << 0x18U)));
    __Vtemp2197[0x3bU] = __Vtemp2179[0x24U];
    __Vtemp2197[0x3cU] = __Vtemp2179[0x25U];
    __Vtemp2197[0x3dU] = __Vtemp2179[0x26U];
    __Vtemp2197[0x3eU] = (0x4000000U | ((0xfU & ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                          >> 0x20U)) 
                                                 >> 0x14U)) 
                                        | (0xff0U & 
                                           ((IData)(
                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                     >> 0x20U)) 
                                            >> 0x14U))));
    __Vtemp2211[0U] = (0xeU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                               << 0x14U));
    __Vtemp2211[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2211[2U] = (0xd00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp2211[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       << 8U);
    __Vtemp2211[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2211[5U] = (0xc00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                  << 0x1cU) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp2211[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2211[7U] = (0xb0000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp2211[8U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       << 0x10U);
    __Vtemp2211[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     << 0x10U));
    __Vtemp2211[0xaU] = (0xa0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0x10U));
    __Vtemp2211[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         << 4U);
    __Vtemp2211[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2211[0xdU] = (0x90U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   << 0x18U) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
    __Vtemp2211[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp2211[0xfU] = (0x8000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       >> 8U));
    __Vtemp2211[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          << 0xcU);
    __Vtemp2211[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp2211[0x12U] = (0x7000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WWW(2624,2016,608, __Vtemp2212, __Vtemp2197, __Vtemp2211);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp2213, __Vtemp2212, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    __Vtemp2227[0U] = (0x16U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                << 0x14U));
    __Vtemp2227[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2227[2U] = (0x1500000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0xcU));
    __Vtemp2227[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       << 8U);
    __Vtemp2227[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2227[5U] = (0x1400U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   << 0x1cU) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp2227[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2227[7U] = (0x30000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp2227[8U] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                             << 0x10U));
    __Vtemp2227[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     << 0x10U));
    __Vtemp2227[0xaU] = (0x120000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 0x10U));
    __Vtemp2227[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         << 4U);
    __Vtemp2227[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2227[0xdU] = (0x110U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                    << 0x18U) | ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                          >> 0x20U)) 
                                                 >> 0x1cU)));
    __Vtemp2227[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp2227[0xfU] = (0x10000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                 >> 0x20U)) 
                                        >> 8U));
    __Vtemp2227[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          << 0xcU);
    __Vtemp2227[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp2227[0x12U] = (0xf000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WWW(3296,2688,608, __Vtemp2228, __Vtemp2213, __Vtemp2227);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp2229, __Vtemp2228, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    __Vtemp2240[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    __Vtemp2240[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U));
    __Vtemp2240[2U] = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                << 0x14U));
    __Vtemp2240[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2240[4U] = (0x2b00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0xcU));
    __Vtemp2240[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       << 8U);
    __Vtemp2240[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2240[7U] = (0x2a00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                   << 0x1cU) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp2240[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2240[9U] = (0x90000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp2240[0xaU] = (2U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                               << 0x10U));
    __Vtemp2240[0xbU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp2240[0xcU] = (0x180000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      >> 0x10U));
    __Vtemp2240[0xdU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                         << 4U);
    __Vtemp2240[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2240[0xfU] = (0x170U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   >> 0x1cU));
    VL_CONCAT_WWW(3864,3360,504, __Vtemp2241, __Vtemp2229, __Vtemp2240);
    VL_ASSIGN_W(3864,vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3, __Vtemp2241);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
        = ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
           * (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
        = VL_DIVS_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
        = VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
        = VL_DIV_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remuw0 
        = VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    VL_EXTEND_WI(67,16, __Vtemp2242, (0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    __Vtemp2249[4U] = (0x80U | ((7U & ((IData)((((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x10U) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (((IData)(((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 8U)) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x10U) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)))));
    __Vtemp2249[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp2249[6U] = (0x200U | ((7U & ((IData)((((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                  << 8U) 
                                                 >> 0x20U)) 
                                        >> 0x17U)) 
                                 | ((0x38U & ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                        << 8U) 
                                                       >> 0x20U)) 
                                              >> 0x17U)) 
                                    | ((__Vtemp2242[0U] 
                                        << 0xcU) | 
                                       (0x1c0U & ((IData)(
                                                          (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 8U) 
                                                           >> 0x20U)) 
                                                  >> 0x17U))))));
    __Vtemp2249[7U] = ((7U & (__Vtemp2242[0U] >> 0x14U)) 
                       | ((0x38U & (__Vtemp2242[0U] 
                                    >> 0x14U)) | ((0x1c0U 
                                                   & (__Vtemp2242[0U] 
                                                      >> 0x14U)) 
                                                  | ((0xe00U 
                                                      & (__Vtemp2242[0U] 
                                                         >> 0x14U)) 
                                                     | (__Vtemp2242[1U] 
                                                        << 0xcU)))));
    __Vtemp2249[8U] = ((7U & (__Vtemp2242[1U] >> 0x14U)) 
                       | ((0x38U & (__Vtemp2242[1U] 
                                    >> 0x14U)) | ((0x1c0U 
                                                   & (__Vtemp2242[1U] 
                                                      >> 0x14U)) 
                                                  | ((0xe00U 
                                                      & (__Vtemp2242[1U] 
                                                         >> 0x14U)) 
                                                     | (__Vtemp2242[2U] 
                                                        << 0xcU)))));
    __Vtemp2251[4U] = (0xc0U | ((7U & ((IData)((((QData)((IData)(
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
    __Vtemp2251[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp2253[4U] = (0x100U | ((7U & ((IData)((((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                  << 0x20U) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) 
                                 | (((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x18U)) 
                                     << 9U) | (0x38U 
                                               & ((IData)(
                                                          (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 0x20U) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU)))));
    __Vtemp2253[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp2253[9U] = ((7U & (__Vtemp2249[4U] >> 0x1aU)) 
                       | ((0x38U & (__Vtemp2249[4U] 
                                    >> 0x1aU)) | (__Vtemp2249[5U] 
                                                  << 6U)));
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
        = __Vtemp2253[4U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[7U] 
        = __Vtemp2253[5U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[8U] 
        = ((7U & ((IData)((((QData)((IData)((0xffffU 
                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                            << 0x18U) >> 0x20U)) >> 0x17U)) 
           | (__Vtemp2251[4U] << 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[9U] 
        = ((__Vtemp2251[4U] >> 0x1dU) | (__Vtemp2251[5U] 
                                         << 3U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xaU] 
        = ((__Vtemp2251[5U] >> 0x1dU) | ((0x38U & ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                             << 0x10U) 
                                                            >> 0x20U)) 
                                                   >> 0x14U)) 
                                         | (__Vtemp2249[4U] 
                                            << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xbU] 
        = __Vtemp2253[9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xcU] 
        = ((7U & (__Vtemp2249[5U] >> 0x1aU)) | ((0x38U 
                                                 & (__Vtemp2249[5U] 
                                                    >> 0x1aU)) 
                                                | (__Vtemp2249[6U] 
                                                   << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xdU] 
        = ((7U & (__Vtemp2249[6U] >> 0x1aU)) | ((0x38U 
                                                 & (__Vtemp2249[6U] 
                                                    >> 0x1aU)) 
                                                | (__Vtemp2249[7U] 
                                                   << 6U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3[0xeU] 
        = ((7U & (__Vtemp2249[7U] >> 0x1aU)) | ((0x38U 
                                                 & (__Vtemp2249[7U] 
                                                    >> 0x1aU)) 
                                                | (__Vtemp2249[8U] 
                                                   << 6U)));
    VL_EXTEND_WI(67,8, __Vtemp2255, (0xffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    __Vtemp2262[4U] = (0x80U | ((7U & ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x10U) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (((IData)(((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 8U)) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                       << 0x10U) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)))));
    __Vtemp2262[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp2262[6U] = (0x200U | ((7U & ((IData)((((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                  << 8U) 
                                                 >> 0x20U)) 
                                        >> 0x17U)) 
                                 | ((0x38U & ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                        << 8U) 
                                                       >> 0x20U)) 
                                              >> 0x17U)) 
                                    | ((__Vtemp2255[0U] 
                                        << 0xcU) | 
                                       (0x1c0U & ((IData)(
                                                          (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 8U) 
                                                           >> 0x20U)) 
                                                  >> 0x17U))))));
    __Vtemp2262[7U] = ((7U & (__Vtemp2255[0U] >> 0x14U)) 
                       | ((0x38U & (__Vtemp2255[0U] 
                                    >> 0x14U)) | ((0x1c0U 
                                                   & (__Vtemp2255[0U] 
                                                      >> 0x14U)) 
                                                  | ((0xe00U 
                                                      & (__Vtemp2255[0U] 
                                                         >> 0x14U)) 
                                                     | (__Vtemp2255[1U] 
                                                        << 0xcU)))));
    __Vtemp2262[8U] = ((7U & (__Vtemp2255[1U] >> 0x14U)) 
                       | ((0x38U & (__Vtemp2255[1U] 
                                    >> 0x14U)) | ((0x1c0U 
                                                   & (__Vtemp2255[1U] 
                                                      >> 0x14U)) 
                                                  | ((0xe00U 
                                                      & (__Vtemp2255[1U] 
                                                         >> 0x14U)) 
                                                     | (__Vtemp2255[2U] 
                                                        << 0xcU)))));
    __Vtemp2264[4U] = (0xc0U | ((7U & ((IData)((((QData)((IData)(
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
    __Vtemp2264[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp2266[4U] = (0x100U | ((7U & ((IData)((((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                  << 0x20U) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) 
                                 | (((IData)(((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x18U)) 
                                     << 9U) | (0x38U 
                                               & ((IData)(
                                                          (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 0x20U) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU)))));
    __Vtemp2266[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp2266[9U] = ((7U & (__Vtemp2262[4U] >> 0x1aU)) 
                       | ((0x38U & (__Vtemp2262[4U] 
                                    >> 0x1aU)) | (__Vtemp2262[5U] 
                                                  << 6U)));
    __Vtemp2268[4U] = (0x14000U | ((0x7ffU & ((IData)(
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
                                       << 0x11U) | 
                                      (0x3800U & ((IData)(
                                                          (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 0x28U) 
                                                           >> 0x20U)) 
                                                  >> 0x12U)))));
    __Vtemp2268[5U] = ((0x7ffU & ((IData)(((QData)((IData)(
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
    __Vtemp2268[9U] = ((0x7ffU & (__Vtemp2264[4U] >> 0x12U)) 
                       | ((0x3800U & (__Vtemp2264[4U] 
                                      >> 0x12U)) | 
                          (__Vtemp2264[5U] << 0xeU)));
    __Vtemp2268[0xaU] = ((0x7ffU & (__Vtemp2264[5U] 
                                    >> 0x12U)) | ((0x3800U 
                                                   & (__Vtemp2264[5U] 
                                                      >> 0x12U)) 
                                                  | ((0x1c000U 
                                                      & ((IData)(
                                                                 (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                   << 0x10U) 
                                                                  >> 0x20U)) 
                                                         >> 9U)) 
                                                     | (__Vtemp2262[4U] 
                                                        << 0x11U))));
    __Vtemp2268[0xbU] = ((0x7ffU & (__Vtemp2262[4U] 
                                    >> 0xfU)) | (__Vtemp2266[9U] 
                                                 << 0xbU));
    __Vtemp2269[3U] = ((((IData)(((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                  << 0x30U)) >> 0x1dU) 
                        | (0xfffff8U & ((IData)((((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                  << 0x30U) 
                                                 >> 0x20U)) 
                                        << 3U))) | 
                       (0xff000000U & ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x30U) 
                                                >> 0x20U)) 
                                       << 3U)));
    __Vtemp2269[4U] = (0x30U | (((0xffffc0U & ((IData)(
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
    __Vtemp2269[8U] = (((7U & ((IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                         << 0x20U) 
                                        >> 0x20U)) 
                               >> 0x17U)) | (0xfffff8U 
                                             & (__Vtemp2266[4U] 
                                                << 3U))) 
                       | (0xff000000U & (__Vtemp2266[4U] 
                                         << 3U)));
    __Vtemp2269[9U] = (((__Vtemp2266[4U] >> 0x1dU) 
                        | (0xfffff8U & (__Vtemp2266[5U] 
                                        << 3U))) | 
                       (0xff000000U & (__Vtemp2266[5U] 
                                       << 3U)));
    __Vtemp2269[0xaU] = (((__Vtemp2266[5U] >> 0x1dU) 
                          | ((0x38U & ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x18U) 
                                                >> 0x20U)) 
                                       >> 0x14U)) | 
                             (0xffffc0U & (__Vtemp2264[4U] 
                                           << 6U)))) 
                         | (__Vtemp2268[9U] << 0x18U));
    __Vtemp2269[0xeU] = (((__Vtemp2266[9U] >> 0x1dU) 
                          | ((0x38U & (__Vtemp2262[5U] 
                                       >> 0x17U)) | 
                             ((0x1c0U & (__Vtemp2262[5U] 
                                         >> 0x17U)) 
                              | (0xfffe00U & (__Vtemp2262[6U] 
                                              << 9U))))) 
                         | (0xff000000U & (__Vtemp2262[6U] 
                                           << 9U)));
    __Vtemp2269[0xfU] = (((7U & (__Vtemp2262[6U] >> 0x17U)) 
                          | ((0x38U & (__Vtemp2262[6U] 
                                       >> 0x17U)) | 
                             ((0x1c0U & (__Vtemp2262[6U] 
                                         >> 0x17U)) 
                              | (0xfffe00U & (__Vtemp2262[7U] 
                                              << 9U))))) 
                         | (0xff000000U & (__Vtemp2262[7U] 
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
        = __Vtemp2269[3U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
        = __Vtemp2269[4U];
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
                             << 6U)))) | (__Vtemp2268[4U] 
                                          << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
        = ((__Vtemp2268[4U] >> 8U) | (__Vtemp2268[5U] 
                                      << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
        = ((__Vtemp2268[5U] >> 8U) | (0xff000000U & 
                                      ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x20U) 
                                                >> 0x20U)) 
                                       << 9U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
        = __Vtemp2269[8U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
        = __Vtemp2269[9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
        = __Vtemp2269[0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
        = ((__Vtemp2268[9U] >> 8U) | (__Vtemp2268[0xaU] 
                                      << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
        = ((__Vtemp2268[0xaU] >> 8U) | (__Vtemp2268[0xbU] 
                                        << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
        = ((__Vtemp2268[0xbU] >> 8U) | (0xff000000U 
                                        & (__Vtemp2266[9U] 
                                           << 3U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
        = __Vtemp2269[0xeU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
        = __Vtemp2269[0xfU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
        = ((7U & (__Vtemp2262[7U] >> 0x17U)) | ((0x38U 
                                                 & (__Vtemp2262[7U] 
                                                    >> 0x17U)) 
                                                | ((0x1c0U 
                                                    & (__Vtemp2262[7U] 
                                                       >> 0x17U)) 
                                                   | (0xfffe00U 
                                                      & (__Vtemp2262[8U] 
                                                         << 9U)))));
    __Vtemp2311[0xdU] = (0x4000U | (((IData)(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                               >> 0x1fU)
                                               ? (0xffffffffffe00000ULL 
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
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                              >> 0x14U))))))))) 
                                     << 0x18U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (0x3fU 
                                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                               >> 0x14U)))) 
                                                           >> 0x20U)) 
                                                  >> 0x1cU)));
    __Vtemp2311[0xeU] = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
                                                                              >> 0x14U))))))))) 
                          >> 8U) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__inst 
                                               >> 0x1fU)
                                               ? (0xffffffffffe00000ULL 
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
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                              >> 0x14U)))))))) 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp2316[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2);
    __Vtemp2316[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                               >> 0x20U));
    __Vtemp2316[2U] = (6U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                             << 0x14U));
    __Vtemp2316[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2316[4U] = (0x500000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp2316[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       << 8U);
    __Vtemp2316[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2316[7U] = (0x400U | (((IData)((QData)((IData)(
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0x14U))))) 
                                  << 0x1cU) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp2316[8U] = (((IData)((QData)((IData)((0x3fU 
                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                    >> 0x14U))))) 
                        >> 4U) | ((IData)(((QData)((IData)(
                                                           (0x3fU 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0x14U)))) 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2316[9U] = ((IData)(((QData)((IData)((0x3fU 
                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                    >> 0x14U)))) 
                                >> 0x20U)) >> 4U);
    __Vtemp2316[0xaU] = (0xc0U | ((IData)((QData)((IData)(
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0x14U))))) 
                                  << 0x10U));
    __Vtemp2316[0xbU] = (((IData)((QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U))))) 
                          >> 0x10U) | ((IData)(((QData)((IData)(
                                                                (0x3fU 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U)))) 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp2316[0xcU] = (0x8000000U | ((IData)(((QData)((IData)(
                                                                (0x3fU 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U)))) 
                                                >> 0x20U)) 
                                       >> 0x10U));
    __Vtemp2316[0xdU] = ((IData)((QData)((IData)((0x3fU 
                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                     >> 0x14U))))) 
                         << 4U);
    __Vtemp2316[0xeU] = (((IData)((QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                      >> 0x14U))))) 
                          >> 0x1cU) | ((IData)(((QData)((IData)(
                                                                (0x3fU 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U)))) 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2316[0xfU] = __Vtemp2311[0xdU];
    __Vtemp2316[0x10U] = __Vtemp2311[0xeU];
    __Vtemp2316[0x11U] = ((IData)((((vlSelf->ysyx_22050612_npc__DOT__inst 
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
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                           | ((0x800U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U)))))))) 
                                   >> 0x20U)) >> 8U);
    __Vtemp2316[0x12U] = (3U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                                << 0xcU));
    __Vtemp2316[0x13U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp2316[0x14U] = (0x200000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                                >> 0x20U)) 
                                       >> 0x14U));
    __Vtemp2316[0x15U] = (IData)((QData)((IData)((0x1fU 
                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))));
    __Vtemp2316[0x16U] = (IData)(((QData)((IData)((0x1fU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                  >> 0x20U));
    __Vtemp2316[0x17U] = (0x1b000U | ((IData)((QData)((IData)(
                                                              (0x1fU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                                      << 0x14U));
    __Vtemp2316[0x18U] = (((IData)((QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                           >> 0xcU) | ((IData)(((QData)((IData)(
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                >> 0x20U)) 
                                       << 0x14U));
    __Vtemp2316[0x19U] = ((IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                   >> 0x20U)) >> 0xcU);
    __Vtemp2316[0x1aU] = (0x1aU | ((IData)((QData)((IData)(
                                                           (0x1fU 
                                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                                   << 8U));
    __Vtemp2316[0x1bU] = (((IData)((QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                           >> 0x18U) | ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp2316[0x1cU] = (0x1900000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                    >> 0x20U)) 
                                           >> 0x18U)));
    __Vtemp2316[0x1dU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp2316[0x1eU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                   >> 0x20U)) >> 4U);
    __Vtemp2316[0x1fU] = (0x1800U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                     << 0x10U));
    __Vtemp2316[0x20U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        << 0x10U));
    __Vtemp2316[0x21U] = (0x70000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                  >> 0x20U)) 
                                         >> 0x10U));
    __Vtemp2316[0x22U] = (1U | ((IData)((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 0x14U))))) 
                                << 4U));
    __Vtemp2316[0x23U] = (((IData)((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                       >> 0x14U))))) 
                           >> 0x1cU) | ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 0x14U)))) 
                                                 >> 0x20U)) 
                                        << 4U));
    __Vtemp2316[0x24U] = (0x160000U | (((IData)((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U))))) 
                                        << 0x18U) | 
                                       ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 0x14U)))) 
                                                 >> 0x20U)) 
                                        >> 0x1cU)));
    __Vtemp2316[0x25U] = (((IData)((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                       >> 0x14U))))) 
                           >> 8U) | ((IData)(((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 0x14U)))) 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp2316[0x26U] = ((IData)(((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                       >> 0x14U)))) 
                                   >> 0x20U)) >> 8U);
    __Vtemp2316[0x27U] = (0x150U | ((IData)((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0x14U))))) 
                                    << 0xcU));
    __Vtemp2316[0x28U] = (((IData)((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                       >> 0x14U))))) 
                           >> 0x14U) | ((IData)(((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 0x14U)))) 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp2316[0x29U] = (0x14000000U | ((IData)(((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                      >> 0x14U)))) 
                                                  >> 0x20U)) 
                                         >> 0x14U));
    __Vtemp2316[0x2aU] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2);
    __Vtemp2316[0x2bU] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                  >> 0x20U));
    __Vtemp2316[0x2cU] = (0x13000U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                      << 0x14U));
    __Vtemp2316[0x2dU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 0x14U));
    __Vtemp2316[0x2eU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                   >> 0x20U)) >> 0xcU);
    __Vtemp2316[0x2fU] = (0x12U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                   << 8U));
    __Vtemp2316[0x30U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp2316[0x31U] = (0x900000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                        << 0x1cU) | 
                                       ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        >> 0x18U)));
    __Vtemp2316[0x32U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp2316[0x33U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                   >> 0x20U)) >> 4U);
    __Vtemp2316[0x34U] = (0x800U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                    << 0x10U));
    __Vtemp2316[0x35U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        << 0x10U));
    __Vtemp2316[0x36U] = (0x70000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                  >> 0x20U)) 
                                         >> 0x10U));
    __Vtemp2316[0x37U] = ((IData)((QData)((IData)((0x3fU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                          << 4U);
    __Vtemp2316[0x38U] = (((IData)((QData)((IData)(
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                           >> 0x1cU) | ((IData)(((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 >> 0x20U)) 
                                        << 4U));
    __Vtemp2316[0x39U] = (0x60000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                       << 0x18U) | 
                                      ((IData)(((QData)((IData)(
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                >> 0x20U)) 
                                       >> 0x1cU)));
    __Vtemp2316[0x3aU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp2316[0x3bU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                   >> 0x20U)) >> 8U);
    __Vtemp2316[0x3cU] = (0x50U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                   << 0xcU));
    __Vtemp2316[0x3dU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp2316[0x3eU] = (0x4000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        >> 0x14U));
    __Vtemp2330[0U] = (0xeU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                               << 0x14U));
    __Vtemp2330[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2330[2U] = (0xd00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp2330[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       << 8U);
    __Vtemp2330[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2330[5U] = (0xc00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                  << 0x1cU) | ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp2330[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2330[7U] = (0xb0000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp2330[8U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                       << 0x10U);
    __Vtemp2330[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                        >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     << 0x10U));
    __Vtemp2330[0xaU] = (0xa0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     >> 0x10U));
    __Vtemp2330[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                         << 4U);
    __Vtemp2330[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2330[0xdU] = (0x90U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                   << 0x18U) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
    __Vtemp2330[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp2330[0xfU] = (0x8000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       >> 8U));
    __Vtemp2330[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          << 0xcU);
    __Vtemp2330[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp2330[0x12U] = (0x7000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WWW(2624,2016,608, __Vtemp2331, __Vtemp2316, __Vtemp2330);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp2332, __Vtemp2331, vlSelf->ysyx_22050612_npc__DOT__imm_I);
    __Vtemp2346[0U] = (0x16U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                << 0x14U));
    __Vtemp2346[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2346[2U] = (0x1500000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     >> 0xcU));
    __Vtemp2346[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       << 8U);
    __Vtemp2346[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2346[5U] = (0x1400U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                   << 0x1cU) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp2346[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2346[7U] = (0x30000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp2346[8U] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                             << 0x10U));
    __Vtemp2346[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                        >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                              >> 0x20U)) 
                                     << 0x10U));
    __Vtemp2346[0xaU] = (0x120000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                               >> 0x20U)) 
                                      >> 0x10U));
    __Vtemp2346[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                         << 4U);
    __Vtemp2346[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2346[0xdU] = (0x110U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                                    << 0x18U) | ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                                          >> 0x20U)) 
                                                 >> 0x1cU)));
    __Vtemp2346[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp2346[0xfU] = (0x10000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                                 >> 0x20U)) 
                                        >> 8U));
    __Vtemp2346[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                          << 0xcU);
    __Vtemp2346[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp2346[0x12U] = (0xf000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WWW(3296,2688,608, __Vtemp2347, __Vtemp2332, __Vtemp2346);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp2348, __Vtemp2347, vlSelf->ysyx_22050612_npc__DOT__imm_I);
    __Vtemp2359[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I);
    __Vtemp2359[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                               >> 0x20U));
    __Vtemp2359[2U] = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                                << 0x14U));
    __Vtemp2359[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp2359[4U] = (0x2b00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                              >> 0x20U)) 
                                     >> 0xcU));
    __Vtemp2359[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       << 8U);
    __Vtemp2359[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp2359[7U] = (0x2a00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                   << 0x1cU) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp2359[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp2359[9U] = (0x90000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp2359[0xaU] = (2U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                               << 0x10U));
    __Vtemp2359[0xbU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                          >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp2359[0xcU] = (0x180000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      >> 0x10U));
    __Vtemp2359[0xdU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                         << 4U);
    __Vtemp2359[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp2359[0xfU] = (0x170U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                            >> 0x20U)) 
                                   >> 0x1cU));
    VL_CONCAT_WWW(3864,3360,504, __Vtemp2360, __Vtemp2348, __Vtemp2359);
    VL_ASSIGN_W(3864,vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3, __Vtemp2360);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x28U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x69U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x28U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x28U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6bU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x29U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6cU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6bU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x29U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6dU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6cU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x29U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6eU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6dU] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2aU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6fU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6eU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2aU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x70U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x6fU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2aU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x70U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2bU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x71U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x70U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2bU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x72U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x71U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2bU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x73U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x72U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2cU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x74U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x73U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2cU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x75U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x74U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2cU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x76U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x75U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2dU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x77U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x76U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2dU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x78U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x77U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0x2dU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x78U] 
                       >> 4U));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x28U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x69U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x28U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x28U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6bU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x29U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6cU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6bU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x29U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6dU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6cU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x29U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6eU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6dU] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2aU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6fU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6eU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2aU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x70U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x6fU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2aU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x70U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2bU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x71U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x70U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2bU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x72U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x71U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2bU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x73U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x72U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2cU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x74U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x73U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2cU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x75U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x74U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2cU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x76U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x75U] 
                                     >> 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2dU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x77U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x76U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2dU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x78U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x77U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0x2dU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x78U] 
                       >> 4U));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
              [0x2cU]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
              [0x2dU]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x25U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x26U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x27U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x28U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x29U]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x2aU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x2bU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out) 
           | ((vlSelf->ysyx_22050612_npc__DOT__opcode 
               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list
               [0x2cU]) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list
              [0x2cU]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x28U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x29U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x2aU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x2bU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x2cU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list
                          [0x2dU]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list
              [0x2dU]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x28U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x28U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x28U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x28U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x28U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x29U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x29U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x29U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x29U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x29U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x2aU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x2aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x2aU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x2aU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x2aU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x2bU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x2bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x2bU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x2bU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x2bU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x2cU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x2cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x2cU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x2cU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x2cU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0x2dU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                            [0x2dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
                             [0x2dU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0x2dU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list
           [0x2dU][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x28U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x28U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x28U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x28U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x28U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x29U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x29U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x29U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x29U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x29U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x2aU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x2aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x2aU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x2aU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x2aU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x2bU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x2bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x2bU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x2bU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x2bU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x2cU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x2cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x2cU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x2cU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x2cU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0x2dU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                            [0x2dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
                             [0x2dU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0x2dU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list
           [0x2dU][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
              [0x2dU]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x28U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x29U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x2aU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x2bU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x2cU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list
                                  [0x2dU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list
              [0x2dU]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
              [0x2dU]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x28U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x29U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x2aU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x2bU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x2cU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list
                                  [0x2dU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list
              [0x2dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
           + ((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
               ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
               : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    VL_EXTEND_WQ(72,64, __Vtemp3254, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result);
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
        = (1U | ((0xff00U & (__Vtemp3254[0U] << 8U)) 
                 | (0xffff0000U & (__Vtemp3254[0U] 
                                   << 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
        = (((__Vtemp3254[0U] >> 0x18U) | (0xff00U & 
                                          (__Vtemp3254[1U] 
                                           << 8U))) 
           | (0xffff0000U & (__Vtemp3254[1U] << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
        = ((__Vtemp3254[1U] >> 0x18U) | (0xff00U & 
                                         (__Vtemp3254[2U] 
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
        = (0x2900000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
        = (0xf00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                      << 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[8U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[9U] 
        = (0xe0000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xaU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 0x10U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xbU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xcU] 
        = (0xd0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xdU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xeU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
        = (0xc0U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                     << 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x10U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x11U] 
        = (0xb000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x12U] = 0U;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xeU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x10U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x11U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x12U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[0x11U] 
                                  >> 0x18U)));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [5U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
              [6U]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list
              [6U]));
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
    __Vtemp3562[1U] = (((IData)((0x11000000000ULL | 
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
        = __Vtemp3562[1U];
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
    __Vtemp3603[0U] = (IData)((0x30080140000000ULL 
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
    __Vtemp3603[1U] = (IData)(((0x30080140000000ULL 
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
        = __Vtemp3603[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3[1U] 
        = __Vtemp3603[1U];
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
    __Vtemp3640[0xbU] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
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
                          >> 0x10U) | ((IData)((((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
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
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))) 
                                                >> 0x20U)) 
                                       << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U] 
        = (0x2aU | ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata))) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
        = (((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata))) 
            >> 0xcU) | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
        = (0x2900000U | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)) 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
        = ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
        = (((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
            >> 0x18U) | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
        = (0xf00U | (((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
                      << 0x1cU) | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[8U] 
        = (((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
            >> 4U) | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[9U] 
        = (0xe0000000U | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xaU] 
        = ((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                   >> 2U))) ? ((1U 
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
                     : ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                       >> 0x1fU))) ? 
                        (0xffffffff00000000ULL | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                         : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata))))) 
           << 0x10U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xbU] 
        = __Vtemp3640[0xbU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xcU] 
        = (0xd0000U | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
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
                                >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xdU] 
        = ((IData)(((0x8000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                     ? (0xffffffffffff0000ULL | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))) 
           << 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xeU] 
        = (((IData)(((0x8000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                      ? (0xffffffffffff0000ULL | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                      : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))) 
            >> 0x1cU) | ((IData)((((0x8000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                    ? (0xffffffffffff0000ULL 
                                       | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
        = (0xc0U | (((IData)(((0x80U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                               ? (0xffffffffffffff00ULL 
                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                               : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))) 
                     << 0x18U) | ((IData)((((0x8000U 
                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                             ? (0xffffffffffff0000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                             : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))) 
                                           >> 0x20U)) 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x10U] 
        = (((IData)(((0x80U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                      ? (0xffffffffffffff00ULL | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                      : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))) 
            >> 8U) | ((IData)((((0x80U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                                 ? (0xffffffffffffff00ULL 
                                    | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                                 : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x11U] 
        = (0xb000000U | ((IData)((((0x80U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                                    ? (0xffffffffffffff00ULL 
                                       | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
                                  >> 0x20U)) >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x12U] = 0U;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xeU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xdU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xeU] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x10U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0xfU] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x11U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x10U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x12U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0x11U] 
                                  >> 0x18U)));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [6U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
              [6U]));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out;
    __Vtemp3739[0U] = (IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remuw0 
                                >> 0x1fU) ? (0xffffffff00000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remuw0)))
                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remuw0))));
    __Vtemp3739[1U] = (IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remuw0 
                                 >> 0x1fU) ? (0xffffffff00000000ULL 
                                              | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remuw0)))
                                 : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remuw0))) 
                               >> 0x20U));
    __Vtemp3739[2U] = (0x28000U | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                             >> 0x1fU)
                                             ? (0xffffffff00000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                             : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))) 
                                   << 0x14U));
    __Vtemp3739[3U] = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                  >> 0x1fU) ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))) 
                        >> 0xcU) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                               >> 0x1fU)
                                               ? (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                               : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0))) 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp3739[4U] = ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                  >> 0x1fU) ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0))) 
                                >> 0x20U)) >> 0xcU);
    __Vtemp3739[5U] = (0x28U | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
                                          >> 0x1fU)
                                          ? (0xffffffff00000000ULL 
                                             | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))
                                          : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))) 
                                << 8U));
    __Vtemp3739[6U] = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
                                  >> 0x1fU) ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))
                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))) 
                        >> 0x18U) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
                                                >> 0x1fU)
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0))) 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp3739[7U] = (0x2700000U | (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                                >> 0x1fU)
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))) 
                                      << 0x1cU) | ((IData)(
                                                           (((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
                                                              >> 0x1fU)
                                                              ? 
                                                             (0xffffffff00000000ULL 
                                                              | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))
                                                              : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0))) 
                                                            >> 0x20U)) 
                                                   >> 0x18U)));
    __Vtemp3739[8U] = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                  >> 0x1fU) ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))) 
                        >> 4U) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                             >> 0x1fU)
                                             ? (0xffffffff00000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                             : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0))) 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp3739[9U] = ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                  >> 0x1fU) ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0))) 
                                >> 0x20U)) >> 4U);
    __Vtemp3739[0xaU] = (0x2600U | ((IData)(((1U & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                            >> 0x1fU)))
                                              ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                              : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))) 
                                    << 0x10U));
    __Vtemp3739[0xbU] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                  >> 0x1fU)))
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))) 
                          >> 0x10U) | ((IData)((((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                             >> 0x1fU)))
                                                  ? 
                                                 (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                                  : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0))) 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp3739[0xcU] = (0x50000000U | ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0))) 
                                                 >> 0x20U)) 
                                        >> 0x10U));
    __Vtemp3739[0xdU] = (2U | ((IData)(VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                               << 4U));
    __Vtemp3739[0xeU] = (((IData)(VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                          >> 0x1cU) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp3739[0xfU] = (0x240000U | (((IData)(VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                       << 0x18U) | 
                                      ((IData)((VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                >> 0x20U)) 
                                       >> 0x1cU)));
    __Vtemp3739[0x10U] = (((IData)(VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                           >> 8U) | ((IData)((VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp3739[0x11U] = ((IData)((VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                   >> 0x20U)) >> 8U);
    __Vtemp3739[0x12U] = (0x220U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                    << 0xcU));
    __Vtemp3739[0x13U] = (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                    * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                           >> 0x14U) | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                  * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp3739[0x14U] = (0x1d000000U | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                   * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                  >> 0x20U)) 
                                         >> 0x14U));
    __Vtemp3739[0x15U] = (IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x3fU)))
                                   ? (0xffffffff00000000ULL 
                                      | (QData)((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                         >> 0x20U))))
                                   : (QData)((IData)(
                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                      >> 0x20U)))));
    __Vtemp3739[0x16U] = (IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x3fU)))
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                          >> 0x20U))))
                                    : (QData)((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                       >> 0x20U)))) 
                                  >> 0x20U));
    __Vtemp3739[0x17U] = (0x1b000U | ((IData)(((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x3fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))
                                                : (QData)((IData)(
                                                                  (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                   >> 0x20U))))) 
                                      << 0x14U));
    __Vtemp3739[0x18U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x20U))))
                                     : (QData)((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x20U))))) 
                           >> 0xcU) | ((IData)((((1U 
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
                                       << 0x14U));
    __Vtemp3739[0x19U] = ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x20U))))
                                     : (QData)((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x20U)))) 
                                   >> 0x20U)) >> 0xcU);
    __Vtemp3739[0x1aU] = (0x1aU | ((IData)(((1U & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x1fU)))
                                             ? (0xffffffff00000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                             : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                   << 8U));
    __Vtemp3739[0x1bU] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                           >> 0x18U) | ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp3739[0x1cU] = (0x1900000U | (((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x1fU)))
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                 >> 0x1fU)))
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                      : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                    >> 0x20U)) 
                                           >> 0x18U)));
    __Vtemp3739[0x1dU] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                           >> 4U) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp3739[0x1eU] = ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                   >> 0x20U)) >> 4U);
    __Vtemp3739[0x1fU] = (0x1800U | ((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                             >> 0x1fU)))
                                               ? (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                               : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                     << 0x10U));
    __Vtemp3739[0x20U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
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
    __Vtemp3739[0x21U] = (0x70000000U | ((IData)(((
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
    __Vtemp3739[0x22U] = (1U | ((IData)(((1U & (IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x3fU)))
                                          ? (0xffffffff00000000ULL 
                                             | (QData)((IData)(
                                                               (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                >> 0x20U))))
                                          : (QData)((IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                             >> 0x20U))))) 
                                << 4U));
    __Vtemp3739[0x23U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x3fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x20U))))
                                     : (QData)((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                        >> 0x20U))))) 
                           >> 0x1cU) | ((IData)((((1U 
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
                                        << 4U));
    __Vtemp3739[0x24U] = (0x160000U | (((IData)(((1U 
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
                                        >> 0x1cU)));
    __Vtemp3739[0x25U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
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
    __Vtemp3739[0x26U] = ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                   >> 0x1fU)))
                                     ? (0xffffffff00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                   >> 0x20U)) >> 8U);
    __Vtemp3739[0x27U] = (0x150U | ((IData)(((1U & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                            >> 0x1fU)))
                                              ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                              : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                    << 0xcU));
    __Vtemp3739[0x28U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
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
    __Vtemp3739[0x29U] = (0x14000000U | ((IData)(((
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
    __Vtemp3739[0x2aU] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    __Vtemp3739[0x2bU] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U));
    __Vtemp3739[0x2cU] = (0x13000U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                      << 0x14U));
    __Vtemp3739[0x2dU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       << 0x14U));
    __Vtemp3739[0x2eU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 0xcU);
    __Vtemp3739[0x2fU] = (0x12U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 8U));
    __Vtemp3739[0x30U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 8U));
    __Vtemp3739[0x31U] = (0x900000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                        << 0x1cU) | 
                                       ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        >> 0x18U)));
    __Vtemp3739[0x32U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 0x1cU));
    __Vtemp3739[0x33U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 4U);
    __Vtemp3739[0x34U] = (0x800U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                    << 0x10U));
    __Vtemp3739[0x35U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 0x10U));
    __Vtemp3739[0x36U] = (0x70000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x20U)) 
                                         >> 0x10U));
    __Vtemp3739[0x37U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                          << 4U);
    __Vtemp3739[0x38U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 4U));
    __Vtemp3739[0x39U] = (0x60000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                       << 0x18U) | 
                                      ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       >> 0x1cU)));
    __Vtemp3739[0x3aU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 0x18U));
    __Vtemp3739[0x3bU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 8U);
    __Vtemp3739[0x3cU] = (0x50U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 0xcU));
    __Vtemp3739[0x3dU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp3739[0x3eU] = (0x4000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        >> 0x14U));
    __Vtemp3753[0U] = (0xbU | ((IData)((4ULL + vlSelf->pc)) 
                               << 0x14U));
    __Vtemp3753[1U] = (((IData)((4ULL + vlSelf->pc)) 
                        >> 0xcU) | ((IData)(((4ULL 
                                              + vlSelf->pc) 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp3753[2U] = (0x400000U | ((IData)(((4ULL 
                                              + vlSelf->pc) 
                                             >> 0x20U)) 
                                    >> 0xcU));
    __Vtemp3753[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 8U);
    __Vtemp3753[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp3753[5U] = (0xc0000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                    << 0x1cU) | ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
    __Vtemp3753[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp3753[7U] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                >> 0x20U)) >> 4U);
    __Vtemp3753[8U] = (0x80U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                << 0x10U));
    __Vtemp3753[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 0x10U));
    __Vtemp3753[0xaU] = (0x4000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       >> 0x10U));
    __Vtemp3753[0xbU] = ((IData)((4ULL + vlSelf->pc)) 
                         << 4U);
    __Vtemp3753[0xcU] = (((IData)((4ULL + vlSelf->pc)) 
                          >> 0x1cU) | ((IData)(((4ULL 
                                                 + vlSelf->pc) 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp3753[0xdU] = (0x3000U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                     << 0x18U) | ((IData)(
                                                          ((4ULL 
                                                            + vlSelf->pc) 
                                                           >> 0x20U)) 
                                                  >> 0x1cU)));
    __Vtemp3753[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp3753[0xfU] = ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 8U);
    __Vtemp3753[0x10U] = (2U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                                << 0xcU));
    __Vtemp3753[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp3753[0x12U] = (0x100000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                                >> 0x20U)) 
                                       >> 0x14U));
    VL_CONCAT_WWW(2624,2016,608, __Vtemp3754, __Vtemp3739, __Vtemp3753);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp3755, __Vtemp3754, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix);
    __Vtemp3769[0U] = (0x16U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                << 0x14U));
    __Vtemp3769[1U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp3769[2U] = (0x1500000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     >> 0xcU));
    __Vtemp3769[3U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 8U);
    __Vtemp3769[4U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp3769[5U] = (0x1400U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 0x1cU) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp3769[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp3769[7U] = (0x30000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp3769[8U] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                             << 0x10U));
    __Vtemp3769[9U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     << 0x10U));
    __Vtemp3769[0xaU] = (0xf0000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     >> 0x10U));
    __Vtemp3769[0xbU] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                         << 4U);
    __Vtemp3769[0xcU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                          >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                >> 0x20U)) 
                                       << 4U));
    __Vtemp3769[0xdU] = (0xe0U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                                   << 0x18U) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
    __Vtemp3769[0xeU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                          >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                             >> 0x20U)) 
                                    << 0x18U));
    __Vtemp3769[0xfU] = (0xd000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                >> 0x20U)) 
                                       >> 8U));
    __Vtemp3769[0x10U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                          << 0xcU);
    __Vtemp3769[0x11U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                           >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                 >> 0x20U)) 
                                        << 0xcU));
    __Vtemp3769[0x12U] = (0xc000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     >> 0x14U));
    VL_CONCAT_WWW(3296,2688,608, __Vtemp3770, __Vtemp3755, __Vtemp3769);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp3771, __Vtemp3770, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
    __Vtemp3780[0U] = (IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x1fU)))
                                ? (0xffffffff00000000ULL 
                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))));
    __Vtemp3780[1U] = (IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x1fU)))
                                 ? (0xffffffff00000000ULL 
                                    | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                 : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                               >> 0x20U));
    __Vtemp3780[2U] = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                                << 0x14U));
    __Vtemp3780[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp3780[4U] = (0x2a00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     >> 0xcU));
    __Vtemp3780[5U] = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                       << 8U);
    __Vtemp3780[6U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     << 8U));
    __Vtemp3780[7U] = (0x2900U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                   << 0x1cU) | ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp3780[8U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp3780[9U] = (0x80000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x20U)) 
                                      >> 4U));
    __Vtemp3780[0xaU] = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                               << 0x10U));
    __Vtemp3780[0xbU] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                          >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                >> 0x20U)) 
                                       << 0x10U));
    __Vtemp3780[0xcU] = (0x170000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x20U)) 
                                      >> 0x10U));
    __Vtemp3780[0xdU] = 0U;
    VL_CONCAT_WWW(3780,3360,420, __Vtemp3781, __Vtemp3771, __Vtemp3780);
    VL_ASSIGN_W(3780,vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3, __Vtemp3781);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x25U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x62U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x61U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x25U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x63U] 
            << 0x1cU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x62U] 
                         >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x25U][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x63U] 
                       >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x26U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x64U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x63U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x26U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x65U] 
            << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x64U] 
                      >> 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x26U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x66U] 
                        << 8U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x65U] 
                                  >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x27U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x67U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x66U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x27U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x68U] 
            << 0x14U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x67U] 
                         >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x27U][2U] 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x68U] 
           >> 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x28U][0U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x69U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x28U][1U] 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6aU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x28U][2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6bU]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x29U][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6cU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6bU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x29U][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6dU] 
            << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6cU] 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x29U][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6eU] 
                        << 0xcU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6dU] 
                                    >> 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2aU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6fU] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6eU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2aU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x70U] 
            << 0x18U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x6fU] 
                         >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2aU][2U] 
        = (0xfffffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x70U] 
                       >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2bU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x71U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x70U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2bU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x72U] 
            << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x71U] 
                      >> 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2bU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x73U] 
                        << 4U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x72U] 
                                  >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2cU][0U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x74U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x73U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2cU][1U] 
        = ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x75U] 
            << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x74U] 
                         >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0x2cU][2U] 
        = (0xfffffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x76U] 
                        << 0x10U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x75U] 
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x1fU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x1fU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x1fU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x20U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x20U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x20U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x21U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x21U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x21U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x22U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x22U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x22U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x23U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x23U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x23U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x24U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x24U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x24U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x25U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x25U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x25U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x26U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x26U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x26U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x27U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x27U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x27U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x28U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x28U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x28U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x29U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x29U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x29U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x2aU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x2aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x2aU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x2bU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x2bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x2bU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0x2cU] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                            [0x2cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
                             [0x2cU][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0xaU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0xbU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0xcU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0xdU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0xeU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0xfU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x10U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x11U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x12U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x13U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x13U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x14U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x14U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x15U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x15U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x16U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x16U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x17U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x17U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x18U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x18U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x19U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x19U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x1aU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x1aU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x1bU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x1bU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x1cU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x1cU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x1dU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x1dU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x1eU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x1eU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x1fU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x1fU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x20U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x20U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x21U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x21U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x22U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x22U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x23U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x23U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x24U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x24U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x25U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x25U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x26U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x26U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x27U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x27U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x28U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x28U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x29U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x29U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x2aU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x2aU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x2bU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x2bU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0x2cU] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list
           [0x2cU][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = (vlSelf->ysyx_22050612_npc__DOT__opcode == 
           vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit) 
           | (vlSelf->ysyx_22050612_npc__DOT__opcode 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                               == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x1fU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x20U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x21U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x22U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x23U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x24U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x25U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x26U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x27U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x28U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x29U])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x2aU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x2bU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x2bU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list
                                  [0x2cU])))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list
              [0x2cU]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out;
}
