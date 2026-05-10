#include <iostream>
#include <cstdlib>
#define N 10

void matrix_add(int A[N][N], int B[N][N], int C[N][N]);

int main() {
    int A[N][N], B[N][N], C[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            A[i][j] = i*N + j;
            B[i][j] = 2*(i*N + j);
        }

    matrix_add(A, B, C);

    int errors = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (C[i][j] != A[i][j] + B[i][j])
                errors++;

    if (errors == 0)
        std::cout << "TEST PASSED" << std::endl;
    else
        std::cout << "TEST FAILED" << std::endl;

    return errors;
}
