/** CS-210 ch 3 problem 3.12
 *  author ; kevil khadka
 *  prints speed of sound after receiving temperature
 */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*function prototype */
double sound(double a);

int main()
{
    double speed;

    double temp;

    printf("Enter air temperature in (F):");
    scanf("%lf", &temp);

    printf("The speed of sound at that temperature is %.1f ft/sec.\n", sound(temp));

    return 0;
}
// function definition
double sound(double a){
    double temp = a;
    double speed;
    a = 1086 * (pow(((5 * temp + 297 )/247), 0.5));
    speed = a;
    return speed;

}

