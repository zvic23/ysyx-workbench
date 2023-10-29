#include "verilated_dpi.h"            //zsl:for printf the gpr

#include "../include/generated/autoconf.h"
#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc.h"



#include "svdpi.h"
#include "Vysyx_22050612_npc__Dpi.h"  //zsl:ebreak support (DPI-C)


extern Vysyx_22050612_npc* top;
#ifdef CONFIG_PIPELINETRACE
long long A[30],B[30],C[30],D[30],E[30],F[30];
void IFU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[29];
	memcpy(z,A,232);
	memcpy(&A[1],z,232);
	A[0] = a;
	memcpy(z,B,232);
	memcpy(&B[1],z,232);
	B[0] = b;
	memcpy(z,C,232);
	memcpy(&C[1],z,232);
	C[0] = c;
	memcpy(z,D,232);
	memcpy(&D[1],z,232);
	D[0] = d;
}


long long A1[30],B1[30],C1[30],D1[30],E1[30],F1[30];
void IDU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[29];
	memcpy(z,A1,232);
	memcpy(&A1[1],z,232);
	A1[0] = a;
	memcpy(z,B1,232);
	memcpy(&B1[1],z,232);
	B1[0] = b;
	memcpy(z,C1,232);
	memcpy(&C1[1],z,232);
	C1[0] = c;
	memcpy(z,D1,232);
	memcpy(&D1[1],z,232);
	D1[0] = d;
}

long long A2[30],B2[30],C2[30],D2[30],E2[30],F2[30];
void EXU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[29];
	memcpy(z,A2,232);
	memcpy(&A2[1],z,232);
	A2[0] = a;
	memcpy(z,B2,232);
	memcpy(&B2[1],z,232);
	B2[0] = b;
	memcpy(z,C2,232);
	memcpy(&C2[1],z,232);
	C2[0] = c;
	memcpy(z,D2,232);
	memcpy(&D2[1],z,232);
	D2[0] = d;
	memcpy(z,E2,232);
	memcpy(&E2[1],z,232);
	E2[0] = e;
	memcpy(z,F2,232);
	memcpy(&F2[1],z,232);
	F2[0] = f;
}

long long A3[30],B3[30],C3[30],D3[30],E3[30],F3[30];
void MEM_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[29];
	memcpy(z,A3,232);
	memcpy(&A3[1],z,232);
	A3[0] = a;
	memcpy(z,B3,232);
	memcpy(&B3[1],z,232);
	B3[0] = b;
	memcpy(z,C3,232);
	memcpy(&C3[1],z,232);
	C3[0] = c;
	memcpy(z,D3,232);
	memcpy(&D3[1],z,232);
	D3[0] = d;
	memcpy(z,E3,232);
	memcpy(&E3[1],z,232);
	E3[0] = e;
	memcpy(z,F3,232);
	memcpy(&F3[1],z,232);
	F3[0] = f;
}

long long A4[30],B4[30],C4[30],D4[30],E4[30],F4[30];
void WBU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){
	long long z[29];
	memcpy(z,A4,232);
	memcpy(&A4[1],z,232);
	A4[0] = a;
	memcpy(z,B4,232);
	memcpy(&B4[1],z,232);
	B4[0] = b;
	memcpy(z,C4,232);
	memcpy(&C4[1],z,232);
	C4[0] = c;
	memcpy(z,D4,232);
	memcpy(&D4[1],z,232);
	D4[0] = d;
	memcpy(z,E4,232);
	memcpy(&E4[1],z,232);
	E4[0] = e;
	memcpy(z,F4,232);
	memcpy(&F4[1],z,232);
	F4[0] = f;
}

long long A5[30],B5[30],C5[30],D5[30],E5[30],F5[30],G5[30],H5[30],I5[30],J5[30],K5[30],L5[30],M5[30],N5[30],O5[30],P5[30];
void ICACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){
	long long z[29];
	memcpy(z,A5,232);
	memcpy(&A5[1],z,232);
	A5[0] = a;
	memcpy(z,B5,232);
	memcpy(&B5[1],z,232);
	B5[0] = b;
	memcpy(z,C5,232);
	memcpy(&C5[1],z,232);
	C5[0] = c;
	memcpy(z,D5,232);
	memcpy(&D5[1],z,232);
	D5[0] = d;
	memcpy(z,E5,232);
	memcpy(&E5[1],z,232);
	E5[0] = e;
	memcpy(z,F5,232);
	memcpy(&F5[1],z,232);
	F5[0] = f;
	memcpy(z,G5,232);
	memcpy(&G5[1],z,232);
	G5[0] = g;
	memcpy(z,H5,232);
	memcpy(&H5[1],z,232);
	H5[0] = h;
	memcpy(z,I5,232);
	memcpy(&I5[1],z,232);
	I5[0] = i;
	memcpy(z,J5,232);
	memcpy(&J5[1],z,232);
	J5[0] = j;
	memcpy(z,K5,232);  memcpy(&K5[1],z,232);  K5[0] = k;
	memcpy(z,L5,232);  memcpy(&L5[1],z,232);  L5[0] = l;
	memcpy(z,M5,232);  memcpy(&M5[1],z,232);  M5[0] = m;
	memcpy(z,N5,232);  memcpy(&N5[1],z,232);  N5[0] = n;
	memcpy(z,O5,232);  memcpy(&O5[1],z,232);  O5[0] = o;
	memcpy(z,P5,232);  memcpy(&P5[1],z,232);  P5[0] = p;
	//memcpy(z,Q5,232);  memcpy(&Q5[1],z,232);  K5[0] = q;

}

