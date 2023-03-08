// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ dnpc, IData/*31:0*/ dest_register, IData/*31:0*/ src_register, QData/*63:0*/ imm);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ r);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(IData/*31:0*/ npc_inst);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_22050612_npc___024root___sequent__TOP__2(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    VlWide<3>/*95:0*/ __Vtemp1106;
    VlWide<9>/*287:0*/ __Vtemp1113;
    VlWide<11>/*351:0*/ __Vtemp1115;
    VlWide<13>/*415:0*/ __Vtemp1117;
    VlWide<15>/*479:0*/ __Vtemp1119;
    VlWide<17>/*543:0*/ __Vtemp1120;
    VlWide<19>/*607:0*/ __Vtemp1152;
    VlWide<61>/*1951:0*/ __Vtemp1169;
    VlWide<3>/*95:0*/ __Vtemp1635;
    VlWide<3>/*95:0*/ __Vtemp1715;
    VlWide<3>/*95:0*/ __Vtemp1813;
    VlWide<8>/*255:0*/ __Vtemp1834;
    VlWide<56>/*1791:0*/ __Vtemp1895;
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
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix 
        = vlSelf->__Vtask_pmem_read__0__rdata;
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
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1 
        = vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                       == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1 
        = vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[2U] 
        = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[3U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
            >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[4U] 
        = (0x2b00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[7U] 
        = (0x2a00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       << 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[8U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
            >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[9U] 
        = (0x80000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xaU] 
        = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                 << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xbU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
            >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xcU] 
        = (0x160000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                 >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xdU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
           << 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xeU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0xfU] 
        = (0x150U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x10U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
            >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x11U] 
        = (0x13000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                   >> 0x20U)) >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x12U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
           << 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x13U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
            >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                  >> 0x20U)) << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x14U] 
        = (0x11000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                >> 0x20U)) >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x15U] 
        = ((0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
           | (0xfffff000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x16U] 
        = ((0xfffU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                              >> 0x20U))) | (0xfffff000U 
                                             & (IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x17U] 
        = (0x10U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x18U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      >> 0xcU)) | ((0xff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                >> 0xcU)) 
                                   | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x19U] 
        = (0xe00000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                            >> 0x20U)) 
                                   >> 0xcU)) | (0xff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   >> 0xcU))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1aU] 
        = ((0xf00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 8U)) | (0xfffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1bU] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
             >> 0x18U) | (0xf00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 8U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1cU] 
        = (0xd00U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U)) >> 0x18U) 
                     | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                        << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1dU] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      >> 4U)) | ((0xffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                >> 4U)) 
                                 | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1eU] 
        = (0x60000000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 4U)) | (0xffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   >> 4U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x1fU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
           << 0x10U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x20U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      >> 0x10U)) | ((0xf000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                >> 0x10U)) 
                                    | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x21U] 
        = (0x40000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                           >> 0x20U)) 
                                  >> 0x10U)) | (0xf000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   >> 0x10U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x22U] 
        = ((0xff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 4U)) | (0xfffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x23U] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
             >> 0x1cU) | (0xff0U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 4U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x24U] 
        = (0xc000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                >> 0x20U)) >> 0x1cU) 
                      | ((IData)(vlSelf->pc) << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x25U] 
        = ((0xfffU & ((IData)(vlSelf->pc) >> 8U)) | 
           ((0xfff000U & ((IData)(vlSelf->pc) >> 8U)) 
            | ((IData)((vlSelf->pc >> 0x20U)) << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x26U] 
        = ((0xfffU & ((IData)((vlSelf->pc >> 0x20U)) 
                      >> 8U)) | (0xfff000U & ((IData)(
                                                      (vlSelf->pc 
                                                       >> 0x20U)) 
                                              >> 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x27U] 
        = (3U | ((IData)(vlSelf->pc) << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x28U] 
        = (((IData)(vlSelf->pc) >> 0x14U) | ((IData)(
                                                     (vlSelf->pc 
                                                      >> 0x20U)) 
                                             << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x29U] 
        = (0x200000U | ((IData)((vlSelf->pc >> 0x20U)) 
                        >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2aU] 
        = ((0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
           | (0xfffff000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2bU] 
        = ((0xfffU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                              >> 0x20U))) | (0xfffff000U 
                                             & (IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2cU] 
        = (0x19000U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                       << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2dU] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      >> 0xcU)) | ((0xff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                >> 0xcU)) 
                                   | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2eU] 
        = ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U)) >> 0xcU)) 
           | (0xff000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                   >> 0x20U)) >> 0xcU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x2fU] 
        = (0x17U | ((0xf00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                               << 8U)) | (0xfffff000U 
                                          & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                             << 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x30U] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
             >> 0x18U) | (0xf00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 8U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x31U] 
        = (0x1300000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                   >> 0x20U)) >> 0x18U) 
                         | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                            << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x32U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      >> 4U)) | ((0xffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                >> 4U)) 
                                 | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x33U] 
        = ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U)) >> 4U)) | 
           (0xffff000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                   >> 0x20U)) >> 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x34U] 
        = (0x1200U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x35U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      >> 0x10U)) | ((0xf000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                >> 0x10U)) 
                                    | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x36U] 
        = (0x80000000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xf000U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                               >> 0x20U)) 
                                                      >> 0x10U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x37U] 
        = ((0xff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      << 4U)) | (0xfffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                                << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x38U] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
             >> 0x1cU) | (0xff0U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 4U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x39U] 
        = (0x50000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                          << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3aU] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                      >> 8U)) | ((0xfff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1) 
                                               >> 8U)) 
                                 | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                             >> 0x20U)) 
                                    << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3bU] 
        = ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               >> 0x20U)) >> 8U)) | 
           (0xfff000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                  >> 0x20U)) >> 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3[0x3cU] = 0x40U;
    VL_EXTEND_WI(67,8, __Vtemp1106, (0xffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    __Vtemp1113[4U] = (0x80U | ((7U & ((IData)((((QData)((IData)(
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
    __Vtemp1113[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp1113[6U] = (0x200U | ((7U & ((IData)((((QData)((IData)(
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
                                    | ((__Vtemp1106[0U] 
                                        << 0xcU) | 
                                       (0x1c0U & ((IData)(
                                                          (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                            << 8U) 
                                                           >> 0x20U)) 
                                                  >> 0x17U))))));
    __Vtemp1113[7U] = ((7U & (__Vtemp1106[0U] >> 0x14U)) 
                       | ((0x38U & (__Vtemp1106[0U] 
                                    >> 0x14U)) | ((0x1c0U 
                                                   & (__Vtemp1106[0U] 
                                                      >> 0x14U)) 
                                                  | ((0xe00U 
                                                      & (__Vtemp1106[0U] 
                                                         >> 0x14U)) 
                                                     | (__Vtemp1106[1U] 
                                                        << 0xcU)))));
    __Vtemp1113[8U] = ((7U & (__Vtemp1106[1U] >> 0x14U)) 
                       | ((0x38U & (__Vtemp1106[1U] 
                                    >> 0x14U)) | ((0x1c0U 
                                                   & (__Vtemp1106[1U] 
                                                      >> 0x14U)) 
                                                  | ((0xe00U 
                                                      & (__Vtemp1106[1U] 
                                                         >> 0x14U)) 
                                                     | (__Vtemp1106[2U] 
                                                        << 0xcU)))));
    __Vtemp1115[4U] = (0xc0U | ((7U & ((IData)((((QData)((IData)(
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
    __Vtemp1115[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp1117[4U] = (0x100U | ((7U & ((IData)((((QData)((IData)(
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
    __Vtemp1117[5U] = ((7U & ((IData)(((QData)((IData)(
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
    __Vtemp1117[9U] = ((7U & (__Vtemp1113[4U] >> 0x1aU)) 
                       | ((0x38U & (__Vtemp1113[4U] 
                                    >> 0x1aU)) | (__Vtemp1113[5U] 
                                                  << 6U)));
    __Vtemp1119[4U] = (0x14000U | ((0x7ffU & ((IData)(
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
    __Vtemp1119[5U] = ((0x7ffU & ((IData)(((QData)((IData)(
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
    __Vtemp1119[9U] = ((0x7ffU & (__Vtemp1115[4U] >> 0x12U)) 
                       | ((0x3800U & (__Vtemp1115[4U] 
                                      >> 0x12U)) | 
                          (__Vtemp1115[5U] << 0xeU)));
    __Vtemp1119[0xaU] = ((0x7ffU & (__Vtemp1115[5U] 
                                    >> 0x12U)) | ((0x3800U 
                                                   & (__Vtemp1115[5U] 
                                                      >> 0x12U)) 
                                                  | ((0x1c000U 
                                                      & ((IData)(
                                                                 (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                                   << 0x10U) 
                                                                  >> 0x20U)) 
                                                         >> 9U)) 
                                                     | (__Vtemp1113[4U] 
                                                        << 0x11U))));
    __Vtemp1119[0xbU] = ((0x7ffU & (__Vtemp1113[4U] 
                                    >> 0xfU)) | (__Vtemp1117[9U] 
                                                 << 0xbU));
    __Vtemp1120[3U] = ((((IData)(((QData)((IData)((0xffU 
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
    __Vtemp1120[4U] = (0x30U | (((0xffffc0U & ((IData)(
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
    __Vtemp1120[8U] = (((7U & ((IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                         << 0x20U) 
                                        >> 0x20U)) 
                               >> 0x17U)) | (0xfffff8U 
                                             & (__Vtemp1117[4U] 
                                                << 3U))) 
                       | (0xff000000U & (__Vtemp1117[4U] 
                                         << 3U)));
    __Vtemp1120[9U] = (((__Vtemp1117[4U] >> 0x1dU) 
                        | (0xfffff8U & (__Vtemp1117[5U] 
                                        << 3U))) | 
                       (0xff000000U & (__Vtemp1117[5U] 
                                       << 3U)));
    __Vtemp1120[0xaU] = (((__Vtemp1117[5U] >> 0x1dU) 
                          | ((0x38U & ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x18U) 
                                                >> 0x20U)) 
                                       >> 0x14U)) | 
                             (0xffffc0U & (__Vtemp1115[4U] 
                                           << 6U)))) 
                         | (__Vtemp1119[9U] << 0x18U));
    __Vtemp1120[0xeU] = (((__Vtemp1117[9U] >> 0x1dU) 
                          | ((0x38U & (__Vtemp1113[5U] 
                                       >> 0x17U)) | 
                             ((0x1c0U & (__Vtemp1113[5U] 
                                         >> 0x17U)) 
                              | (0xfffe00U & (__Vtemp1113[6U] 
                                              << 9U))))) 
                         | (0xff000000U & (__Vtemp1113[6U] 
                                           << 9U)));
    __Vtemp1120[0xfU] = (((7U & (__Vtemp1113[6U] >> 0x17U)) 
                          | ((0x38U & (__Vtemp1113[6U] 
                                       >> 0x17U)) | 
                             ((0x1c0U & (__Vtemp1113[6U] 
                                         >> 0x17U)) 
                              | (0xfffe00U & (__Vtemp1113[7U] 
                                              << 9U))))) 
                         | (0xff000000U & (__Vtemp1113[7U] 
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
        = __Vtemp1120[3U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[4U] 
        = __Vtemp1120[4U];
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
                             << 6U)))) | (__Vtemp1119[4U] 
                                          << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[6U] 
        = ((__Vtemp1119[4U] >> 8U) | (__Vtemp1119[5U] 
                                      << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[7U] 
        = ((__Vtemp1119[5U] >> 8U) | (0xff000000U & 
                                      ((IData)((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                 << 0x20U) 
                                                >> 0x20U)) 
                                       << 9U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[8U] 
        = __Vtemp1120[8U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[9U] 
        = __Vtemp1120[9U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xaU] 
        = __Vtemp1120[0xaU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xbU] 
        = ((__Vtemp1119[9U] >> 8U) | (__Vtemp1119[0xaU] 
                                      << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xcU] 
        = ((__Vtemp1119[0xaU] >> 8U) | (__Vtemp1119[0xbU] 
                                        << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xdU] 
        = ((__Vtemp1119[0xbU] >> 8U) | (0xff000000U 
                                        & (__Vtemp1117[9U] 
                                           << 3U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xeU] 
        = __Vtemp1120[0xeU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0xfU] 
        = __Vtemp1120[0xfU];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3[0x10U] 
        = ((7U & (__Vtemp1113[7U] >> 0x17U)) | ((0x38U 
                                                 & (__Vtemp1113[7U] 
                                                    >> 0x17U)) 
                                                | ((0x1c0U 
                                                    & (__Vtemp1113[7U] 
                                                       >> 0x17U)) 
                                                   | (0xfffe00U 
                                                      & (__Vtemp1113[8U] 
                                                         << 9U)))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[2U] 
        = (0x2bU | ((IData)((QData)((IData)((0xffffU 
                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[3U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))) 
            >> 0xcU) | ((IData)(((QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[4U] 
        = (0x1100000U | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[5U] = 0x600000U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[6U] = 0x80U;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3[7U] = 0x1000U;
    __Vtemp1152[0x11U] = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
                                                                    >> 0x14U))))))))) 
                           >> 0x14U) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__inst 
                                                   >> 0x1fU)
                                                   ? 
                                                  (0xffffffffffe00000ULL 
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
                                                   : 
                                                  (((QData)((IData)(
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
                                        << 0xcU));
    __Vtemp1169[0x24U] = (0xc000U | (((IData)(((QData)((IData)(
                                                               (0x3fU 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      >> 0x1cU) | ((IData)(
                                                           ((vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0x1fU)
                                                             ? 
                                                            (0xffffffffffe00000ULL 
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
                                                             : 
                                                            (((QData)((IData)(
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
                                                   << 0x18U)));
    __Vtemp1169[0x25U] = ((0xfffU & ((IData)(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
                                     >> 8U)) | (__Vtemp1152[0x11U] 
                                                << 0xcU));
    __Vtemp1169[0x26U] = ((__Vtemp1152[0x11U] >> 0x14U) 
                          | (0xfff000U & ((IData)((
                                                   ((vlSelf->ysyx_22050612_npc__DOT__inst 
                                                     >> 0x1fU)
                                                     ? 
                                                    (0xffffffffffe00000ULL 
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
                                                     : 
                                                    (((QData)((IData)(
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
                                          >> 8U)));
    __Vtemp1169[0x27U] = (3U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
                                << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[2U] 
        = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[3U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
            >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[4U] 
        = (0x2b00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[7U] 
        = (0x2a00U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                       << 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[8U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
            >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[9U] 
        = (0x80000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xaU] 
        = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                 << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xbU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
            >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xcU] 
        = (0x160000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                 >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xdU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
           << 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xeU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0xfU] 
        = (0x150U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                      << 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                            >> 0x20U)) 
                                   >> 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x10U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
            >> 8U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x11U] 
        = (0x13000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                   >> 0x20U)) >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x12U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
           << 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x13U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S) 
            >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                  >> 0x20U)) << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x14U] 
        = (0x11000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                >> 0x20U)) >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x15U] 
        = ((0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S)) 
           | (0xfffff000U & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_S)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x16U] 
        = ((0xfffU & (IData)((vlSelf->ysyx_22050612_npc__DOT__imm_S 
                              >> 0x20U))) | (0xfffff000U 
                                             & (IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__imm_S 
                                                        >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x17U] 
        = (0x10U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x18U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                      >> 0xcU)) | ((0xff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                                >> 0xcU)) 
                                   | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x19U] 
        = (0xe00000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                            >> 0x20U)) 
                                   >> 0xcU)) | (0xff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                            >> 0x20U)) 
                                                   >> 0xcU))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1aU] 
        = ((0xf00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                      << 8U)) | (0xfffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                                << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1bU] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
             >> 0x18U) | (0xf00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                             >> 0x20U)) 
                                    << 8U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                            >> 0x20U)) 
                                                   << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1cU] 
        = (0xd00U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                               >> 0x20U)) >> 0x18U) 
                     | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                        << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1dU] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      >> 4U)) | ((0xffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                >> 4U)) 
                                 | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1eU] 
        = (0x60000000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     >> 4U)) | (0xffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                            >> 0x20U)) 
                                                   >> 4U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x1fU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
           << 0x10U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x20U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                      >> 0x10U)) | ((0xf000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I) 
                                                >> 0x10U)) 
                                    | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x21U] 
        = (0x40000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                           >> 0x20U)) 
                                  >> 0x10U)) | (0xf000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__imm_I 
                                                            >> 0x20U)) 
                                                   >> 0x10U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x22U] 
        = ((0xff0U & ((IData)((QData)((IData)((0x3fU 
                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                  >> 0x14U))))) 
                      << 4U)) | (0xfffff000U & ((IData)((QData)((IData)(
                                                                        (0x3fU 
                                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                            >> 0x14U))))) 
                                                << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x23U] 
        = ((((IData)((QData)((IData)((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                               >> 0x14U))))) 
             >> 0x1cU) | (0xff0U & ((IData)(((QData)((IData)(
                                                             (0x3fU 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0x14U)))) 
                                             >> 0x20U)) 
                                    << 4U))) | (0xfffff000U 
                                                & ((IData)(
                                                           ((QData)((IData)(
                                                                            (0x3fU 
                                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                                >> 0x14U)))) 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x24U] 
        = __Vtemp1169[0x24U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x25U] 
        = __Vtemp1169[0x25U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x26U] 
        = __Vtemp1169[0x26U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x27U] 
        = __Vtemp1169[0x27U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x28U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
            >> 0x14U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                  >> 0x20U)) << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x29U] 
        = (0x200000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                 >> 0x20U)) >> 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2aU] 
        = ((0xfffU & (IData)((QData)((IData)((0x1fU 
                                              & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))))) 
           | (0xfffff000U & (IData)((QData)((IData)(
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2bU] 
        = ((0xfffU & (IData)(((QData)((IData)((0x1fU 
                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                              >> 0x20U))) | (0xfffff000U 
                                             & (IData)(
                                                       ((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                                        >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2cU] 
        = (0x19000U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                       << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2dU] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      >> 0xcU)) | ((0xff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                >> 0xcU)) 
                                   | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2eU] 
        = ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                               >> 0x20U)) >> 0xcU)) 
           | (0xff000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                   >> 0x20U)) >> 0xcU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x2fU] 
        = (0x17U | ((0xf00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                               << 8U)) | (0xfffff000U 
                                          & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                             << 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x30U] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
             >> 0x18U) | (0xf00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 8U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                            >> 0x20U)) 
                                                   << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x31U] 
        = (0x1300000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                   >> 0x20U)) >> 0x18U) 
                         | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                            << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x32U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      >> 4U)) | ((0xffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                >> 4U)) 
                                 | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x33U] 
        = ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                               >> 0x20U)) >> 4U)) | 
           (0xffff000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                   >> 0x20U)) >> 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x34U] 
        = (0x1200U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x35U] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      >> 0x10U)) | ((0xf000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                >> 0x10U)) 
                                    | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x36U] 
        = (0x80000000U | ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xf000U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                               >> 0x20U)) 
                                                      >> 0x10U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x37U] 
        = ((0xff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      << 4U)) | (0xfffff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                                << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x38U] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
             >> 0x1cU) | (0xff0U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 4U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x39U] 
        = (0x50000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                          << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3aU] 
        = ((0xfffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                      >> 8U)) | ((0xfff000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2) 
                                               >> 8U)) 
                                 | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                             >> 0x20U)) 
                                    << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3bU] 
        = ((0xfffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                               >> 0x20U)) >> 8U)) | 
           (0xfff000U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                  >> 0x20U)) >> 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3[0x3cU] = 0x40U;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list
           [2U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
        = (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
           + ((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
               ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
               : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    VL_EXTEND_WQ(72,64, __Vtemp1635, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0U] 
        = (IData)(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[1U] 
        = (IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[2U] 
        = (0xaU | ((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                   << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[3U] 
        = (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
            >> 0x18U) | ((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[4U] 
        = (0x800U | (((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                               >> 0x20U)) >> 0x18U) 
                     | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                 ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                        << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[5U] 
        = ((0xffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                              ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                     >> 0x10U)) | ((0xff00U & ((IData)(
                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                        ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                                               >> 0x10U)) 
                                   | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                               >> 0x20U)) 
                                      << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[6U] 
        = (0x70000U | ((0xffU & ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                           ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                          >> 0x20U)) 
                                 >> 0x10U)) | (((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                         | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                                                << 0x18U) 
                                               | (0xff00U 
                                                  & ((IData)(
                                                             ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                               ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                              >> 0x20U)) 
                                                     >> 0x10U)))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[7U] 
        = ((0xffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                              | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                     >> 8U)) | ((0xffff00U & ((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                       | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)) 
                                              >> 8U)) 
                                | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                             | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                            >> 0x20U)) 
                                   << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[8U] 
        = (0x6000000U | ((0xffU & ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                             | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                            >> 0x20U)) 
                                   >> 8U)) | (0xffff00U 
                                              & ((IData)(
                                                         ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                           | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                          >> 0x20U)) 
                                                 >> 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[9U] 
        = ((0xffU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                             & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))) 
           | (0xffffff00U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xaU] 
        = ((0xffU & (IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                              & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                             >> 0x20U))) | (0xffffff00U 
                                            & (IData)(
                                                      ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                        & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b) 
                                                       >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xbU] 
        = (4U | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                           < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                           ? 1ULL : 0ULL)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xcU] 
        = (((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                      < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                      ? 1ULL : 0ULL)) >> 0x18U) | ((IData)(
                                                           (((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                              < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xdU] 
        = (0x300U | (((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                 < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                 ? 1ULL : 0ULL) >> 0x20U)) 
                      >> 0x18U) | ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                             < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                             ? 1ULL
                                             : 0ULL)) 
                                   << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xeU] 
        = ((0xffU & ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                               < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                               ? 1ULL : 0ULL)) >> 0x10U)) 
           | ((0xff00U & ((IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                    < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                    ? 1ULL : 0ULL)) 
                          >> 0x10U)) | ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                   < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                   ? 1ULL
                                                   : 0ULL) 
                                                 >> 0x20U)) 
                                        << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0xfU] 
        = (0x20000U | ((0xffU & ((IData)((((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                            < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                            ? 1ULL : 0ULL) 
                                          >> 0x20U)) 
                                 >> 0x10U)) | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result) 
                                                << 0x18U) 
                                               | (0xff00U 
                                                  & ((IData)(
                                                             (((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                                                < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                                                ? 1ULL
                                                                : 0ULL) 
                                                              >> 0x20U)) 
                                                     >> 0x10U)))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x10U] 
        = ((0xffU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result) 
                     >> 8U)) | ((0xffff00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result) 
                                              >> 8U)) 
                                | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
                                            >> 0x20U)) 
                                   << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x11U] 
        = (0x1000000U | ((0xffU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
                                            >> 0x20U)) 
                                   >> 8U)) | (0xffff00U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
                                                          >> 0x20U)) 
                                                 >> 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x12U] 
        = ((0xffU & __Vtemp1635[0U]) | (0xffffff00U 
                                        & __Vtemp1635[0U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x13U] 
        = ((0xffU & __Vtemp1635[1U]) | (0xffffff00U 
                                        & __Vtemp1635[1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x14U] 
        = (0xffU & __Vtemp1635[2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list
           [8U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out;
    __Vtemp1715[0U] = (IData)(((0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                ? (((vlSelf->ysyx_22050612_npc__DOT__inst 
                                     >> 0x1fU) ? (0xffffffffffffe000ULL 
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
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                              >> 7U)))))))) 
                                   + vlSelf->pc) : 
                               (4ULL + vlSelf->pc)));
    __Vtemp1715[1U] = (IData)((((0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                 ? (((vlSelf->ysyx_22050612_npc__DOT__inst 
                                      >> 0x1fU) ? (0xffffffffffffe000ULL 
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
                                                                     >> 7U)))))))) 
                                    + vlSelf->pc) : 
                                (4ULL + vlSelf->pc)) 
                               >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[0U] 
        = __Vtemp1715[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[1U] 
        = __Vtemp1715[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[2U] 
        = (6U | ((IData)((0xfffffffffffffffeULL & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)) 
                 << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[3U] 
        = (((IData)((0xfffffffffffffffeULL & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)) 
            >> 0xcU) | ((IData)(((0xfffffffffffffffeULL 
                                  & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[4U] 
        = (0x400000U | ((IData)(((0xfffffffffffffffeULL 
                                  & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[5U] 
        = ((0xfff00U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                        << 8U)) | (0xfff00000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                                  << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[6U] 
        = ((((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
             >> 0x18U) | (0xfff00U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x20U)) 
                                      << 8U))) | (0xfff00000U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x20U)) 
                                                     << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4[7U] 
        = (0x30000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                >> 0x20U)) >> 0x18U));
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
        = (0x1100000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3[7U] 
        = (0x1000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) >> 0x18U));
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
        = (0xe00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3[7U] 
        = (0xd00U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                              >> 0x20U)) >> 0x18U));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list
           [2U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list
           [2U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__dnpc = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit)
                                             ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out
                                             : (4ULL 
                                                + vlSelf->pc));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out;
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
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr, vlSelf->__Vtask_pmem_read__2__rdata);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
        = vlSelf->__Vtask_pmem_read__2__rdata;
    Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask));
    __Vtemp1813[0U] = (IData)((0x30080140000000ULL 
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
    __Vtemp1813[1U] = (IData)(((0x30080140000000ULL 
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[0U] 
        = __Vtemp1813[0U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[1U] 
        = __Vtemp1813[1U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[2U] 
        = (0x401U | ((0x1fe000U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata) 
                                   << 0xdU)) | (0x3fcU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                            >> 8U)) 
                                                   << 2U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[0U] 
                     >> 0xbU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[1U] 
                      << 0xaU) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[0U] 
                                  >> 0x16U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[1U] 
                     >> 1U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[1U] 
                     >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[2U] 
                      << 9U) | (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[1U] 
                                >> 0x17U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[2U] 
                     >> 2U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3[2U] 
                     >> 0xdU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [4U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [5U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [6U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list
                 [7U] >> 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
           == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
              == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                       == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                          == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out;
    __Vtemp1834[6U] = (((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
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
                        >> 0x18U) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x1fU)))
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))) 
                                              >> 0x20U)) 
                                     << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[0U] 
        = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[1U] 
        = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[2U] 
        = (0x2aU | ((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[3U] 
        = (((IData)((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))) 
            >> 0xcU) | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[4U] 
        = (0xe00000U | ((IData)(((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)) 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[5U] 
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
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[6U] 
        = __Vtemp1834[6U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3[7U] 
        = (0xd00U | ((IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                              >> 2U)))
                                ? ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                  >> 0x3fU)))
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                          >> 0x20U))))
                                    : (QData)((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                       >> 0x20U))))
                                : ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                  >> 0x1fU)))
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))) 
                              >> 0x20U)) >> 0x18U));
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2U] 
        = (0xfffffU & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list
           [2U][2U]);
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out;
    __Vtemp1895[0x25U] = ((0xfU & ((IData)(((1U & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x1fU)))
                                             ? (0xffffffff00000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                             : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                   >> 8U)) | ((0xfffff0U 
                                               & ((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                       >> 0x1fU)))
                                                            ? 
                                                           (0xffffffff00000000ULL 
                                                            | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                            : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                                  >> 8U)) 
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
                                                 << 0x18U)));
    __Vtemp1895[0x26U] = ((0xfU & ((IData)((((1U & (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                            >> 0x1fU)))
                                              ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                              : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                            >> 0x20U)) 
                                   >> 8U)) | (0xfffff0U 
                                              & ((IData)(
                                                         (((1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                       >> 0x1fU)))
                                                            ? 
                                                           (0xffffffff00000000ULL 
                                                            | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                            : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                          >> 0x20U)) 
                                                 >> 8U)));
    __Vtemp1895[0x28U] = ((0xfU & ((IData)(((1U & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x1fU)))
                                             ? (0xffffffff00000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                             : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                   >> 0x14U)) | ((0xff0U 
                                                  & ((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                          >> 0x1fU)))
                                                               ? 
                                                              (0xffffffff00000000ULL 
                                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                               : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                                                     >> 0x14U)) 
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
                                                    << 0xcU)));
    __Vtemp1895[0x29U] = (0x17000000U | ((0xfU & ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                        >> 0x1fU)))
                                                             ? 
                                                            (0xffffffff00000000ULL 
                                                             | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                             : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U)) 
                                         | (0xff0U 
                                            & ((IData)(
                                                       (((1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                     >> 0x1fU)))
                                                          ? 
                                                         (0xffffffff00000000ULL 
                                                          | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                          : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                                                        >> 0x20U)) 
                                               >> 0x14U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0U] 
        = (IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x1fU))) ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                    : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[1U] 
        = (IData)((((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x1fU))) ? (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                     : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))) 
                   >> 0x20U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[2U] 
        = (0x2fU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                    << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[3U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
            >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[4U] 
        = (0x2a00000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                  >> 0x20U)) >> 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[5U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[6U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[7U] 
        = (0x1800U | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x20U)) 
                                    >> 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[8U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 4U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[9U] 
        = (0x60000000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xaU] 
        = (1U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                 << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xbU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x10U) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xcU] 
        = (0x150000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xdU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xeU] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0xfU] 
        = (0x130U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                               >> 0x20U)) >> 0x1cU) 
                     | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                        << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x10U] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                    >> 8U)) | ((0xfffff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                                             >> 8U)) 
                               | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                           >> 0x20U)) 
                                  << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x11U] 
        = (0x10000000U | ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                            >> 0x20U)) 
                                   >> 8U)) | (0xfffff0U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                          >> 0x20U)) 
                                                 >> 8U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x12U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
           << 0xcU);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x13U] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                    >> 0x14U)) | ((0xff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix) 
                                             >> 0x14U)) 
                                  | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                              >> 0x20U)) 
                                     << 0xcU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x14U] 
        = (0xe000U | ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                        >> 0x20U)) 
                               >> 0x14U)) | (0xff0U 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                         >> 0x20U)) 
                                                >> 0x14U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x15U] 
        = ((0xfU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix)) 
           | (0xfffffff0U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x16U] 
        = ((0xfU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                            >> 0x20U))) | (0xfffffff0U 
                                           & (IData)(
                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix 
                                                      >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x17U] 
        = (0xdU | ((IData)((4ULL + vlSelf->pc)) << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x18U] 
        = ((0xfU & ((IData)((4ULL + vlSelf->pc)) >> 0xcU)) 
           | ((0xffff0U & ((IData)((4ULL + vlSelf->pc)) 
                           >> 0xcU)) | ((IData)(((4ULL 
                                                  + vlSelf->pc) 
                                                 >> 0x20U)) 
                                        << 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x19U] 
        = (0x400000U | ((0xfU & ((IData)(((4ULL + vlSelf->pc) 
                                          >> 0x20U)) 
                                 >> 0xcU)) | (0xffff0U 
                                              & ((IData)(
                                                         ((4ULL 
                                                           + vlSelf->pc) 
                                                          >> 0x20U)) 
                                                 >> 0xcU))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1aU] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
           << 8U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1bU] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    >> 0x18U)) | ((0xf0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                            >> 0x18U)) 
                                  | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1cU] 
        = (0xc0000U | ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                         >> 0x20U)) 
                                >> 0x18U)) | (((IData)(
                                                       (4ULL 
                                                        + vlSelf->pc)) 
                                               << 0x1cU) 
                                              | (0xf0U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                             >> 0x20U)) 
                                                    >> 0x18U)))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1dU] 
        = ((0xfU & ((IData)((4ULL + vlSelf->pc)) >> 4U)) 
           | ((0xffffff0U & ((IData)((4ULL + vlSelf->pc)) 
                             >> 4U)) | ((IData)(((4ULL 
                                                  + vlSelf->pc) 
                                                 >> 0x20U)) 
                                        << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1eU] 
        = ((0xfU & ((IData)(((4ULL + vlSelf->pc) >> 0x20U)) 
                    >> 4U)) | (0xffffff0U & ((IData)(
                                                     ((4ULL 
                                                       + vlSelf->pc) 
                                                      >> 0x20U)) 
                                             >> 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x1fU] 
        = (0x30U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x20U] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    >> 0x10U)) | ((0xfff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                              >> 0x10U)) 
                                  | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x21U] 
        = (0x2000000U | ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  >> 0x10U)) | (0xfff0U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                            >> 0x20U)) 
                                                   >> 0x10U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x22U] 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
           << 4U);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x23U] 
        = (((IData)(vlSelf->ysyx_22050612_npc__DOT__imm_U) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x24U] 
        = (0x1000U | (((IData)((vlSelf->ysyx_22050612_npc__DOT__imm_U 
                                >> 0x20U)) >> 0x1cU) 
                      | ((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x1fU)))
                                   ? (0xffffffff00000000ULL 
                                      | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                   : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                         << 0x18U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x25U] 
        = __Vtemp1895[0x25U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x26U] 
        = __Vtemp1895[0x26U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x27U] 
        = (0x190U | ((IData)(((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x1fU)))
                               ? (0xffffffff00000000ULL 
                                  | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                               : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))) 
                     << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x28U] 
        = __Vtemp1895[0x28U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x29U] 
        = __Vtemp1895[0x29U];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2aU] 
        = ((0xfU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)) 
           | (0xfffffff0U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2bU] 
        = ((0xfU & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                            >> 0x20U))) | (0xfffffff0U 
                                           & (IData)(
                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                      >> 0x20U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2cU] 
        = (0x13000U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                       << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2dU] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    >> 0xcU)) | ((0xffff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                              >> 0xcU)) 
                                 | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                             >> 0x20U)) 
                                    << 0x14U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2eU] 
        = ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                             >> 0x20U)) >> 0xcU)) | 
           (0xffff0U & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                 >> 0x20U)) >> 0xcU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x2fU] 
        = (0x12U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    << 8U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x30U] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    >> 0x18U)) | ((0xf0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                            >> 0x18U)) 
                                  | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 8U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x31U] 
        = (0x800000U | ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                                << 0x1cU) 
                                               | (0xf0U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                              >> 0x20U)) 
                                                     >> 0x18U)))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x32U] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    >> 4U)) | ((0xffffff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                              >> 4U)) 
                               | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                           >> 0x20U)) 
                                  << 0x1cU)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x33U] 
        = ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                             >> 0x20U)) >> 4U)) | (0xffffff0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                               >> 0x20U)) 
                                                      >> 4U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x34U] 
        = (0x500U | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                     << 0x10U));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x35U] 
        = ((0xfU & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                    >> 0x10U)) | ((0xfff0U & ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                              >> 0x10U)) 
                                  | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x20U)) 
                                     << 0x10U)));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x36U] 
        = (0x40000000U | ((0xfU & ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                            >> 0x20U)) 
                                   >> 0x10U)) | (0xfff0U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                             >> 0x20U)) 
                                                    >> 0x10U))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3[0x37U] = 0U;
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out;
}

void Vysyx_22050612_npc___024root___eval(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050612_npc___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050612_npc___024root___change_request_1(Vysyx_22050612_npc___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050612_npc___024root___change_request(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___change_request\n"); );
    // Body
    return (Vysyx_22050612_npc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050612_npc___024root___change_request_1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050612_npc___024root___eval_debug_assertions(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
