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

long long A2[20],B2[20],C2[20],D2[20],E2[20],F2[20];
void EXU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A2,152);
	memcpy(&A2[1],z,152);
	A2[0] = a;
	memcpy(z,B2,152);
	memcpy(&B2[1],z,152);
	B2[0] = b;
	memcpy(z,C2,152);
	memcpy(&C2[1],z,152);
	C2[0] = c;
	memcpy(z,D2,152);
	memcpy(&D2[1],z,152);
	D2[0] = d;
	memcpy(z,E2,152);
	memcpy(&E2[1],z,152);
	E2[0] = e;
	memcpy(z,F2,152);
	memcpy(&F2[1],z,152);
	F2[0] = f;
}

long long A3[20],B3[20],C3[20],D3[20],E3[20],F3[20];
void MEM_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A3,152);
	memcpy(&A3[1],z,152);
	A3[0] = a;
	memcpy(z,B3,152);
	memcpy(&B3[1],z,152);
	B3[0] = b;
	memcpy(z,C3,152);
	memcpy(&C3[1],z,152);
	C3[0] = c;
	memcpy(z,D3,152);
	memcpy(&D3[1],z,152);
	D3[0] = d;
	memcpy(z,E3,152);
	memcpy(&E3[1],z,152);
	E3[0] = e;
	memcpy(z,F3,152);
	memcpy(&F3[1],z,152);
	F3[0] = f;
}

long long A4[20],B4[20],C4[20],D4[20],E4[20],F4[20];
void WBU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[19];
	memcpy(z,A4,152);
	memcpy(&A4[1],z,152);
	A4[0] = a;
	memcpy(z,B4,152);
	memcpy(&B4[1],z,152);
	B4[0] = b;
	memcpy(z,C4,152);
	memcpy(&C4[1],z,152);
	C4[0] = c;
	memcpy(z,D4,152);
	memcpy(&D4[1],z,152);
	D4[0] = d;
	memcpy(z,E4,152);
	memcpy(&E4[1],z,152);
	E4[0] = e;
	memcpy(z,F4,152);
	memcpy(&F4[1],z,152);
	F4[0] = f;
}

void pipeline_state_printf(){
	for(int i=19;i>=0;i--){
		printf("IFU:   pc:%08llx  inst:%08llx  valid:%lld  ready:%lld\n",A[i],B[i],C[i],D[i]);
		printf("IDU:   pc:%08llx  inst:%08llx  valid:%lld\n",A1[i],B1[i],C1[i]);
		printf("EXU:   pc:%08llx  inst:%08llx  valid:%lld\n",A2[i],B2[i],C2[i]);
		printf("MEM:   pc:%08llx  inst:%08llx  valid:%lld\n",A3[i],B3[i],C3[i]);
		printf("WBU:   pc:%08llx  inst:%08llx  valid:%lld\n",A4[i],B4[i],C4[i]);

		printf("\n");
	}

}
