#include <iostream>
#define SIZE 16

void vadd_longlong(long long A[SIZE], long long B[SIZE], long long C[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
    }
}
