#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

typedef rational_t {
    int num;
    int den;
    }rational_t;

/* Function Prototype */
rational_t readRational();
rational_t rat_add(double num, double den);
rational_t rat_sub(double num, double den);
rational_t rat_mul(double num, double den);
rational_t rat_div(double num, double den);
void find_gcd(int a, int b);

void r2a(rational_t x, char result[]);

#endif // RATIONAL_H_INCLUDED
