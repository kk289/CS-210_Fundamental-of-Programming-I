/** CS 210 : Machine Problem 3
 *  Program: The Ancient Game of Nim
 *  Author: Kevil Khadka
 */

#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0


#define HUMAN 1
#define COMPUTER 2

//Function Prototypes

void print_greeting();
void print_scoreboard();
char play_nim(int starting_player);
void get_computer_move(int heap_a, int heap_b, int heap_c,
                       char *chosen_heap, int *number_removed);
char user_wishes_to_continue();

int main()
{
    int track = 1;
    int heap_a;
    int heap_b;
    int heap_c;
    char chosen_heap;
    int number_removed;
    char winner;
    int humanscore =0;
    int computerscore =0;

    print_greeting();
    do{
        winner = play_nim(track);

        if (winner == 'h'){
            humanscore = humanscore + 1;
            printf("Player 1 wins!\n");
            printf("* * * * * * * * * * *\n");
        }else{
            computerscore = computerscore + 1;
            printf("Player 2 wins!\n");
            printf("* * * * * * * * * * *\n");
        }

        print_scoreboard(humanscore, computerscore);
    }while(user_wishes_to_continue());
}
// Function Definitions

//Function print the greeting
void print_greeting(){
    printf("Welcome to the Ancient Game of Nim\n\n");
    printf("Player 1 is you (the human)\n");
    printf("Player 2 is me (the computer)\n");
}

//Function prints out the current number of human wins and computer wins
void print_scoreboard(int human_score, int computer_score){

    printf("Current Score:\n");

    printf("Player 1 (Human):    %d\n", human_score);
    printf("Player 2 (Computer): %d\n", computer_score);
}

//Function plays entire single game of nim with starting player going first
char play_nim(int starting_player){
    int num_A,num_B,num_C;
    char pile;
    int count;
    int a = 0;
    char track = 'h';

    printf("Player %d goes first this time!\n", starting_player);
    num_A = 5;
    num_B = 4;
    num_C = 3;


    while(num_A != 0 || num_B != 0 || num_C != 0){
        if (track == 'h') {

            do {
                printf("Player 1\n");
                printf("Heaps:\n");
                printf("A: %d\nB: %d\nC: %d\n",num_A,num_B,num_C);
                printf("Enter the letter of the heap and number of objects to remove:");
                scanf(" %c%d", &pile, &count);
                pile = tolower(pile);

                if (pile != 'a' && pile != 'b' && pile != 'c') {
                    printf("Illegal move! Try again.\n");
                    a = 0;
                }else if(pile == 'a' && (count > 0 && count <= num_A) ){
                    num_A = num_A - count;
                    a =1;
                    track = 'c';
                }else if(pile == 'b' && (count > 0 && count <= num_B) ){
                    num_B = num_B - count;
                    a=1;
                    track = 'c';
                }else if(pile == 'c' && (count > 0 && count <= num_C) ){
                    num_C = num_C - count;
                    a =1;
                    track = 'c';
                }else {
                    printf("Illegal move! Try again.\n");
                    a = 0;
                }
            }while (a = 0);

        } else if (track == 'c'){

            get_computer_move(num_A, num_B, num_C, &pile, &count);

            printf("Player 2\n");
            printf("Heaps:\n");
            printf("A: %d\nB: %d\nC: %d\n",num_A,num_B,num_C);


            if(pile == 'a'){
                num_A = num_A - count;
                track = 'h';
            }else if(pile == 'b'){
                num_B = num_B - count;
                track = 'h';
            }else if(pile == 'c'){
                num_C = num_C - count;
                track = 'h';
            }
            printf("COMPUTER moves %c%d\n", pile, count);
        }
    }
    if (track == 'h'){
        return 'c';
    }else if (track == 'c'){
        return 'h';
    }
}

//Function gets the computer move
void get_computer_move(int heap_a, int heap_b, int heap_c,
                       char *chosen_heap, int *number_removed){


    int nim_number = heap_a ^ heap_b ^ heap_c;

    if(nim_number == 0){
        if (heap_a != 0){
            *chosen_heap = 'a';
            *number_removed = 1;
        }else if(heap_b != 0){
            *chosen_heap = 'b';
            *number_removed = 1;
        }else if(heap_c != 0){
            *chosen_heap = 'c';
            *number_removed = 1;
        }
    }else{
        if((heap_a ^ nim_number) < heap_a){
            *chosen_heap = 'a';
            *number_removed = heap_a - (heap_a ^ nim_number);
        }else if((heap_b ^ nim_number) < heap_b){
            *chosen_heap = 'b';
            *number_removed = heap_b - (heap_b ^ nim_number);
        }else if((heap_c ^ nim_number) < heap_c){
            *chosen_heap = 'c';
            *number_removed = heap_c - (heap_c ^ nim_number);
        }
    }
}

// Function prompts the user if they wish to continue playing the game
char user_wishes_to_continue(){
    char ch;
    int num = 1;

    while(num == 1){
        printf("Do you wish to play again? (y/n)");
        scanf(" %c", &ch);

        ch = tolower(ch);
        if ( ch != 'y' && ch != 'n'){
            printf("Bad input! Try again.\n");
        }else if(ch == 'y'){
            return TRUE;
        }else if(ch == 'n'){
            return FALSE;
        }
    }
}
