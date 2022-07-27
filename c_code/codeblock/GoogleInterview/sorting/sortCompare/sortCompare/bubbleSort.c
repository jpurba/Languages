#include <stdlib.h>
#include <stdio.h>
#include "bubbleSort.h"

void bubbleSort(int * a, int size){

    int i, j, k, temp;

    for(i = 0; i < size-1; i++){
        for(j=0; j< size-1; j++){
            if(*(a+j) > *(a+j+1)){
                temp = *(a+j+1);
                *(a+j+1) = *(a+j);
                *(a+j) = temp;
            }

            for(k=0; k<size; k++){
                printf("%d ", *(a+k));
            }
            printf("\n");
        }
        for(k=0; k<size; k++){
            printf("%d ", *(a+k));
        }
        printf("\n\n");
    }
}
void bubbleSortMod(int *a, int size){

    int i, j, k, temp;
    for(i = 0; i < size-1; i++){
        for(j=i; j< size-1; j++){
            if(*(a+j) > *(a+j-1)){
                temp = *(a+j+1);
                *(a+j+1) = *(a+j);
                *(a+j) = temp;
            }

            for(k=0; k<size; k++){
                printf("%d ", *(a+k));
            }
            printf("\n");
        }
        for(k=0; k<size; k++){
            printf("%d ", *(a+k));
        }
        printf("\n\n");
    }
}


