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
        tracep->declBit(c+132,"clk", false,-1);
        tracep->declBit(c+133,"rst", false,-1);
        tracep->declBus(c+134,"inst", false,-1, 31,0);
        tracep->declQuad(c+135,"pc", false,-1, 63,0);
        tracep->declBit(c+132,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+133,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+134,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+135,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+142,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+143,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBit(c+144,"ysyx_22050612_npc opcode", false,-1);
        tracep->declBit(c+132,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+133,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+137,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+156,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+157,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+132,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+133,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+137,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+159,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+132,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+134,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+139,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+142,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+143,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBit(c+144,"ysyx_22050612_npc idu opcode", false,-1);
        tracep->declBus(c+160,"ysyx_22050612_npc idu i5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+161,"ysyx_22050612_npc idu i5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+160,"ysyx_22050612_npc idu i5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+144,"ysyx_22050612_npc idu i5 out", false,-1, 0,0);
        tracep->declBus(c+145,"ysyx_22050612_npc idu i5 key", false,-1, 6,0);
        tracep->declBus(c+162,"ysyx_22050612_npc idu i5 lut", false,-1, 7,0);
        tracep->declBus(c+160,"ysyx_22050612_npc idu i5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+161,"ysyx_22050612_npc idu i5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+160,"ysyx_22050612_npc idu i5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+163,"ysyx_22050612_npc idu i5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+144,"ysyx_22050612_npc idu i5 i0 out", false,-1, 0,0);
        tracep->declBus(c+145,"ysyx_22050612_npc idu i5 i0 key", false,-1, 6,0);
        tracep->declBus(c+164,"ysyx_22050612_npc idu i5 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+162,"ysyx_22050612_npc idu i5 i0 lut", false,-1, 7,0);
        tracep->declBus(c+165,"ysyx_22050612_npc idu i5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu i5 i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22050612_npc idu i5 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22050612_npc idu i5 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+146,"ysyx_22050612_npc idu i5 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+147,"ysyx_22050612_npc idu i5 i0 hit", false,-1);
        tracep->declBus(c+166,"ysyx_22050612_npc idu i5 i0 i", false,-1, 31,0);
        tracep->declBit(c+132,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+139,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+142,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+143,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBit(c+144,"ysyx_22050612_npc exu opcode", false,-1);
        tracep->declQuad(c+135,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+150,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+152,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+144,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+4+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+154,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+167,"ysyx_22050612_npc exu gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+156,"ysyx_22050612_npc exu gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+132,"ysyx_22050612_npc exu gpr_group clk", false,-1);
        tracep->declQuad(c+152,"ysyx_22050612_npc exu gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+144,"ysyx_22050612_npc exu gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+68+i*2,"ysyx_22050612_npc exu gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+156,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+139,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+154,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0]),7);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0]));
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
        tracep->fullBit(oldp+132,(vlSelf->clk));
        tracep->fullBit(oldp+133,(vlSelf->rst));
        tracep->fullIData(oldp+134,(vlSelf->inst),32);
        tracep->fullQData(oldp+135,(vlSelf->pc),64);
        tracep->fullQData(oldp+137,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+139,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullCData(oldp+141,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+142,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+143,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__opcode));
        tracep->fullCData(oldp+145,((0x7fU & vlSelf->inst)),7);
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+147,(((0x7fU & vlSelf->inst) 
                                   == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+152,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode)
                                      ? (((vlSelf->inst 
                                           >> 0x1fU)
                                           ? (0xfffffffffffff000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x14U))))
                                           : (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x14U)))) 
                                         + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                         [(0x1fU & 
                                           (vlSelf->inst 
                                            >> 0xfU))])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+154,((((vlSelf->inst 
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
        tracep->fullIData(oldp+156,(0x40U),32);
        tracep->fullQData(oldp+157,(0x80000000ULL),64);
        tracep->fullBit(oldp+159,(1U));
        tracep->fullIData(oldp+160,(1U),32);
        tracep->fullIData(oldp+161,(7U),32);
        tracep->fullCData(oldp+162,(0x27U),8);
        tracep->fullIData(oldp+163,(0U),32);
        tracep->fullBit(oldp+164,(0U));
        tracep->fullIData(oldp+165,(8U),32);
        tracep->fullIData(oldp+166,(1U),32);
        tracep->fullIData(oldp+167,(5U),32);
    }
}
