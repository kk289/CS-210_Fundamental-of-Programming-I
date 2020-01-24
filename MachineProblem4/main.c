/** CS 210 : Swiss Tournament Manager : Machine Problem 4
 *  Professor : Don Roberts
 *  Author : Kevil khadka
 */


#include <stdio.h>
#include <stdlib.h>

//Function Declaration

void print_greeting();
int get_num_of_participants();
int get_num_of_rounds();
void initialize_array(int *wins, int participants, int *player);
void print_standing(int id, int wins[]);
int record_round(int player1, int player2);
void selection_sort(int id[], int wins[], int participants);

int main()
{
    int participants;
    int rounds;
    int player1, player2;
    int winner;

    print_greeting();
    participants = get_num_of_participants();
    //printf("participatns:\n", participants);
    int player[participants];
    rounds = get_num_of_rounds();

    printf("Enter results for round %d\n", rounds);
    int wins[participants];
    initialize_array(&wins, participants, &player);

    for(int a = 0; a < participants; a= a+2){
        player1 = player[a];
        player2 = player[a+1];
        winner = record_round(player1,player2);
      //  printf("player 1 %d player 2 %d\n", player1, player2);
      if (winner == 1){
        wins[a]++;
      }else{
        wins[a+1]++;
      }
    }
    selection_sort(player, wins, participants);

    printf("Standing after round %d\n\n",rounds);
    print_standing(player,wins);

}
// Function Definitions

//Function print the greeting

void print_greeting(){
    printf("Swiss Tournament Manager\n");
    printf("------------------------\n");
}

//Function : Get number of participants in the tournament
int get_num_of_participants(){
    int number_of_participants;
    printf("Enter number of participants (must be even):");
    scanf("%d", &number_of_participants);

    if (number_of_participants%2 != 0){
        printf("Must be even. Try again.\n");
        get_num_of_participants();
    }else if(number_of_participants < 2){

        printf("Must be at least 2. Try again.\n");
        get_num_of_participants();

    }else if (number_of_participants >= 64){
        printf("Must be at less than 64. Try again.\n");
        get_num_of_participants();
    }

    return number_of_participants;
}

//Function: get number of rounds in the tournament
int get_num_of_rounds(){
    int no_of_rounds;
    printf("Enter the number of rounds to play:");
    scanf("%d", &no_of_rounds);

    if(no_of_rounds < 1){
        printf("Must play at least 1 round. Try Again.\n");
        get_num_of_rounds();
    }

    return no_of_rounds;
}

//Function : Initializing the data for the application
void initialize_array(int *wins, int participants, int *player){
    //int *player[participants];
    /* initialize elements of array from 1001 to no_of_participants */
    player[0]= 1001;
   // wins[0] = 0;
    for(int id = 1; id < participants; id++){
        player[id] = player[id-1] + 1;
        wins[id] = 0;
    }
}

//Function To print the standing after the current round of the tournament
void print_standing(int id, int wins[]){

    printf("Player ID   Record\n");
    printf("---------   ------\n");

    printf("      %d      %d", id, wins[id]);

}


//Function :loop through every pair in the current round, ask which player won, and increase that number
int record_round(int player1, int player2){
    int winner;
    printf("Who won?\n");
    printf("1) %d or 2) %d:", player1,player2);
    scanf("%d", &winner);

    if(winner != 1 && winner !=2){
        printf("Select 1 or 2. Try again.\n");
        record_round(player1, player2);
    }

    return winner;
}

//Function To sorts both id and wins
void selection_sort(int id[], int wins[], int participants){
    int index;

    for (int j = 0; j < participants; j++){
        index = j;
        for (int i =j; i < participants; i++){
            if(wins[i] > wins[index]){
                index = i;
            }
        }
        /*swap values*/
        int tmp = id[j];
        id[j] = id[index];
        id[index] = tmp;
    }
}

