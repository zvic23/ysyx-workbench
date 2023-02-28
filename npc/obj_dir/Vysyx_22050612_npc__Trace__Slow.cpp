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
        tracep->declBit(c+317,"clk", false,-1);
        tracep->declBit(c+318,"rst", false,-1);
        tracep->declBus(c+319,"inst", false,-1, 31,0);
        tracep->declQuad(c+320,"pc", false,-1, 63,0);
        tracep->declBit(c+317,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+318,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+319,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+320,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+322,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declBus(c+324,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+325,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+326,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22050612_npc opcode", false,-1, 9,0);
        tracep->declBit(c+317,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+318,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+28,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+320,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+332,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+333,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+317,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+318,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+28,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+320,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+335,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+317,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+319,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+30,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+322,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declBus(c+324,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+325,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+326,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22050612_npc idu opcode", false,-1, 9,0);
        tracep->declBus(c+336,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+337,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+34,"ysyx_22050612_npc idu decode0 out", false,-1, 9,0);
        tracep->declBus(c+327,"ysyx_22050612_npc idu decode0 key", false,-1, 6,0);
        tracep->declArray(c+339,"ysyx_22050612_npc idu decode0 lut", false,-1, 67,0);
        tracep->declBus(c+336,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+337,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+342,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+34,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 9,0);
        tracep->declBus(c+327,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 6,0);
        tracep->declBus(c+343,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 9,0);
        tracep->declArray(c+339,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 67,0);
        tracep->declBus(c+344,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+9+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+35,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 9,0);
        tracep->declBit(c+36,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+345,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBit(c+317,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+30,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+322,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declBus(c+324,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+325,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu opcode", false,-1, 9,0);
        tracep->declQuad(c+320,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+328,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+41,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+189+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+330,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22050612_npc exu addend_a", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22050612_npc exu addend_b", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22050612_npc exu sum_add0", false,-1, 63,0);
        tracep->declBus(c+346,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+317,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+39,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+324,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+41,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+253+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+346,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+347,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+41,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 9,0);
        tracep->declQuad(c+348,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 54,0);
        tracep->declBus(c+346,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+347,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+342,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+41,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 9,0);
        tracep->declBus(c+350,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declQuad(c+348,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 54,0);
        tracep->declBus(c+351,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+13+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+18+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+23+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+48,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+49,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+352,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+346,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+39,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 9,0);
        tracep->declArray(c+50,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 369,0);
        tracep->declBus(c+346,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+342,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+39,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 9,0);
        tracep->declQuad(c+353,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+50,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 369,0);
        tracep->declBus(c+355,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+62+i*3,"ysyx_22050612_npc exu gpr_write_data i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+77+i*1,"ysyx_22050612_npc exu gpr_write_data i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+82+i*2,"ysyx_22050612_npc exu gpr_write_data i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+92,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+94,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+352,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+356,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu cpu_pc key", false,-1, 9,0);
        tracep->declQuad(c+330,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+95,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 147,0);
        tracep->declBus(c+356,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+347,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 9,0);
        tracep->declQuad(c+330,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+95,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 147,0);
        tracep->declBus(c+355,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+100+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+106+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+108+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+112,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+114,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+357,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+336,"ysyx_22050612_npc exu addend0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu addend0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu addend0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+42,"ysyx_22050612_npc exu addend0 out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu addend0 key", false,-1, 9,0);
        tracep->declArray(c+115,"ysyx_22050612_npc exu addend0 lut", false,-1, 295,0);
        tracep->declBus(c+336,"ysyx_22050612_npc exu addend0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu addend0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu addend0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+342,"ysyx_22050612_npc exu addend0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+42,"ysyx_22050612_npc exu addend0 i0 out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu addend0 i0 key", false,-1, 9,0);
        tracep->declQuad(c+353,"ysyx_22050612_npc exu addend0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+115,"ysyx_22050612_npc exu addend0 i0 lut", false,-1, 295,0);
        tracep->declBus(c+355,"ysyx_22050612_npc exu addend0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+125+i*3,"ysyx_22050612_npc exu addend0 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+137+i*1,"ysyx_22050612_npc exu addend0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+141+i*2,"ysyx_22050612_npc exu addend0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+149,"ysyx_22050612_npc exu addend0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+151,"ysyx_22050612_npc exu addend0 i0 hit", false,-1);
        tracep->declBus(c+345,"ysyx_22050612_npc exu addend0 i0 i", false,-1, 31,0);
        tracep->declBus(c+336,"ysyx_22050612_npc exu addend1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu addend1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu addend1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22050612_npc exu addend1 out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu addend1 key", false,-1, 9,0);
        tracep->declArray(c+152,"ysyx_22050612_npc exu addend1 lut", false,-1, 295,0);
        tracep->declBus(c+336,"ysyx_22050612_npc exu addend1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+338,"ysyx_22050612_npc exu addend1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu addend1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+342,"ysyx_22050612_npc exu addend1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22050612_npc exu addend1 i0 out", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu addend1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+353,"ysyx_22050612_npc exu addend1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+152,"ysyx_22050612_npc exu addend1 i0 lut", false,-1, 295,0);
        tracep->declBus(c+355,"ysyx_22050612_npc exu addend1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+162+i*3,"ysyx_22050612_npc exu addend1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+174+i*1,"ysyx_22050612_npc exu addend1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+178+i*2,"ysyx_22050612_npc exu addend1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+186,"ysyx_22050612_npc exu addend1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_22050612_npc exu addend1 i0 hit", false,-1);
        tracep->declBus(c+345,"ysyx_22050612_npc exu addend1 i0 i", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+42,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp275;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[3]),17);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),7);
        tracep->fullSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),10);
        tracep->fullSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),10);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),10);
        tracep->fullSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),10);
        tracep->fullSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),10);
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullSData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__opcode),10);
        tracep->fullSData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),10);
        tracep->fullBit(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0),64);
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),370);
        tracep->fullWData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullWData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),74);
        tracep->fullWData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),74);
        tracep->fullSData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),10);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),148);
        tracep->fullWData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullSData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),10);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend0____pinNumber3),296);
        tracep->fullWData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullWData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[3]),74);
        tracep->fullSData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend1____pinNumber3),296);
        tracep->fullWData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullWData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[3]),74);
        tracep->fullSData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[3]),10);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+301,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+317,(vlSelf->clk));
        tracep->fullBit(oldp+318,(vlSelf->rst));
        tracep->fullIData(oldp+319,(vlSelf->inst),32);
        tracep->fullQData(oldp+320,(vlSelf->pc),64);
        tracep->fullQData(oldp+322,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xffffffffffe00000ULL 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->inst 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->inst 
                                                                                >> 0x14U))))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U))))))))),64);
        tracep->fullCData(oldp+324,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+325,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+326,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+327,((0x7fU & vlSelf->inst)),7);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+330,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+332,(0x40U),32);
        tracep->fullQData(oldp+333,(0x80000000ULL),64);
        tracep->fullBit(oldp+335,(1U));
        tracep->fullIData(oldp+336,(4U),32);
        tracep->fullIData(oldp+337,(7U),32);
        tracep->fullIData(oldp+338,(0xaU),32);
        __Vtemp275[0U] = 0x78064c13U;
        __Vtemp275[1U] = 0xe009700bU;
        __Vtemp275[2U] = 6U;
        tracep->fullWData(oldp+339,(__Vtemp275),68);
        tracep->fullIData(oldp+342,(0U),32);
        tracep->fullSData(oldp+343,(0U),10);
        tracep->fullIData(oldp+344,(0x11U),32);
        tracep->fullIData(oldp+345,(4U),32);
        tracep->fullIData(oldp+346,(5U),32);
        tracep->fullIData(oldp+347,(1U),32);
        tracep->fullQData(oldp+348,(0x300a01c04827ULL),55);
        tracep->fullBit(oldp+350,(0U));
        tracep->fullIData(oldp+351,(0xbU),32);
        tracep->fullIData(oldp+352,(5U),32);
        tracep->fullQData(oldp+353,(0ULL),64);
        tracep->fullIData(oldp+355,(0x4aU),32);
        tracep->fullIData(oldp+356,(2U),32);
        tracep->fullIData(oldp+357,(2U),32);
    }
}
