#include <iostream>
#define N 10

void matmul_dim1(int A[N][N], int B[N][N], int C[N][N]) {
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE bram port=A
#pragma HLS INTERFACE bram port=B
#pragma HLS INTERFACE bram port=C
#pragma HLS ARRAY_PARTITION variable=A complete dim=2
#pragma HLS ARRAY_PARTITION variable=B complete dim=1

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
#pragma HLS PIPELINE II=1
            int sum = 0;
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}
