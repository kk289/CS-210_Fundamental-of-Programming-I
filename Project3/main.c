/** CS 210
 *  To ask user for a month, a day, and year
 *  Author : Kevil khadka
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

//function prototypes
void print_greeting();
double find_out_date(int month, int day, int year);
char user_wishes_to_continue();


int main()
{
    int no_of_month, no_of_day, no_of_year;
    print_greeting();

    do{
        print_greeting();

        find_out_date(no_of_month, no_of_day, no_of_year);
        printf("%.2d/%.2d/%.4d\n", no_of_month, no_of_day, no_of_year);



    }while (user_wishes_to_continue());


}
//function declaration
void print_greeting(){
    printf("Date Validator\n");
}

double find_out_date(int month, int day, int year){

    printf("Enter Month:");
    scanf("%d", &month);

    printf("Enter Day:");
    scanf("%d", &day);

    printf("Enter Year:");
    scanf("%d", &year);

    if (month <= 1 && month >= 12){
        printf("Month out of range!");
    }
    if( day <= 1 && day > 31){
        printf("Day out of range!");
    }

    if (year % 100 == 0){
    }
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
