#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef> // for a definition of size_t

double maximum_value(double* vals, size_t n );
double maximum(double* vals, size_t n, size_t k);

double biggest_k_values(double* vals, size_t n, size_t k);

double maximum_three_values(double* vals, size_t n, double* value1, double* value2, double* value3);

#endif