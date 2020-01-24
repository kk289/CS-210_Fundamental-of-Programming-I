/*
 * main.c - problem 3, ch - 3
 *  Draws some triangles and rectangles
 * professor - don roberts
 * author - kevil khadka
 */

#include <stdio.h>
#include <stdlib.h>

/* Function Declarations */
void draw_triangle();
void draw_rectangle();
void draw_line();
void blank_line();
void draw_head();

/* function definitions */

int main()
{
    draw_triangle();
    draw_rectangle();
    draw_rectangle();
    draw_rectangle();
    draw_line();

    blank_line();
    blank_line();
    blank_line();
    blank_line();
    blank_line();

    draw_head();
    draw_rectangle();
    draw_line();

    blank_line();
    blank_line();
    blank_line();
    blank_line();
    blank_line();


    draw_head();
    draw_triangle();
    draw_line();
    return 0;
}
/*
 * draw_triangle() - draws a triangle
 */
void draw_triangle(){
    printf("    * \n");
    printf("   *  *\n");
    printf("  *    *\n");
    printf(" ********\n");
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
 *draw_line() - draws a triangle
 */

void draw_line(){
    printf("    *    \n");
    printf("   * *    \n");
    printf("  *   *   \n");
    printf(" *     *  \n");
}
/*
 *blank_line() - draws a blank line
 */
void blank_line(){
    printf("          \n");
}
/*
 *draw_head() - draws a head
 */
void draw_head(){
    printf("    *     \n");
    printf("  *   *   \n");
    printf("    *    \n");
}
