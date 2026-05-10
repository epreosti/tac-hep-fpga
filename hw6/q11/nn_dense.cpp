#include "nn_dense.h"

void nn_dense(data_t x[IN_SIZE], data_t w[IN_SIZE][OUT_SIZE], data_t y[OUT_SIZE]) {
#pragma HLS INTERFACE ap_memory port=x
#pragma HLS INTERFACE ap_memory port=w
#pragma HLS INTERFACE ap_memory port=y
#pragma HLS INTERFACE ap_ctrl_hs port=return
#pragma HLS ARRAY_PARTITION variable=x complete dim=1
#pragma HLS ARRAY_PARTITION variable=w complete dim=0
#pragma HLS ARRAY_PARTITION variable=y complete dim=1

    acc_t acc[OUT_SIZE];
#pragma HLS ARRAY_PARTITION variable=acc complete dim=1

    INIT: for (int j = 0; j < OUT_SIZE; j++) {
#pragma HLS UNROLL
        acc[j] = 0;
    }

    COMPUTE: for (int i = 0; i < IN_SIZE; i++) {
#pragma HLS PIPELINE II=1
        for (int j = 0; j < OUT_SIZE; j++) {
#pragma HLS UNROLL
            acc[j] += (acc_t)x[i] * (acc_t)w[i][j];
        }
    }

    OUTPUT: for (int j = 0; j < OUT_SIZE; j++) {
#pragma HLS UNROLL
        y[j] = (data_t)acc[j];
    }
}
