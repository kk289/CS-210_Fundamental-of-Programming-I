#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int istoken(char word[]);
int isvowel(char ch[]);
char token_to_english(char token[], char prompt[]);
void replace(char word[], char replacement[]);

int main()
{
    char text[MAX_LENGTH];
    char answer[MAX_LENGTH];

    printf("Enter a text:");
    scanf("%s", text);
  //  int x = isvowel(text);
//    token_to_english(text, answer);
    replace(text, answer);
    printf("the replaced word: %s", answer);
    //istoken(text);
}

int istoken(char word[]){
    int i=0;


    if(word[i] == '<' && word[strlen(word) - 1] == '>'){
//        printf("Token");
        return 1;

    }else {
        return 0;
  //      printf("isnottoken");
    }

    return 0;
}

int isvowel(char ch[]){

    if(ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u'){

        return 1;
    }
    return 0;
}

char token_to_english(char token[], char prompt[]){

    int i = 0;
    char changed[MAX_LENGTH];

    while(token[i] != '\0'){

        if (token[i] == '<'){
            changed[i] = token[i + 1];
        }else if (token[i] == '>'){
            changed[i-1] = '\0';
        }else{
            changed[i] = token[i + 1];
        }
            i++;

        if (token[i] == '-'){
            changed[i-1] = ' ';
        }
    }

    changed[i] = '\0';
    strcpy(prompt, changed);
}

void replace(char word[], char replacement[]){

    int temp;
    int vowel;
    char changed[MAX_LENGTH];
    char replacement_text[MAX_LENGTH];

    temp = istoken(word);

     if (temp == 1){

        token_to_english(word, changed);

        printf("changed %s\n", changed);

        vowel = isvowel(changed);

        if(vowel == 1){
            printf("Please type an %s:", changed);
        }else{
            printf("Please type a %s:", changed);
        }
        scanf("%s", replacement_text);
        //fgets(replacement, MAX_LENGTH, stdin);
        //replacement_text[strlen(replacement_text) -1] = '\0';
        strcpy(replacement, replacement_text);

    }else {
        strcpy(replacement, word);
    }
}
