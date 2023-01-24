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
        tracep->declBit(c+129,"clk", false,-1);
        tracep->declBit(c+130,"rst", false,-1);
        tracep->declBus(c+131,"inst", false,-1, 31,0);
        tracep->declQuad(c+132,"pc", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+130,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+131,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+132,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+138,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+140,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBit(c+141,"ysyx_22050612_npc opcode", false,-1);
        tracep->declBit(c+129,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+130,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+134,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+150,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+151,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+130,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+134,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+153,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+129,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+131,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+136,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+138,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+140,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBit(c+141,"ysyx_22050612_npc idu opcode", false,-1);
        tracep->declBit(c+129,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+136,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+138,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+140,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBit(c+141,"ysyx_22050612_npc exu opcode", false,-1);
        tracep->declQuad(c+132,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+146,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+141,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"ysyx_22050612_npc exu gpr_gp", true,(i+0), 63,0);}}
        tracep->declQuad(c+148,"ysyx_22050612_npc exu sum0", false,-1, 63,0);
        tracep->declBus(c+154,"ysyx_22050612_npc exu gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+150,"ysyx_22050612_npc exu gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+129,"ysyx_22050612_npc exu gpr clk", false,-1);
        tracep->declQuad(c+146,"ysyx_22050612_npc exu gpr wdata", false,-1, 63,0);
        tracep->declBus(c+138,"ysyx_22050612_npc exu gpr waddr", false,-1, 4,0);
        tracep->declBit(c+141,"ysyx_22050612_npc exu gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+65+i*2,"ysyx_22050612_npc exu gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+150,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+136,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp[31]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[0]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[1]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[2]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[3]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[4]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[5]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[6]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[7]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[8]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[9]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[10]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[11]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[12]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[13]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[14]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[15]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[16]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[17]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[18]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[19]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[20]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[21]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[22]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[23]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[24]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[25]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[26]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[27]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[28]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[29]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[30]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr____pinNumber5[31]),64);
        tracep->fullBit(oldp+129,(vlSelf->clk));
        tracep->fullBit(oldp+130,(vlSelf->rst));
        tracep->fullIData(oldp+131,(vlSelf->inst),32);
        tracep->fullQData(oldp+132,(vlSelf->pc),64);
        tracep->fullQData(oldp+134,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+136,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullCData(oldp+138,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+139,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+140,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+141,((1U & vlSelf->inst)));
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+146,(((1U & vlSelf->inst)
                                      ? (((vlSelf->inst 
                                           >> 0x1fU)
                                           ? (0xfffffffffffff000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x14U))))
                                           : (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x14U)))) 
                                         + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                         [(0x1fU & 
                                           (vlSelf->inst 
                                            >> 0xfU))])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+148,((((vlSelf->inst 
                                       >> 0x1fU) ? 
                                      (0xfffffffffffff000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U))))
                                       : (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x14U)))) 
                                     + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_gp
                                     [(0x1fU & (vlSelf->inst 
                                                >> 0xfU))])),64);
        tracep->fullIData(oldp+150,(0x40U),32);
        tracep->fullQData(oldp+151,(0x80000000ULL),64);
        tracep->fullBit(oldp+153,(1U));
        tracep->fullIData(oldp+154,(5U),32);
    }
}
