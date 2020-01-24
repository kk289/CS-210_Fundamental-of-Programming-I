/* MILEAGE REIMBURSEMENT CALCULATOR
    CS 210
    Author : Kevil khadka
    Professor: Don Robert
*/

#include <stdio.h>
#include <stdlib.h>
#define RATE 0.35

int main()
{
    double begin_mileage;
    double end_mileage;
    double traveled;
    double reimbursement;

    /* Get data from user */

    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");

    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &begin_mileage);

    printf("Enter ending odometer reading=> ");
    scanf("%lf", &end_mileage);

    /* Calculation */
    traveled = end_mileage - begin_mileage;
    reimbursement = traveled * RATE;

    /*output result */

    printf("You traveled %.1f miles.   At $%.2f per mile,\n", traveled, RATE);
    printf("your reimbursement is $%.2f\n", reimbursement);

    return 0;
}
