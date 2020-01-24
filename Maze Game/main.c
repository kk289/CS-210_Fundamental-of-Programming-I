#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAZE_SIZE 30
#define MAX_FILENAME 255

// Function prototypes

void read_maze(FILE* in, char maze[2*MAZE_SIZE+2][2*MAZE_SIZE+1]);
void print_maze(char maze[2*MAZE_SIZE+2][2*MAZE_SIZE+1]);
int solve_maze(char maze[2*MAZE_SIZE+2][2*MAZE_SIZE+1],
               int start_row, int start_col,
               int end_row, int end_col);

// Main function

int main() {
    char maze[2*MAZE_SIZE+2][2*MAZE_SIZE+1];
    char filename[MAX_FILENAME];

    FILE* in;
    printf("Enter maze file name:\n");
    fgets(filename, MAX_FILENAME, stdin);
    filename[strlen(filename)-1] = '\0';

    in = fopen(filename,"r");
    if (!in) {
        printf("Unable to open file\n");
        exit(2);
    }

    read_maze(in, maze);
    solve_maze(maze, 2, 2, 2*MAZE_SIZE, 2*MAZE_SIZE-1);
    print_maze(maze);

    return 0;
}

//
// read_maze - reads a text maze file and fills the array
//

void read_maze(FILE* in, char maze[2*MAZE_SIZE+2][2*MAZE_SIZE+1]) {
    char ch;

    for (int r=0; r<MAZE_SIZE+1; r++) {
        for (int c=0; c<2*MAZE_SIZE+1; c++) {
            ch = fgetc(in);
            if (ch == ' ') {
                maze[2*r][c] = ' ';
                maze[2*r+1][c] = ' ';
            } else if (ch == '_' || ch == '.') {
                maze[2*r][c] = ' ';
                maze[2*r+1][c] = '*';
            } else {
                maze[2*r][c] = '*';
                maze[2*r+1][c] = '*';
            }
        }
        fgetc(in);
    }
}

//
// print_maze - print the maze on standard out
//

void print_maze(char maze[2*MAZE_SIZE+2][2*MAZE_SIZE+1]) {

    for (int r=0; r<2*MAZE_SIZE+2; r++) {
        printf(":");
        for (int c=0; c<2*MAZE_SIZE+1; c++) {
            putchar(maze[r][c]);
        }
        putchar('\n');
    }
}

//
// solve_maze - find and label a path from start to end
//

int solve_maze(char maze[2*MAZE_SIZE+2][2*MAZE_SIZE+1],
                int start_row, int start_col,
                int end_row, int end_col) {

    print_maze(maze);
    usleep(100000);

    if(start_row == end_row && start_col == end_col){
        maze[start_row][start_col] = '=';
        return TRUE;
    }

    if(maze[start_row][start_col] != ' '){
        return FALSE;
    }
    maze[start_row][start_col] = '=';
    //north

    if(solve_maze(maze, start_row-1, start_col,end_row, end_col)){
        return TRUE;
    }
    //south
    if(solve_maze(maze, start_row+1, start_col,end_row, end_col)){
        return TRUE;
    }
    //east
    if(solve_maze(maze, start_row, start_col+1,end_row, end_col)){
        return TRUE;
    }
    //west
    if(solve_maze(maze, start_row, start_col-1,end_row, end_col)){
        return TRUE;
    }

// to be done

}

