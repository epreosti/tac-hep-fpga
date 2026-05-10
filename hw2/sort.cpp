#include <iostream>
#define N 16

void sort(int A[N]) {
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1-i; j++) {
#pragma HLS PIPELINE II=1
            if (A[j] > A[j+1]) {
                int tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }
}
