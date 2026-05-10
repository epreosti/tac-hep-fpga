#include <iostream>
#define SIZE 16

void vadd_longlong(long long A[SIZE], long long B[SIZE], long long C[SIZE]);

int main() {
    long long A[SIZE], B[SIZE], C[SIZE];
    for (int i = 0; i < SIZE; i++) { A[i] = i; B[i] = 2*i; }
    vadd_longlong(A, B, C);
    int errors = 0;
    for (int i = 0; i < SIZE; i++)
        if (C[i] != A[i] + B[i]) errors++;
    if (errors == 0) std::cout << "TEST PASSED" << std::endl;
    else std::cout << "TEST FAILED" << std::endl;
    return errors;
}
