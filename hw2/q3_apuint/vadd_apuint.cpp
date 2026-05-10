#include <iostream>
#include <ap_int.h>
#define SIZE 16

void vadd_apuint(ap_uint<32> A[SIZE], ap_uint<32> B[SIZE], ap_uint<32> C[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
    }
}
