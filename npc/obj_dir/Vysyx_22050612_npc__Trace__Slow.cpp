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
        tracep->declBit(c+65,"clk", false,-1);
        tracep->declBit(c+66,"rst", false,-1);
        tracep->declBus(c+67,"inst", false,-1, 31,0);
        tracep->declQuad(c+68,"pc", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+66,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+67,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+68,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+74,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+76,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBit(c+77,"ysyx_22050612_npc opcode", false,-1);
        tracep->declBit(c+65,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+66,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+70,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+86,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+87,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+66,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+70,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+65,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+67,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+72,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+74,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+76,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBit(c+77,"ysyx_22050612_npc idu opcode", false,-1);
        tracep->declBit(c+65,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+72,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+74,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+76,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBit(c+77,"ysyx_22050612_npc exu opcode", false,-1);
        tracep->declQuad(c+68,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+77,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declQuad(c+84,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+90,"ysyx_22050612_npc exu gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22050612_npc exu gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+65,"ysyx_22050612_npc exu gpr clk", false,-1);
        tracep->declQuad(c+82,"ysyx_22050612_npc exu gpr wdata", false,-1, 63,0);
        tracep->declBus(c+74,"ysyx_22050612_npc exu gpr waddr", false,-1, 4,0);
        tracep->declBit(c+77,"ysyx_22050612_npc exu gpr wen", false,-1);
        tracep->declBus(c+75,"ysyx_22050612_npc exu gpr rs1", false,-1, 4,0);
        tracep->declBus(c+76,"ysyx_22050612_npc exu gpr rs2", false,-1, 4,0);
        tracep->declQuad(c+78,"ysyx_22050612_npc exu gpr src1", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22050612_npc exu gpr src2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"ysyx_22050612_npc exu gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+86,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+72,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf[31]),64);
        tracep->fullBit(oldp+65,(vlSelf->clk));
        tracep->fullBit(oldp+66,(vlSelf->rst));
        tracep->fullIData(oldp+67,(vlSelf->inst),32);
        tracep->fullQData(oldp+68,(vlSelf->pc),64);
        tracep->fullQData(oldp+70,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+72,(((vlSelf->inst >> 0x1fU)
                                     ? (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->fullCData(oldp+74,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+75,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+76,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+77,((1U & vlSelf->inst)));
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullQData(oldp+84,((((vlSelf->inst 
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
        tracep->fullIData(oldp+86,(0x40U),32);
        tracep->fullQData(oldp+87,(0x80000000ULL),64);
        tracep->fullBit(oldp+89,(1U));
        tracep->fullIData(oldp+90,(5U),32);
    }
}
