/** CS 210 : Rock Paper Scissor Test : Machine Problem 2
 *  Professor : Don Roberts
 *  Author : Kevil khadka
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


//Function Declaration

void print_greeting();
void print_score(int human_score, int computer_score, int ties);
char get_pick();
int compute_result(char human, char computer);
char compute_next_pick(char human, char computer);

int main()
{
    int human_wins;
    int computer_wins;
    int ties;
    int result;
    char human_pic;
    char computer_pick;

    human_wins = 0;
    computer_wins = 0;
    ties = 0;

    computer_pick = 'r';
    print_greeting();

    while (1){
       print_score(human_wins, computer_wins, ties);
       human_pic = get_pick();

       if (human_pic == 'g'){
            break;
       }

       //compute_next_pick(human_pic, computer_pick);
        result = compute_result(human_pic, computer_pick);

       if (result < 0){
            printf("You Win!\n");
            human_wins = human_wins + 1;
       }else if (result > 0){
            printf("I Win!\n");
            computer_wins = computer_wins + 1;
       }else{
            printf("Tie!\n");
            ties = ties + 1;
       }
        computer_pick = compute_next_pick(human_pic, computer_pick);
    }
    return 0;
}

void print_greeting(){
    printf("Welcome to the RPS AI\n");
    printf("I will dominate your puny human brain!\n");
}

void print_score(int human_score, int computer_score, int ties){
    printf("The current score is:\n");

    printf("Human: %d\n",human_score);

    printf("AI   : %d\n",computer_score);

    printf("Ties : %d\n",ties);

}

char get_pick(){

    char ch;
    int bad = 1;

    while(bad == 1){
        printf("Pick (R)ock, (P)aper, (S)cissors, or (G)ive up:");
        scanf(" %c", &ch);

        ch = tolower(ch);
        if( ch != 'r' && ch != 'p' && ch != 's' && ch != 'g'){
            printf("Bad input! Try again.\n");

            bad = 1;
        }else{
            bad = 0;

        }
    }
    return ch;
}

int compute_result(char human, char computer){

    if (human == 'r' && computer == 'p'){
        printf("You chose rock\n");
        printf("I chose paper\n");
       // printf("I Win!\n");
        return 1;
    }else if (human == 's' && computer == 'p'){
        printf ("You chose scissors\n");
        printf ("I chose paper\n");
        //printf("You Win!\n");
        return -1;
    }else if (human == 'p' && computer == 's'){
        printf ("You chose paper\n");
        printf ("I chose scissors\n");
        return 1;
    }else if (human == 'r' && computer == 's'){
        printf ("You chose rock\n");
        printf ("I chose scissors\n");
        return -1;
    }else if (human == 's' && computer == 'r'){
        printf ("You chose scissors\n");
        printf ("I chose rock\n");
        return 1;
    }else if (human == 'p'&& computer == 'r'){
        printf("You chose paper\n");
        printf("I chose rock\n");
        return -1;
    }else if (human == 'r' && computer == 'r'){
        printf ("You chose rock\n");
        printf ("I chose rock\n");
        return 0;
    }else if (human == 's' && computer == 's'){
        printf ("You chose scissors\n");
        printf ("I chose scissors\n");
        return 0;
    }else if (human == 'p' && computer == 'p'){
        printf ("You chose paper\n");
        printf("I chose paper\n");
        return 0;
    }
}

char compute_next_pick(char human, char computer){

    if(human == 'r' && computer == 'r'){
        return 's';
    }else if(human == 'r' && computer == 'p'){
        return 's';
    }else if(human == 'r' && computer == 's'){
        return 'p';
    }else if(human == 'p' && computer == 'r'){
        return 's';
    }else if(human == 'p' && computer == 'p'){
        return 'r';
    }else if(human == 'p' && computer == 's'){
        return 'r';
    }else if(human == 's' && computer == 'r'){
        return 'p';
    }else if(human == 's' && computer == 'p'){
        return 'r';
    }else if (human == 's' && computer == 's'){
        return 'p';
    }

}

