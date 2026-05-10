#include <iostream>
#include <ap_fixed.h>
#define SIZE 16

void vadd_apfixed(ap_fixed<32,16> A[SIZE], ap_fixed<32,16> B[SIZE], ap_fixed<32,16> C[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
    }
}
