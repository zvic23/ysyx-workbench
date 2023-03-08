// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

#include "verilated_dpi.h"

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

void Vysyx_22050612_npc___024root___settle__TOP__1(Vysyx_22050612_npc___024root* vlSelf) VL_ATTR_COLD;

void Vysyx_22050612_npc___024root___eval_settle(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_22050612_npc___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->ysyx_22050612_npc__DOT__imm_U = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__imm_B = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__imm_S = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__opcode = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2 = VL_RAND_RESET_I(10);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1 = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1 = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2 = VL_RAND_RESET_I(17);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1 = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2 = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(2100, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3);
    VL_RAND_RESET_W(504, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2436, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3);
    VL_RAND_RESET_W(2436, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(536, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(469, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(252, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3);
    VL_RAND_RESET_W(336, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3);
    VL_RAND_RESET_W(336, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3);
    VL_RAND_RESET_W(112, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(252, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(88, vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3);
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<29; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(720, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__2__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
