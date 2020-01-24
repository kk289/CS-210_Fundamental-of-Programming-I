#ifndef COMPLEX_H    //  compiler guard
#define COMPLEX_H

/* Abstract data type */

typedef struct {
    double r;
    double theta;
} complex_t;

complex_t c_zero();
complex_t c_make(double r, double i);
void c_print(complex_t z);
complex_t c_add(complex_t z1, complex_t z2);
complex_t c_sub(complex_t z1, complex_t z2);
complex_t c_mul(complex_t z1, complex_t z2);
complex_t c_div(complex_t z1, complex_t z2);
complex_t c_pow(complex_t z1, double p);
double real(complex_t z);
double imag(complex_t z);
void c2a(complex_t z, char str[]);

#endif // COMPLEX_H
