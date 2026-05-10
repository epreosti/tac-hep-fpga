#include <iostream>
#include "kernel.h"

int main() {
    data_t A[N], B[N], C[N], D[N], E[N];

    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
        B[i] = N - i;
    }

    array_ops(A, B, C, D, E);

    int errors = 0;
    for (int i = 0; i < N; i++) {
        data_t exp_C = A[i] + B[i];
        data_t exp_D = A[i] * B[i];
        data_t exp_E = (A[i] + B[i]) * (A[i] - B[i]);
        if (C[i] != exp_C || D[i] != exp_D || E[i] != exp_E) {
            std::cout << "ERROR at i=" << i << std::endl;
            errors++;
        }
    }
    if (!errors) std::cout << "PASS: all results correct" << std::endl;
    return errors;
}
