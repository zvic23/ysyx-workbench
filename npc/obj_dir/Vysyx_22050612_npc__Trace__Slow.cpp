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
        tracep->declBit(c+704,"clk", false,-1);
        tracep->declBit(c+705,"rst", false,-1);
        tracep->declQuad(c+706,"pc", false,-1, 63,0);
        tracep->declBit(c+704,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+705,"ysyx_22050612_npc rst", false,-1);
        tracep->declQuad(c+706,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declBus(c+118,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+119,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+121,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22050612_npc imm_B", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22050612_npc imm_S", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+132,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+133,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+134,"ysyx_22050612_npc opcode", false,-1, 19,0);
        tracep->declBit(c+704,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+705,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+119,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+706,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+118,"ysyx_22050612_npc ifu inst", false,-1, 31,0);
        tracep->declQuad(c+135,"ysyx_22050612_npc ifu inst_mix", false,-1, 63,0);
        tracep->declBus(c+710,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+711,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+704,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+705,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+119,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+706,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+713,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+704,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+118,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+121,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22050612_npc idu imm_B", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22050612_npc idu imm_S", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+132,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+133,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+134,"ysyx_22050612_npc idu opcode", false,-1, 19,0);
        tracep->declBus(c+714,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+716,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+137,"ysyx_22050612_npc idu decode0 out", false,-1, 6,0);
        tracep->declBus(c+138,"ysyx_22050612_npc idu decode0 key", false,-1, 9,0);
        tracep->declArray(c+717,"ysyx_22050612_npc idu decode0 lut", false,-1, 135,0);
        tracep->declBus(c+714,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+716,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+137,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 6,0);
        tracep->declBus(c+138,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+723,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+717,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 135,0);
        tracep->declBus(c+724,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+9+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+17+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+139,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+140,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+725,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+726,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+716,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+727,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+141,"ysyx_22050612_npc idu decode1 out", false,-1, 1,0);
        tracep->declBus(c+142,"ysyx_22050612_npc idu decode1 key", false,-1, 6,0);
        tracep->declBus(c+728,"ysyx_22050612_npc idu decode1 lut", false,-1, 26,0);
        tracep->declBus(c+726,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+716,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+727,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+141,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 1,0);
        tracep->declBus(c+142,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 6,0);
        tracep->declBus(c+729,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+728,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 26,0);
        tracep->declBus(c+730,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+25+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+28+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+31+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+143,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+144,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+731,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+727,"ysyx_22050612_npc idu decode2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+724,"ysyx_22050612_npc idu decode2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc idu decode2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+145,"ysyx_22050612_npc idu decode2 out", false,-1, 7,0);
        tracep->declBus(c+146,"ysyx_22050612_npc idu decode2 key", false,-1, 16,0);
        tracep->declQuad(c+732,"ysyx_22050612_npc idu decode2 lut", false,-1, 49,0);
        tracep->declBus(c+727,"ysyx_22050612_npc idu decode2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+724,"ysyx_22050612_npc idu decode2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc idu decode2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc idu decode2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+145,"ysyx_22050612_npc idu decode2 i0 out", false,-1, 7,0);
        tracep->declBus(c+146,"ysyx_22050612_npc idu decode2 i0 key", false,-1, 16,0);
        tracep->declBus(c+734,"ysyx_22050612_npc idu decode2 i0 default_out", false,-1, 7,0);
        tracep->declQuad(c+732,"ysyx_22050612_npc idu decode2 i0 lut", false,-1, 49,0);
        tracep->declBus(c+735,"ysyx_22050612_npc idu decode2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+34+i*1,"ysyx_22050612_npc idu decode2 i0 pair_list", true,(i+0), 24,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+36+i*1,"ysyx_22050612_npc idu decode2 i0 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+38+i*1,"ysyx_22050612_npc idu decode2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+147,"ysyx_22050612_npc idu decode2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+148,"ysyx_22050612_npc idu decode2 i0 hit", false,-1);
        tracep->declBus(c+736,"ysyx_22050612_npc idu decode2 i0 i", false,-1, 31,0);
        tracep->declBit(c+704,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+121,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22050612_npc exu imm_B", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22050612_npc exu imm_S", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+132,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+133,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu opcode", false,-1, 19,0);
        tracep->declQuad(c+706,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+149,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+151,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+153,"ysyx_22050612_npc exu wdata_reg", false,-1, 63,0);
        tracep->declBit(c+155,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declBit(c+156,"ysyx_22050612_npc exu wen_fix", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+157+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+708,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declBus(c+221,"ysyx_22050612_npc exu mode", false,-1, 7,0);
        tracep->declQuad(c+222,"ysyx_22050612_npc exu operator_a", false,-1, 63,0);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu operator_b", false,-1, 63,0);
        tracep->declQuad(c+226,"ysyx_22050612_npc exu result_alu0", false,-1, 63,0);
        tracep->declQuad(c+228,"ysyx_22050612_npc exu raddr", false,-1, 63,0);
        tracep->declQuad(c+230,"ysyx_22050612_npc exu rdata", false,-1, 63,0);
        tracep->declQuad(c+232,"ysyx_22050612_npc exu waddr", false,-1, 63,0);
        tracep->declQuad(c+737,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBus(c+234,"ysyx_22050612_npc exu wmask", false,-1, 7,0);
        tracep->declBus(c+739,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+704,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+153,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+156,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+235+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+740,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+155,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 19,0);
        tracep->declArray(c+743,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 230,0);
        tracep->declBus(c+740,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+155,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 19,0);
        tracep->declBus(c+751,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+743,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 230,0);
        tracep->declBus(c+752,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+40+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 pair_list", true,(i+0), 20,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+51+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+62+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+299,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+300,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+753,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+740,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+153,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 19,0);
        tracep->declArray(c+301,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 923,0);
        tracep->declBus(c+740,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+153,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 19,0);
        tracep->declQuad(c+754,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+301,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 923,0);
        tracep->declBus(c+756,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declArray(c+330+i*3,"ysyx_22050612_npc exu gpr_write_data i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+363+i*1,"ysyx_22050612_npc exu gpr_write_data i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declQuad(c+374+i*2,"ysyx_22050612_npc exu gpr_write_data i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+396,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+398,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+753,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+726,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+119,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu cpu_pc key", false,-1, 19,0);
        tracep->declQuad(c+708,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+399,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 251,0);
        tracep->declBus(c+726,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+119,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 19,0);
        tracep->declQuad(c+708,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+399,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 251,0);
        tracep->declBus(c+756,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+407+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+416+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+419+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+425,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+427,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+731,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+757,"ysyx_22050612_npc exu operator0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu operator0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu operator0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+222,"ysyx_22050612_npc exu operator0 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu operator0 key", false,-1, 19,0);
        tracep->declArray(c+428,"ysyx_22050612_npc exu operator0 lut", false,-1, 1007,0);
        tracep->declBus(c+757,"ysyx_22050612_npc exu operator0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu operator0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu operator0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu operator0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+222,"ysyx_22050612_npc exu operator0 i0 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu operator0 i0 key", false,-1, 19,0);
        tracep->declQuad(c+754,"ysyx_22050612_npc exu operator0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+428,"ysyx_22050612_npc exu operator0 i0 lut", false,-1, 1007,0);
        tracep->declBus(c+756,"ysyx_22050612_npc exu operator0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declArray(c+460+i*3,"ysyx_22050612_npc exu operator0 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+496+i*1,"ysyx_22050612_npc exu operator0 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declQuad(c+508+i*2,"ysyx_22050612_npc exu operator0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+532,"ysyx_22050612_npc exu operator0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+534,"ysyx_22050612_npc exu operator0 i0 hit", false,-1);
        tracep->declBus(c+758,"ysyx_22050612_npc exu operator0 i0 i", false,-1, 31,0);
        tracep->declBus(c+757,"ysyx_22050612_npc exu operator1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu operator1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu operator1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu operator1 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu operator1 key", false,-1, 19,0);
        tracep->declArray(c+535,"ysyx_22050612_npc exu operator1 lut", false,-1, 1007,0);
        tracep->declBus(c+757,"ysyx_22050612_npc exu operator1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu operator1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu operator1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu operator1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu operator1 i0 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu operator1 i0 key", false,-1, 19,0);
        tracep->declQuad(c+754,"ysyx_22050612_npc exu operator1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+535,"ysyx_22050612_npc exu operator1 i0 lut", false,-1, 1007,0);
        tracep->declBus(c+756,"ysyx_22050612_npc exu operator1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declArray(c+567+i*3,"ysyx_22050612_npc exu operator1 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+603+i*1,"ysyx_22050612_npc exu operator1 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declQuad(c+615+i*2,"ysyx_22050612_npc exu operator1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+639,"ysyx_22050612_npc exu operator1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+641,"ysyx_22050612_npc exu operator1 i0 hit", false,-1);
        tracep->declBus(c+758,"ysyx_22050612_npc exu operator1 i0 i", false,-1, 31,0);
        tracep->declBus(c+757,"ysyx_22050612_npc exu alumode NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu alumode KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc exu alumode DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+221,"ysyx_22050612_npc exu alumode out", false,-1, 7,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu alumode key", false,-1, 19,0);
        tracep->declArray(c+759,"ysyx_22050612_npc exu alumode lut", false,-1, 335,0);
        tracep->declBus(c+757,"ysyx_22050612_npc exu alumode i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu alumode i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc exu alumode i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu alumode i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+221,"ysyx_22050612_npc exu alumode i0 out", false,-1, 7,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu alumode i0 key", false,-1, 19,0);
        tracep->declBus(c+734,"ysyx_22050612_npc exu alumode i0 default_out", false,-1, 7,0);
        tracep->declArray(c+759,"ysyx_22050612_npc exu alumode i0 lut", false,-1, 335,0);
        tracep->declBus(c+770,"ysyx_22050612_npc exu alumode i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+73+i*1,"ysyx_22050612_npc exu alumode i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+85+i*1,"ysyx_22050612_npc exu alumode i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+97+i*1,"ysyx_22050612_npc exu alumode i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+642,"ysyx_22050612_npc exu alumode i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+643,"ysyx_22050612_npc exu alumode i0 hit", false,-1);
        tracep->declBus(c+758,"ysyx_22050612_npc exu alumode i0 i", false,-1, 31,0);
        tracep->declBus(c+221,"ysyx_22050612_npc exu alu0 mode", false,-1, 7,0);
        tracep->declQuad(c+222,"ysyx_22050612_npc exu alu0 A", false,-1, 63,0);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu alu0 B", false,-1, 63,0);
        tracep->declQuad(c+226,"ysyx_22050612_npc exu alu0 Z", false,-1, 63,0);
        tracep->declQuad(c+644,"ysyx_22050612_npc exu alu0 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+646,"ysyx_22050612_npc exu alu0 slt_result", false,-1, 63,0);
        tracep->declQuad(c+648,"ysyx_22050612_npc exu alu0 C", false,-1, 63,0);
        tracep->declBus(c+726,"ysyx_22050612_npc exu alu0 alu_result_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc exu alu0 alu_result_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu alu0 alu_result_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+226,"ysyx_22050612_npc exu alu0 alu_result_select out", false,-1, 63,0);
        tracep->declBus(c+221,"ysyx_22050612_npc exu alu0 alu_result_select key", false,-1, 7,0);
        tracep->declArray(c+650,"ysyx_22050612_npc exu alu0 alu_result_select lut", false,-1, 215,0);
        tracep->declBus(c+726,"ysyx_22050612_npc exu alu0 alu_result_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc exu alu0 alu_result_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu alu0 alu_result_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu alu0 alu_result_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+226,"ysyx_22050612_npc exu alu0 alu_result_select i0 out", false,-1, 63,0);
        tracep->declBus(c+221,"ysyx_22050612_npc exu alu0 alu_result_select i0 key", false,-1, 7,0);
        tracep->declQuad(c+754,"ysyx_22050612_npc exu alu0 alu_result_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+650,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut", false,-1, 215,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu alu0 alu_result_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+657+i*3,"ysyx_22050612_npc exu alu0 alu_result_select i0 pair_list", true,(i+0), 71,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+666+i*1,"ysyx_22050612_npc exu alu0 alu_result_select i0 key_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+669+i*2,"ysyx_22050612_npc exu alu0 alu_result_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+675,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+677,"ysyx_22050612_npc exu alu0 alu_result_select i0 hit", false,-1);
        tracep->declBus(c+731,"ysyx_22050612_npc exu alu0 alu_result_select i0 i", false,-1, 31,0);
        tracep->declBus(c+727,"ysyx_22050612_npc exu raddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu raddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu raddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+228,"ysyx_22050612_npc exu raddr_select out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu raddr_select key", false,-1, 19,0);
        tracep->declArray(c+678,"ysyx_22050612_npc exu raddr_select lut", false,-1, 167,0);
        tracep->declBus(c+727,"ysyx_22050612_npc exu raddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu raddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu raddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu raddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+228,"ysyx_22050612_npc exu raddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu raddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+754,"ysyx_22050612_npc exu raddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+678,"ysyx_22050612_npc exu raddr_select i0 lut", false,-1, 167,0);
        tracep->declBus(c+756,"ysyx_22050612_npc exu raddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+684+i*3,"ysyx_22050612_npc exu raddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+690+i*1,"ysyx_22050612_npc exu raddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+692+i*2,"ysyx_22050612_npc exu raddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+696,"ysyx_22050612_npc exu raddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+698,"ysyx_22050612_npc exu raddr_select i0 hit", false,-1);
        tracep->declBus(c+736,"ysyx_22050612_npc exu raddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+742,"ysyx_22050612_npc exu waddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu waddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu waddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+232,"ysyx_22050612_npc exu waddr_select out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu waddr_select key", false,-1, 19,0);
        tracep->declArray(c+772,"ysyx_22050612_npc exu waddr_select lut", false,-1, 83,0);
        tracep->declBus(c+742,"ysyx_22050612_npc exu waddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu waddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"ysyx_22050612_npc exu waddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu waddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+232,"ysyx_22050612_npc exu waddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu waddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+754,"ysyx_22050612_npc exu waddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+772,"ysyx_22050612_npc exu waddr_select i0 lut", false,-1, 83,0);
        tracep->declBus(c+756,"ysyx_22050612_npc exu waddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+109+i*3,"ysyx_22050612_npc exu waddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+112+i*1,"ysyx_22050612_npc exu waddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+113+i*2,"ysyx_22050612_npc exu waddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+699,"ysyx_22050612_npc exu waddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+701,"ysyx_22050612_npc exu waddr_select i0 hit", false,-1);
        tracep->declBus(c+775,"ysyx_22050612_npc exu waddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+742,"ysyx_22050612_npc exu wmask_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu wmask_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc exu wmask_select DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+234,"ysyx_22050612_npc exu wmask_select out", false,-1, 7,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu wmask_select key", false,-1, 19,0);
        tracep->declBus(c+776,"ysyx_22050612_npc exu wmask_select lut", false,-1, 27,0);
        tracep->declBus(c+742,"ysyx_22050612_npc exu wmask_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"ysyx_22050612_npc exu wmask_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+714,"ysyx_22050612_npc exu wmask_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+722,"ysyx_22050612_npc exu wmask_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+234,"ysyx_22050612_npc exu wmask_select i0 out", false,-1, 7,0);
        tracep->declBus(c+134,"ysyx_22050612_npc exu wmask_select i0 key", false,-1, 19,0);
        tracep->declBus(c+734,"ysyx_22050612_npc exu wmask_select i0 default_out", false,-1, 7,0);
        tracep->declBus(c+776,"ysyx_22050612_npc exu wmask_select i0 lut", false,-1, 27,0);
        tracep->declBus(c+770,"ysyx_22050612_npc exu wmask_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+115+i*1,"ysyx_22050612_npc exu wmask_select i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+116+i*1,"ysyx_22050612_npc exu wmask_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+117+i*1,"ysyx_22050612_npc exu wmask_select i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+702,"ysyx_22050612_npc exu wmask_select i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+703,"ysyx_22050612_npc exu wmask_select i0 hit", false,-1);
        tracep->declBus(c+775,"ysyx_22050612_npc exu wmask_select i0 i", false,-1, 31,0);
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

extern const VlWide<8>/*255:0*/ Vysyx_22050612_npc__ConstPool__CONST_1cfd1a35_0;
extern const VlWide<11>/*351:0*/ Vysyx_22050612_npc__ConstPool__CONST_5bcd46c2_0;

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp868;
    VlWide<3>/*95:0*/ __Vtemp869;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[3]),17);
        tracep->fullIData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[4]),17);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[5]),17);
        tracep->fullIData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[6]),17);
        tracep->fullIData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[7]),17);
        tracep->fullSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
        tracep->fullSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
        tracep->fullSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullSData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
        tracep->fullSData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
        tracep->fullIData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
        tracep->fullIData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
        tracep->fullIData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
        tracep->fullIData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
        tracep->fullIData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),21);
        tracep->fullIData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),21);
        tracep->fullIData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),21);
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),21);
        tracep->fullIData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),21);
        tracep->fullIData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5]),21);
        tracep->fullIData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6]),21);
        tracep->fullIData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7]),21);
        tracep->fullIData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8]),21);
        tracep->fullIData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9]),21);
        tracep->fullIData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[10]),21);
        tracep->fullIData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[10]),20);
        tracep->fullBit(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[10]));
        tracep->fullIData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4]),28);
        tracep->fullIData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5]),28);
        tracep->fullIData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6]),28);
        tracep->fullIData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7]),28);
        tracep->fullIData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8]),28);
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9]),28);
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[10]),28);
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[11]),28);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[11]),20);
        tracep->fullCData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[11]),8);
        tracep->fullWData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullIData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullIData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullCData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        tracep->fullIData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullQData(oldp+125,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                      >> 0x1fU) ? (0xffffffffffe00000ULL 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                                >> 0x14U))))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x1fU))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 0x14U))))))))),64);
        tracep->fullQData(oldp+127,(((0x1000U & vlSelf->ysyx_22050612_npc__DOT__inst)
                                      ? (0xffffffffffffe000ULL 
                                         | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                        >> 7U))))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x1fU))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0x800U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 7U))))))))),64);
        tracep->fullQData(oldp+129,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                            >> 7U))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x19U))) 
                                          << 5U) | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                       >> 7U))))))),64);
        tracep->fullCData(oldp+131,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+132,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+133,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
        tracep->fullCData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
        tracep->fullSData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
        tracep->fullCData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
        tracep->fullCData(oldp+142,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
        tracep->fullCData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
        tracep->fullIData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
        tracep->fullCData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+156,(((0U != (0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 7U))) 
                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullCData(oldp+221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
        tracep->fullCData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+301,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),924);
        tracep->fullWData(oldp+330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+333,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+339,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+345,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+351,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+354,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+357,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+360,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullIData(oldp+363,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+365,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+366,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+368,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+370,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+371,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+372,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+373,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[10]),20);
        tracep->fullQData(oldp+374,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+376,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+382,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+384,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+388,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+390,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+392,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+396,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+398,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+399,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),252);
        tracep->fullWData(oldp+407,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+410,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+413,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+416,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+417,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+418,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+419,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+423,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+427,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+428,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),1008);
        tracep->fullWData(oldp+460,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+463,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+466,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+469,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+472,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+475,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+478,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+481,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+484,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+487,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+490,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+493,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullIData(oldp+496,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+497,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+498,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+499,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+500,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+501,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+502,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+503,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+504,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+505,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+506,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+507,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[11]),20);
        tracep->fullQData(oldp+508,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+510,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+512,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+514,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+518,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+520,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+522,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+524,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+526,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+528,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+530,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+532,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+534,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),1008);
        tracep->fullWData(oldp+567,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+570,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+573,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+576,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+579,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+582,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+585,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+588,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+591,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+594,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+597,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+600,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullIData(oldp+603,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+604,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+605,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+606,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+607,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+608,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+609,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+610,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+611,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+612,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+613,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+614,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[11]),20);
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+617,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+619,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+621,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+623,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+635,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+639,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+641,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+642,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+643,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+644,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
        tracep->fullQData(oldp+646,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+648,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                      ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                      : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullWData(oldp+650,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),216);
        tracep->fullWData(oldp+657,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
        tracep->fullWData(oldp+660,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
        tracep->fullWData(oldp+663,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
        tracep->fullCData(oldp+666,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
        tracep->fullCData(oldp+667,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
        tracep->fullCData(oldp+668,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
        tracep->fullQData(oldp+669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+671,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+673,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+675,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+677,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+678,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),168);
        tracep->fullWData(oldp+684,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+687,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullIData(oldp+690,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+691,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullQData(oldp+692,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+694,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+696,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+698,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+699,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+701,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullCData(oldp+702,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+703,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullBit(oldp+704,(vlSelf->clk));
        tracep->fullBit(oldp+705,(vlSelf->rst));
        tracep->fullQData(oldp+706,(vlSelf->pc),64);
        tracep->fullQData(oldp+708,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+710,(0x40U),32);
        tracep->fullQData(oldp+711,(0x80000000ULL),64);
        tracep->fullBit(oldp+713,(1U));
        tracep->fullIData(oldp+714,(8U),32);
        tracep->fullIData(oldp+715,(0xaU),32);
        tracep->fullIData(oldp+716,(7U),32);
        __Vtemp868[0U] = 0xa3560dafU;
        __Vtemp868[1U] = 0x4cab06a9U;
        __Vtemp868[2U] = 0x31a09936U;
        __Vtemp868[3U] = 0xc21c6190U;
        __Vtemp868[4U] = 0x19U;
        tracep->fullWData(oldp+717,(__Vtemp868),136);
        tracep->fullIData(oldp+722,(0U),32);
        tracep->fullCData(oldp+723,(0U),7);
        tracep->fullIData(oldp+724,(0x11U),32);
        tracep->fullIData(oldp+725,(8U),32);
        tracep->fullIData(oldp+726,(3U),32);
        tracep->fullIData(oldp+727,(2U),32);
        tracep->fullIData(oldp+728,(0x374bdbfU),27);
        tracep->fullCData(oldp+729,(0U),2);
        tracep->fullIData(oldp+730,(9U),32);
        tracep->fullIData(oldp+731,(3U),32);
        tracep->fullQData(oldp+732,(0x100660a003b11ULL),50);
        tracep->fullCData(oldp+734,(0U),8);
        tracep->fullIData(oldp+735,(0x19U),32);
        tracep->fullIData(oldp+736,(2U),32);
        tracep->fullQData(oldp+737,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullIData(oldp+739,(5U),32);
        tracep->fullIData(oldp+740,(0xbU),32);
        tracep->fullIData(oldp+741,(0x14U),32);
        tracep->fullIData(oldp+742,(1U),32);
        tracep->fullWData(oldp+743,(Vysyx_22050612_npc__ConstPool__CONST_1cfd1a35_0),231);
        tracep->fullBit(oldp+751,(0U));
        tracep->fullIData(oldp+752,(0x15U),32);
        tracep->fullIData(oldp+753,(0xbU),32);
        tracep->fullQData(oldp+754,(0ULL),64);
        tracep->fullIData(oldp+756,(0x54U),32);
        tracep->fullIData(oldp+757,(0xcU),32);
        tracep->fullIData(oldp+758,(0xcU),32);
        tracep->fullWData(oldp+759,(Vysyx_22050612_npc__ConstPool__CONST_5bcd46c2_0),336);
        tracep->fullIData(oldp+770,(0x1cU),32);
        tracep->fullIData(oldp+771,(0x48U),32);
        __Vtemp869[0U] = 0xffffffffU;
        __Vtemp869[1U] = 0U;
        __Vtemp869[2U] = 0x2bU;
        tracep->fullWData(oldp+772,(__Vtemp869),84);
        tracep->fullIData(oldp+775,(1U),32);
        tracep->fullIData(oldp+776,(0x2bffU),28);
    }
}
