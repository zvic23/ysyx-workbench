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
        tracep->declBit(c+80,"clk", false,-1);
        tracep->declBit(c+81,"rst", false,-1);
        tracep->declBus(c+82,"inst", false,-1, 31,0);
        tracep->declQuad(c+83,"pc", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+81,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+82,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+83,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+89,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+90,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+91,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBit(c+92,"ysyx_22050612_npc opcode", false,-1);
        tracep->declBit(c+80,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+81,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+85,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+83,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+105,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+81,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+85,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+83,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+107,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+80,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+82,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+87,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+89,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+90,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+91,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBit(c+92,"ysyx_22050612_npc idu opcode", false,-1);
        tracep->declBit(c+80,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+87,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+89,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+90,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+91,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBit(c+92,"ysyx_22050612_npc exu opcode", false,-1);
        tracep->declQuad(c+83,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+70,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declQuad(c+97,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+108,"ysyx_22050612_npc exu gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+104,"ysyx_22050612_npc exu gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+80,"ysyx_22050612_npc exu gpr clk", false,-1);
        tracep->declQuad(c+68,"ysyx_22050612_npc exu gpr wdata", false,-1, 63,0);
        tracep->declBus(c+89,"ysyx_22050612_npc exu gpr waddr", false,-1, 4,0);
        tracep->declBit(c+70,"ysyx_22050612_npc exu gpr wen", false,-1);
        tracep->declBus(c+90,"ysyx_22050612_npc exu gpr rs1", false,-1, 4,0);
        tracep->declBus(c+91,"ysyx_22050612_npc exu gpr rs2", false,-1, 4,0);
        tracep->declQuad(c+93,"ysyx_22050612_npc exu gpr src1", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22050612_npc exu gpr src2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+4+i*2,"ysyx_22050612_npc exu gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+104,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+87,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+70,"ysyx_22050612_npc exu i0 out", false,-1, 0,0);
        tracep->declBus(c+92,"ysyx_22050612_npc exu i0 key", false,-1, 0,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i0 lut", false,-1, 1,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+111,"ysyx_22050612_npc exu i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+70,"ysyx_22050612_npc exu i0 i0 out", false,-1, 0,0);
        tracep->declBus(c+92,"ysyx_22050612_npc exu i0 i0 key", false,-1, 0,0);
        tracep->declBus(c+112,"ysyx_22050612_npc exu i0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i0 i0 lut", false,-1, 1,0);
        tracep->declBus(c+113,"ysyx_22050612_npc exu i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc exu i0 i0 pair_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22050612_npc exu i0 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22050612_npc exu i0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+71,"ysyx_22050612_npc exu i0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+99,"ysyx_22050612_npc exu i0 i0 hit", false,-1);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+104,"ysyx_22050612_npc exu i1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+68,"ysyx_22050612_npc exu i1 out", false,-1, 63,0);
        tracep->declBus(c+92,"ysyx_22050612_npc exu i1 key", false,-1, 0,0);
        tracep->declArray(c+100,"ysyx_22050612_npc exu i1 lut", false,-1, 64,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+104,"ysyx_22050612_npc exu i1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+111,"ysyx_22050612_npc exu i1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+68,"ysyx_22050612_npc exu i1 i0 out", false,-1, 63,0);
        tracep->declBus(c+92,"ysyx_22050612_npc exu i1 i0 key", false,-1, 0,0);
        tracep->declQuad(c+115,"ysyx_22050612_npc exu i1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+100,"ysyx_22050612_npc exu i1 i0 lut", false,-1, 64,0);
        tracep->declBus(c+117,"ysyx_22050612_npc exu i1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+72+i*3,"ysyx_22050612_npc exu i1 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+75+i*1,"ysyx_22050612_npc exu i1 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+76+i*2,"ysyx_22050612_npc exu i1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+78,"ysyx_22050612_npc exu i1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+103,"ysyx_22050612_npc exu i1 i0 hit", false,-1);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i1 i0 i", false,-1, 31,0);
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
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
        tracep->fullBit(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0]));
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[31]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out));
        tracep->fullWData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[0]));
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+80,(vlSelf->clk));
        tracep->fullBit(oldp+81,(vlSelf->rst));
        tracep->fullIData(oldp+82,(vlSelf->inst),32);
        tracep->fullQData(oldp+83,(vlSelf->pc),64);
        tracep->fullQData(oldp+85,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+87,(((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->fullCData(oldp+89,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+90,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+91,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+92,((1U & vlSelf->inst)));
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
        tracep->fullQData(oldp+97,((((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U)))) 
                                    + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))])),64);
        tracep->fullBit(oldp+99,(((1U & vlSelf->inst) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list
                                  [0U])));
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
        tracep->fullWData(oldp+100,(__Vtemp7),65);
        tracep->fullBit(oldp+103,(((1U & vlSelf->inst) 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullIData(oldp+104,(0x40U),32);
        tracep->fullQData(oldp+105,(0x80000000ULL),64);
        tracep->fullBit(oldp+107,(1U));
        tracep->fullIData(oldp+108,(5U),32);
        tracep->fullIData(oldp+109,(1U),32);
        tracep->fullCData(oldp+110,(3U),2);
        tracep->fullIData(oldp+111,(0U),32);
        tracep->fullBit(oldp+112,(0U));
        tracep->fullIData(oldp+113,(2U),32);
        tracep->fullIData(oldp+114,(1U),32);
        tracep->fullQData(oldp+115,(0ULL),64);
        tracep->fullIData(oldp+117,(0x41U),32);
    }
}
