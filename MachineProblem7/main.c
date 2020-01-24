#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 double calories_bmr (int pounds);
 double calories_pa (int intensity, int pounds, int minutes);
 double calories_total(double calories);

 int main()

{
    double intensity, pounds, minutes;
    double calories, current_calories, serving;

    printf("Survivor Logistics Planner\n");
    printf("This program will help plan your foraging missions\n");

    printf("\nEnter survivor's weight:");
    scanf("%lf",&pounds);

    printf("Enter intensity of activity:");
    scanf("%lf",&intensity);

    printf("Enter minutes of activity:");
    scanf("%lf",&minutes);

    printf("Enter number of calories in available food:");
    scanf("%lf",&calories);

    current_calories = (calories_bmr(pounds) + calories_pa(intensity, pounds, minutes));
    calories_total(current_calories);

    printf("For the activity, the survivor will need a total of %.00f calories\n",calories_total(current_calories));

    serving = calories_total(current_calories) / calories;
    printf("To maintain their weight, they will need to consume %.00f servings of the available food.\n", serving);

    return 0;
}


    double calories_bmr(int pounds){
    double calories;
    calories = ( pounds / 2.2) * 24.2;
    return calories;
    }
    double calories_pa (int intensity, int pounds, int minutes){
    double calories;
    calories = 0.0385 * intensity * pounds * minutes;
    return calories;
    }
    double calories_total(double calories){
    double total_calories_consumed;
    total_calories_consumed = calories / 0.9;
    return total_calories_consumed;
    }



