#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL user_wishes_to_continue();

int main(){
    if (user_wishes_to_continue()){
        printf("they do!\n");
    }else{
        printf("They dont :(\n");
    }
}

BOOL user_wishes_to_continue(){
    char ch;
  //  BOOL bad = TRUE;
    while(TRUE){
        printf("Do you wish to play again? (y/n):");
        scanf(" %c", &ch);
        ch = tolower(ch);

        if (ch == 'y'){
            return TRUE;
        }else if (ch == 'n'){
            return FALSE;
        }else{
            printf("Bad input! Try Again.\n");
        }
    }

    return (ch == 'y');

}

