#include <iostream>
#define SIZE 16

void vadd_long(long A[SIZE], long B[SIZE], long C[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
    }
}
