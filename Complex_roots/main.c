#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "complex.h"

int main()
{
    double a, b, c;
    char result[255];

    printf("Enter a, b, and c:");
    scanf("%lf,%lf,%lf", &a, &b, &c);

    complex_t za, zb, zc, z4;

    za = c_make(a, 0.0);
    zb = c_make(b, 0.0);
    zc = c_make(c, 0.0);
    z4 = c_make(4.0, 0.0);

    complex_t disc = c_sub(c_pow(zb, 2.0),      // b^2 - 4ac
                        c_mul(z4, c_mul(za, zc)));

    complex_t neg_b = c_sub(c_zero(), zb);
    complex_t num = c_add(neg_b, c_pow(disc, 0.5));
    complex_t den = c_mul(c_make(2.0, 0.0), za);
    complex_t proot = c_div(num, den);

    c2a(proot, result);

    printf("The greater root is %s\n", result);
    return 0;
}
