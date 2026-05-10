#ifndef NN_DENSE_H
#define NN_DENSE_H

#include <ap_fixed.h>

typedef ap_fixed<16,8> data_t;
typedef ap_fixed<32,12> acc_t;

static const int IN_SIZE  = 8;
static const int OUT_SIZE = 4;

void nn_dense(data_t x[IN_SIZE], data_t w[IN_SIZE][OUT_SIZE], data_t y[OUT_SIZE]);

#endif
