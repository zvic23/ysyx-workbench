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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[0]),17);
            tracep->chgIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[1]),17);
            tracep->chgIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[2]),17);
            tracep->chgCData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[2]),7);
            tracep->chgSData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0]),10);
            tracep->chgSData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[1]),10);
            tracep->chgSData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[2]),10);
            tracep->chgSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
            tracep->chgBit(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[2]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
            tracep->chgSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__opcode),10);
            tracep->chgSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out),10);
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
            tracep->chgBit(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0),64);
            tracep->chgBit(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__decode1____pinNumber3),222);
            tracep->chgWData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[0]),74);
            tracep->chgWData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[1]),74);
            tracep->chgWData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[2]),74);
            tracep->chgSData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[2]),10);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend0____pinNumber3),148);
            tracep->chgWData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[0]),74);
            tracep->chgWData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[1]),74);
            tracep->chgSData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[1]),10);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend1____pinNumber3),148);
            tracep->chgWData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[0]),74);
            tracep->chgWData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[1]),74);
            tracep->chgSData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[1]),10);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[0]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[1]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[2]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[3]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[4]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[5]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[6]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[7]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[8]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[9]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[10]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[11]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[12]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[13]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[14]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[15]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[16]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[17]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[18]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[19]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[20]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[21]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[22]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[23]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[24]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[25]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[26]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[27]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[28]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[29]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[30]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[31]),64);
        }
        tracep->chgBit(oldp+230,(vlSelf->clk));
        tracep->chgBit(oldp+231,(vlSelf->rst));
        tracep->chgIData(oldp+232,(vlSelf->inst),32);
        tracep->chgQData(oldp+233,(vlSelf->pc),64);
        tracep->chgQData(oldp+235,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+237,(((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->chgCData(oldp+239,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+240,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+241,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+242,((0x7fU & vlSelf->inst)),7);
        tracep->chgQData(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->chgQData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
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
