#include <iostream>
#define N 10

void matrix_add(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
#pragma HLS PIPELINE II=1
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
