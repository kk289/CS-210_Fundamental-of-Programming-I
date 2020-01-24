#include <stdio.h>
#include <stdlib.h>

#define SIZE 12

int main()
{
    int num;
    int array[SIZE];
    int sumOdd;
    int sumEven;
    int result1;
    int result2;
    int checkDigit;
    sumOdd = 0;
    sumEven = 0;

    printf("Enter barcode to check (separate digits with spaces):");
    for (int a = 0; a < SIZE; a++){
        scanf("%d", &array[a]);
    }

    for (int i= 0; i < 12; i= i+2){
        sumOdd = sumOdd + array[i];
    }
    result1 = 3 * sumOdd;
    printf("Step 1 Result = %d\n", result1);

    for (int j = 1; j < 11; j= j+2){
        sumEven = sumEven + array[j];
    }
    result2 = result1 + sumEven;


    printf("Step 2 Result = %d\n", result2);

    if (result2 % 10 == 0){
        checkDigit = 0;
    }else{
        checkDigit = 10 - (result2 % 10);
    }

    if (checkDigit == array[11]){
        printf("Validated\n");
    }else{
        printf("Error in barcode\n");
    }


}
