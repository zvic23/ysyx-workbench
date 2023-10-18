#include "verilated_dpi.h"            //zsl:for printf the gpr


#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"



#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)


extern Vysyx_22050612_npc* top;

long long A[20],B[20],C[20],D[20],E[20],F[20];
void IFU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A,152);
	memcpy(&A[1],z,152);
	A[0] = a;
	memcpy(z,B,152);
	memcpy(&B[1],z,152);
	B[0] = b;
	memcpy(z,C,152);
	memcpy(&C[1],z,152);
	C[0] = c;
	memcpy(z,D,152);
	memcpy(&D[1],z,152);
	D[0] = d;
}


long long A1[20],B1[20],C1[20],D1[20],E1[20],F1[20];
void IDU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A1,152);
	memcpy(&A1[1],z,152);
	A1[0] = a;
	memcpy(z,B1,152);
	memcpy(&B1[1],z,152);
	B1[0] = b;
	memcpy(z,C1,152);
	memcpy(&C1[1],z,152);
	C1[0] = c;
	memcpy(z,D1,152);
	memcpy(&D1[1],z,152);
	D1[0] = d;
}

void pipeline_state_printf(){
	for(int i=19;i>=0;i--){
		printf("IFU:   pc:%llx  inst:%8llx  valid:%lld  ready:%lld\n",A[i],B[i],C[i],D[i]);
		printf("IDU:   pc:%llx  inst:%8llx  valid:%lld\n",A1[i],B1[i],C1[i]);
	}

}
