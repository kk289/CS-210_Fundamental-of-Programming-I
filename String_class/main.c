/* CS - 210
    Class work : 8.5
    Author : kevil khadka
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 255

//Function Prototype
void removeLastChar(char s[]);

int main()
{
    char noun[MAX_STRING];

    while(1){
        //prompt and get noun from user
        printf("Enter noun to pluralize (QUIT to quit):");
        fgets(noun, MAX_STRING, stdin);
        removeLastChar(noun);

        //unsigned int i = strlen(noun);
        //noun[strlen(noun)-1] = '\0';
        //if noun = 'QUIT' break
        if(strcmp(noun,"QUIT") == 0)
            break;

        char lastletter = ' ';
        char nextToLastLetter = ' ';

        if (strlen(noun)>0)
            lastletter = noun[strlen(noun)-1];
        if (strlen(noun) > 1)
            nextToLastLetter = noun[strlen(noun) -2];

        if (lastletter == 'y'){
            removeLastChar(noun);
            strcat(noun, "ies");

        }else if(lastletter == 's'){
            strcat(noun, "es");
        }else if (lastletter == 'h' &&
                  (nextToLastLetter == 's' || nextToLastLetter == 'c')){
            //add es
            strcat(noun, "es");
        }else{
            //add s
            strcat(noun,"s");
        }
        //if ends in 's' remove 'ch', 'sh', s, add es
        printf("Its plural is %s\n", noun);
        //otherwise , add 's'
    }

    return 0;
}
//function declaration

void removeLastChar(char s[]){
    unsigned int len = strlen(s);
    if (len > 0)
        s[len - 1] = '\0';

}
