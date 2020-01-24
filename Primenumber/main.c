#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int divisor;
    int isprime; //true if num is positive

    printf("Enter a number:");
    scanf("%d", &num);\

    divisor = 2;
    isprime = 1; // true
    while(isprime && divisor*divisor < num){
        //check if number is divisble by divisor
        if(num % divisor == 0){
            isprime = 0; //false

        }
        divisor = divisor + 1;
    }
    if (isprime){
        printf("prime\n");

    }else{
        printf("Composite\n");

    }

    return 0;
}
