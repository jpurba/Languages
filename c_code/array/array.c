/*
 ============================================================================
 Name        : array.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : array examples
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{

    int array[SIZE];
    int array1[SIZE];
    int array2[SIZE];
    int n,i;
    int sum=0;
    float avg = 0.0;
    int temp = 0;

    // initialize array to 0
    for(i = 0; i<SIZE;i++)
    { 
         array[i]=i;
         array1[i]=2*i;
         array2[i]=3*i;
    }

    for(i=0; i<SIZE; i++)
    {
        printf("array[%d] = %d \n",i, array[i]);
        sum += array[i];
    }
    avg = (float)sum/SIZE;    
    printf("sum = %d; average = %8.2f \n", sum, avg);
    printf("\n");
    sum = 0;
    avg = 0.0;

    for(i=0; i<SIZE; i++)
    {
        printf("array1[%d] = %d \n",i, array1[i]);
        sum += array1[i];
    }
    avg = (float)sum/SIZE;    
    printf("sum = %d; average = %8.2f \n", sum, avg);
    printf("\n");
    sum = 0;
    avg = 0.0;

    for(i=0; i<SIZE; i++)
    {
        printf("array2[%d] = %d \n",i, array2[i]);
        sum += array2[i];
    }
    avg = (float)sum/SIZE;    
    printf("sum = %d; average = %8.2f \n", sum, avg);
    printf("\n");
    sum = 0;
    avg = 0.0;
        
    
    return 0;
}


