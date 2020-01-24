#include <stdio.h>
#include <stdlib.h>

typedef enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}day_of_week_t;
void print_dow(day_of_week_t d);

int main()
{
    int a,b,c,n;

    day_of_week_t next_class = TUESDAY;

    print_dow(next_class);

    printf("Enter n:");
    scanf("%d", &n);

    int * array;

    array = malloc(n * sizeof(int));

    printf("The address of a is: %d\n", &a);
    printf("The address of b is: %d\n", &b);
    printf("The address of c is: %d\n", &c);
    printf("The address of n is: %d\n", &n);
    printf("The address of array is: %d\n", array);

    for (int i=0; i <n ; i++){
        array[i] = 0;
    }

    printf("Done initializing %d intergers\n", n);
    char ch;

    scanf(" %c", &ch);

    free(array); // gives back the memory

    return 0;
}

void print_dow(day_of_week_t d){
    switch (d){
    case SUNDAY;
        printf("Sunday");
        break;
    case MONDAY;
        printf("Monday");
        break;
    case TUESDAY;
        printf("Tuesday");
        break;
    case WEDNESDAY;
        printf("Wednesday");
        break;
    case THURSDAY;
        printf("THURSDAY");
        break;
        // other cases
    default;
        printf("Bad day");
    }
}


