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
        tracep->declBit(c+231,"clk", false,-1);
        tracep->declBit(c+232,"rst", false,-1);
        tracep->declBus(c+233,"inst", false,-1, 31,0);
        tracep->declQuad(c+234,"pc", false,-1, 63,0);
        tracep->declBit(c+231,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+232,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+233,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+234,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+236,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declBus(c+240,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+241,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+242,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22050612_npc opcode", false,-1, 9,0);
        tracep->declBit(c+231,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+232,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+236,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+234,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+248,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+249,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+231,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+232,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+236,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+234,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+251,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+231,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+233,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+238,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declBus(c+240,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+241,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+242,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22050612_npc idu opcode", false,-1, 9,0);
        tracep->declBus(c+252,"ysyx_22050612_npc idu i5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+253,"ysyx_22050612_npc idu i5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc idu i5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+21,"ysyx_22050612_npc idu i5 out", false,-1, 9,0);
        tracep->declBus(c+243,"ysyx_22050612_npc idu i5 key", false,-1, 6,0);
        tracep->declQuad(c+255,"ysyx_22050612_npc idu i5 lut", false,-1, 50,0);
        tracep->declBus(c+252,"ysyx_22050612_npc idu i5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+253,"ysyx_22050612_npc idu i5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc idu i5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+257,"ysyx_22050612_npc idu i5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+21,"ysyx_22050612_npc idu i5 i0 out", false,-1, 9,0);
        tracep->declBus(c+243,"ysyx_22050612_npc idu i5 i0 key", false,-1, 6,0);
        tracep->declBus(c+258,"ysyx_22050612_npc idu i5 i0 default_out", false,-1, 9,0);
        tracep->declQuad(c+255,"ysyx_22050612_npc idu i5 i0 lut", false,-1, 50,0);
        tracep->declBus(c+259,"ysyx_22050612_npc idu i5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu i5 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"ysyx_22050612_npc idu i5 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"ysyx_22050612_npc idu i5 i0 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+22,"ysyx_22050612_npc idu i5 i0 lut_out", false,-1, 9,0);
        tracep->declBit(c+23,"ysyx_22050612_npc idu i5 i0 hit", false,-1);
        tracep->declBus(c+260,"ysyx_22050612_npc idu i5 i0 i", false,-1, 31,0);
        tracep->declBit(c+231,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+238,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declBus(c+240,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+241,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+242,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu opcode", false,-1, 9,0);
        tracep->declQuad(c+234,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+236,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+236,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+244,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+246,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+26,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+103+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+27,"ysyx_22050612_npc exu addend_a", false,-1, 63,0);
        tracep->declQuad(c+29,"ysyx_22050612_npc exu addend_b", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22050612_npc exu sum_add0", false,-1, 63,0);
        tracep->declBus(c+261,"ysyx_22050612_npc exu gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+231,"ysyx_22050612_npc exu gpr_group clk", false,-1);
        tracep->declQuad(c+24,"ysyx_22050612_npc exu gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+240,"ysyx_22050612_npc exu gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+26,"ysyx_22050612_npc exu gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+167+i*2,"ysyx_22050612_npc exu gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+252,"ysyx_22050612_npc exu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+262,"ysyx_22050612_npc exu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+26,"ysyx_22050612_npc exu decode0 out", false,-1, 0,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu decode0 key", false,-1, 9,0);
        tracep->declQuad(c+263,"ysyx_22050612_npc exu decode0 lut", false,-1, 32,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+262,"ysyx_22050612_npc exu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+257,"ysyx_22050612_npc exu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+26,"ysyx_22050612_npc exu decode0 i0 out", false,-1, 0,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+265,"ysyx_22050612_npc exu decode0 i0 default_out", false,-1, 0,0);
        tracep->declQuad(c+263,"ysyx_22050612_npc exu decode0 i0 lut", false,-1, 32,0);
        tracep->declBus(c+266,"ysyx_22050612_npc exu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"ysyx_22050612_npc exu decode0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+13+i*1,"ysyx_22050612_npc exu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+16+i*1,"ysyx_22050612_npc exu decode0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+33,"ysyx_22050612_npc exu decode0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+34,"ysyx_22050612_npc exu decode0 i0 hit", false,-1);
        tracep->declBus(c+260,"ysyx_22050612_npc exu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22050612_npc exu decode1 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu decode1 key", false,-1, 9,0);
        tracep->declArray(c+35,"ysyx_22050612_npc exu decode1 lut", false,-1, 221,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+257,"ysyx_22050612_npc exu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22050612_npc exu decode1 i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu decode1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+267,"ysyx_22050612_npc exu decode1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+35,"ysyx_22050612_npc exu decode1 i0 lut", false,-1, 221,0);
        tracep->declBus(c+269,"ysyx_22050612_npc exu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+42+i*3,"ysyx_22050612_npc exu decode1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+51+i*1,"ysyx_22050612_npc exu decode1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+54+i*2,"ysyx_22050612_npc exu decode1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+60,"ysyx_22050612_npc exu decode1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+62,"ysyx_22050612_npc exu decode1 i0 hit", false,-1);
        tracep->declBus(c+260,"ysyx_22050612_npc exu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+270,"ysyx_22050612_npc exu addend0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu addend0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu addend0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+27,"ysyx_22050612_npc exu addend0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu addend0 key", false,-1, 9,0);
        tracep->declArray(c+63,"ysyx_22050612_npc exu addend0 lut", false,-1, 147,0);
        tracep->declBus(c+270,"ysyx_22050612_npc exu addend0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu addend0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu addend0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+257,"ysyx_22050612_npc exu addend0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+27,"ysyx_22050612_npc exu addend0 i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu addend0 i0 key", false,-1, 9,0);
        tracep->declQuad(c+267,"ysyx_22050612_npc exu addend0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+63,"ysyx_22050612_npc exu addend0 i0 lut", false,-1, 147,0);
        tracep->declBus(c+269,"ysyx_22050612_npc exu addend0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+68+i*3,"ysyx_22050612_npc exu addend0 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+74+i*1,"ysyx_22050612_npc exu addend0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+76+i*2,"ysyx_22050612_npc exu addend0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+80,"ysyx_22050612_npc exu addend0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+82,"ysyx_22050612_npc exu addend0 i0 hit", false,-1);
        tracep->declBus(c+271,"ysyx_22050612_npc exu addend0 i0 i", false,-1, 31,0);
        tracep->declBus(c+270,"ysyx_22050612_npc exu addend1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu addend1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu addend1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+29,"ysyx_22050612_npc exu addend1 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu addend1 key", false,-1, 9,0);
        tracep->declArray(c+83,"ysyx_22050612_npc exu addend1 lut", false,-1, 147,0);
        tracep->declBus(c+270,"ysyx_22050612_npc exu addend1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+254,"ysyx_22050612_npc exu addend1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu addend1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+257,"ysyx_22050612_npc exu addend1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+29,"ysyx_22050612_npc exu addend1 i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22050612_npc exu addend1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+267,"ysyx_22050612_npc exu addend1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+83,"ysyx_22050612_npc exu addend1 i0 lut", false,-1, 147,0);
        tracep->declBus(c+269,"ysyx_22050612_npc exu addend1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+88+i*3,"ysyx_22050612_npc exu addend1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+94+i*1,"ysyx_22050612_npc exu addend1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+96+i*2,"ysyx_22050612_npc exu addend1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+100,"ysyx_22050612_npc exu addend1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+102,"ysyx_22050612_npc exu addend1 i0 hit", false,-1);
        tracep->declBus(c+271,"ysyx_22050612_npc exu addend1 i0 i", false,-1, 31,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+27,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+29,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[2]),17);
        tracep->fullCData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[2]),7);
        tracep->fullSData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0]),10);
        tracep->fullSData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[1]),10);
        tracep->fullSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[2]),10);
        tracep->fullSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullBit(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[2]));
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__opcode),10);
        tracep->fullSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out),10);
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0),64);
        tracep->fullBit(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__decode1____pinNumber3),222);
        tracep->fullWData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullSData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[2]),10);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend0____pinNumber3),148);
        tracep->fullWData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullSData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend1____pinNumber3),148);
        tracep->fullWData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullSData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[1]),10);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+231,(vlSelf->clk));
        tracep->fullBit(oldp+232,(vlSelf->rst));
        tracep->fullIData(oldp+233,(vlSelf->inst),32);
        tracep->fullQData(oldp+234,(vlSelf->pc),64);
        tracep->fullQData(oldp+236,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+238,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullCData(oldp+240,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+241,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+242,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+243,((0x7fU & vlSelf->inst)),7);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullIData(oldp+248,(0x40U),32);
        tracep->fullQData(oldp+249,(0x80000000ULL),64);
        tracep->fullBit(oldp+251,(1U));
        tracep->fullIData(oldp+252,(3U),32);
        tracep->fullIData(oldp+253,(7U),32);
        tracep->fullIData(oldp+254,(0xaU),32);
        tracep->fullQData(oldp+255,(0x37004b8044c13ULL),51);
        tracep->fullIData(oldp+257,(0U),32);
        tracep->fullSData(oldp+258,(0U),10);
        tracep->fullIData(oldp+259,(0x11U),32);
        tracep->fullIData(oldp+260,(3U),32);
        tracep->fullIData(oldp+261,(5U),32);
        tracep->fullIData(oldp+262,(1U),32);
        tracep->fullQData(oldp+263,(0xc02827ULL),33);
        tracep->fullBit(oldp+265,(0U));
        tracep->fullIData(oldp+266,(0xbU),32);
        tracep->fullQData(oldp+267,(0ULL),64);
        tracep->fullIData(oldp+269,(0x4aU),32);
        tracep->fullIData(oldp+270,(2U),32);
        tracep->fullIData(oldp+271,(2U),32);
    }
}
