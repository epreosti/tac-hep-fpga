#include <iostream>
#include <cstdlib>
#define N 10

void matmul_dim1(int A[N][N], int B[N][N], int C[N][N]);

int main() {
    int A[N][N], B[N][N], C[N][N];

    // A = Identity, so C should equal B
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            A[i][j] = (i == j) ? 1 : 0;
            B[i][j] = i*N + j;
        }

    matmul_dim1(A, B, C);

    int errors = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (C[i][j] != B[i][j])
                errors++;

    if (errors == 0)
        std::cout << "TEST PASSED" << std::endl;
    else
        std::cout << "TEST FAILED" << std::endl;

    return errors;
}
