#include <stdlib.h>
#include <stdio.h>
#include "selectionSort.h"

void swap(int *n, int*m){
    int tmp;
    tmp = *m;
    *m = *n;
    *n = tmp;
}

void printArray(int *a, int sz){
    int i;
    for(i=0; i<sz; i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
}

void selectionSort(int *a, int sz){

    int i, j, mn;

    /* traverse the entire array */
    for(i=0; i<sz; i++){
        /* find the min */
        mn = i;
        /* compare against all other elements */
        for(j=i+1; j<sz; j++){
            //printf("mn= %d; *(a+j)= %d; *(a+mn) = %d \n", mn, *(a+j), *(a+mn));
            if(*(a+j) < *(a+mn)) {
                mn = j;
            }

            // To print out
            for(i=0; i<sz; i++){
               printf("%d ",*(a+i));
            }
            printf("\n");
        }

        //swap(*(a+mn), *(a+i));

        // To print out
        for(i=0; i<sz; i++){
               printf("%d ",*(a+i));
        }
        printf("\n\n");
    }
}
