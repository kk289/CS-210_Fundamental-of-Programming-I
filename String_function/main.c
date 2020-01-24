#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255

int length(const char s[]);
void removeLastChar(char s[]);
void deblank(char dest[], const char src[]);

int main(int argc, const char * argv[])
{
    char string[MAX_STR];
    char string2[MAX_STR];
    int len;

    printf("Enter a string to play with:");
    fgets(string, MAX_STR, stdin);

    printf("You entered:%s", string);
    removeLastChar(string);

    len = length(string);
    printf("The length is %d\n", len);

    deblank(string2, string); //copies string into string2 without blanks
    printf("Without blanks is:%s\n", string);

    return 0;
}

int length(const char s[]){
    //find the  \0
    int i=0;
    while (s[i] != '\0'){
        i++;
    }

    return i;
}
void removeLastChar(char s[]){
    int nullInd = length(s);
    if(nullInd != 0){
        s[nullInd - 1] = '\0';
    }
}

void deblank(char dest[], const char src[]){
    int i=0;
    int j= 0;
    while(src[i] != '\0'){
        if (src[i] != ' '){
            dest[j] = src[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
}
