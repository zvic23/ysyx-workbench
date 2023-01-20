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
        tracep->declBit(c+87,"clk", false,-1);
        tracep->declBit(c+88,"rst", false,-1);
        tracep->declBus(c+89,"inst", false,-1, 31,0);
        tracep->declQuad(c+90,"pc", false,-1, 63,0);
        tracep->declBit(c+87,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+88,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+89,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+90,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+71,"ysyx_22050612_npc opcode", false,-1, 2,0);
        tracep->declBit(c+87,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+88,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+92,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+110,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+111,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+87,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+88,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+92,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+113,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+87,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+89,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+94,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+71,"ysyx_22050612_npc idu opcode", false,-1, 2,0);
        tracep->declBus(c+114,"ysyx_22050612_npc idu i2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+115,"ysyx_22050612_npc idu i2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22050612_npc idu i2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+71,"ysyx_22050612_npc idu i2 out", false,-1, 2,0);
        tracep->declBus(c+99,"ysyx_22050612_npc idu i2 key", false,-1, 6,0);
        tracep->declBus(c+117,"ysyx_22050612_npc idu i2 lut", false,-1, 9,0);
        tracep->declBus(c+114,"ysyx_22050612_npc idu i2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+115,"ysyx_22050612_npc idu i2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22050612_npc idu i2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+118,"ysyx_22050612_npc idu i2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+71,"ysyx_22050612_npc idu i2 i0 out", false,-1, 2,0);
        tracep->declBus(c+99,"ysyx_22050612_npc idu i2 i0 key", false,-1, 6,0);
        tracep->declBus(c+119,"ysyx_22050612_npc idu i2 i0 default_out", false,-1, 2,0);
        tracep->declBus(c+117,"ysyx_22050612_npc idu i2 i0 lut", false,-1, 9,0);
        tracep->declBus(c+120,"ysyx_22050612_npc idu i2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu i2 i0 pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22050612_npc idu i2 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22050612_npc idu i2 i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+72,"ysyx_22050612_npc idu i2 i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+100,"ysyx_22050612_npc idu i2 i0 hit", false,-1);
        tracep->declBus(c+121,"ysyx_22050612_npc idu i2 i0 i", false,-1, 31,0);
        tracep->declBit(c+87,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+94,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+71,"ysyx_22050612_npc exu opcode", false,-1, 2,0);
        tracep->declQuad(c+90,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declQuad(c+105,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+122,"ysyx_22050612_npc exu gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+87,"ysyx_22050612_npc exu gpr clk", false,-1);
        tracep->declQuad(c+73,"ysyx_22050612_npc exu gpr wdata", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22050612_npc exu gpr waddr", false,-1, 4,0);
        tracep->declBit(c+75,"ysyx_22050612_npc exu gpr wen", false,-1);
        tracep->declBus(c+97,"ysyx_22050612_npc exu gpr rs1", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22050612_npc exu gpr rs2", false,-1, 4,0);
        tracep->declQuad(c+101,"ysyx_22050612_npc exu gpr src1", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22050612_npc exu gpr src2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+7+i*2,"ysyx_22050612_npc exu gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+110,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+94,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22050612_npc exu i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+75,"ysyx_22050612_npc exu i0 out", false,-1, 0,0);
        tracep->declBus(c+71,"ysyx_22050612_npc exu i0 key", false,-1, 2,0);
        tracep->declBus(c+123,"ysyx_22050612_npc exu i0 lut", false,-1, 3,0);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22050612_npc exu i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+118,"ysyx_22050612_npc exu i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+75,"ysyx_22050612_npc exu i0 i0 out", false,-1, 0,0);
        tracep->declBus(c+71,"ysyx_22050612_npc exu i0 i0 key", false,-1, 2,0);
        tracep->declBus(c+124,"ysyx_22050612_npc exu i0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+123,"ysyx_22050612_npc exu i0 i0 lut", false,-1, 3,0);
        tracep->declBus(c+125,"ysyx_22050612_npc exu i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+4+i*1,"ysyx_22050612_npc exu i0 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22050612_npc exu i0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+6+i*1,"ysyx_22050612_npc exu i0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+76,"ysyx_22050612_npc exu i0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+77,"ysyx_22050612_npc exu i0 i0 hit", false,-1);
        tracep->declBus(c+121,"ysyx_22050612_npc exu i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22050612_npc exu i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+73,"ysyx_22050612_npc exu i1 out", false,-1, 63,0);
        tracep->declBus(c+71,"ysyx_22050612_npc exu i1 key", false,-1, 2,0);
        tracep->declArray(c+107,"ysyx_22050612_npc exu i1 lut", false,-1, 66,0);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22050612_npc exu i1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+118,"ysyx_22050612_npc exu i1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+73,"ysyx_22050612_npc exu i1 i0 out", false,-1, 63,0);
        tracep->declBus(c+71,"ysyx_22050612_npc exu i1 i0 key", false,-1, 2,0);
        tracep->declQuad(c+126,"ysyx_22050612_npc exu i1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+107,"ysyx_22050612_npc exu i1 i0 lut", false,-1, 66,0);
        tracep->declBus(c+128,"ysyx_22050612_npc exu i1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+78+i*3,"ysyx_22050612_npc exu i1 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+81+i*1,"ysyx_22050612_npc exu i1 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+82+i*2,"ysyx_22050612_npc exu i1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+84,"ysyx_22050612_npc exu i1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+86,"ysyx_22050612_npc exu i1 i0 hit", false,-1);
        tracep->declBus(c+121,"ysyx_22050612_npc exu i1 i0 i", false,-1, 31,0);
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
        tracep->fullSData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i2__DOT__i0__DOT__pair_list[0]),10);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i2__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i2__DOT__i0__DOT__data_list[0]),3);
        tracep->fullCData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullBit(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0]));
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[31]),64);
        tracep->fullCData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__opcode),3);
        tracep->fullCData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i2__DOT__i0__DOT__lut_out),3);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+77,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list
                                  [0U])));
        tracep->fullWData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[0]),3);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+86,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list
                                  [0U])));
        tracep->fullBit(oldp+87,(vlSelf->clk));
        tracep->fullBit(oldp+88,(vlSelf->rst));
        tracep->fullIData(oldp+89,(vlSelf->inst),32);
        tracep->fullQData(oldp+90,(vlSelf->pc),64);
        tracep->fullQData(oldp+92,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+94,(((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->fullCData(oldp+96,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+97,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+98,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+99,((0x7fU & vlSelf->inst)),7);
        tracep->fullBit(oldp+100,(((0x7fU & vlSelf->inst) 
                                   == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i2__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+105,((((vlSelf->inst 
                                       >> 0x1fU) ? 
                                      (0xfffffffffffff000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U))))
                                       : (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U)))) 
                                     + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
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
                                + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
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
                                 + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                 [(0x1fU & (vlSelf->inst 
                                            >> 0xfU))]) 
                                >> 0x20U));
        __Vtemp7[2U] = 1U;
        tracep->fullWData(oldp+107,(__Vtemp7),67);
        tracep->fullIData(oldp+110,(0x40U),32);
        tracep->fullQData(oldp+111,(0x80000000ULL),64);
        tracep->fullBit(oldp+113,(1U));
        tracep->fullIData(oldp+114,(1U),32);
        tracep->fullIData(oldp+115,(7U),32);
        tracep->fullIData(oldp+116,(3U),32);
        tracep->fullSData(oldp+117,(0x99U),10);
        tracep->fullIData(oldp+118,(0U),32);
        tracep->fullCData(oldp+119,(0U),3);
        tracep->fullIData(oldp+120,(0xaU),32);
        tracep->fullIData(oldp+121,(1U),32);
        tracep->fullIData(oldp+122,(5U),32);
        tracep->fullCData(oldp+123,(3U),4);
        tracep->fullBit(oldp+124,(0U));
        tracep->fullIData(oldp+125,(4U),32);
        tracep->fullQData(oldp+126,(0ULL),64);
        tracep->fullIData(oldp+128,(0x43U),32);
    }
}
