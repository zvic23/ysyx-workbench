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
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0]),17);
            tracep->chgIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[1]),17);
            tracep->chgIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[2]),17);
            tracep->chgIData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[3]),17);
            tracep->chgIData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[4]),17);
            tracep->chgIData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[5]),17);
            tracep->chgIData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[6]),17);
            tracep->chgIData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[7]),17);
            tracep->chgIData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[8]),17);
            tracep->chgIData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[9]),17);
            tracep->chgIData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[10]),17);
            tracep->chgIData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[11]),17);
            tracep->chgSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
            tracep->chgSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
            tracep->chgSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
            tracep->chgSData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
            tracep->chgSData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
            tracep->chgSData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
            tracep->chgSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[8]),10);
            tracep->chgSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[9]),10);
            tracep->chgSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[10]),10);
            tracep->chgSData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[11]),10);
            tracep->chgCData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[8]),7);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[9]),7);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[10]),7);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[11]),7);
            tracep->chgSData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
            tracep->chgSData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
            tracep->chgSData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
            tracep->chgIData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
            tracep->chgIData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
            tracep->chgIData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2]),25);
            tracep->chgIData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[3]),25);
            tracep->chgIData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[4]),25);
            tracep->chgIData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[5]),25);
            tracep->chgIData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[6]),25);
            tracep->chgIData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
            tracep->chgIData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
            tracep->chgIData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2]),17);
            tracep->chgIData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[3]),17);
            tracep->chgIData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[4]),17);
            tracep->chgIData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[5]),17);
            tracep->chgIData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[6]),17);
            tracep->chgCData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
            tracep->chgCData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2]),8);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[3]),8);
            tracep->chgCData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[4]),8);
            tracep->chgCData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[5]),8);
            tracep->chgCData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[6]),8);
            tracep->chgIData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0]),18);
            tracep->chgSData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
            tracep->chgCData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
            tracep->chgIData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),21);
            tracep->chgIData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),21);
            tracep->chgIData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),21);
            tracep->chgIData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),21);
            tracep->chgIData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),21);
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5]),21);
            tracep->chgIData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6]),21);
            tracep->chgIData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7]),21);
            tracep->chgIData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8]),21);
            tracep->chgIData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9]),21);
            tracep->chgIData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[10]),21);
            tracep->chgIData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[11]),21);
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[12]),21);
            tracep->chgIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[13]),21);
            tracep->chgIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[14]),21);
            tracep->chgIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[15]),21);
            tracep->chgIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[16]),21);
            tracep->chgIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[17]),21);
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[18]),21);
            tracep->chgIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[19]),21);
            tracep->chgIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[13]),20);
            tracep->chgIData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[14]),20);
            tracep->chgIData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[15]),20);
            tracep->chgIData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[16]),20);
            tracep->chgIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[17]),20);
            tracep->chgIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[18]),20);
            tracep->chgIData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[19]),20);
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[10]));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[11]));
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[12]));
            tracep->chgBit(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[13]));
            tracep->chgBit(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[14]));
            tracep->chgBit(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[15]));
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[16]));
            tracep->chgBit(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[17]));
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[18]));
            tracep->chgBit(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[19]));
            tracep->chgIData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0]),28);
            tracep->chgIData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1]),28);
            tracep->chgIData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2]),28);
            tracep->chgIData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3]),28);
            tracep->chgIData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4]),28);
            tracep->chgIData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5]),28);
            tracep->chgIData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6]),28);
            tracep->chgIData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7]),28);
            tracep->chgIData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8]),28);
            tracep->chgIData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9]),28);
            tracep->chgIData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[10]),28);
            tracep->chgIData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[11]),28);
            tracep->chgIData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[12]),28);
            tracep->chgIData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[13]),28);
            tracep->chgIData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[14]),28);
            tracep->chgIData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[15]),28);
            tracep->chgIData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[16]),28);
            tracep->chgIData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[17]),28);
            tracep->chgIData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[18]),28);
            tracep->chgIData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[19]),28);
            tracep->chgIData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[20]),28);
            tracep->chgIData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[21]),28);
            tracep->chgIData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[13]),20);
            tracep->chgIData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[14]),20);
            tracep->chgIData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[15]),20);
            tracep->chgIData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[16]),20);
            tracep->chgIData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[17]),20);
            tracep->chgIData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[18]),20);
            tracep->chgIData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[19]),20);
            tracep->chgIData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[20]),20);
            tracep->chgIData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[21]),20);
            tracep->chgCData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1]),8);
            tracep->chgCData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2]),8);
            tracep->chgCData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3]),8);
            tracep->chgCData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4]),8);
            tracep->chgCData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5]),8);
            tracep->chgCData(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6]),8);
            tracep->chgCData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7]),8);
            tracep->chgCData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8]),8);
            tracep->chgCData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9]),8);
            tracep->chgCData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[10]),8);
            tracep->chgCData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[11]),8);
            tracep->chgCData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[12]),8);
            tracep->chgCData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[13]),8);
            tracep->chgCData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[14]),8);
            tracep->chgCData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[15]),8);
            tracep->chgCData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[16]),8);
            tracep->chgCData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[17]),8);
            tracep->chgCData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[18]),8);
            tracep->chgCData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[19]),8);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[20]),8);
            tracep->chgCData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[21]),8);
            tracep->chgIData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
            tracep->chgIData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1]),28);
            tracep->chgIData(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1]),20);
            tracep->chgCData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
            tracep->chgQData(oldp+208,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                         >> 0x1fU) ? 
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
                                                                        >> 0x14U))))))))),64);
            tracep->chgQData(oldp+210,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                         >> 0x1fU) ? 
                                        (0xffffffffffffe000ULL 
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
                                                                        >> 7U))))))))),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__imm_S),64);
            tracep->chgCData(oldp+214,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 0x14U))),6);
            tracep->chgCData(oldp+215,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+216,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+217,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
            tracep->chgCData(oldp+221,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
            tracep->chgSData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
            tracep->chgCData(oldp+223,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+225,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
            tracep->chgCData(oldp+226,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
            tracep->chgIData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
            tracep->chgCData(oldp+231,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+233,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
            tracep->chgSData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
            tracep->chgCData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+236,(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                                      == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                                      [0U])));
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
            tracep->chgBit(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
            tracep->chgBit(oldp+244,(((0U != (0x1fU 
                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 7U))) 
                                      & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
            tracep->chgCData(oldp+309,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
            tracep->chgCData(oldp+324,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix),64);
            tracep->chgCData(oldp+327,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte),8);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
            tracep->chgQData(oldp+330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
            tracep->chgQData(oldp+334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
            tracep->chgQData(oldp+336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
            tracep->chgQData(oldp+358,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
            tracep->chgQData(oldp+360,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
            tracep->chgQData(oldp+362,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
            tracep->chgQData(oldp+364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
            tracep->chgQData(oldp+366,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
            tracep->chgQData(oldp+368,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
            tracep->chgQData(oldp+372,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
            tracep->chgQData(oldp+374,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
            tracep->chgQData(oldp+380,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
            tracep->chgBit(oldp+392,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+394,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),1680);
            tracep->chgWData(oldp+447,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+450,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+453,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgWData(oldp+456,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),84);
            tracep->chgWData(oldp+459,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),84);
            tracep->chgWData(oldp+462,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5]),84);
            tracep->chgWData(oldp+465,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6]),84);
            tracep->chgWData(oldp+468,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7]),84);
            tracep->chgWData(oldp+471,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8]),84);
            tracep->chgWData(oldp+474,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9]),84);
            tracep->chgWData(oldp+477,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[10]),84);
            tracep->chgWData(oldp+480,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[11]),84);
            tracep->chgWData(oldp+483,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[12]),84);
            tracep->chgWData(oldp+486,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[13]),84);
            tracep->chgWData(oldp+489,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[14]),84);
            tracep->chgWData(oldp+492,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[15]),84);
            tracep->chgWData(oldp+495,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[16]),84);
            tracep->chgWData(oldp+498,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[17]),84);
            tracep->chgWData(oldp+501,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[18]),84);
            tracep->chgWData(oldp+504,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[19]),84);
            tracep->chgIData(oldp+507,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+508,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+509,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+510,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+511,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+512,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+513,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+514,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+515,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+516,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+517,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+518,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+519,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+520,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[13]),20);
            tracep->chgIData(oldp+521,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[14]),20);
            tracep->chgIData(oldp+522,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[15]),20);
            tracep->chgIData(oldp+523,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[16]),20);
            tracep->chgIData(oldp+524,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[17]),20);
            tracep->chgIData(oldp+525,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[18]),20);
            tracep->chgIData(oldp+526,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[19]),20);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+531,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+533,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+537,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+539,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+541,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+543,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+545,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+547,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+549,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+551,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+553,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+555,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+557,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+559,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+561,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+563,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+565,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+567,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+569,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+570,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),252);
            tracep->chgWData(oldp+578,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+581,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+584,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgIData(oldp+587,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+588,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+589,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
            tracep->chgQData(oldp+590,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+592,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+594,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+596,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+598,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+599,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),1848);
            tracep->chgWData(oldp+657,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+660,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+663,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgWData(oldp+666,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3]),84);
            tracep->chgWData(oldp+669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4]),84);
            tracep->chgWData(oldp+672,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5]),84);
            tracep->chgWData(oldp+675,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6]),84);
            tracep->chgWData(oldp+678,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7]),84);
            tracep->chgWData(oldp+681,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8]),84);
            tracep->chgWData(oldp+684,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9]),84);
            tracep->chgWData(oldp+687,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[10]),84);
            tracep->chgWData(oldp+690,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[11]),84);
            tracep->chgWData(oldp+693,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[12]),84);
            tracep->chgWData(oldp+696,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[13]),84);
            tracep->chgWData(oldp+699,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[14]),84);
            tracep->chgWData(oldp+702,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[15]),84);
            tracep->chgWData(oldp+705,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[16]),84);
            tracep->chgWData(oldp+708,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[17]),84);
            tracep->chgWData(oldp+711,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[18]),84);
            tracep->chgWData(oldp+714,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[19]),84);
            tracep->chgWData(oldp+717,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[20]),84);
            tracep->chgWData(oldp+720,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[21]),84);
            tracep->chgIData(oldp+723,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+724,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+725,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+726,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+727,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+728,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+729,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+730,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+731,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+732,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+733,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+734,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+735,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+736,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[13]),20);
            tracep->chgIData(oldp+737,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[14]),20);
            tracep->chgIData(oldp+738,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[15]),20);
            tracep->chgIData(oldp+739,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[16]),20);
            tracep->chgIData(oldp+740,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[17]),20);
            tracep->chgIData(oldp+741,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[18]),20);
            tracep->chgIData(oldp+742,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[19]),20);
            tracep->chgIData(oldp+743,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[20]),20);
            tracep->chgIData(oldp+744,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[21]),20);
            tracep->chgQData(oldp+745,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+747,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+749,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+751,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+753,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+755,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+757,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+759,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+761,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+763,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+765,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+767,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+769,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+771,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+773,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+775,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+777,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+779,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+781,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+783,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+785,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+787,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+789,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+791,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+792,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),1848);
            tracep->chgWData(oldp+850,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+853,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+856,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgWData(oldp+859,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3]),84);
            tracep->chgWData(oldp+862,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4]),84);
            tracep->chgWData(oldp+865,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5]),84);
            tracep->chgWData(oldp+868,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6]),84);
            tracep->chgWData(oldp+871,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7]),84);
            tracep->chgWData(oldp+874,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8]),84);
            tracep->chgWData(oldp+877,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9]),84);
            tracep->chgWData(oldp+880,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[10]),84);
            tracep->chgWData(oldp+883,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[11]),84);
            tracep->chgWData(oldp+886,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[12]),84);
            tracep->chgWData(oldp+889,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[13]),84);
            tracep->chgWData(oldp+892,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[14]),84);
            tracep->chgWData(oldp+895,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[15]),84);
            tracep->chgWData(oldp+898,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[16]),84);
            tracep->chgWData(oldp+901,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[17]),84);
            tracep->chgWData(oldp+904,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[18]),84);
            tracep->chgWData(oldp+907,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[19]),84);
            tracep->chgWData(oldp+910,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[20]),84);
            tracep->chgWData(oldp+913,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[21]),84);
            tracep->chgIData(oldp+916,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+917,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+918,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+919,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+920,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+921,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+922,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+923,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+924,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+925,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+926,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+927,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+928,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+929,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[13]),20);
            tracep->chgIData(oldp+930,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[14]),20);
            tracep->chgIData(oldp+931,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[15]),20);
            tracep->chgIData(oldp+932,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[16]),20);
            tracep->chgIData(oldp+933,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[17]),20);
            tracep->chgIData(oldp+934,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[18]),20);
            tracep->chgIData(oldp+935,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[19]),20);
            tracep->chgIData(oldp+936,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[20]),20);
            tracep->chgIData(oldp+937,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[21]),20);
            tracep->chgQData(oldp+938,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+940,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+942,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+944,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+946,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+948,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+950,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+952,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+954,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+956,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+958,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+960,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+962,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+964,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+966,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+968,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+970,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+972,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+974,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+976,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+978,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+980,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[21]),64);
            tracep->chgQData(oldp+982,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+984,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+985,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+986,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+987,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
            tracep->chgQData(oldp+989,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__and_result),64);
            tracep->chgQData(oldp+991,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                        | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
            tracep->chgQData(oldp+993,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                        ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
            tracep->chgQData(oldp+995,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                         < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+997,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
            tracep->chgQData(oldp+999,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
            tracep->chgQData(oldp+1001,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                          ? (1ULL + 
                                             (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                          : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
            tracep->chgWData(oldp+1003,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),648);
            tracep->chgWData(oldp+1024,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
            tracep->chgWData(oldp+1027,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
            tracep->chgWData(oldp+1030,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
            tracep->chgWData(oldp+1033,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3]),72);
            tracep->chgWData(oldp+1036,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4]),72);
            tracep->chgWData(oldp+1039,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5]),72);
            tracep->chgWData(oldp+1042,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6]),72);
            tracep->chgWData(oldp+1045,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7]),72);
            tracep->chgWData(oldp+1048,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8]),72);
            tracep->chgCData(oldp+1051,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
            tracep->chgCData(oldp+1052,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
            tracep->chgCData(oldp+1053,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
            tracep->chgCData(oldp+1054,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3]),8);
            tracep->chgCData(oldp+1055,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4]),8);
            tracep->chgCData(oldp+1056,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5]),8);
            tracep->chgCData(oldp+1057,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6]),8);
            tracep->chgCData(oldp+1058,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7]),8);
            tracep->chgCData(oldp+1059,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8]),8);
            tracep->chgQData(oldp+1060,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1062,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1064,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1066,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1068,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1070,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1072,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1074,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+1076,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+1078,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1080,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1081,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),252);
            tracep->chgWData(oldp+1089,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+1092,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+1095,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgIData(oldp+1098,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+1099,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+1100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2]),20);
            tracep->chgQData(oldp+1101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3),168);
            tracep->chgWData(oldp+1116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+1119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgIData(oldp+1122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+1123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1]),20);
            tracep->chgQData(oldp+1124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3),168);
            tracep->chgWData(oldp+1137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+1140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgIData(oldp+1143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+1144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1]),20);
            tracep->chgQData(oldp+1145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+1153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3),252);
            tracep->chgWData(oldp+1162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+1165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+1168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgIData(oldp+1171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+1172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+1173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2]),20);
            tracep->chgQData(oldp+1174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1183,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))),3);
            tracep->chgWData(oldp+1184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3),88);
            tracep->chgSData(oldp+1187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+1188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+1189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+1190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+1191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+1192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+1193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[6]),11);
            tracep->chgSData(oldp+1194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[7]),11);
            tracep->chgCData(oldp+1195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+1198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+1199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+1200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[5]),3);
            tracep->chgCData(oldp+1201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[6]),3);
            tracep->chgCData(oldp+1202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[7]),3);
            tracep->chgCData(oldp+1203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+1204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[1]),8);
            tracep->chgCData(oldp+1205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[2]),8);
            tracep->chgCData(oldp+1206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[3]),8);
            tracep->chgCData(oldp+1207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[4]),8);
            tracep->chgCData(oldp+1208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[5]),8);
            tracep->chgCData(oldp+1209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[6]),8);
            tracep->chgCData(oldp+1210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[7]),8);
            tracep->chgCData(oldp+1211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+1212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+1213,(vlSelf->clk));
        tracep->chgBit(oldp+1214,(vlSelf->rst));
        tracep->chgQData(oldp+1215,(vlSelf->pc),64);
        tracep->chgQData(oldp+1217,((4ULL + vlSelf->pc)),64);
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
