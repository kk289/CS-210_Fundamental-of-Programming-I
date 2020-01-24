/* CS - 210
   Main.c - Machine Problem 1
   Professor: Don Robert
   Author : Kevil khadka
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d,e,f,g,h,j,m,k;
    int year;
    int date;
    int month;

    printf("Easter Calculator\n");
    printf("Enter the year to calculate Easter for:");
    scanf("%d", &year);

    /* Calculation */
    a = year % 19;
    c = year % 100;
    b = year / 100;
    d = b / 4;
    e = b % 4;
    f = c / 4;
    g = c % 4;
    h = ((8*b) + 13) / 25;
    j = ((19*a) + b - d - h + 15)% 30;
    m = (a + (11 * j))/ 319;
    k = ((2 *e) + (2 *f)- g- j + m + 32)% 7;
    month = (j - m + k + 90) / 25;
    date = (j - m + k + 19 + month ) % 32;

    printf("Easter is on %d/%d/%d\n", month,date,year);

    return 0;
}
