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
    VlWide<3>/*95:0*/ __Vtemp1003;
    VlWide<3>/*95:0*/ __Vtemp1004;
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
            tracep->chgSData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
            tracep->chgSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
            tracep->chgSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
            tracep->chgSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
            tracep->chgSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
            tracep->chgSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgSData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
            tracep->chgSData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
            tracep->chgSData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
            tracep->chgIData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
            tracep->chgIData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
            tracep->chgIData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2]),25);
            tracep->chgIData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
            tracep->chgIData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
            tracep->chgIData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2]),17);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2]),8);
            tracep->chgIData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0]),18);
            tracep->chgSData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
            tracep->chgIData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),21);
            tracep->chgIData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),21);
            tracep->chgIData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),21);
            tracep->chgIData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),21);
            tracep->chgIData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),21);
            tracep->chgIData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5]),21);
            tracep->chgIData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6]),21);
            tracep->chgIData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7]),21);
            tracep->chgIData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8]),21);
            tracep->chgIData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9]),21);
            tracep->chgIData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[10]),21);
            tracep->chgIData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[11]),21);
            tracep->chgIData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[11]),20);
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[10]));
            tracep->chgBit(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[11]));
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0]),28);
            tracep->chgIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1]),28);
            tracep->chgIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2]),28);
            tracep->chgIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3]),28);
            tracep->chgIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4]),28);
            tracep->chgIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5]),28);
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6]),28);
            tracep->chgIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7]),28);
            tracep->chgIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8]),28);
            tracep->chgIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9]),28);
            tracep->chgIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[10]),28);
            tracep->chgIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[11]),28);
            tracep->chgIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[12]),28);
            tracep->chgIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[13]),28);
            tracep->chgIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[13]),20);
            tracep->chgCData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1]),8);
            tracep->chgCData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2]),8);
            tracep->chgCData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3]),8);
            tracep->chgCData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4]),8);
            tracep->chgCData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5]),8);
            tracep->chgCData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6]),8);
            tracep->chgCData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7]),8);
            tracep->chgCData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8]),8);
            tracep->chgCData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9]),8);
            tracep->chgCData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[10]),8);
            tracep->chgCData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[11]),8);
            tracep->chgCData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[12]),8);
            tracep->chgCData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[13]),8);
            tracep->chgIData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
            tracep->chgIData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgCData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
            tracep->chgQData(oldp+133,(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
            tracep->chgQData(oldp+135,(((0x1000U & vlSelf->ysyx_22050612_npc__DOT__inst)
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
                                                                        >> 7U))))))))),64);
            tracep->chgQData(oldp+137,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                         >> 0x1fU) ? 
                                        (0xfffffffffffff000ULL 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 7U))))))
                                         : (((QData)((IData)(
                                                             (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                              >> 0x19U))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                  >> 7U))))))),64);
            tracep->chgCData(oldp+139,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 0x14U))),6);
            tracep->chgCData(oldp+140,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+141,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+142,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
            tracep->chgCData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
            tracep->chgSData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
            tracep->chgCData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
            tracep->chgCData(oldp+151,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
            tracep->chgCData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
            tracep->chgIData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
            tracep->chgCData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
            tracep->chgSData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
            tracep->chgCData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+161,(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                                      == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                                      [0U])));
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
            tracep->chgBit(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
            tracep->chgBit(oldp+169,(((0U != (0x1fU 
                                              & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                 >> 7U))) 
                                      & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
            tracep->chgCData(oldp+249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
            tracep->chgBit(oldp+314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+315,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),1008);
            tracep->chgWData(oldp+348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+351,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+354,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgWData(oldp+357,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),84);
            tracep->chgWData(oldp+360,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),84);
            tracep->chgWData(oldp+363,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5]),84);
            tracep->chgWData(oldp+366,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6]),84);
            tracep->chgWData(oldp+369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7]),84);
            tracep->chgWData(oldp+372,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8]),84);
            tracep->chgWData(oldp+375,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9]),84);
            tracep->chgWData(oldp+378,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[10]),84);
            tracep->chgWData(oldp+381,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[11]),84);
            tracep->chgIData(oldp+384,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+385,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+386,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+387,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+388,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+389,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+390,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+391,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+392,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+394,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+395,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[11]),20);
            tracep->chgQData(oldp+396,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+398,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+400,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+404,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+406,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+408,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+410,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+412,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+414,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+416,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+418,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+420,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+422,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+423,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),252);
            tracep->chgWData(oldp+431,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+434,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+437,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgIData(oldp+440,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+441,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+442,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
            tracep->chgQData(oldp+443,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+445,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+447,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+449,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+451,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+452,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),1176);
            tracep->chgWData(oldp+489,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+492,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+495,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgWData(oldp+498,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3]),84);
            tracep->chgWData(oldp+501,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4]),84);
            tracep->chgWData(oldp+504,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5]),84);
            tracep->chgWData(oldp+507,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6]),84);
            tracep->chgWData(oldp+510,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7]),84);
            tracep->chgWData(oldp+513,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8]),84);
            tracep->chgWData(oldp+516,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9]),84);
            tracep->chgWData(oldp+519,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[10]),84);
            tracep->chgWData(oldp+522,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[11]),84);
            tracep->chgWData(oldp+525,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[12]),84);
            tracep->chgWData(oldp+528,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[13]),84);
            tracep->chgIData(oldp+531,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+532,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+533,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+534,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+536,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+537,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+538,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+539,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+540,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+541,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+542,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+543,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+544,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[13]),20);
            tracep->chgQData(oldp+545,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+547,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+549,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+551,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+553,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+555,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+557,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+559,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+561,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+563,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+565,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+567,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+569,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+571,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+573,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+575,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+576,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),1176);
            tracep->chgWData(oldp+613,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+616,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgWData(oldp+619,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2]),84);
            tracep->chgWData(oldp+622,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3]),84);
            tracep->chgWData(oldp+625,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4]),84);
            tracep->chgWData(oldp+628,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5]),84);
            tracep->chgWData(oldp+631,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6]),84);
            tracep->chgWData(oldp+634,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7]),84);
            tracep->chgWData(oldp+637,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8]),84);
            tracep->chgWData(oldp+640,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9]),84);
            tracep->chgWData(oldp+643,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[10]),84);
            tracep->chgWData(oldp+646,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[11]),84);
            tracep->chgWData(oldp+649,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[12]),84);
            tracep->chgWData(oldp+652,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[13]),84);
            tracep->chgIData(oldp+655,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+656,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1]),20);
            tracep->chgIData(oldp+657,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2]),20);
            tracep->chgIData(oldp+658,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3]),20);
            tracep->chgIData(oldp+659,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4]),20);
            tracep->chgIData(oldp+660,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5]),20);
            tracep->chgIData(oldp+661,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6]),20);
            tracep->chgIData(oldp+662,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7]),20);
            tracep->chgIData(oldp+663,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8]),20);
            tracep->chgIData(oldp+664,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9]),20);
            tracep->chgIData(oldp+665,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[10]),20);
            tracep->chgIData(oldp+666,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[11]),20);
            tracep->chgIData(oldp+667,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[12]),20);
            tracep->chgIData(oldp+668,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[13]),20);
            tracep->chgQData(oldp+669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+671,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+673,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+675,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+677,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+679,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+681,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+683,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+685,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+687,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+689,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+691,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+693,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+695,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+697,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+699,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+700,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+701,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+702,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
            tracep->chgQData(oldp+704,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                         < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+706,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                         : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
            tracep->chgWData(oldp+708,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),288);
            tracep->chgWData(oldp+717,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
            tracep->chgWData(oldp+720,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
            tracep->chgWData(oldp+723,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
            tracep->chgWData(oldp+726,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3]),72);
            tracep->chgCData(oldp+729,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
            tracep->chgCData(oldp+730,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
            tracep->chgCData(oldp+731,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
            tracep->chgCData(oldp+732,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3]),8);
            tracep->chgQData(oldp+733,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+735,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+737,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+739,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+741,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+743,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+744,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),168);
            tracep->chgWData(oldp+750,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgWData(oldp+753,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
            tracep->chgIData(oldp+756,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgIData(oldp+757,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
            tracep->chgQData(oldp+758,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+760,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+762,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+764,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
            __Vtemp1003[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
            __Vtemp1003[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                       >> 0x20U));
            __Vtemp1003[2U] = 0x2bU;
            tracep->chgWData(oldp+765,(__Vtemp1003),84);
            tracep->chgWData(oldp+768,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgIData(oldp+771,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgQData(oldp+772,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+774,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+776,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                      == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                      [0U])));
            __Vtemp1004[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2);
            __Vtemp1004[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                       >> 0x20U));
            __Vtemp1004[2U] = 0x2bU;
            tracep->chgWData(oldp+777,(__Vtemp1004),84);
            tracep->chgWData(oldp+780,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
            tracep->chgIData(oldp+783,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
            tracep->chgQData(oldp+784,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+786,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+788,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                      == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                      [0U])));
            tracep->chgCData(oldp+789,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+790,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                      == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                                      [0U])));
        }
        tracep->chgBit(oldp+791,(vlSelf->clk));
        tracep->chgBit(oldp+792,(vlSelf->rst));
        tracep->chgQData(oldp+793,(vlSelf->pc),64);
        tracep->chgQData(oldp+795,((4ULL + vlSelf->pc)),64);
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
