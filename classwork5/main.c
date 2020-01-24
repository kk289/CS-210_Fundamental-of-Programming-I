/** CS - 210 Chapter 4 problem : 4.6
 * Author : kevil khadka
 * Professor : Don Roberts
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    double x;
    double y;

    printf("Point Classifier\n");

    printf("Enter point x:");
    scanf("%lf", &x);

    printf("Enter point y:");
    scanf("%lf", &y);

    if (x == 0 && y ==0){
        printf("(%g, %g) is the origin\n", x,y);
    }else if(x == 0 && y != 0){
        printf("(%g, %g) is on the y-axis\n", x,y);
    }else if(x != 0 && y == 0){
        printf("(%g, %g) is on the x-axis\n", x,y);
    }else if (x > 0 && y > 0){
        printf("(%g, %g) is in quadrant I\n",x,y);
    }else if (x < 0 && y < 0){
        printf("(%g, %g) is in quadrant III\n", x,y);
    }else if ( x > 0 &&  y < 0){
        printf("(%g, %g) is in quadrant IV\n", x,y);
    }else if ( x < 0 && y > 0){
        printf("(%g, %g) is in quadrant II\n", x,y);
    }

    return 0;
}

