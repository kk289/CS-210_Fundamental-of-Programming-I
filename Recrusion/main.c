#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int sum(int n);
int fib(int n);
int count(char* str, char ch);
int ispalindrome(char* start, char *end);

int main()
{
    char str[MAX];
    char ch;

    printf("Enter a string:");
    gets(str);

    printf("Enter a character:");
    scanf("%c", &ch);

    printf("There are %d %c's in the string.\n", count(str, ch), ch);

    return 0;

}
int count(char* str, char ch){
    if (str[0] == '\0'){
        return 0;
    }
    if (str[0] == ch){
        return 1 + count(str+1, ch);
    }else{
        return 0 + count(str+1, ch);
    }
}

int fib(int n){
    if( n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n-1) + fib(n - 2);
}

int sum(int n){
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
