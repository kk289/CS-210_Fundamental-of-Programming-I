#include <stdio.h>
#include <stdlib.h>

// function prototypes
double compute_bmi(double height, double weight);
void print_weight_status(double bmi);

int main()
{
    double height_in;
    double weight_lbs;
    double bmi;

    printf("Enter Height in inches:");
    scanf("%lf", &height_in);

    printf("Enter Weight in lbs:");
    scanf("%lf", &weight_lbs);

    bmi = compute_bmi(height_in, weight_lbs);
    printf("Your bmi is %g\n", bmi);

    print_weight_status(bmi);


    return 0;

}

// function definition
/** compute_bmi - computes the body mass index given height and weight*/
double compute_bmi(double height, double weight){
    double bmi;
    bmi = 703 * weight / (height * height);
    return bmi;
}

/** print_weight_status - prints the weight status based on the table on P 231*/

void print_weight_status(double bmi){
    if (bmi < 18.5){
        printf("Underweight\n");
    }else if( bmi >= 18.5 && bmi < 18.5 ){
        printf("Normal\n");
    }else if(bmi >= 25.0 && bmi < 30.0){
        printf("Overweight\n");
    }else if(bmi >= 30.0){
        printf("Obese\n");
    }
}
