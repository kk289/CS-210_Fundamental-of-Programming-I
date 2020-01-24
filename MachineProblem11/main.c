#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guess;
    int largest;
    int smallest;
    char response;
    int iWin;

    /* 1. Print the title */
    printf("Reverse guessing game\n");
    printf("Choose a number between 1 and 1000\n");
    largest = 1000;
    smallest = 1;
    iWin = 0; /*false*/

    do {
        guess = (largest + smallest)/ 2;
        printf("My guess is %d. Am I too (H)igh, too (L)ow, or (E)qual?", guess);
        scanf(" %c", &response);
        response = touppper(response);

        if (response == 'e' || response == 'E'){
            printf("I win!\n");
            iWin = 1;
        }else if (response == 'h' || response == 'H'){
            largest = guess - 1;
        }else if (response == 'l' || response == 'L'){
            smallest = guess + 1;
        }else{
            printf("Bad response\n");
        }
        if (smallest == largest){
            printf("Therefore your number must be %d\n", smallest, largest);
            iWin = 1;
        }
    }while (!iWin);


    return 0;
}
