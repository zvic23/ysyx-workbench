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
        tracep->declBit(c+178,"clk", false,-1);
        tracep->declBit(c+179,"rst", false,-1);
        tracep->declBus(c+180,"inst", false,-1, 31,0);
        tracep->declQuad(c+181,"pc", false,-1, 63,0);
        tracep->declBit(c+178,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+179,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+180,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+181,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+183,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+185,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declBus(c+187,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+188,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+189,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+135,"ysyx_22050612_npc opcode", false,-1, 9,0);
        tracep->declBit(c+178,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+179,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+183,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+181,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+202,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+203,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+178,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+179,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+183,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+181,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+205,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+178,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+180,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+185,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declBus(c+187,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+188,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+189,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+135,"ysyx_22050612_npc idu opcode", false,-1, 9,0);
        tracep->declBus(c+206,"ysyx_22050612_npc idu i5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+207,"ysyx_22050612_npc idu i5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc idu i5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+135,"ysyx_22050612_npc idu i5 out", false,-1, 9,0);
        tracep->declBus(c+190,"ysyx_22050612_npc idu i5 key", false,-1, 6,0);
        tracep->declBus(c+209,"ysyx_22050612_npc idu i5 lut", false,-1, 16,0);
        tracep->declBus(c+206,"ysyx_22050612_npc idu i5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+207,"ysyx_22050612_npc idu i5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc idu i5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+210,"ysyx_22050612_npc idu i5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+135,"ysyx_22050612_npc idu i5 i0 out", false,-1, 9,0);
        tracep->declBus(c+190,"ysyx_22050612_npc idu i5 i0 key", false,-1, 6,0);
        tracep->declBus(c+211,"ysyx_22050612_npc idu i5 i0 default_out", false,-1, 9,0);
        tracep->declBus(c+209,"ysyx_22050612_npc idu i5 i0 lut", false,-1, 16,0);
        tracep->declBus(c+212,"ysyx_22050612_npc idu i5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu i5 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22050612_npc idu i5 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22050612_npc idu i5 i0 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+136,"ysyx_22050612_npc idu i5 i0 lut_out", false,-1, 9,0);
        tracep->declBit(c+191,"ysyx_22050612_npc idu i5 i0 hit", false,-1);
        tracep->declBus(c+213,"ysyx_22050612_npc idu i5 i0 i", false,-1, 31,0);
        tracep->declBit(c+178,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+185,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declBus(c+187,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+188,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+189,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu opcode", false,-1, 9,0);
        tracep->declQuad(c+181,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+183,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+183,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+192,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+194,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+139,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+7+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+140,"ysyx_22050612_npc exu addend_a", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22050612_npc exu addend_b", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22050612_npc exu sum_add0", false,-1, 63,0);
        tracep->declBus(c+214,"ysyx_22050612_npc exu gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+178,"ysyx_22050612_npc exu gpr_group clk", false,-1);
        tracep->declQuad(c+137,"ysyx_22050612_npc exu gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+187,"ysyx_22050612_npc exu gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+139,"ysyx_22050612_npc exu gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+71+i*2,"ysyx_22050612_npc exu gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+206,"ysyx_22050612_npc exu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+139,"ysyx_22050612_npc exu decode0 out", false,-1, 0,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu decode0 key", false,-1, 9,0);
        tracep->declBus(c+215,"ysyx_22050612_npc exu decode0 lut", false,-1, 10,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+210,"ysyx_22050612_npc exu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+139,"ysyx_22050612_npc exu decode0 i0 out", false,-1, 0,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+216,"ysyx_22050612_npc exu decode0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+215,"ysyx_22050612_npc exu decode0 i0 lut", false,-1, 10,0);
        tracep->declBus(c+217,"ysyx_22050612_npc exu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+4+i*1,"ysyx_22050612_npc exu decode0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22050612_npc exu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+6+i*1,"ysyx_22050612_npc exu decode0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+146,"ysyx_22050612_npc exu decode0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+147,"ysyx_22050612_npc exu decode0 i0 hit", false,-1);
        tracep->declBus(c+213,"ysyx_22050612_npc exu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+137,"ysyx_22050612_npc exu decode1 out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu decode1 key", false,-1, 9,0);
        tracep->declArray(c+148,"ysyx_22050612_npc exu decode1 lut", false,-1, 73,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+210,"ysyx_22050612_npc exu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+137,"ysyx_22050612_npc exu decode1 i0 out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu decode1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+218,"ysyx_22050612_npc exu decode1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+148,"ysyx_22050612_npc exu decode1 i0 lut", false,-1, 73,0);
        tracep->declBus(c+220,"ysyx_22050612_npc exu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+151+i*3,"ysyx_22050612_npc exu decode1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+154+i*1,"ysyx_22050612_npc exu decode1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+155+i*2,"ysyx_22050612_npc exu decode1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+157,"ysyx_22050612_npc exu decode1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+159,"ysyx_22050612_npc exu decode1 i0 hit", false,-1);
        tracep->declBus(c+213,"ysyx_22050612_npc exu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu addend0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu addend0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu addend0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+140,"ysyx_22050612_npc exu addend0 out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu addend0 key", false,-1, 9,0);
        tracep->declArray(c+196,"ysyx_22050612_npc exu addend0 lut", false,-1, 73,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu addend0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu addend0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu addend0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+210,"ysyx_22050612_npc exu addend0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+140,"ysyx_22050612_npc exu addend0 i0 out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu addend0 i0 key", false,-1, 9,0);
        tracep->declQuad(c+218,"ysyx_22050612_npc exu addend0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+196,"ysyx_22050612_npc exu addend0 i0 lut", false,-1, 73,0);
        tracep->declBus(c+220,"ysyx_22050612_npc exu addend0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+160+i*3,"ysyx_22050612_npc exu addend0 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+163+i*1,"ysyx_22050612_npc exu addend0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+164+i*2,"ysyx_22050612_npc exu addend0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+166,"ysyx_22050612_npc exu addend0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+168,"ysyx_22050612_npc exu addend0 i0 hit", false,-1);
        tracep->declBus(c+213,"ysyx_22050612_npc exu addend0 i0 i", false,-1, 31,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu addend1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu addend1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu addend1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+142,"ysyx_22050612_npc exu addend1 out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu addend1 key", false,-1, 9,0);
        tracep->declArray(c+199,"ysyx_22050612_npc exu addend1 lut", false,-1, 73,0);
        tracep->declBus(c+206,"ysyx_22050612_npc exu addend1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc exu addend1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu addend1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+210,"ysyx_22050612_npc exu addend1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+142,"ysyx_22050612_npc exu addend1 i0 out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22050612_npc exu addend1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+218,"ysyx_22050612_npc exu addend1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+199,"ysyx_22050612_npc exu addend1 i0 lut", false,-1, 73,0);
        tracep->declBus(c+220,"ysyx_22050612_npc exu addend1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+169+i*3,"ysyx_22050612_npc exu addend1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+172+i*1,"ysyx_22050612_npc exu addend1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+173+i*2,"ysyx_22050612_npc exu addend1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+175,"ysyx_22050612_npc exu addend1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+177,"ysyx_22050612_npc exu addend1 i0 hit", false,-1);
        tracep->declBus(c+213,"ysyx_22050612_npc exu addend1 i0 i", false,-1, 31,0);
        tracep->declBus(c+202,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+140,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[0]),17);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0]),7);
        tracep->fullSData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0]),10);
        tracep->fullSData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullBit(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[0]));
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[31]),64);
        tracep->fullSData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__opcode),10);
        tracep->fullSData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out),10);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a),64);
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b),64);
        tracep->fullQData(oldp+144,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a 
                                     + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b)),64);
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+147,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list
                                   [0U])));
        __Vtemp19[0U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a 
                                 + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b));
        __Vtemp19[1U] = (IData)(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a 
                                  + vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b) 
                                 >> 0x20U));
        __Vtemp19[2U] = 0x13U;
        tracep->fullWData(oldp+148,(__Vtemp19),74);
        tracep->fullWData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullSData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+159,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullWData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullSData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+168,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullWData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullSData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+177,(((IData)(vlSelf->ysyx_22050612_npc__DOT__opcode) 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullBit(oldp+178,(vlSelf->clk));
        tracep->fullBit(oldp+179,(vlSelf->rst));
        tracep->fullIData(oldp+180,(vlSelf->inst),32);
        tracep->fullQData(oldp+181,(vlSelf->pc),64);
        tracep->fullQData(oldp+183,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+185,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullCData(oldp+187,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+188,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+189,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+190,((0x7fU & vlSelf->inst)),7);
        tracep->fullBit(oldp+191,(((0x7fU & vlSelf->inst) 
                                   == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        __Vtemp20[0U] = (IData)(((vlSelf->inst >> 0x1fU)
                                  ? (0xfffffffffffff000ULL 
                                     | (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U))))
                                  : (QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x14U)))));
        __Vtemp20[1U] = (IData)((((vlSelf->inst >> 0x1fU)
                                   ? (0xfffffffffffff000ULL 
                                      | (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))
                                   : (QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x14U)))) 
                                 >> 0x20U));
        __Vtemp20[2U] = 0x13U;
        tracep->fullWData(oldp+196,(__Vtemp20),74);
        __Vtemp21[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                [(0x1fU & (vlSelf->inst 
                                           >> 0xfU))]);
        __Vtemp21[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                 [(0x1fU & (vlSelf->inst 
                                            >> 0xfU))] 
                                 >> 0x20U));
        __Vtemp21[2U] = 0x13U;
        tracep->fullWData(oldp+199,(__Vtemp21),74);
        tracep->fullIData(oldp+202,(0x40U),32);
        tracep->fullQData(oldp+203,(0x80000000ULL),64);
        tracep->fullBit(oldp+205,(1U));
        tracep->fullIData(oldp+206,(1U),32);
        tracep->fullIData(oldp+207,(7U),32);
        tracep->fullIData(oldp+208,(0xaU),32);
        tracep->fullIData(oldp+209,(0x4c13U),17);
        tracep->fullIData(oldp+210,(0U),32);
        tracep->fullSData(oldp+211,(0U),10);
        tracep->fullIData(oldp+212,(0x11U),32);
        tracep->fullIData(oldp+213,(1U),32);
        tracep->fullIData(oldp+214,(5U),32);
        tracep->fullSData(oldp+215,(0x27U),11);
        tracep->fullBit(oldp+216,(0U));
        tracep->fullIData(oldp+217,(0xbU),32);
        tracep->fullQData(oldp+218,(0ULL),64);
        tracep->fullIData(oldp+220,(0x4aU),32);
    }
}
