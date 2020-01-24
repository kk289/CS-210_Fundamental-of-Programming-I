#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//function declaration
void draw_veline();
void draw_horine();

char playermove(char player1, char player2);



int main()
{
    char play1;
    char play2;
    playermove(play1, play2);

    draw_horine();
    draw_veline();
    draw_horine();
    draw_veline();
    draw_horine();
    draw_veline();
    draw_horine();



}

void draw_veline(){
    printf(" |    |    |    |\n");

}

void draw_horine(){

    printf(" ----------------\n");
}

char playermove(char player1, char player2){
    printf("Welcome to TIC TAC TOE\n");
    printf("ENTER 'X' FOR PLAYER 1 AND 'O' FOR PLAYER 2\n");

    char A, B,C ;
    int 1, 2, 3;

    printf("Player 1 = ");
    scanf(" %c%d", );

    printf("Player 2 = ");
    scanf(" %c", &player2);

    player1 = tolower(player1);
    player2 = tolower(player2);

}
