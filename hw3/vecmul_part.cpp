#include <iostream>
#define SIZE 100

void vecmul_part(int A[SIZE], int B[SIZE], int C[SIZE]) {
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE bram port=A
#pragma HLS INTERFACE bram port=B
#pragma HLS INTERFACE bram port=C
#pragma HLS ARRAY_PARTITION variable=A cyclic factor=4
#pragma HLS ARRAY_PARTITION variable=B cyclic factor=4

    for (int i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE II=1
        C[i] = A[i] * B[i];
    }
}
