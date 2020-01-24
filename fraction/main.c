#include <stdio.h>
#include <stdlib.h>

void get_fraction(int *num, int *den); /* num and den are output parameters */
void print_fraction(int num, int den);
void add_fractions(int n1, int d1,
                   int n2, int d2,
                   int *sum_num, int *sum_den);
void simplify(int *n, int *d);

int main()
{
    int num1, num2, num_r;
    int den1, den2, den_r;

    printf("Enter first fraction:");
    get_fraction(&num1, &den1);
    printf("Enter second fraction:");
    get_fraction(&num2, &den2);


    add_fractions(num1, den1, num2, den2, &num_r, &den_r);

    print_fraction(num_r,den_r);

    return 0;
}

void get_fraction(int *num, int *den){
    int n;
    int d;

    scanf("%d/%d", &n, &d);

    *num = n;
    *den = d;
}
void print_fraction(int num, int den){
    printf("%d/%d\n", num, den);
}
void add_fractions(int n1, int d1,
                   int n2, int d2,
                   int *sum_num, int *sum_den){

    *sum_num = (n1 * d2) + (n2 * d1);
    *sum_den = d1 * d2;
    simplify(&*sum_num, &*sum_den);
}
void simplify(int *n, int *d){
    int divisor;
    if(*n < *d){
        divisor = *n;
    }else{
        divisor = *d;
    }
    while(*n % divisor != 0 || *d % divisor != 0){
            divisor--;
    }
    *n = *n / divisor;
    *d = *d / divisor;
}
