// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050612_npc.h for the primary calling header

#include "Vysyx_22050612_npc___024root.h"
#include "Vysyx_22050612_npc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(IData/*31:0*/ getinst, QData/*63:0*/ base, QData/*63:0*/ imm_I, QData/*63:0*/ imm_S);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_ftrace_check_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ dnpc, IData/*31:0*/ dest_register, IData/*31:0*/ src_register, QData/*63:0*/ imm);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ r);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_update_csr_TOP____024unit(QData/*63:0*/ mtvec_npc, QData/*63:0*/ mcause_npc, QData/*63:0*/ mepc_npc, QData/*63:0*/ mstatus_npc);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(IData/*31:0*/ npc_inst);

VL_INLINE_OPT void Vysyx_22050612_npc___024root___sequent__TOP__1(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050612_npc__DOT__awvalid;
    CData/*0:0*/ ysyx_22050612_npc__DOT__wvalid;
    CData/*7:0*/ ysyx_22050612_npc__DOT__wstrb;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__mode;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte;
    CData/*7:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__arvalid_lsu;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__awvalid_lsu;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__wvalid_lsu;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_1;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_2;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_1;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_2;
    SData/*15:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte;
    IData/*31:0*/ ysyx_22050612_npc__DOT__awaddr;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_divw0;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_remw0;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_divuw0;
    IData/*31:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_remuw0;
    VlWide<23>/*719:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3;
    VlWide<3>/*95:0*/ __Vtemp1;
    QData/*63:0*/ ysyx_22050612_npc__DOT__imm_U;
    QData/*63:0*/ ysyx_22050612_npc__DOT__wdata;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__src_csr;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator_a;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__operator_b;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__result_mulw0;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__rdata_fix;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result;
    QData/*63:0*/ ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out;
    QData/*63:0*/ __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    // Body
    __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_2 
        = vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2;
    __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_1 
        = vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1;
    __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_2 
        = vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2;
    __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_1 
        = vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1;
    __Vdly__ysyx_22050612_npc__DOT__arvalid_lsu = vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu;
    __Vdly__ysyx_22050612_npc__DOT__wvalid_lsu = vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu;
    __Vdly__ysyx_22050612_npc__DOT__awvalid_lsu = vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu;
    __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 = 0U;
    if (((((((((0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
               | (0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
           | (0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
          | (0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
         | (0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode))) {
        if ((0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(1U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        } else if ((0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(1U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        } else if ((0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(1U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        } else if ((0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(1U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        } else if ((0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(1U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        } else if ((0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(2U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        } else if ((0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(2U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        } else {
            Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(2U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
        }
    } else if ((0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(1U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
    } else if ((0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(1U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
    } else if ((0x2bU == vlSelf->ysyx_22050612_npc__DOT__opcode)) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(2U, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__imm_I, vlSelf->ysyx_22050612_npc__DOT__imm_S);
    } else {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_npc_loadstore_TOP____024unit(0U, 0ULL, 0ULL, 0ULL);
    }
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__exu_block_ls 
        = (1U & ((IData)(vlSelf->rst) | ((~ ((0U == (IData)(vlSelf->ysyx_22050612_npc__DOT__rresp_lsu)) 
                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid_lsu))) 
                                         & (~ ((0U 
                                                == (IData)(vlSelf->ysyx_22050612_npc__DOT__bresp_lsu)) 
                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid_lsu))))));
    if (vlSelf->ysyx_22050612_npc__DOT__rvalid_lsu) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
            = vlSelf->ysyx_22050612_npc__DOT__rdata_lsu;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_current_state = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_current_state = 0U;
    } else {
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_current_state 
            = vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_next_state;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_current_state 
            = vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_next_state;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_1 = 0U;
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_2 = 0U;
    } else if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_1 = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_2 = 1U;
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid_pc))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_1 = 0U;
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid_lsu))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_2 = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_1 = 0U;
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_2 = 0U;
    } else if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_pc))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_1 = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_2 = 1U;
    } else if ((((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1) 
                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid_pc)) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__bready_pc))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_1 = 0U;
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid_lsu))) {
        __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_2 = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__wstrb_lsu = 0U;
    } else if ((((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid_lsu)) 
                 & (0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                & (0U == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle))) {
        vlSelf->ysyx_22050612_npc__DOT__wstrb_lsu = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__wdata_lsu = 0ULL;
    } else if ((((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid_lsu)) 
                 & (0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                & (0U == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle))) {
        vlSelf->ysyx_22050612_npc__DOT__wdata_lsu = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__araddr_lsu = 0U;
    } else if ((((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid_lsu)) 
                 & (0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                & (0U == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle))) {
        vlSelf->ysyx_22050612_npc__DOT__araddr_lsu 
            = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr);
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050612_npc__DOT__arvalid_lsu = 0U;
    } else if ((((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid_lsu)) 
                 & (0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr)) 
                & (0U == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle))) {
        __Vdly__ysyx_22050612_npc__DOT__arvalid_lsu = 1U;
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__arready_lsu))) {
        __Vdly__ysyx_22050612_npc__DOT__arvalid_lsu = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050612_npc__DOT__wvalid_lsu = 0U;
    } else if ((((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid_lsu)) 
                 & (0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                & (0U == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle))) {
        __Vdly__ysyx_22050612_npc__DOT__wvalid_lsu = 1U;
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__awready_lsu))) {
        __Vdly__ysyx_22050612_npc__DOT__wvalid_lsu = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050612_npc__DOT__awvalid_lsu = 0U;
        vlSelf->ysyx_22050612_npc__DOT__awaddr_lsu = 0U;
    } else if ((((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid_lsu)) 
                 & (0ULL != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                & (0U == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle))) {
        __Vdly__ysyx_22050612_npc__DOT__awvalid_lsu = 1U;
        vlSelf->ysyx_22050612_npc__DOT__awaddr_lsu 
            = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr);
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__awready_lsu))) {
        __Vdly__ysyx_22050612_npc__DOT__awvalid_lsu = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mtvec = 0ULL;
    } else if (((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                & (0x305U == (0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I))))) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mtvec 
            = ((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                : 0ULL);
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mstatus = 0xa00001800ULL;
    } else if (((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                 ? (0x300U == (0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                 : ((0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                    & (0x300U == (0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))))) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mstatus 
            = ((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                : ((0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                    : 0ULL));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mcause = 0ULL;
    } else if (((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                 ? (0x342U == (0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                 : ((0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                     ? (0x342U == (0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                     : (0x200000U == vlSelf->ysyx_22050612_npc__DOT__opcode)))) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mcause 
            = ((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                : ((0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                    : ((0x200000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? 0xbULL : 0ULL)));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mepc = 0ULL;
    } else if (((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                 ? (0x341U == (0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                 : ((0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                     ? (0x341U == (0xfffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                     : (0x200000U == vlSelf->ysyx_22050612_npc__DOT__opcode)))) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mepc 
            = ((0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                : ((0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                    : ((0x200000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? vlSelf->pc : 0ULL)));
    }
    if ((((0U != (0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                           >> 7U))) & (~ (IData)(vlSelf->ysyx_22050612_npc__DOT__exu_block))) 
         & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))) {
        __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 
            = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg;
        __Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 = 1U;
        __Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0 
            = (0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                        >> 7U));
    }
    vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2 
        = __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_2;
    vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1 
        = __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__reading_1;
    vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2 
        = __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_2;
    vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1 
        = __Vdly__ysyx_22050612_npc__DOT__arbiter__DOT__writing_1;
    vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu = __Vdly__ysyx_22050612_npc__DOT__arvalid_lsu;
    vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu = __Vdly__ysyx_22050612_npc__DOT__wvalid_lsu;
    vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu = __Vdly__ysyx_22050612_npc__DOT__awvalid_lsu;
    if (__Vdlyvset__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0) {
        vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[__Vdlyvdim0__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0] 
            = __Vdlyvval__ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5__v0;
    }
    vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1) 
           | (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2));
    vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing 
        = ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1) 
           | (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__opcode_lastcycle 
        = vlSelf->ysyx_22050612_npc__DOT__opcode;
    Vysyx_22050612_npc___024unit____Vdpiimwrap_update_csr_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mtvec, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mcause, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mepc, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mstatus);
    if (vlSelf->rst) {
        vlSelf->pc = 0x80000000ULL;
    } else if (vlSelf->ysyx_22050612_npc__DOT__pc_update) {
        vlSelf->pc = vlSelf->ysyx_22050612_npc__DOT__dnpc;
    }
    if (vlSelf->ysyx_22050612_npc__DOT__rvalid_pc) {
        vlSelf->ysyx_22050612_npc__DOT__inst = ((4U 
                                                 & vlSelf->ysyx_22050612_npc__DOT__araddr_pc)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22050612_npc__DOT__rdata_pc 
                                                            >> 0x20U))
                                                 : (IData)(vlSelf->ysyx_22050612_npc__DOT__rdata_pc));
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__arready_pc))) {
        vlSelf->ysyx_22050612_npc__DOT__inst = 0U;
    }
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
    vlSelf->ysyx_22050612_npc__DOT__awready_lsu = (
                                                   (~ 
                                                    ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                                     & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_pc) 
                                                        | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_pc)))) 
                                                   & (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                                       & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                                                          | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu))) 
                                                      | ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)) 
                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2))));
    if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
         & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_pc) 
            | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_pc)))) {
        ysyx_22050612_npc__DOT__wvalid = vlSelf->ysyx_22050612_npc__DOT__wvalid_pc;
        ysyx_22050612_npc__DOT__awvalid = vlSelf->ysyx_22050612_npc__DOT__awvalid_pc;
        ysyx_22050612_npc__DOT__wdata = vlSelf->ysyx_22050612_npc__DOT__wdata_pc;
        ysyx_22050612_npc__DOT__wstrb = vlSelf->ysyx_22050612_npc__DOT__wstrb_pc;
        ysyx_22050612_npc__DOT__awaddr = vlSelf->ysyx_22050612_npc__DOT__awaddr_pc;
    } else {
        ysyx_22050612_npc__DOT__wvalid = (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                           & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                                              | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))
                                           ? (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)
                                           : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)
                                               ? (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_pc)
                                               : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2) 
                                                  & (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu))));
        ysyx_22050612_npc__DOT__awvalid = (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                            & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                                               | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))
                                            ? (IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu)
                                            : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)
                                                ? (IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_pc)
                                                : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2) 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu))));
        ysyx_22050612_npc__DOT__wdata = (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                          & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                                             | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))
                                          ? vlSelf->ysyx_22050612_npc__DOT__wdata_lsu
                                          : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)
                                              ? vlSelf->ysyx_22050612_npc__DOT__wdata_pc
                                              : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2)
                                                  ? vlSelf->ysyx_22050612_npc__DOT__wdata_lsu
                                                  : 0ULL)));
        ysyx_22050612_npc__DOT__wstrb = (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                          & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                                             | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))
                                          ? (IData)(vlSelf->ysyx_22050612_npc__DOT__wstrb_lsu)
                                          : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)
                                              ? (IData)(vlSelf->ysyx_22050612_npc__DOT__wstrb_pc)
                                              : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2)
                                                  ? (IData)(vlSelf->ysyx_22050612_npc__DOT__wstrb_lsu)
                                                  : 0U)));
        ysyx_22050612_npc__DOT__awaddr = (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                           & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                                              | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))
                                           ? vlSelf->ysyx_22050612_npc__DOT__awaddr_lsu
                                           : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)
                                               ? vlSelf->ysyx_22050612_npc__DOT__awaddr_pc
                                               : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2)
                                                   ? vlSelf->ysyx_22050612_npc__DOT__awaddr_lsu
                                                   : 0U)));
    }
    if ((0U == (IData)(vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_current_state))) {
        vlSelf->ysyx_22050612_npc__DOT__bvalid = 0U;
        vlSelf->ysyx_22050612_npc__DOT__bresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_next_state 
            = (((IData)(ysyx_22050612_npc__DOT__awvalid) 
                & (IData)(ysyx_22050612_npc__DOT__wvalid))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_current_state))) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_write_TOP____024unit((QData)((IData)(ysyx_22050612_npc__DOT__awaddr)), ysyx_22050612_npc__DOT__wdata, (IData)(ysyx_22050612_npc__DOT__wstrb));
        vlSelf->ysyx_22050612_npc__DOT__bvalid = 1U;
        vlSelf->ysyx_22050612_npc__DOT__bresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_next_state = 3U;
    } else if ((3U == (IData)(vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_current_state))) {
        vlSelf->ysyx_22050612_npc__DOT__bvalid = 0U;
        vlSelf->ysyx_22050612_npc__DOT__bresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_next_state = 0U;
    } else {
        vlSelf->ysyx_22050612_npc__DOT__bvalid = 0U;
        vlSelf->ysyx_22050612_npc__DOT__bresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__write_next_state = 0U;
    }
    Vysyx_22050612_npc___024unit____Vdpiimwrap_read_inst_TOP____024unit(vlSelf->ysyx_22050612_npc__DOT__inst);
    if ((vlSelf->ysyx_22050612_npc__DOT__inst >> 0x1fU)) {
        vlSelf->ysyx_22050612_npc__DOT__imm_B = (0xffffffffffffe000ULL 
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
        vlSelf->ysyx_22050612_npc__DOT__imm_S = (0xfffffffffffff000ULL 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 7U))))));
        ysyx_22050612_npc__DOT__imm_U = (0xffffffff00000000ULL 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->ysyx_22050612_npc__DOT__inst))));
    } else {
        vlSelf->ysyx_22050612_npc__DOT__imm_B = (((QData)((IData)(
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
        vlSelf->ysyx_22050612_npc__DOT__imm_S = (((QData)((IData)(
                                                                  (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x19U))) 
                                                  << 5U) 
                                                 | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                       >> 7U)))));
        ysyx_22050612_npc__DOT__imm_U = ((QData)((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                          >> 0xcU))) 
                                         << 0xcU);
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
        [(0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
        = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
        [(0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                   >> 0x14U))];
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xffff80U 
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
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22050612_npc__DOT__inst)
                                                      ? 
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
                                                           ? 0x32U
                                                           : 0U)
                                                          : 0U)))
                                                       : 0U)
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
                                                           ? 0x31U
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
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfffffU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | (((0x73U 
                                                   == vlSelf->ysyx_22050612_npc__DOT__inst)
                                                   ? 2U
                                                   : 
                                                  ((0x30200073U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__inst)
                                                    ? 5U
                                                    : 0U)) 
                                                 << 0x14U));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfffcffU 
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
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xf00fffU 
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
                                                    | (0x2b3U 
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
                                                        ((0x2b3U 
                                                          == 
                                                          ((0x1fc00U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 0xfU)) 
                                                           | ((0x380U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                          ? 0x10U
                                                          : 0x12U)))))))
                                                   : 
                                                  (((((((((0x3b3U 
                                                           == 
                                                           ((0x1fc00U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0xfU)) 
                                                            | ((0x380U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 5U)) 
                                                               | (0x7fU 
                                                                  & vlSelf->ysyx_22050612_npc__DOT__inst)))) 
                                                          | (0x9bU 
                                                             == 
                                                             ((0x1fc00U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 0xfU)) 
                                                              | ((0x380U 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 5U)) 
                                                                 | (0x7fU 
                                                                    & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
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
                                                    ? 
                                                   ((0x3b3U 
                                                     == 
                                                     ((0x1fc00U 
                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                          >> 0xfU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                     ? 0x13U
                                                     : 
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
                                                           : 0x1aU)))))))
                                                    : 
                                                   (((((((((0x82bbU 
                                                            == 
                                                            ((0x1fc00U 
                                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0xfU)) 
                                                             | ((0x380U 
                                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 5U)) 
                                                                | (0x7fU 
                                                                   & vlSelf->ysyx_22050612_npc__DOT__inst)))) 
                                                           | (0x433U 
                                                              == 
                                                              ((0x1fc00U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0xfU)) 
                                                               | ((0x380U 
                                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                      >> 5U)) 
                                                                  | (0x7fU 
                                                                     & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
                                                          | (0x633U 
                                                             == 
                                                             ((0x1fc00U 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 0xfU)) 
                                                              | ((0x380U 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 5U)) 
                                                                 | (0x7fU 
                                                                    & vlSelf->ysyx_22050612_npc__DOT__inst))))) 
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
                                                     ? 
                                                    ((0x82bbU 
                                                      == 
                                                      ((0x1fc00U 
                                                        & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                      ? 0x1bU
                                                      : 
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
                                                      ((0x633U 
                                                        == 
                                                        ((0x1fc00U 
                                                          & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                        ? 0x21U
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
                                                            : 0x27U)))))))
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
                                                      : 
                                                     ((0x7bbU 
                                                       == 
                                                       ((0x1fc00U 
                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                            >> 0xfU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & vlSelf->ysyx_22050612_npc__DOT__inst))))
                                                       ? 0x29U
                                                       : 0U))))) 
                                                 << 0xcU));
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xfff3ffU 
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
    vlSelf->ysyx_22050612_npc__DOT__opcode = ((0xffff7fU 
                                               & vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                              | ((0x100073U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                 << 7U));
    vlSelf->ysyx_22050612_npc__DOT__imm_I = ((vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x1fU)
                                              ? (0xfffffffffffff000ULL 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                    >> 0x14U))))
                                              : (QData)((IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                 >> 0x14U))));
    if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
         & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_pc) 
            | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_pc)))) {
        vlSelf->ysyx_22050612_npc__DOT__bresp_lsu = 0U;
        vlSelf->ysyx_22050612_npc__DOT__bvalid_pc = vlSelf->ysyx_22050612_npc__DOT__bvalid;
    } else {
        vlSelf->ysyx_22050612_npc__DOT__bresp_lsu = 
            (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
              & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                 | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))
              ? (IData)(vlSelf->ysyx_22050612_npc__DOT__bresp)
              : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)
                  ? 0U : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2)
                           ? (IData)(vlSelf->ysyx_22050612_npc__DOT__bresp)
                           : 0U)));
        vlSelf->ysyx_22050612_npc__DOT__bvalid_pc = 
            ((~ ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                 & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                    | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))) 
             & ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid)));
    }
    vlSelf->ysyx_22050612_npc__DOT__bvalid_lsu = ((~ 
                                                   ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                                    & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_pc) 
                                                       | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_pc)))) 
                                                  & (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing)) 
                                                      & ((IData)(vlSelf->ysyx_22050612_npc__DOT__awvalid_lsu) 
                                                         | (IData)(vlSelf->ysyx_22050612_npc__DOT__wvalid_lsu)))
                                                      ? (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid)
                                                      : 
                                                     ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_1)) 
                                                      & ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__writing_2) 
                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__bvalid)))));
    ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
        = ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
           * (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)));
    ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
        = VL_DIVS_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
        = VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
        = VL_DIV_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    ysyx_22050612_npc__DOT__exu__DOT__result_remuw0 
        = VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1), (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen = 
        (((((((((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                | (0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
           | (0x10000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
          | (0x12000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
         | (((((((((0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                   | (0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (((((((((0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                      | (0x1d000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x21000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x22000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x24000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x25000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x26000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x27000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (((((((((0x28000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                         | (0x29000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x100U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (((((((((4U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                            | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (((((((((0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                               | (0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0x2fU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode)))))));
    if (((((((((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
               | (0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
           | (0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
          | (0x10000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
         | (0x12000U == vlSelf->ysyx_22050612_npc__DOT__opcode))) {
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
                                                       ((0x10000U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 9U
                                                         : 6U)))))));
        ysyx_22050612_npc__DOT__exu__DOT__operator_a 
            = vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1;
    } else {
        ysyx_22050612_npc__DOT__exu__DOT__mode = ((
                                                   (((((((0x13000U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                         | (0x14000U 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
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
                                                   ? 
                                                  ((0x13000U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? 4U
                                                    : 
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
                                                          : 9U)))))))
                                                   : 
                                                  (((((((((0x1b000U 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                          | (0x200U 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
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
                                                    ? 
                                                   ((0x1b000U 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                     ? 0xaU
                                                     : 
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
                                                           : 1U)))))))
                                                    : 
                                                   (((((((((6U 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                           | (7U 
                                                              == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
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
                                                     ? 
                                                    ((6U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 1U
                                                      : 
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
                                                          : 0U)))))
                                                     : 
                                                    (((((((((0xeU 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                            | (0xfU 
                                                               == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
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
                                                      ? 
                                                     ((0xeU 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 0U
                                                       : 
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
                                                             : 3U)))))))
                                                      : 
                                                     (((((((((0x16U 
                                                              == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                             | (0x17U 
                                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                            | (0x18U 
                                                               == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                           | (0x29U 
                                                              == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                          | (0x2aU 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                         | (0x2bU 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                        | (0x2fU 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                       | (0x32U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                                       ? 
                                                      ((0x16U 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? 7U
                                                        : 
                                                       ((0x17U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 6U
                                                         : 
                                                        ((0x18U 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                          ? 4U
                                                          : 
                                                         ((0x29U 
                                                           == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                           ? 0U
                                                           : 
                                                          ((0x2aU 
                                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                            ? 0U
                                                            : 
                                                           ((0x2bU 
                                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                             ? 0U
                                                             : 
                                                            ((0x2fU 
                                                              == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                              ? 0U
                                                              : 6U)))))))
                                                       : 0U)))));
        ysyx_22050612_npc__DOT__exu__DOT__operator_a 
            = (((((((((0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                      | (0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                ? ((0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                    : ((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))
                        : ((0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1))
                            : ((0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                   << 0x20U) : ((0x17000U 
                                                 == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                 ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                                                 : 
                                                ((0x18000U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                                                  : 
                                                 ((0x19000U 
                                                   == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                   ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                                                   : 
                                                  ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                                                   << 0x20U))))))))
                : (((((((((0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                          | (0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (4U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (5U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                    ? ((0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)) 
                           << 0x20U) : ((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                         ? vlSelf->pc
                                         : ((0x300U 
                                             == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                             ? vlSelf->pc
                                             : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1)))
                    : (((((((((6U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                              | (7U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (8U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (9U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0xaU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode))
                        ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                        : (((((((((0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  | (0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                               | (0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                            ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                            : (((((((((0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                      | (0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                     | (0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                    | (0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                   | (0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                  | (0x2bU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0x2fU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1
                                : 0ULL)))));
    }
    ysyx_22050612_npc__DOT__exu__DOT__src_csr = ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                                                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mtvec
                                                  : 
                                                 ((0x341U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                                                   ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mepc
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                                                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mcause
                                                    : 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->ysyx_22050612_npc__DOT__imm_I)))
                                                     ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mstatus
                                                     : 0ULL))));
    ysyx_22050612_npc__DOT__exu__DOT__operator_b = 
        (((((((((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                | (0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
           | (0x10000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
          | (0x12000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
          ? ((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
              ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
              : ((0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                  : ((0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                      ? (QData)((IData)((0x3fU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))
                      : ((0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                          ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                          : ((0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                              ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                              : ((0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                                  : ((0x10000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                      ? (QData)((IData)(
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))
                                      : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))))))
          : (((((((((0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                    | (0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
              ? ((0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                  : ((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                      ? (QData)((IData)((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                  >> 0x14U))))
                      : ((0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                          ? (QData)((IData)((0x1fU 
                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                >> 0x14U))))
                          : ((0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                              ? (QData)((IData)((0x1fU 
                                                 & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                    >> 0x14U))))
                              : ((0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                                  : ((0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                      ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                                      : ((0x19000U 
                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                          ? (QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))
                                          : (QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))))))))))
              : (((((((((0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                        | (0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (4U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (5U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                  ? ((0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                      ? (QData)((IData)((0x1fU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))
                      : ((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)
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
                                  ? (QData)((IData)(
                                                    (0x3fU 
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
                                              : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))))))
                  : (((((((((6U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                            | (7U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (8U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (9U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0xaU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode))
                      ? ((6U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                          ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                          : ((7U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                              ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                              : ((8U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                                  : ((9U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                      ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                                      : ((0xaU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                          ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                                          : vlSelf->ysyx_22050612_npc__DOT__imm_I)))))
                      : (((((((((0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                | (0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                               | (0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                          ? ((0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                              ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                              : ((0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                  ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                  : ((0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                      ? vlSelf->ysyx_22050612_npc__DOT__imm_S
                                      : ((0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                          ? vlSelf->ysyx_22050612_npc__DOT__imm_S
                                          : ((0x12U 
                                              == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                              ? vlSelf->ysyx_22050612_npc__DOT__imm_S
                                              : vlSelf->ysyx_22050612_npc__DOT__imm_I)))))
                          : (((((((((0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                    | (0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                   | (0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                  | (0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0x2bU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                               | (0x2fU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                              ? ((0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                  ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                  : ((0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                      ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                      : ((0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                          ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                          : ((0x29U 
                                              == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                              ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                              : ((0x2aU 
                                                  == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                  ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                                  : 
                                                 ((0x2bU 
                                                   == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                   ? vlSelf->ysyx_22050612_npc__DOT__imm_S
                                                   : 
                                                  ((0x2fU 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? vlSelf->ysyx_22050612_npc__DOT__imm_I
                                                    : ysyx_22050612_npc__DOT__exu__DOT__src_csr)))))))
                              : 0ULL))))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result 
        = (ysyx_22050612_npc__DOT__exu__DOT__operator_a 
           + ((1U == (IData)(ysyx_22050612_npc__DOT__exu__DOT__mode))
               ? (1ULL + (~ ysyx_22050612_npc__DOT__exu__DOT__operator_b))
               : ysyx_22050612_npc__DOT__exu__DOT__operator_b));
    VL_EXTEND_WQ(72,64, __Vtemp1, ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result);
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
        = (1U | ((0xff00U & (__Vtemp1[0U] << 8U)) | 
                 (0xffff0000U & (__Vtemp1[0U] << 8U))));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x15U] 
        = (((__Vtemp1[0U] >> 0x18U) | (0xff00U & (__Vtemp1[1U] 
                                                  << 8U))) 
           | (0xffff0000U & (__Vtemp1[1U] << 8U)));
    ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3[0x16U] 
        = ((__Vtemp1[1U] >> 0x18U) | (0xff00U & (__Vtemp1[2U] 
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
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
        = ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
        = ((0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)
            ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
            : ((0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                : ((0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                    : ((0x2bU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                        : 0ULL))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
        = ((0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)
            ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
            : ((0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                : ((0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                    : ((0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                        : ((0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                            : ((0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                : ((0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                    : 0ULL)))))));
    if ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                       >> 2U)))) {
        ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? 0x80U : 0x40U)
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? 0x20U : 0x10U));
        ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? 0U : 0xc0U)
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? 0x60U : 0x30U));
    } else {
        ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? 8U : 4U)
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? 2U : 1U));
        ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? 0x18U : 0xcU)
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? 6U : 3U));
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask 
        = ((0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)
            ? (IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte)
            : ((0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? (IData)(ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte)
                : ((0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                      >> 2U))) ? 0xf0U
                        : 0xfU) : ((0x2bU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? 0xffU : 0U))));
    if ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                       >> 2U)))) {
        ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x38U)
                                           : ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x30U))
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? ((QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                       << 0x28U) : ((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                    << 0x20U)));
        ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                           << 0x30U))
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? ((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                       << 0x28U) : ((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                    << 0x20U)));
    } else {
        ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x18U)
                                           : ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? ((QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                       << 8U) : (QData)((IData)((0xffU 
                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))));
        ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte 
            = ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                                           ? ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x18U)
                                           : ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                                              << 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))
                    ? ((QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))) 
                       << 8U) : (QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2))))));
    }
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata 
        = ((0x10U == vlSelf->ysyx_22050612_npc__DOT__opcode)
            ? ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte
            : ((0x11U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                ? ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte
                : ((0x12U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr 
                                      >> 2U))) ? ((QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)) 
                                                  << 0x20U)
                        : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)))
                    : ((0x2bU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2
                        : 0ULL))));
    vlSelf->ysyx_22050612_npc__DOT__exu_block = (((0ULL 
                                                   != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr) 
                                                  | (0ULL 
                                                     != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr)) 
                                                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__exu_block_ls));
    if ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                       >> 2U)))) {
        ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x30U)))
                         : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                             ? (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                        >> 0x28U)) : (IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                              >> 0x20U)))));
        ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte 
            = (0xffffU & ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                            ? 0U : (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                            >> 0x30U)))
                           : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                               ? (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                          >> 0x28U))
                               : (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                          >> 0x20U)))));
    } else {
        ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                               >> 0x10U)))
                         : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                             ? (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                        >> 8U)) : (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata))));
        ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte 
            = (0xffffU & ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                            ? (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                       >> 0x18U)) : (IData)(
                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                             >> 0x10U)))
                           : ((1U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))
                               ? (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                          >> 8U)) : (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata))));
    }
    ysyx_22050612_npc__DOT__exu__DOT__rdata_fix = (
                                                   (0xbU 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                                                     ? 
                                                    (0xffffffffffffff00ULL 
                                                     | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                                                     : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte)))
                                                    : 
                                                   ((0xcU 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                     ? 
                                                    ((0x8000U 
                                                      & (IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                                      ? 
                                                     (0xffffffffffff0000ULL 
                                                      | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                                      : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte)))
                                                     : 
                                                    ((0xdU 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 
                                                     ((1U 
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
                                                      : 
                                                     ((0xeU 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte))
                                                       : 
                                                      ((0xfU 
                                                        == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                        ? (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte))
                                                        : 
                                                       ((0x29U 
                                                         == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr 
                                                                     >> 2U)))
                                                          ? (QData)((IData)(
                                                                            (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata 
                                                                             >> 0x20U)))
                                                          : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata)))
                                                         : 
                                                        ((0x2aU 
                                                          == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                          ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata
                                                          : 0ULL)))))));
    vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg 
        = (((((((((0x4000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                  | (0x5000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x6000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x7000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
               | (0x8000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
              | (0x9000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
             | (0x10000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
            | (0x12000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
            ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
            : (((((((((0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                      | (0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                   | (0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                  | (0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                 | (0x19000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                | (0x1a000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                ? ((0x13000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                    : ((0x14000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                          >> 0x1fU)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                            : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                        : ((0x15000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                              >> 0x1fU)))
                                ? (0xffffffff00000000ULL 
                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                            : ((0x16000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x3fU)))
                                    ? (0xffffffff00000000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                          >> 0x20U))))
                                    : (QData)((IData)(
                                                      (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                       >> 0x20U))))
                                : ((0x17000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ((1U & (IData)(
                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                      >> 0x1fU)))
                                        ? (0xffffffff00000000ULL 
                                           | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                        : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                    : ((0x18000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                          >> 0x1fU)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                            : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                        : ((0x19000U 
                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                           >> 0x3fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                      >> 0x20U))))
                                                : (QData)((IData)(
                                                                  (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                   >> 0x20U)))))))))))
                : (((((((((0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                          | (0x1d000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x21000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0x22000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                       | (0x24000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                      | (0x25000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                     | (0x26000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                    | (0x27000U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                    ? ((0x1b000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                        ? ((1U & (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                          >> 0x3fU)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x20U))))
                            : (QData)((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                               >> 0x20U))))
                        : ((0x1d000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                               * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)
                            : ((0x21000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)
                                : ((0x22000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)
                                    : ((0x24000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)
                                        : ((0x25000U 
                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ((1U 
                                                & (IData)(
                                                          (ysyx_22050612_npc__DOT__exu__DOT__result_mulw0 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                                : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_mulw0)))
                                            : ((0x26000U 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? (
                                                   (ysyx_22050612_npc__DOT__exu__DOT__result_divw0 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divw0)))
                                                : (
                                                   (ysyx_22050612_npc__DOT__exu__DOT__result_divuw0 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0xffffffff00000000ULL 
                                                    | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divuw0)))
                                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_divuw0))))))))))
                    : (((((((((0x28000U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                              | (0x29000U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x100U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                           | (0x300U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                          | (0x400U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                         | (0x800U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                        | (0xc00U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                        ? ((0x28000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                            ? ((ysyx_22050612_npc__DOT__exu__DOT__result_remw0 
                                >> 0x1fU) ? (0xffffffff00000000ULL 
                                             | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                                : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remw0)))
                            : ((0x29000U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? ((ysyx_22050612_npc__DOT__exu__DOT__result_remuw0 
                                    >> 0x1fU) ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remuw0)))
                                    : (QData)((IData)(ysyx_22050612_npc__DOT__exu__DOT__result_remuw0)))
                                : ((0x100U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__imm_U
                                    : ((0x200U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                        : ((0x300U 
                                            == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? (4ULL 
                                               + vlSelf->pc)
                                            : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))))
                        : (((((((((4U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  | (0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                               | (0xeU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                              | (0xfU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                             | (0x13U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                            | (0x14U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                            ? ((4U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                ? (4ULL + vlSelf->pc)
                                : ((0xbU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                    : ((0xcU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                        : ((0xdU == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                            : ((0xeU 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                                : (
                                                   (0xfU 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                                    : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0))))))
                            : (((((((((0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                      | (0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                     | (0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                    | (0x18U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                   | (0x29U == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                  | (0x2aU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                 | (0x2fU == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                | (0x31U == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                ? ((0x15U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                    : ((0x16U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                        ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                        : ((0x17U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                            ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                            : ((0x18U 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                                : (
                                                   (0x29U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                                    : 
                                                   ((0x2aU 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                     ? ysyx_22050612_npc__DOT__exu__DOT__rdata_fix
                                                     : 
                                                    ((0x2fU 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                  >> 0x1fU)))
                                                       ? 
                                                      (0xffffffff00000000ULL 
                                                       | (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                       : (QData)((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)))
                                                      : ysyx_22050612_npc__DOT__exu__DOT__src_csr)))))))
                                : ((0x32U == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                    ? ysyx_22050612_npc__DOT__exu__DOT__src_csr
                                    : 0ULL)))))));
}

void Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vysyx_22050612_npc___024root___sequent__TOP__2(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050612_npc__DOT__arvalid;
    CData/*0:0*/ __Vdly__ysyx_22050612_npc__DOT__arvalid_pc;
    IData/*31:0*/ ysyx_22050612_npc__DOT__araddr;
    // Body
    __Vdly__ysyx_22050612_npc__DOT__arvalid_pc = vlSelf->ysyx_22050612_npc__DOT__arvalid_pc;
    if (((IData)(vlSelf->rst) & (~ (IData)(vlSelf->clk)))) {
        vlSelf->ysyx_22050612_npc__DOT__araddr_pc = 0x80000000U;
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__pc_update) 
                & (~ (IData)(vlSelf->clk)))) {
        vlSelf->ysyx_22050612_npc__DOT__araddr_pc = (IData)(vlSelf->ysyx_22050612_npc__DOT__dnpc);
    }
    if (((IData)(vlSelf->rst) & (~ (IData)(vlSelf->clk)))) {
        __Vdly__ysyx_22050612_npc__DOT__arvalid_pc = 1U;
    } else if (((IData)(vlSelf->ysyx_22050612_npc__DOT__pc_update) 
                & (~ (IData)(vlSelf->clk)))) {
        __Vdly__ysyx_22050612_npc__DOT__arvalid_pc = 1U;
    } else if ((((IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc) 
                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__arready_pc)) 
                & (IData)(vlSelf->clk))) {
        __Vdly__ysyx_22050612_npc__DOT__arvalid_pc = 0U;
    }
    vlSelf->ysyx_22050612_npc__DOT__arvalid_pc = __Vdly__ysyx_22050612_npc__DOT__arvalid_pc;
    vlSelf->ysyx_22050612_npc__DOT__arready_pc = ((
                                                   (~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc)) 
                                                  | ((~ 
                                                      ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))) 
                                                     & (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)));
    vlSelf->ysyx_22050612_npc__DOT__arready_lsu = (
                                                   (~ 
                                                    ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                                     & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc))) 
                                                   & (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                                       & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu)) 
                                                      | ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)) 
                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2))));
    if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
         & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc))) {
        ysyx_22050612_npc__DOT__arvalid = vlSelf->ysyx_22050612_npc__DOT__arvalid_pc;
        ysyx_22050612_npc__DOT__araddr = vlSelf->ysyx_22050612_npc__DOT__araddr_pc;
    } else {
        ysyx_22050612_npc__DOT__arvalid = (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                            & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))
                                            ? (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu)
                                            : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)
                                                ? (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc)
                                                : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2) 
                                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))));
        ysyx_22050612_npc__DOT__araddr = (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                           & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))
                                           ? vlSelf->ysyx_22050612_npc__DOT__araddr_lsu
                                           : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)
                                               ? vlSelf->ysyx_22050612_npc__DOT__araddr_pc
                                               : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2)
                                                   ? vlSelf->ysyx_22050612_npc__DOT__araddr_lsu
                                                   : 0U)));
    }
    if ((0U == (IData)(vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_current_state))) {
        vlSelf->ysyx_22050612_npc__DOT__rvalid = 0U;
        vlSelf->ysyx_22050612_npc__DOT__rresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_next_state 
            = ((IData)(ysyx_22050612_npc__DOT__arvalid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_current_state))) {
        Vysyx_22050612_npc___024unit____Vdpiimwrap_pmem_read_TOP____024unit((QData)((IData)(ysyx_22050612_npc__DOT__araddr)), vlSelf->__Vtask_pmem_read__20__rdata);
        vlSelf->ysyx_22050612_npc__DOT__rdata = vlSelf->__Vtask_pmem_read__20__rdata;
        vlSelf->ysyx_22050612_npc__DOT__rvalid = 1U;
        vlSelf->ysyx_22050612_npc__DOT__rresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_next_state 
            = ((IData)(ysyx_22050612_npc__DOT__arvalid)
                ? 1U : 0U);
    } else if ((3U == (IData)(vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_current_state))) {
        vlSelf->ysyx_22050612_npc__DOT__rvalid = 0U;
        vlSelf->ysyx_22050612_npc__DOT__rresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_next_state = 0U;
    } else {
        vlSelf->ysyx_22050612_npc__DOT__rvalid = 0U;
        vlSelf->ysyx_22050612_npc__DOT__rresp = 0U;
        vlSelf->ysyx_22050612_npc__DOT__sram__DOT__read_next_state = 0U;
    }
    if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
         & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc))) {
        vlSelf->ysyx_22050612_npc__DOT__rresp_lsu = 0U;
        vlSelf->ysyx_22050612_npc__DOT__rvalid_pc = vlSelf->ysyx_22050612_npc__DOT__rvalid;
    } else {
        vlSelf->ysyx_22050612_npc__DOT__rresp_lsu = 
            (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
              & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))
              ? (IData)(vlSelf->ysyx_22050612_npc__DOT__rresp)
              : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)
                  ? 0U : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2)
                           ? (IData)(vlSelf->ysyx_22050612_npc__DOT__rresp)
                           : 0U)));
        vlSelf->ysyx_22050612_npc__DOT__rvalid_pc = 
            ((~ ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                 & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))) 
             & ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1) 
                & (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid)));
    }
    vlSelf->ysyx_22050612_npc__DOT__rvalid_lsu = ((~ 
                                                   ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                                    & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc))) 
                                                  & (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
                                                      & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))
                                                      ? (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid)
                                                      : 
                                                     ((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)) 
                                                      & ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2) 
                                                         & (IData)(vlSelf->ysyx_22050612_npc__DOT__rvalid)))));
    if (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
         & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_pc))) {
        vlSelf->ysyx_22050612_npc__DOT__rdata_pc = vlSelf->ysyx_22050612_npc__DOT__rdata;
        vlSelf->ysyx_22050612_npc__DOT__rdata_lsu = 0ULL;
    } else {
        vlSelf->ysyx_22050612_npc__DOT__rdata_pc = 
            (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
              & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))
              ? 0ULL : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)
                         ? vlSelf->ysyx_22050612_npc__DOT__rdata
                         : 0ULL));
        vlSelf->ysyx_22050612_npc__DOT__rdata_lsu = 
            (((~ (IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading)) 
              & (IData)(vlSelf->ysyx_22050612_npc__DOT__arvalid_lsu))
              ? vlSelf->ysyx_22050612_npc__DOT__rdata
              : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_1)
                  ? 0ULL : ((IData)(vlSelf->ysyx_22050612_npc__DOT__arbiter__DOT__reading_2)
                             ? vlSelf->ysyx_22050612_npc__DOT__rdata
                             : 0ULL)));
    }
}

VL_INLINE_OPT void Vysyx_22050612_npc___024root___sequent__TOP__4(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22050612_npc__DOT__dnpc = ((((((((
                                                   (0x300U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                   | (4U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                  | (5U 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                 | (6U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                                | (7U 
                                                   == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                               | (8U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                              | (9U 
                                                 == vlSelf->ysyx_22050612_npc__DOT__opcode)) 
                                             | (0xaU 
                                                == vlSelf->ysyx_22050612_npc__DOT__opcode))
                                             ? ((0x300U 
                                                 == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                 ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0
                                                 : 
                                                ((4U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                  ? 
                                                 (0xfffffffffffffffeULL 
                                                  & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                                  : 
                                                 ((5U 
                                                   == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                   ? 
                                                  ((0ULL 
                                                    == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                                    ? 
                                                   (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                    + vlSelf->pc)
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->pc))
                                                   : 
                                                  ((6U 
                                                    == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                    ? 
                                                   ((0ULL 
                                                     != vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0)
                                                     ? 
                                                    (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                     + vlSelf->pc)
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->pc))
                                                    : 
                                                   ((7U 
                                                     == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                 >> 0x3fU)))
                                                      ? 
                                                     (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                      + vlSelf->pc)
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->pc))
                                                     : 
                                                    ((8U 
                                                      == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                                  >> 0x3fU)))
                                                       ? 
                                                      (4ULL 
                                                       + vlSelf->pc)
                                                       : 
                                                      (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                       + vlSelf->pc))
                                                      : 
                                                     ((9U 
                                                       == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                       ? 
                                                      ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)
                                                        ? 
                                                       (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                        + vlSelf->pc)
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->pc))
                                                       : 
                                                      ((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                                        >= vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)
                                                        ? 
                                                       (vlSelf->ysyx_22050612_npc__DOT__imm_B 
                                                        + vlSelf->pc)
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->pc)))))))))
                                             : ((0x200000U 
                                                 == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                 ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mtvec
                                                 : 
                                                ((0x500000U 
                                                  == vlSelf->ysyx_22050612_npc__DOT__opcode)
                                                  ? vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mepc
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->pc))));
    vlSelf->ysyx_22050612_npc__DOT__pc_update = ((0U 
                                                  != vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                                 & (~ (IData)(vlSelf->ysyx_22050612_npc__DOT__exu_block)));
}

void Vysyx_22050612_npc___024root___eval(Vysyx_22050612_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050612_npc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050612_npc___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vysyx_22050612_npc___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050612_npc___024root___sequent__TOP__4(vlSelf);
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
