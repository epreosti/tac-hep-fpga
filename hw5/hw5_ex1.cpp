#include "hw5_ex1.h"

void read_data(int in_r[N], int out_r[N]) {
    #pragma HLS INLINE off
    for (int i = 0; i < N; i++) {
        #pragma HLS PIPELINE II=1
        out_r[i] = in_r[i];
    }
}

void compute_blur(int in_c[N], int out_c[N]) {
    #pragma HLS INLINE off
    #pragma HLS ARRAY_PARTITION variable=in_c cyclic factor=3
    for (int i = 1; i < N - 1; i++) {
        #pragma HLS PIPELINE II=1
        out_c[i] = (in_c[i-1] + in_c[i] + in_c[i+1]) / 3;
    }
}

void write_data(int in_w[N], int out_w[N]) {
    #pragma HLS INLINE off
    for (int i = 0; i < N; i++) {
        #pragma HLS PIPELINE II=1
        out_w[i] = in_w[i];
    }
}

void hw5_ex1(int A[N], int B[N]) {
    #pragma HLS DATAFLOW
    #pragma HLS STABLE variable=A
    #pragma HLS STABLE variable=B
    int temp1[N], temp2[N];
    for (size_t i = 0; i < N; i++) temp2[i] = 0;
    read_data(A, temp1);
    compute_blur(temp1, temp2);
    write_data(temp2, B);
}
