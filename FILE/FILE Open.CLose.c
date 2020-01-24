#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* out;
    FILE* in;

    out = fopen("test.txt", "w");

    if (out == NULL){
        printf("Could not open file\n");
        return 1;
    }

    fprintf(out, "Hello world!\n");
    fprintf(stdout, "Hello Console!\n");


    fclose(out);

    in = fopen("data.txt", "r");
    if (in == NULL){
        printf("Could not open file data.txt\n");
        return 2;
    }

    int data;
    int sum = 0;

    while(fscanf(in, "%d", &data) != EOF){
        sum += data;
    }

    printf("The sum is %d \n", sum);
    fclose(in);

    return 0;
}
