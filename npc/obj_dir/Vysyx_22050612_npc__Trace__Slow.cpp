// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc__Syms.h"


void Vysyx_22050612_npc___024root__traceInitSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050612_npc___024root__traceInitTop(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050612_npc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050612_npc___024root__traceInitSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+145,"clk", false,-1);
        tracep->declBit(c+146,"rst", false,-1);
        tracep->declBus(c+147,"inst", false,-1, 31,0);
        tracep->declQuad(c+148,"pc", false,-1, 63,0);
        tracep->declBit(c+145,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+146,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+147,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+148,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+150,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+152,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+154,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+155,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+156,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBit(c+157,"ysyx_22050612_npc opcode", false,-1);
        tracep->declBit(c+145,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+146,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+150,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+169,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+145,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+146,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+150,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+171,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+145,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+147,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+152,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+154,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+155,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+156,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBit(c+157,"ysyx_22050612_npc idu opcode", false,-1);
        tracep->declBit(c+145,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+152,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+154,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+155,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+156,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBit(c+157,"ysyx_22050612_npc exu opcode", false,-1);
        tracep->declQuad(c+148,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+150,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+150,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+160,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+131,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+162,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+172,"ysyx_22050612_npc exu gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+168,"ysyx_22050612_npc exu gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+145,"ysyx_22050612_npc exu gpr_group clk", false,-1);
        tracep->declQuad(c+129,"ysyx_22050612_npc exu gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+154,"ysyx_22050612_npc exu gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+131,"ysyx_22050612_npc exu gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+65+i*2,"ysyx_22050612_npc exu gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+168,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+152,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu m0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu m0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+174,"ysyx_22050612_npc exu m0 DATA_LEN", false,-1, 31,0);
        tracep->declArray(c+132,"ysyx_22050612_npc exu m0 out", false,-1, 64,0);
        tracep->declBus(c+157,"ysyx_22050612_npc exu m0 key", false,-1, 0,0);
        tracep->declArray(c+164,"ysyx_22050612_npc exu m0 lut", false,-1, 65,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu m0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu m0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+174,"ysyx_22050612_npc exu m0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+175,"ysyx_22050612_npc exu m0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declArray(c+132,"ysyx_22050612_npc exu m0 i0 out", false,-1, 64,0);
        tracep->declBus(c+157,"ysyx_22050612_npc exu m0 i0 key", false,-1, 0,0);
        tracep->declArray(c+176,"ysyx_22050612_npc exu m0 i0 default_out", false,-1, 64,0);
        tracep->declArray(c+164,"ysyx_22050612_npc exu m0 i0 lut", false,-1, 65,0);
        tracep->declBus(c+179,"ysyx_22050612_npc exu m0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+135+i*3,"ysyx_22050612_npc exu m0 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+138+i*1,"ysyx_22050612_npc exu m0 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+139+i*3,"ysyx_22050612_npc exu m0 i0 data_list", true,(i+0), 64,0);}}
        tracep->declArray(c+142,"ysyx_22050612_npc exu m0 i0 lut_out", false,-1, 64,0);
        tracep->declBit(c+167,"ysyx_22050612_npc exu m0 i0 hit", false,-1);
        tracep->declBus(c+180,"ysyx_22050612_npc exu m0 i0 i", false,-1, 31,0);
    }
}

void Vysyx_22050612_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050612_npc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050612_npc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050612_npc___024root__traceRegister(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050612_npc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050612_npc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050612_npc___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050612_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050612_npc___024root* const __restrict vlSelf = static_cast<Vysyx_22050612_npc___024root*>(voidSelf);
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050612_npc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[31]),64);
        tracep->fullQData(oldp+129,((((QData)((IData)(
                                                      vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__m0____pinNumber1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__m0____pinNumber1[0U])))),64);
        tracep->fullBit(oldp+131,((1U & vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__m0____pinNumber1[2U])));
        tracep->fullWData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__m0____pinNumber1),65);
        tracep->fullWData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__m0__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullBit(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__m0__DOT__i0__DOT__key_list[0]));
        tracep->fullWData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__m0__DOT__i0__DOT__data_list[0]),65);
        tracep->fullWData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__m0__DOT__i0__DOT__lut_out),65);
        tracep->fullBit(oldp+145,(vlSelf->clk));
        tracep->fullBit(oldp+146,(vlSelf->rst));
        tracep->fullIData(oldp+147,(vlSelf->inst),32);
        tracep->fullQData(oldp+148,(vlSelf->pc),64);
        tracep->fullQData(oldp+150,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+152,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullCData(oldp+154,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+155,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+156,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+157,((0x13U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+162,((((vlSelf->inst 
                                       >> 0x1fU) ? 
                                      (0xfffffffffffff000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U))))
                                       : (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U)))) 
                                     + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                     [(0x1fU & (vlSelf->inst 
                                                >> 0xfU))])),64);
        __Vtemp22[0U] = (IData)((((vlSelf->inst >> 0x1fU)
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
        __Vtemp22[1U] = (IData)(((((vlSelf->inst >> 0x1fU)
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
        __Vtemp22[2U] = 3U;
        tracep->fullWData(oldp+164,(__Vtemp22),66);
        tracep->fullBit(oldp+167,(((0x13U == (0x7fU 
                                              & vlSelf->inst)) 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__m0__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullIData(oldp+168,(0x40U),32);
        tracep->fullQData(oldp+169,(0x80000000ULL),64);
        tracep->fullBit(oldp+171,(1U));
        tracep->fullIData(oldp+172,(5U),32);
        tracep->fullIData(oldp+173,(1U),32);
        tracep->fullIData(oldp+174,(0x41U),32);
        tracep->fullIData(oldp+175,(0U),32);
        __Vtemp23[0U] = 0U;
        __Vtemp23[1U] = 0U;
        __Vtemp23[2U] = 0U;
        tracep->fullWData(oldp+176,(__Vtemp23),65);
        tracep->fullIData(oldp+179,(0x42U),32);
        tracep->fullIData(oldp+180,(1U),32);
    }
}
