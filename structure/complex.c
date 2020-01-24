#include "complex.h"

#include <math.h>

#include <stdio.h>

//Implementation of complex_t functions

void print_greeting(){
    printf("hello\n");
}

complex_t c_zero(){

    return c_make(0.0, 0.0);
}

complex_t c_make(double r, double i){

    complex_t result;

    result.r = sqrt(r*r + i*i);
    result.theta = atan2(i , r);

    return result;
}

complex_t c_add(complex_t z1, complex_t z2){
    complex_t result;
    double i;
    double r;

    r = real(z1) + real(z2);
    i = imag(z1) + imag(z2);

    result = c_make(r, i);

    return result;
}
complex_t c_sub(complex_t z1, complex_t z2){
    complex_t result;
    double i;
    double r;

    r = real(z1) - real(z2);
    i = imag(z1) - imag(z2);

    result = c_make(r, i);

    return result;
}


complex_t c_mul(complex_t z1, complex_t z2){

    complex_t result;

    result.r = z1.r * z2.r;
    result.theta = z1.theta + z2.theta;

    return result;
}

complex_t c_div(complex_t z1, complex_t z2){
    complex_t result;

    result.r = z1.r / z2.r;
    result.theta = z1.theta - z2.theta;

    return result;
}

complex_t c_pow(complex_t z1, double p){
        complex_t result;
        result.r = pow(z1.r, p);
        result.theta = z1.theta * p;

        return result;
}

void c_print(complex_t z){

    printf("%g+%gi", real(z), imag(z));
}

void c2a(complex_t z, char str[]){
    sprintf(str, "%g + %gi", real(z), imag(z));
}

double real(complex_t z){
    return z.r * cos(z.theta);
}

double imag(complex_t z){
    return z.r * sin(z.theta);
}
