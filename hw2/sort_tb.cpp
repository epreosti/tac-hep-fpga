#include <iostream>
#define N 16

void sort(int A[N]);

int main() {
    int A[N] = {64,34,25,12,22,11,90,5,77,42,3,88,15,60,47,9};

    std::cout << "Before: ";
    for (int i = 0; i < N; i++) std::cout << A[i] << " ";
    std::cout << std::endl;

    sort(A);

    std::cout << "After:  ";
    for (int i = 0; i < N; i++) std::cout << A[i] << " ";
    std::cout << std::endl;

    int errors = 0;
    for (int i = 0; i < N-1; i++)
        if (A[i] > A[i+1]) errors++;

    if (errors == 0)
        std::cout << "TEST PASSED" << std::endl;
    else
        std::cout << "TEST FAILED" << std::endl;

    return errors;
}
