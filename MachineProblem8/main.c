#include <stdio.h>
#include <stdlib.h>

#define MAX_BET 1000
#define DECK_SIZE 52
#define MAX_SIZE 10

typedef struct{
    char suit[MAX_SIZE];
    char value[MAX_SIZE];
}card_t;

typedef enum {Hearts, Spades, Diamonds, Clubs} suit_t;
typedef enum {Ace,2,3,4,5,6,7,8,9,10,Jack,Queen,King} value_t;

typedef struct{
    double array = (double* )malloc(DECK_SIZE * sizeof(double));
    int total_card;
    int track_next_card;
}shoe_t;

typedef struct{
    double actual_card[];
    int no_of_card;
}hand_t;

//CARDS functions

void print_card(card_t card){
    printf("%s of %s", card.value, card.suit);
}

int points(card_t card) {

   if (card.value == "Ace"){
        return 1;
   }else if(card.value == "Jack" || card.value == "Queen" || card.value == "King" || card.value == "10"){
        return 10;
   }else {
        return card.value[0] - '0';
   }
}




/*
int getRand()
{
	if(i == 100) i = 0;
	int rands[100];
	srand((unsigned)time(0));

	for(int index=0; index<100; index++)
	{
		rands[index] = (rand()%13)+1;
e	}

	i++;

	int n = rands[i];
	return n;
}
*/
