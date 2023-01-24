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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0]),64);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[1]),64);
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[2]),64);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[3]),64);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[4]),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[5]),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[6]),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[7]),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[8]),64);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[9]),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[10]),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[11]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[12]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[13]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[14]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[15]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[16]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[17]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[18]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[19]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[20]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[21]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[22]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[23]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[24]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[25]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[26]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[27]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[28]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[29]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[30]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[31]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[0]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[1]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[2]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[3]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[4]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[5]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[6]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[7]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[8]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[9]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[10]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[11]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[12]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[13]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[14]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[15]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[16]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[17]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[18]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[19]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[20]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[21]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[22]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[23]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[24]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[25]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[26]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[27]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[28]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[29]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[30]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[31]),64);
        }
        tracep->chgBit(oldp+128,(vlSelf->clk));
        tracep->chgBit(oldp+129,(vlSelf->rst));
        tracep->chgIData(oldp+130,(vlSelf->inst),32);
        tracep->chgQData(oldp+131,(vlSelf->pc),64);
        tracep->chgQData(oldp+133,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+135,(((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->chgCData(oldp+137,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+138,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+139,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+140,((1U & vlSelf->inst)));
        tracep->chgQData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->chgQData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
        tracep->chgQData(oldp+145,(((1U & vlSelf->inst)
                                     ? (((vlSelf->inst 
                                          >> 0x1fU)
                                          ? (0xfffffffffffff000ULL 
                                             | (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x14U))))
                                          : (QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0x14U)))) 
                                        + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                        [(0x1fU & (vlSelf->inst 
                                                   >> 0xfU))])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+147,((((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U)))) 
                                    + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))])),64);
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
    }
}
