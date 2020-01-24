/*
 * converts distances from miles to kilometers
 * Author : Kevil khadka
 */

 #include <stdio.h>
 #define KMS_PER_MILE 1.609

 int main (void) {
     double miles;
     double kms;

    /* Get the distance in miles */
    printf("Enter the distance in miles> ");
    scanf("%lf", &miles);

    /* converts distances from miles to kilometers */
    kms = KMS_PER_MILE * miles;

    /* Display the distance in kilometers */
    printf("That equals %f kilometers.\n",kms);

    return 0;
 }
