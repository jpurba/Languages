#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int linear_Search(int *num, int target, int size);
void bubbleSort (void);
void bubbleSortPtr (int *num, int sum, int size);

int linear_Search(int *num, int target, int size){
    int i;

    for (i=0; i<size ; i++){
        printf("target = %d; num[%d] = %d\n", target, i, num[i]);
        if(num[i] == target){
            return i;
        }
    }
    return -1;
}

void bubbleSort (void){
    //int a[SIZE] = { 1,2,3,9};
    int a[SIZE] = { 1,2,4,4};
    int sum = 8;
    int i,j;
    int match=0;

    for(i = 0; i< SIZE-1; i++){
        for(j=i; j<SIZE;j++){
            printf("a[%d] = %d; a[%d] = %d \n",i,j, a[i], a[j]);
            if(a[i]+a[j]==sum){
                match++;
                //printf("There is a pair element sum = 8\n");
            }
            else{
                //printf("There is not a pair element sum = 8\n");
            }
        }
    }
    if (match>0)
    {
        printf("There is a pair element sum = 8\n");
    }
    else{
        printf("There is not a pair element sum = 8\n");
    }
}

void bubbleSortPtr (int *num, int sum, int size){

    int i,j;
    int match=0;

    for(i = 0; i< size-1; i++){
        for(j=i; j<size;j++){
            printf("num[%d] = %d; num[%d] = %d \n", i,j, num[i], num[j]);
            if(num[i]+num[j]==sum){
                match++;
                //printf("There is a pair element sum = 8\n");
            }
            else{
                //printf("There is not a pair element sum = 8\n");
            }
        }

    }
    if (match>0)
    {
        printf("There is a pair element sum = 8\n");
    }
    else{
        printf("There is not a pair element sum = 8\n");
    }
}

int main()
{
    //int a[SIZE] = { 1,2,3,9};
    int a[SIZE] = { 1,2,4,4};
    int sum = 8;
    int size = 4;
    int result;
    int target;

    bubbleSort();

    bubbleSortPtr(&a, sum, size);

    //a[0] = 1;
    //a[1] = 2;
    //a[2] = 4;
    //a[3] = 4;

    bubbleSortPtr(&a, sum, size);

    target = 4;
    result = linear_Search(&a, target, size);
    if (result == -1){
        printf("\nThere is no %d in the array\n", target);
    }
    else {
        printf("\nThere is %d with index %d in the array\n", target, result);
    }
    return 0;
}