long long A6[30],B6[30],C6[30],D6[30],E6[30],F6[30],G6[30],H6[30],I6[30],J6[30],K6[30],L6[30],M6[30],N6[30],O6[30],P6[30];
void DCACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){
	long long z[29];
	memcpy(z,A6,232);
	memcpy(&A6[1],z,232);
	A6[0] = a;
	memcpy(z,B6,232);
	memcpy(&B6[1],z,232);
	B6[0] = b;
	memcpy(z,C6,232);
	memcpy(&C6[1],z,232);
	C6[0] = c;
	memcpy(z,D6,232);
	memcpy(&D6[1],z,232);
	D6[0] = d;
	memcpy(z,E6,232);
	memcpy(&E6[1],z,232);
	E6[0] = e;
	memcpy(z,F6,232);
	memcpy(&F6[1],z,232);
	F6[0] = f;
	memcpy(z,G6,232);
	memcpy(&G6[1],z,232);
	G6[0] = g;
	memcpy(z,H6,232);
	memcpy(&H6[1],z,232);
	H6[0] = h;
	memcpy(z,I6,232);
	memcpy(&I6[1],z,232);
	I6[0] = i;
	memcpy(z,J6,232);
	memcpy(&J6[1],z,232);
	J6[0] = j;
	memcpy(z,K6,232);  memcpy(&K6[1],z,232);  K6[0] = k;
	memcpy(z,L6,232);  memcpy(&L6[1],z,232);  L6[0] = l;
	memcpy(z,M6,232);  memcpy(&M6[1],z,232);  M6[0] = m;
	memcpy(z,N6,232);  memcpy(&N6[1],z,232);  N6[0] = n;
	memcpy(z,O6,232);  memcpy(&O6[1],z,232);  O6[0] = o;
	memcpy(z,P6,232);  memcpy(&P6[1],z,232);  P6[0] = p;
	//memcpy(z,Q6,232);  memcpy(&Q6[1],z,232);  K6[0] = q;

}



void pipeline_state_printf(){
	for(int i=29;i>=0;i--){
		printf("IFU:   pc:%llx  inst:%08llx  valid:%lld  ready:%lld\n",A[i],B[i],C[i],D[i]);
		printf("ICACHE:pc:%llx  inst:%08llx  valid:%lld  ready:%lld   line_mem_prev:%016llx%016llx  index:%llx  index_prev:%llx\n",A5[i],B5[i],C5[i],D5[i],E5[i],F5[i],G5[i],H5[i]);
		printf("offset:%llx  offset_prev:%llx  way_hit:%llx  way_hit_prev:%llx  cen:%llb  wen:%lld  arvalid:%lld  state:%lld \n",I5[i],J5[i],K5[i],L5[i],M5[i],N5[i],O5[i],P5[i]);
		printf("IDU:   pc:%llx  inst:%08llx  valid:%lld\n",A1[i],B1[i],C1[i]);
		printf("EXU:   pc:%llx  inst:%08llx  valid:%lld\n",A2[i],B2[i],C2[i]);
		printf("MEM:   pc:%llx  inst:%08llx  valid:%lld   rdata:%llx  block:%llx\n",A3[i],B3[i],C3[i],D3[i],E3[i]);
		printf("DCACHE:pc:%llx  dout:%08llx  valid:%lld  ready:%lld   line_mem_prev:%016llx%016llx  index:%llx  index_prev:%llx\n",A6[i],B6[i],C6[i],D6[i],E6[i],F6[i],G6[i],H6[i]);
		printf("offset:%llx  offset_prev:%llx  way_hit:%llx  way_hit_prev:%llx  cen:%llb  wen:%lld  line_mem:%016llx%016llx \n",I6[i],J6[i],K6[i],L6[i],M6[i],N6[i],O6[i],P6[i]);
		printf("WBU:   pc:%llx  inst:%08llx  valid:%lld\n",A4[i],B4[i],C4[i]);

		printf("\n");
	}

}
#else
void IFU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void IDU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void EXU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void MEM_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void WBU_state_trace (long long a,long long b,long long c,long long d,long long e,long long f){}
void ICACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){}
void DCACHE_state_trace (long long a,long long b,long long c,long long d,long long e,long long f,long long g,long long h,long long i,long long j,long long k,long long l,long long m,long long n,long long o,long long p){}
void pipeline_state_printf(){}
#endif
