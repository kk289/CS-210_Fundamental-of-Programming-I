#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 80

int main()
{
    char** words;
    FILE* f;

    f = fopen("wordlist.txt", "r");

    if (f == NULL){
        printf("Could not open file\n");
        exit(1);
    }
    int word_count = 0;
    char word[MAX];

    while(fgets(word, MAX, f) != NULL){
        word_count++;
    }

    printf("Word Count = %d\n", word_count);

  //  words = malloc(sizeof(char*) * word_count);
    words = calloc(sizeof(char*), word_count); //perfer  for array
    fseek(f, SEEK_SET, 0);

    for(int i = 0;i<word_count; i++){

        fgets(word, MAX, f);

        words[i] = strdup(word);
    }

    printf("The last word is %s.\n", words[word_count - 1]);

    for(int i = 0; i < word_count; i++){
        free(words[i]);
    }
    free(words); //returns the array space to the heap

    fclose(f);
    return 0;
}
