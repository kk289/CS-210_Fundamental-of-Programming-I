#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void print_array(int arr[], int num_elts);
int find(int arr[SIZE], int num_elts, int search);
//int smallest(int arr[SIZE]);
void selection_sort(int arr[], int num_elts);

int main()
{
    int array[SIZE];
    int num_elts;

    printf("Enter number of elements:");
    scanf("%d", &num_elts);

    for(int i=0; i < num_elts; i++){
        array[i] = rand() % num_elts;
    }
    for(int n = 0; n < num_elts; n++){
        if(!find(array,num_elts, n)){
            printf("%d not in array\n", n);
        }
    }
    //printf("The smallest is: %d\n",smallest(array));
    selection_sort(array, num_elts);
    print_array(array,num_elts);
    return 0;
}

void print_array(int arr[], int num_elts){
    for (int i = 0; i < num_elts; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int find(int arr[], int num_elts, int search){
    for (int i = 0; i < num_elts; i++){
        if (arr[i] == search){
            return 1; //search is found
    }
    return 0;
    }
}
/*
int smallest(int arr[SIZE]){
    int min;
    min = arr[0];
    for (int i =1; i < SIZE; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
*/
void selection_sort(int arr[SIZE], int num_elts){
    int min_index;

    for (int j = 0; j < num_elts; j++){
        min_index = j;
        for (int i =j; i < num_elts; i++){
            if(arr[i] < arr[min_index]){
                min_index = i;
            }
        }
        /*swap values */
        int tmp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = tmp;
    }
}
