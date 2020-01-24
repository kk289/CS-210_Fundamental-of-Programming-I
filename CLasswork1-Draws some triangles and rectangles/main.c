/*
 * main.c - problem 2, ch - 3
 *  Draws some triangles and rectangles
 * professor - don roberts
 * author - kevil khadka
 */

#include <stdio.h>
#include <stdlib.h>

/* Function Declarations */
void draw_triangle();
void draw_rectangle();
void blank_line();

/* function definitions */

int main()
{
    draw_triangle();
    draw_rectangle();
    blank_line();
    blank_line();
    draw_triangle();
    draw_rectangle();
    return 0;
}
/*
 * draw_triangle() - draws a triangle
 */
void draw_triangle(){
    printf("     *\n");
    printf("   *  *\n");
    printf("  *    *\n");
    printf(" *      *\n");
}

/*
 *draw_rectangle() - draws a rectangle
 */
void draw_rectangle(){
    printf(" ********\n");
    printf(" *      *\n");
    printf(" *      *\n");
    printf(" ********\n");
}
/*
 * blank_line() - draws a blank lines
 */
void blank_line(){
    printf("         \n");
}
/*
 * draw_triangle() - draws a triangle
 */

/*void draw_triangle(){
    printf("     *\n");
    printf("   *  *\n");
    printf("  *    *\n");
    printf(" *      *\n");
}

/*
 *draw_rectangle() - draws a rectangle
 */
/*void draw_rectangle(){
    printf(" ********\n");
    printf(" *      *\n");
    printf(" *      *\n");
    printf(" ********\n");
}*/
