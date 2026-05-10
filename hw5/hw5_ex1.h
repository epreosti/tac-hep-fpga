#ifndef HW5_EX1_H
#define HW5_EX1_H

#include <iostream>
#include <fstream>
using namespace std;

#define N 64

void read_data(int in_r[N], int out_r[N]);
void compute_blur(int in_c[N], int out_c[N]);
void write_data(int in_w[N], int out_w[N]);
void hw5_ex1(int A[N], int B[N]);

#endif
