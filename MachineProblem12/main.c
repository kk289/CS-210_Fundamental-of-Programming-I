/*  CS 210 - Machine Problem 12
    Author : kevil khadka
    Project : Zombie Infection Model
*/

#include <stdio.h>
#include <stdlib.h>

void callData(int *initial_pop, double *infection_rate);
void cal(int in_pop, double inf_rate, int i, int *humans, int *zombies);

int main()
{
    int num, humans, zombies, initial_population;
    double infection_rate;
    printf("Zombie Infection Model\n");
    zombies = 1;
    num = 1;

    callData(&initial_population, &infection_rate);
    printf("Report generated!\n");
    humans = initial_population;


    FILE* out_file;     /*File variable*/
    out_file = fopen("modelOutput.txt", "w");
    fprintf(out_file, " Time\t      Humans\t     Zombies\n");

    while(humans != 0)
    {

        fprintf(out_file, "%5d\t%12d\t%12d\n", num, humans, zombies);

        num = num + 1;

        cal(humans, infection_rate, zombies , &humans, &zombies);
    }

        fprintf(out_file, "%5d\t%12d\t%12d\n", num, humans, zombies);

    fclose(out_file);
return 0;
}
void callData(int *initial_pop, double *infection_rate){
    int initial_population;
    double inf_rate;

    do
    {
        printf("Please enter initial population:");

        scanf(" %d", &initial_population);

        if (initial_population < 0){
            printf("Population must be non-negative. Try again.\n");
        }
    }while(initial_population < 0);
    *initial_pop = initial_population;

    do
    {
        printf("Please enter infection rate as a decimal (e.g. 25%% = 0.25):");

        scanf(" %lf", &inf_rate);

        if (inf_rate > 1 || inf_rate < 0){
            printf("Infection rate must be between 0 and 1 inclusive. Try again.\n");
        }
    }while(inf_rate > 1 || inf_rate < 0);
    *infection_rate = inf_rate;
}

void cal(int s, double B, int i, int *humans, int *zombies){

    int delta;

    if ((B * s * i) < s){
        delta = B * s * i;
    }
    else{
        delta = s;
    }
    s = s - delta;
    i = i + delta;

*humans = s;
*zombies = i;
}

