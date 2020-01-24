#ifndef RATIONAL_H /* Compiler Guard */
#define RATIONAL_H

typedef struct{
    int numerator;
    int denominator;
}rational_t;

/* Function Prototype */
rational_t make_rational(int num, int den);
int numerator(rational_t x);
int denominator(rational_t x);

rational_t rat_add(rational_t x1, rational_t x2);

rational_t rat_sub(rational_t x1, rational_t x2);

rational_t rat_mul(rational_t x1, rational_t x2);

rational_t rat_div(rational_t x1, rational_t x2);

int gcd(int num, int den);

void r2a(rational_t x, char result[]);

#endif // RATIONAL_H
