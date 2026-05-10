#include <iostream>
#include <cstdlib>
#define SIZE 100

void vecmul_part(int A[SIZE], int B[SIZE], int C[SIZE]);

int main() {
    int A[SIZE], B[SIZE], C[SIZE];

    for (int i = 0; i < SIZE; i++) {
        A[i] = i;
        B[i] = 2*i;
    }

    vecmul_part(A, B, C);

    int errors = 0;
    for (int i = 0; i < SIZE; i++) {
        if (C[i] != A[i] * B[i]) {
            errors++;
        }
    }

    if (errors == 0)
        std::cout << "TEST PASSED" << std::endl;
    else
        std::cout << "TEST FAILED" << std::endl;

    return errors;
}
