/* Author : Kevil Khadka
   Project: Zombie Translator
   Machine Problem 14
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000


 /*Function Prototype*/
 void translate_word(char input_text[], char *output_text[]);

 /*void translate_nonword();
 void get_next_word();
 void get_next_nonword();
 void translate();
*/

int main()
{
    int flag;
    char input_text[MAX_LENGTH];
    char output_text[MAX_LENGTH];

    do{
        printf("English-to-Zombie Translator\n");
        printf("Enter text to translate, DONE if finished:\n");
        fgets(input_text, MAX_LENGTH, stdin);

        input_text[strlen(input_text)-1] = '\0';
        flag = strcmp(input_text, "DONE");
        if (flag == 0){
            break;
        }
        translate_word(input_text, &output_text);
        printf("Translation:\n%s\n", output_text);
    }while (flag != 0);
return 0;
}

void translate_word(char input_text[], char *output_text[]){
    char new_text[MAX_LENGTH];

    int i = 0;
    int j = 0;
    while (input_text[i] != '\0'){

        if ((input_text[i] == 'a') && (input_text[i + 1] == ' ' || input_text[i+1] == '\0')){
            new_text[j] = 'h';
            new_text[j+1] = 'r';
            new_text[j+2] = 'a';
            j = j + 3;
        }else if ((strchr("eiou", input_text[i]) != 0 )){
            new_text[j] = 'r';
            input_text[i] = 'r';
            j++;
        }else if (strchr("zhrgbmna .!?-", input_text[i]) != 0){
            new_text[j] = input_text[i];
            j++;
        }

        if (((input_text[i] == 'r') && (input_text[i+1] == ' ' || input_text[i+1] == '\0'))){
            new_text[j+1] = input_text[i+1];
            new_text[j] = 'h';
            j++;
        }
        /*if (((new_text[j-1] == 'r') && (new_text[j] == ' ' || new_text[j] == '\0'))){
            //new_text[j+1] = new_text[j];
            new_text[j] = 'h';
            printf(" 2nd change %d \n", j);
            j = j+2;
        }*/
    i++;
    }
    new_text[j] = '\0';
    strcpy(output_text, new_text);
}
