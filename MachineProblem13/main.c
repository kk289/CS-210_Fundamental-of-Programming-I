#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "rational.h"

rational_t make_rational(int num, int den){
    rational_t x;
    return x;
}

rational_t readRational{
    int num;
    int den;
    prin
    scanf("%ld/%ld", &num, &den);
    return make_rational(num, den);
    }

rational_t rat_add( double num, double den){
    int a,b,c,d;

    int sign_rule;
    num = a * d + b * c;
    dem = b * d;

    if(num * dem >= 0){
        sign_rule = 1;
    }else{
        sign_rule = -1;
    }

    num = sign_rule * abs(num);
    dem = abs(dem);

  //  *n_ans = num;
  //  *d_ans = dem;
    return make_rational(num, den);
}

rational_t rat_sub(double num, double den){
    int a,b,c,d;
    int sign_rule;

    num = a * d - b * c;
    dem = b * d;

    if(num * dem >= 0){
        sign_rule = 1;
    }else{
        sign_rule = -1;
    }

    num = sign_rule * abs(num);
    dem = abs(dem);

   // *n_ans = num;
   // *d_ans = dem;
    return make_rational(num,den);
}

rational_t rat_mul(double num, double den){
    int a,b,c,d;
    int sign_rule;

    num =  a * c ;
    dem =  b * d;

    if(num * dem >= 0){
        sign_rule = 1;
    }else{
        sign_rule = -1;
    }

    num = sign_rule * abs(num);
    dem = abs(dem);

 //   *n_ans = num;
 //   *d_ans = dem;
    return make_rational(num,den);
}

rational_t rat_div(double num, double den){
    int a,b,c,d;
    int sign_rule;

    num =  a * d ;
    dem =  b * c;

    if(num * dem >= 0){
        sign_rule = 1;
    }else{
        sign_rule = -1;
    }

    num = sign_rule * abs(num);
    dem = abs(dem);

  //  *n_ans = num;
  //  *d_ans = dem;
  return make_rational(num, den);
}

void find_gcd(int a, int b){
    a = num;
    b = den;
    {
        if (b == 0){
            return a;
        }else if(a < b){
            find_gcd(b, a);
        }else
            find_gcd(b,(a%b));
    }
}

void r2a(rational_t x, char result[]){
    double x = num/den;
    sprintf("result","The rational number is %ld", x);
    puts(result);
}

int main(){}

    int num;
    int den;
