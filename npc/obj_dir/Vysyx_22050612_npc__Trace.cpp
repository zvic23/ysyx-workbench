// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc__Syms.h"


void Vysyx_22050612_npc___024root__traceChgSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050612_npc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050612_npc___024root* const __restrict vlSelf = static_cast<Vysyx_22050612_npc___024root*>(voidSelf);
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050612_npc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050612_npc___024root__traceChgSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp8;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
            tracep->chgBit(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out));
            tracep->chgWData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgBit(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[0]));
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out),64);
        }
        tracep->chgBit(oldp+79,(vlSelf->clk));
        tracep->chgBit(oldp+80,(vlSelf->rst));
        tracep->chgIData(oldp+81,(vlSelf->inst),32);
        tracep->chgQData(oldp+82,(vlSelf->pc),64);
        tracep->chgQData(oldp+84,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+86,(((vlSelf->inst >> 0x1fU)
                                    ? (0xfffffffffffff000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U))))
                                    : (QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x14U))))),64);
        tracep->chgCData(oldp+88,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+89,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+90,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
        tracep->chgBit(oldp+91,((1U & vlSelf->inst)));
        tracep->chgQData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                  [(0x1fU & (vlSelf->inst 
                                             >> 0xfU))]),64);
        tracep->chgQData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                  [(0x1fU & (vlSelf->inst 
                                             >> 0x14U))]),64);
        tracep->chgQData(oldp+96,((((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U)))) 
                                   + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))])),64);
        tracep->chgBit(oldp+98,(((1U & vlSelf->inst) 
                                 == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list
                                 [0U])));
        __Vtemp8[0U] = (IData)((((vlSelf->inst >> 0x1fU)
                                  ? (0xfffffffffffff000ULL 
                                     | (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))
                                  : (QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x14U)))) 
                                + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                [(0x1fU & (vlSelf->inst 
                                           >> 0xfU))]));
        __Vtemp8[1U] = (IData)(((((vlSelf->inst >> 0x1fU)
                                   ? (0xfffffffffffff000ULL 
                                      | (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))
                                   : (QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x14U)))) 
                                 + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                 [(0x1fU & (vlSelf->inst 
                                            >> 0xfU))]) 
                                >> 0x20U));
        __Vtemp8[2U] = 1U;
        tracep->chgWData(oldp+99,(__Vtemp8),65);
        tracep->chgBit(oldp+102,(((1U & vlSelf->inst) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list
                                  [0U])));
    }
}

void Vysyx_22050612_npc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050612_npc___024root* const __restrict vlSelf = static_cast<Vysyx_22050612_npc___024root*>(voidSelf);
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
