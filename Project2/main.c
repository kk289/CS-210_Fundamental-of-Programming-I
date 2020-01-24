/* CS210
    Professor : Don Robert
    Author: kevil khadka
    Project - 2
  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    double min_avg;
    double current_avg;
    double final_counts;
    double score;

    printf("Enter desired grade> ");
    scanf("%c", &grade);

    printf("Enter minimum average required> ");
    scanf("%lf", &min_avg);

    printf("Enter current average in course> ");
    scanf("%lf", &current_avg);

    printf("Enter how much the final counts\nas a percentage of the course grade> ");
    scanf("%lf", &final_counts);

    /* calculation */
    score = ((min_avg - (current_avg * ((100 - final_counts)/100))) / (final_counts/100));

    printf("You need a score of %.2f on the final to get a %c.\n", score,grade);

    return 0;
}
