/** CS 210
 *  To Calculate the exponential Function
 *  Author : Kevil khadka
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
//Function prototypes
void print_greeting();
double valueOfSin(int x);
int factorial(int n);
double exp(double x);
char user_wishes_to_continue();

int main()
{
    double x, n;
    double exponential;
    printf("Exp approximation\n");
    printf("Enter x:");
    scanf("%lf", &x);

    printf("Enter n:");
    scanf("%lf", &n);

    printf("Exp(%.15lf) = %0.15lf", x,exp(exponential));

    do{
        print_greeting();

        printf("Enter x:");
        scanf("%d", &x);

        printf("Enter n:");
        scanf("%d", &n);

        printf("Exp(%.15lf) = %0.15lf", x, exp(exponential));

    }while(user_wishes_to_continue());
}

//function declaration
void print_greeting(){
    printf("Exp approximation\n");
}
//find out the value of sine and of value of n the numebr of terms in the above series
double valueOfSin(int x){
    int num;
    double result;
    double valueOfn;

    scanf("%d", &num);

    for (int i=1; i < num; i++){
        result = sin(num);
        valueOfn = factorial(num);
    }
}
//function to find out factorial of n

int factorial(int n){
    int i; /* local variables*/
    int product = 1;

    for (i = n; i > 1; i--){
        product = product * i;
    }
    return (product);
}
// function to find out exponential funciton

double exp(double x){
    int n;
    double result = 1;
    for (int i = n; i > 1; i--){
        result = ((pow(x, i))/(factorial(i)));
    }
    return (result);
}

char user_wishes_to_continue(){
    char ch;
    int num = 1;

    while(num == 1){
        printf("Do you wish to continue? (Y/N):");
        scanf(" %c", &ch);

        ch = tolower(ch);
        if ( ch != 'y' && ch != 'n'){
            printf("Bad input! Try again.\n");
        }else if(ch == 'y'){
            return TRUE;
        }else if(ch == 'n'){
            return FALSE;
        }
    }
}
