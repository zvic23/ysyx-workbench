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
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0]),7);
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0]));
            tracep->chgCData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[0]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[1]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[2]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[3]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[4]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[5]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[6]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[7]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[8]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[9]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[10]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[11]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[12]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[13]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[14]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[15]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[16]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[17]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[18]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[19]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[20]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[21]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[22]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[23]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[24]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[25]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[26]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[27]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[28]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[29]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[30]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__opcode));
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out));
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
            tracep->chgBit(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+140,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                      == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list
                                      [0U])));
            tracep->chgWData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgBit(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[0]));
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+149,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                      == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list
                                      [0U])));
        }
        tracep->chgBit(oldp+150,(vlSelf->clk));
        tracep->chgBit(oldp+151,(vlSelf->rst));
        tracep->chgIData(oldp+152,(vlSelf->inst),32);
        tracep->chgQData(oldp+153,(vlSelf->pc),64);
        tracep->chgQData(oldp+155,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+157,(((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->chgCData(oldp+159,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+160,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+161,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+162,((0x7fU & vlSelf->inst)),7);
        tracep->chgBit(oldp+163,(((0x7fU & vlSelf->inst) 
                                  == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list
                                  [0U])));
        tracep->chgQData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->chgQData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
        tracep->chgQData(oldp+168,((((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U)))) 
                                    + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))])),64);
        __Vtemp8[0U] = (IData)((((vlSelf->inst >> 0x1fU)
                                  ? (0xfffffffffffff000ULL 
                                     | (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))
                                  : (QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x14U)))) 
                                + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
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
                                 + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                 [(0x1fU & (vlSelf->inst 
                                            >> 0xfU))]) 
                                >> 0x20U));
        __Vtemp8[2U] = 1U;
        tracep->chgWData(oldp+170,(__Vtemp8),65);
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
