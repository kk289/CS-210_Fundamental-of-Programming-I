#include <stdio.h>
#include <stdlib.h>
#include <math.h>   // for the sqrt function

/* Function prototypes */
 void box_print (double n);
 double monthly_payment(double principal, double apr, int years);
 int main()
{
    double interest;
    double principal;
    int years;

    printf("Enter principal:");
    scanf("%lf", &principal);

    printf("enter Annual interest rate:");
    scanf("%lf", &interest);
    printf("Enter a number of years:");
    scanf("%d",&years);

    double pmt = monthly_payment(principal, interest, years);

    printf("The monthly payment will be .\n");
    box_print(pmt);

    return 0;
}

 double monthly_payment(double principal, double apr, int years){

    double mpr = apr / 12/ 100.0;
    int number_months = years * 12;
    double payment = mpr * principal / (1 - pow(1 + mpr, -number_months));
    return payment;

    }
void box_print(double n){
    printf("************\n");
    printf("*  %7.2f   *\n",n);
    printf("************\n");
}
