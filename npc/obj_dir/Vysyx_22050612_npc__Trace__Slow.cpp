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
        tracep->declBit(c+146,"clk", false,-1);
        tracep->declBit(c+147,"rst", false,-1);
        tracep->declBus(c+148,"inst", false,-1, 31,0);
        tracep->declQuad(c+149,"pc", false,-1, 63,0);
        tracep->declBit(c+146,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+147,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+148,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+149,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+151,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+153,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+155,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+156,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+157,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBit(c+158,"ysyx_22050612_npc opcode", false,-1);
        tracep->declBit(c+146,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+147,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+151,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+149,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+169,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+146,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+147,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+151,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+149,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+171,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+146,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+148,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+153,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+155,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+156,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+157,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBit(c+158,"ysyx_22050612_npc idu opcode", false,-1);
        tracep->declBit(c+146,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+153,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+155,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+156,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+157,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBit(c+158,"ysyx_22050612_npc exu opcode", false,-1);
        tracep->declQuad(c+149,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+151,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+151,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+159,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+161,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+134,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+4+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+163,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+172,"ysyx_22050612_npc exu gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+168,"ysyx_22050612_npc exu gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+146,"ysyx_22050612_npc exu gpr_group clk", false,-1);
        tracep->declQuad(c+132,"ysyx_22050612_npc exu gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+155,"ysyx_22050612_npc exu gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+134,"ysyx_22050612_npc exu gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+68+i*2,"ysyx_22050612_npc exu gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+168,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+153,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+159,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+163,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu decode0 out", false,-1, 0,0);
        tracep->declBus(c+158,"ysyx_22050612_npc exu decode0 key", false,-1, 0,0);
        tracep->declBus(c+174,"ysyx_22050612_npc exu decode0 default_out", false,-1, 0,0);
        tracep->declBus(c+175,"ysyx_22050612_npc exu decode0 lut", false,-1, 1,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu decode0 i0 out", false,-1, 0,0);
        tracep->declBus(c+158,"ysyx_22050612_npc exu decode0 i0 key", false,-1, 0,0);
        tracep->declBus(c+174,"ysyx_22050612_npc exu decode0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+175,"ysyx_22050612_npc exu decode0 i0 lut", false,-1, 1,0);
        tracep->declBus(c+176,"ysyx_22050612_npc exu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc exu decode0 i0 pair_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22050612_npc exu decode0 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22050612_npc exu decode0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+135,"ysyx_22050612_npc exu decode0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+136,"ysyx_22050612_npc exu decode0 i0 hit", false,-1);
        tracep->declBus(c+177,"ysyx_22050612_npc exu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+168,"ysyx_22050612_npc exu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+132,"ysyx_22050612_npc exu decode1 out", false,-1, 63,0);
        tracep->declBus(c+158,"ysyx_22050612_npc exu decode1 key", false,-1, 0,0);
        tracep->declQuad(c+178,"ysyx_22050612_npc exu decode1 default_out", false,-1, 63,0);
        tracep->declArray(c+165,"ysyx_22050612_npc exu decode1 lut", false,-1, 64,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+168,"ysyx_22050612_npc exu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050612_npc exu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+132,"ysyx_22050612_npc exu decode1 i0 out", false,-1, 63,0);
        tracep->declBus(c+158,"ysyx_22050612_npc exu decode1 i0 key", false,-1, 0,0);
        tracep->declQuad(c+178,"ysyx_22050612_npc exu decode1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+165,"ysyx_22050612_npc exu decode1 i0 lut", false,-1, 64,0);
        tracep->declBus(c+180,"ysyx_22050612_npc exu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+137+i*3,"ysyx_22050612_npc exu decode1 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+140+i*1,"ysyx_22050612_npc exu decode1 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+141+i*2,"ysyx_22050612_npc exu decode1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+143,"ysyx_22050612_npc exu decode1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+145,"ysyx_22050612_npc exu decode1 i0 hit", false,-1);
        tracep->declBus(c+177,"ysyx_22050612_npc exu decode1 i0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp7;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[0]),2);
        tracep->fullBit(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[0]));
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[31]),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[0]));
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+146,(vlSelf->clk));
        tracep->fullBit(oldp+147,(vlSelf->rst));
        tracep->fullIData(oldp+148,(vlSelf->inst),32);
        tracep->fullQData(oldp+149,(vlSelf->pc),64);
        tracep->fullQData(oldp+151,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+153,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullCData(oldp+155,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+156,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+157,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+158,((0x13U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+163,((((vlSelf->inst 
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
        __Vtemp7[0U] = (IData)((((vlSelf->inst >> 0x1fU)
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
        __Vtemp7[1U] = (IData)(((((vlSelf->inst >> 0x1fU)
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
        __Vtemp7[2U] = 1U;
        tracep->fullWData(oldp+165,(__Vtemp7),65);
        tracep->fullIData(oldp+168,(0x40U),32);
        tracep->fullQData(oldp+169,(0x80000000ULL),64);
        tracep->fullBit(oldp+171,(1U));
        tracep->fullIData(oldp+172,(5U),32);
        tracep->fullIData(oldp+173,(1U),32);
        tracep->fullBit(oldp+174,(0U));
        tracep->fullCData(oldp+175,(3U),2);
        tracep->fullIData(oldp+176,(2U),32);
        tracep->fullIData(oldp+177,(1U),32);
        tracep->fullQData(oldp+178,(0ULL),64);
        tracep->fullIData(oldp+180,(0x41U),32);
    }
}
