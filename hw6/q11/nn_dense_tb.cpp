#include <iostream>
#include <cmath>
#include "nn_dense.h"

int main() {
    data_t x[IN_SIZE], w[IN_SIZE][OUT_SIZE], y[OUT_SIZE];

    // x = [1,2,...,8], w = all 1s
    for (int i = 0; i < IN_SIZE; i++) {
        x[i] = (data_t)(i + 1);
        for (int j = 0; j < OUT_SIZE; j++)
            w[i][j] = (data_t)1;
    }

    nn_dense(x, w, y);

    // golden: y[j] = 1+2+...+8 = 36 for all j
    int errors = 0;
    for (int j = 0; j < OUT_SIZE; j++) {
        float got = (float)y[j];
        bool ok = (fabs(got - 36.0f) < 0.1f);
        if (!ok) errors++;
        std::cout << "y[" << j << "] = " << got
                  << (ok ? "  OK" : "  FAIL") << std::endl;
    }
    std::cout << (errors == 0 ? "TEST PASSED" : "TEST FAILED") << std::endl;
    return errors;
}
