/** CS 210 : Class work Problem 5.4
 *  Professor : Don Roberts
 *  Author : Kevil khadka
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int first = 1; // first time through
    double min;
    double max;
    double avg;
    double sum;
    double num;
    double sum_of_squares = 0;
    double standard_deviation;

    printf("Enter number of data:");
    scanf("%d", &n);

    int i;
    sum = 0;
    min = 0;
    max = 0;

   for(i = 1; i <= n; i++){
        printf("Enter number:");
        scanf("%lf", &num);

        sum_of_squares = sum_of_squares + num * num;
        sum = sum + num;

        if (first || num > max){
            max = num;
        }
        if (first || num < min){
            min = num;
        }
        first = 0; // not the first time
   }

    avg = sum / n;
    /* Calculate the standard deviation */


    standard_deviation = sqrt((sum_of_squares / n) - avg * avg);

    printf("Max = %g\n", max);
    printf("Min = %g\n", min);
    printf("Avg = %g\n", avg);
    printf("Stdev = %g\n", standard_deviation);

    return 0;

}
