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
            tracep->chgSData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
            tracep->chgCData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgSData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
            tracep->chgSData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
            tracep->chgSData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
            tracep->chgSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),10);
            tracep->chgSData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),10);
            tracep->chgSData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),10);
            tracep->chgBit(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
            tracep->chgSData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__opcode),10);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
            tracep->chgSData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0),64);
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),370);
            tracep->chgWData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),74);
            tracep->chgWData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),74);
            tracep->chgWData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),74);
            tracep->chgWData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),74);
            tracep->chgWData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),74);
            tracep->chgSData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),10);
            tracep->chgSData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),10);
            tracep->chgSData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),10);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),148);
            tracep->chgWData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),74);
            tracep->chgWData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),74);
            tracep->chgSData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),10);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend0____pinNumber3),296);
            tracep->chgWData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[0]),74);
            tracep->chgWData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[1]),74);
            tracep->chgWData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[2]),74);
            tracep->chgWData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[3]),74);
            tracep->chgSData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[2]),10);
            tracep->chgSData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[3]),10);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend1____pinNumber3),296);
            tracep->chgWData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[0]),74);
            tracep->chgWData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[1]),74);
            tracep->chgWData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[2]),74);
            tracep->chgWData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[3]),74);
            tracep->chgSData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[0]),10);
            tracep->chgSData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[1]),10);
            tracep->chgSData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[2]),10);
            tracep->chgSData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[3]),10);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        }
        tracep->chgBit(oldp+324,(vlSelf->clk));
        tracep->chgBit(oldp+325,(vlSelf->rst));
        tracep->chgIData(oldp+326,(vlSelf->inst),32);
        tracep->chgQData(oldp+327,(vlSelf->pc),64);
        tracep->chgQData(oldp+329,(((vlSelf->inst >> 0x1fU)
                                     ? (0xffffffffffe00000ULL 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSelf->inst 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->inst) 
                                                              | ((0x800U 
                                                                  & (vlSelf->inst 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->inst 
                                                                       >> 0x14U))))))))
                                     : (((QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->inst) 
                                                           | ((0x800U 
                                                               & (vlSelf->inst 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U))))))))),64);
        tracep->chgCData(oldp+331,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+332,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+333,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+334,((0x7fU & vlSelf->inst)),7);
        tracep->chgQData(oldp+335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
        tracep->chgQData(oldp+337,((4ULL + vlSelf->pc)),64);
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
