#include "kernel.h"

void array_ops(data_t A[N], data_t B[N],
               data_t C[N], data_t D[N], data_t E[N]) {

    #pragma HLS ARRAY_RESHAPE variable=A cyclic factor=4
    #pragma HLS ARRAY_RESHAPE variable=B cyclic factor=4
    #pragma HLS ARRAY_RESHAPE variable=C cyclic factor=4
    #pragma HLS ARRAY_RESHAPE variable=D cyclic factor=4
    #pragma HLS ARRAY_RESHAPE variable=E cyclic factor=4

    for (int i = 0; i < N; i++) {
        #pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
        D[i] = A[i] * B[i];
        E[i] = (A[i] + B[i]) * (A[i] - B[i]);
    }
}
