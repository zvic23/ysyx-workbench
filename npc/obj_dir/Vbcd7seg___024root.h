// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbcd7seg.h for the primary calling header

#ifndef VERILATED_VBCD7SEG___024ROOT_H_
#define VERILATED_VBCD7SEG___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vbcd7seg__Syms;
class Vbcd7seg_VerilatedVcd;


//----------

VL_MODULE(Vbcd7seg___024root) {
  public:

    // PORTS
    VL_IN8(b,3,0);
    VL_OUT8(h,6,0);

    // INTERNAL VARIABLES
    Vbcd7seg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbcd7seg___024root);  ///< Copying not allowed
  public:
    Vbcd7seg___024root(const char* name);
    ~Vbcd7seg___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vbcd7seg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
