#include <stdio.h>
#include <stdlib.h>
//#include "bubbleSort.h"
//#include "selectionSort.h"


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

    int i, j, k, mn;

    /* traverse the entire array */
    for(i=0; i<sz; i++){
        //printf("inside i loop, i=%d \n",i);
        /* find the min */
        mn = i;
        /* compare against all other elements */
        for(j=i+1; j<sz; j++){
            //printf("inside j loop, j=%d \n",j);
            //printf("mn= %d; *(a+j)= %d; *(a+mn) = %d \n", mn, *(a+j), *(a+mn));
            if(*(a+j) < *(a+mn)) {
                mn = j;
            }

            // To print out
            for(k=0; k<sz; k++){
               printf("%d ",*(a+k));
            }
            printf("\n");
        }

        //printf("a[mn] = %d, a[i] = %d \n",a[mn], a[i]);
        swap((a+mn), (a+i));

        // To print out
        for(k=0; k<sz; k++){
            printf("%d ",*(a+k));
        }
        printf("\n\n");
    }
}

void selectionSort1(int a[], int sz){

    int i, j, k, mn;

    /* traverse the entire array */
    for(i=0; i<sz; i++){
        printf("inside i loop, i=%d \n",i);
        /* find the min */
        mn = i;
        /* compare against all other elements */
        for(j=i+1; j<sz; j++){
            printf("inside j loop, j=%d \n",j);
            //printf("mn= %d; *(a+j)= %d; *(a+mn) = %d \n", mn, *(a+j), *(a+mn));
            if(a[j] < a[mn]) {
                mn = j;
            }

            // To print out
            for(k=0; k<sz; k++){
               printf("%d ",a[k]);
            }
            printf("\n");
        }

        printf("a[mn] = %d, a[i] = %d \n",a[mn], a[i]);
        swap(&a[mn], &a[i]);

        // To print out
        for(k=0; k<sz; k++){
            printf("%d ",a[k]);
        }
        printf("\n\n");
    }
}

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

int HasPairWithSum(int *a, int size, int sum){
    int low = 0;
    int s;
    while(low < size-1){
        s = a[low] + a[size-1];
        if(s==sum){
            return 0; // true
        }
        low++;
    }
    return 1;  //false
}

int main()
{
    int k;
    int a[10] = {5, 7, 1, 3, 4, 9, 2, 6, 8, 0};
    int b[10] = {5, 7, 1, 3, 4, 9, 2, 6, 8, 0};
    int c[4] = {1,2,3,9};
    int d[4] = {1,2,4,4};
    int results;
    int sum;
    int size = sizeof(a) / sizeof(a[0]);
    int size1 = sizeof(c) / sizeof(c[0]);

    for(k=0; k<size; k++){
        printf("%d ", *(a+k));
    }
    printf("\n======================\n");
    printf("\n== with Bubble Sort ==\n");
    printf("\n======================\n");

    bubbleSort(&a, size);

    printf("\n==========================\n");
    printf("\n== with Selection Sort1  ==\n");
    printf("\n==========================\n");

    selectionSort(&b, size);

    printf("\n==========================\n");
    printf("\n== with HasPairWithSum  ==\n");
    printf("\n==========================\n");
    sum = 8;
    results = HasPairWithSum(&c, size1, sum);

    printf("Results = %d\n", results);

    results = HasPairWithSum(&d, size1, sum);

    printf("Results = %d\n", results);


    return 0;
}
