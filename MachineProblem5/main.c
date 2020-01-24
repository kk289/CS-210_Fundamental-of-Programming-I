/** CS - 210 Machine Problem 5
 * Mad libs
 * Author : kevil khadka
 * Professor : Don Roberts
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100

// Function Prototypes
void print_greeting();
int isvowel(char ch[]);
int istoken(char word[]);
void replace(char word[], char replacement[]);
char token_to_english(char token[], char prompt[]);
void process_file(FILE* in, FILE* out);
FILE* open_file(char prompt[], char mode[]);
void remove_newline_ch(char *line);

int main()
{
    char input_word[MAX_WORDS];   //word
    char replacement_text[MAX_WORDS]; //replacement
    char in_text[MAX_WORDS]; //prompt
    char mode[MAX_WORDS];  //mode


    FILE* in_file;
    FILE* out_file;

    print_greeting();

    open_file(input_word, replacement_text);


    //printf("Enter a word");

//    fgets(sample_word, MAX_WORDS, stdin);
    printf("\n");
    printf("Processing finished. Enjoy your story.\n");

}

//Function declarations

void print_greeting(){
    printf("MAD-LIBS Text Processor\n");
    printf("The program will open a mad-libs file, ask you to fill various words, and produce a funny story.\n");
}

int isvowel(char ch[]){

    if( ch[0] == 'a' ||
        ch[0] == 'e' ||
        ch[0] == 'i' ||
        ch[0] == 'o' ||
        ch[0] == 'u'){

        return 1;
    }
    return 0;
}

int istoken(char word[]){

    int i=0;
    if(word[i] == '<' && word[strlen(word) - 1] == '>'){
        return 1;
    }else {
        return 0;
    }

}

void replace(char word[], char replacement[]){

    int temp;
    int vowel;
    char changed[MAX_WORDS];
    char replacement_text[MAX_WORDS];

    temp = istoken(word);

     if (temp == 1){

        token_to_english(word, changed);
      //  printf("changed %s\n", changed);

        vowel = isvowel(changed);

        if(vowel == 1){
            printf("Please type an %s:", changed);
        }else{
            printf("Please type a %s:", changed);
        }
        //scanf("%s", replacement_text);


        fgets(replacement_text, MAX_WORDS, stdin);
        remove_newline_ch(replacement_text);
        strcpy(replacement, replacement_text);

    }else {
        strcpy(replacement, word);
    }
}

char token_to_english(char token[], char prompt[]){

    int i = 0;
    char changed[MAX_WORDS];

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
    strcpy(prompt, changed);
}

void process_file(FILE* in, FILE* out){

    int temp;
    char in_word[MAX_WORDS];
    char out_word[MAX_WORDS];

    while(fscanf(in, "%s", in_word) != EOF){

        replace(in_word, out_word);

        if (temp ){
            fprintf(out, "%s", out_word);
            temp++;
        }else{
            fprintf(out, " %s", out_word);
        }
    }
    fclose(in);
    fclose(out);
}


FILE* open_file(char prompt[], char mode[]){


    char replacement[MAX_WORDS];
    int temp = 0;
    FILE* in_file;


    char fileName[MAX_WORDS];
    char outputFileName[MAX_WORDS];

    do{
        printf("Enter mad-lib file name:");
        fgets(fileName, MAX_WORDS, stdin);
        remove_newline_ch(fileName);

        in_file = fopen(fileName, "r");

        if (in_file == NULL){
            printf("Unable to open file: %s. Try again!\n", fileName);
        }
    }while(in_file == NULL);

    FILE* out_file;

    printf("Enter file name for resulting story:");
    fgets(outputFileName, MAX_WORDS, stdin);
    remove_newline_ch(outputFileName);

    out_file = fopen(outputFileName, "w");

    char sample_word[MAX_WORDS];

    //printf("Enter a word:");
    while (fscanf(in_file, "%s", sample_word) != EOF){

        // printf("sample word %s",sample_word);

        replace(sample_word, replacement);

        if (temp == 0){
            fprintf(out_file, "%s", replacement);
            temp++;
        }else{
            fprintf(out_file, " %s",replacement);
        }
    }

fclose(in_file);
fclose(out_file);
}
//Function to remove last line
void remove_newline_ch(char *line){
    int new_line = strlen(line);

    if (new_line != 0){
        line[new_line-1] = '\0';
    }
}
