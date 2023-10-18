#include "verilated_dpi.h"            //zsl:for printf the gpr


#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"



#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)


extern Vysyx_22050612_npc* top;

long long A[20],B[20],C[20],D[20],E[20],F[20];
void IFU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	memcpy(&A[1],A,40);
	A[0] = a;

}

void pipeline_state_printf(){
	for(int i=19;i>=0;i--){
		printf("IFU:   pc:%llx  inst:%llx \n",A[i],B[i]);
	}

}
