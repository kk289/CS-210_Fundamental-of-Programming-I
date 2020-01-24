/* Name: Kevil Khadka
   Project: MP16 - Zombie Voting Right Act of 2017
   CS210
   Don Robert
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//#include <assert.h>
#include "rational.h"

rational_t make_rational(int num, int den){
    int new_gcd;
    rational_t result;
    new_gcd = gcd(abs(result.numerator), abs(result.denominator));
    num = result.numerator/new_gcd;
    den = result.denominator/new_gcd;
   // result.numerator = num;
   // result.denominator = den;
    return result;
}

int numerator(rational_t x){
    return x.numerator;
}
int denominator(rational_t x){
    return x.denominator;
}

/*rational_t read_rational(){
    int num;
    int den;
    scanf("%d/%d", &num, &den);
    return make_rational(num,den);
}
*/
rational_t rat_add (rational_t x1, rational_t x2){
/*   int a = x1.numerator;
    int b = x1.denomenator;
    int c = x2.numerator;
    int d = x2.denomenator;

    int num = a * d + b * c;
    int den = b * d;
*/  int num;
    int den;
    rational_t result;
    num = (numerator(x1)* denominator(x2)) + (denominator(x1)* numerator(x2));
    den = (denominator(x1) * denominator(x2));


  /*  if ((num < 0 && den < 0) || (num >= 0 && den >= 0)){
        num *= -1;
        den *= 1;
    }
    int new_gcd = gcd(abs(num),abs(den));
    num = num/new_gcd;
    den = den/new_gcd;
   // int x = make_rational((num),(den));
  */

 /*   int sign = 1;
    if (num < 0){
        sign = -1;
        num = - num;
    }
    if (den < 0){
        sign = - sign;
        den = - den;
    }
    assert(den != 0);
   */
    int new_gcd = gcd(abs(num), abs(den));
    num = (num/new_gcd);
    den = (den/new_gcd);
    result.numerator = abs(num);
    result.denominator = abs(den);

    return result;




 //   numerator = sign_rule * abs(num);
 //   denomenator = abs(dem);

  //  *n_ans = num;
  //  *d_ans = dem;
}

rational_t rat_sub(rational_t x1, rational_t x2){
  /*  int a = x1.numerator;
    int b = x1.denomenator;
    int c = x2.numerator;
    int d = x2.denomenator;

    int num = a * d - b * c;
    int den = b * d;
*/  int num;
    int den;

    rational_t result;
    num = (numerator(x1)* denominator(x2)) - (denominator(x1)* numerator(x2));
    den = (denominator(x1) * denominator(x2));

   // *n_ans = num;
   // *d_ans = dem;
 /*   if ((num < 0 && den < 0) || (num >= 0 && den >= 0)){
        num *= -1;
        den *= 1;
    }
  //  rational_t x;
    int new_gcd = gcd(abs(num), abs(den));
    //int x = make_rational((num/new_gcd),(den/new_gcd));
  */
  /*  int sign = 1;
    if (num < 0){
        sign = -1;
        num = - num;
    }
    if (den < 0){
        sign = - sign;
        den = - den;
    }
    assert(den != 0);
   */
    int new_gcd = gcd(abs(num), abs(den));
    num = (num/new_gcd);
    den = (den/new_gcd);
    result.numerator = abs(num);
    result.denominator = abs(den);
    return result;
}

rational_t rat_mul(rational_t x1, rational_t x2){
  /*  int a = x1.numerator;
    int b = x1.denomenator;
    int c = x2.numerator;
    int d = x2.denomenator;

    int num =  a * c;
    int den =  b * d;
 */
    int num;
    int den;
    rational_t result;
    num = (numerator(x1)* numerator(x2));
    den = (denominator(x1) * denominator(x2));

     //   *d_ans = dem;
 /*   if ((num < 0 && den < 0) || (num >= 0 && den >= 0)){
        num *= -1;
        den *= 1;
    }
  //  rational_t x;
    int new_gcd = gcd(abs(num), abs(den));
   // int x = make_rational((num/new_gcd),(den/new_gcd));
*/
 /*   int sign = 1;
    if (num < 0){
        sign = -1;
        num = - num;
    }
    if (den < 0){
        sign = - sign;
        den = - den;
    }
    assert(den != 0);
   */
    int new_gcd = gcd(abs(num), abs(den));
    num = (num/new_gcd);
    den = (den/new_gcd);
    result.numerator = abs(num);
    result.denominator = abs(den);

    return result;
}

rational_t rat_div(rational_t x1, rational_t x2){
 /*   int a = x1.numerator;
    int b = x1.denomenator;
    int c = x2.numerator;
    int d = x2.denomenator;

    int num =  a * d;
    int den =  b * c;
*/
    int num;
    int den;
    rational_t result;
    num = (numerator(x1) * denominator(x2));
    den = (denominator(x1) * numerator(x2));

  //  *n_ans = num;
  //*d_ans = dem;
   /*if ((num < 0 && den < 0) || (num >= 0 && den >= 0)){
        num *= -1;
        den *= 1;
    }
  //  rational_t x;
    int new_gcd = gcd(abs(num), abs(den));
   // int x = make_rational((num/new_gcd),(den/new_gcd));

   */
/*    int sign = 1;
    if (num < 0){
        sign = -1;
        num = - num;
    }
    if (den < 0){
        sign = - sign;
        den = - den;
    }
    assert(den != 0);
  */
    int new_gcd = gcd(abs(num), abs(den));
    num = (num/new_gcd);
    den = (den/new_gcd);
    result.numerator = abs(num);
    result.denominator = abs(den);

    return result;
}

int gcd(int num, int den){
    int a = num;
    int b = den;
    int y;

    if (b == 0){
        return a;
    }else if(a < b){
/*        int sign_rule = 1;
        if ((a < 0 && b < 0) || (a > 0 && b > 0)){
             //a = a * -1;
            //b = b * -1;
            sign_rule = 1;*/
        return gcd(a,b);
   /*     }else{
            sign_rule = -1';
        }a = abs(a);
        while( a != 0){
        y = a;
        a = a % b;
        b = y;
        }
        b = b * sign_rule;
        return b;*/
    }else{
        return gcd(b, a % b);
    }
}

void r2a(rational_t x, char result[]){
    sprintf(result,"%d/%d", numerator(x),denominator(x));
}
