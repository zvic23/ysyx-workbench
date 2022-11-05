// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbcd7seg__Syms.h"


void Vbcd7seg___024root__traceInitSub0(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vbcd7seg___024root__traceInitTop(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vbcd7seg___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vbcd7seg___024root__traceInitSub0(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"b", false,-1, 3,0);
        tracep->declBus(c+2,"h", false,-1, 6,0);
        tracep->declBus(c+1,"bcd7seg b", false,-1, 3,0);
        tracep->declBus(c+2,"bcd7seg h", false,-1, 6,0);
    }
}

void Vbcd7seg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vbcd7seg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vbcd7seg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vbcd7seg___024root__traceRegister(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vbcd7seg___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vbcd7seg___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vbcd7seg___024root__traceCleanup, vlSelf);
    }
}

void Vbcd7seg___024root__traceFullSub0(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vbcd7seg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vbcd7seg___024root* const __restrict vlSelf = static_cast<Vbcd7seg___024root*>(voidSelf);
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vbcd7seg___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vbcd7seg___024root__traceFullSub0(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->b),4);
        tracep->fullCData(oldp+2,(vlSelf->h),7);
    }
}
