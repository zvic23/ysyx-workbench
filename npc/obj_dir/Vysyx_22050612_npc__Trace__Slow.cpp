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
        tracep->declBit(c+83,"clk", false,-1);
        tracep->declBit(c+84,"rst", false,-1);
        tracep->declBus(c+85,"inst", false,-1, 31,0);
        tracep->declQuad(c+86,"pc", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+84,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+85,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+86,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+92,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+93,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22050612_npc opcode", false,-1, 2,0);
        tracep->declBit(c+83,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+84,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+88,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+105,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+84,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+88,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+107,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+83,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+85,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+90,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+92,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+93,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22050612_npc idu opcode", false,-1, 2,0);
        tracep->declBit(c+83,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+90,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+92,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+93,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22050612_npc exu opcode", false,-1, 2,0);
        tracep->declQuad(c+86,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declQuad(c+99,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+108,"ysyx_22050612_npc exu gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+104,"ysyx_22050612_npc exu gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+83,"ysyx_22050612_npc exu gpr clk", false,-1);
        tracep->declQuad(c+5,"ysyx_22050612_npc exu gpr wdata", false,-1, 63,0);
        tracep->declBus(c+92,"ysyx_22050612_npc exu gpr waddr", false,-1, 4,0);
        tracep->declBit(c+7,"ysyx_22050612_npc exu gpr wen", false,-1);
        tracep->declBus(c+93,"ysyx_22050612_npc exu gpr rs1", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22050612_npc exu gpr rs2", false,-1, 4,0);
        tracep->declQuad(c+95,"ysyx_22050612_npc exu gpr src1", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22050612_npc exu gpr src2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+19+i*2,"ysyx_22050612_npc exu gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+104,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+90,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_22050612_npc exu i0 out", false,-1, 0,0);
        tracep->declBus(c+4,"ysyx_22050612_npc exu i0 key", false,-1, 2,0);
        tracep->declBus(c+111,"ysyx_22050612_npc exu i0 lut", false,-1, 3,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+112,"ysyx_22050612_npc exu i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_22050612_npc exu i0 i0 out", false,-1, 0,0);
        tracep->declBus(c+4,"ysyx_22050612_npc exu i0 i0 key", false,-1, 2,0);
        tracep->declBus(c+113,"ysyx_22050612_npc exu i0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+111,"ysyx_22050612_npc exu i0 i0 lut", false,-1, 3,0);
        tracep->declBus(c+114,"ysyx_22050612_npc exu i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc exu i0 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22050612_npc exu i0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22050612_npc exu i0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+8,"ysyx_22050612_npc exu i0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+9,"ysyx_22050612_npc exu i0 i0 hit", false,-1);
        tracep->declBus(c+115,"ysyx_22050612_npc exu i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+104,"ysyx_22050612_npc exu i1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+5,"ysyx_22050612_npc exu i1 out", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22050612_npc exu i1 key", false,-1, 2,0);
        tracep->declArray(c+101,"ysyx_22050612_npc exu i1 lut", false,-1, 66,0);
        tracep->declBus(c+109,"ysyx_22050612_npc exu i1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+110,"ysyx_22050612_npc exu i1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+104,"ysyx_22050612_npc exu i1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+112,"ysyx_22050612_npc exu i1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+5,"ysyx_22050612_npc exu i1 i0 out", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22050612_npc exu i1 i0 key", false,-1, 2,0);
        tracep->declQuad(c+116,"ysyx_22050612_npc exu i1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+101,"ysyx_22050612_npc exu i1 i0 lut", false,-1, 66,0);
        tracep->declBus(c+118,"ysyx_22050612_npc exu i1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+10+i*3,"ysyx_22050612_npc exu i1 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+13+i*1,"ysyx_22050612_npc exu i1 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+14+i*2,"ysyx_22050612_npc exu i1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+16,"ysyx_22050612_npc exu i1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+18,"ysyx_22050612_npc exu i1 i0 hit", false,-1);
        tracep->declBus(c+115,"ysyx_22050612_npc exu i1 i0 i", false,-1, 31,0);
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
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__data_list[0]));
        tracep->fullCData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__opcode),3);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+9,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                 == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i0__DOT__i0__DOT__key_list
                                 [0U])));
        tracep->fullWData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list[0]),3);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+18,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                  == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__i1__DOT__i0__DOT__key_list
                                  [0U])));
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[31]),64);
        tracep->fullBit(oldp+83,(vlSelf->clk));
        tracep->fullBit(oldp+84,(vlSelf->rst));
        tracep->fullIData(oldp+85,(vlSelf->inst),32);
        tracep->fullQData(oldp+86,(vlSelf->pc),64);
        tracep->fullQData(oldp+88,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+90,(((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->fullCData(oldp+92,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+93,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+94,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
        tracep->fullQData(oldp+99,((((vlSelf->inst 
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
        tracep->fullWData(oldp+101,(__Vtemp7),67);
        tracep->fullIData(oldp+104,(0x40U),32);
        tracep->fullQData(oldp+105,(0x80000000ULL),64);
        tracep->fullBit(oldp+107,(1U));
        tracep->fullIData(oldp+108,(5U),32);
        tracep->fullIData(oldp+109,(1U),32);
        tracep->fullIData(oldp+110,(3U),32);
        tracep->fullCData(oldp+111,(3U),4);
        tracep->fullIData(oldp+112,(0U),32);
        tracep->fullBit(oldp+113,(0U));
        tracep->fullIData(oldp+114,(4U),32);
        tracep->fullIData(oldp+115,(1U),32);
        tracep->fullQData(oldp+116,(0ULL),64);
        tracep->fullIData(oldp+118,(0x43U),32);
    }
}
