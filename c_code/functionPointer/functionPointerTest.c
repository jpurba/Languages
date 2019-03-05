/*
 ============================================================================
 Name        : functionPointerTest.c
 Author      : Josua Purba 
 Version     :
 Copyright   : copyright 2018 - 2028
 Description : To test function pointer modules
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "functionPointer.h"

int main()
{
    int res,i;

    int A[] = {3,2,1,5,6,4}; // will be sorted in increasing order {1,2,3,4,5,6}

    int AA[] = {-31,22,-1,50,-6,4}; // will be sorted {-1,4,-6,22,-31, 50}

    // pointer to function that should take (int,int) as arguments/parameter and return int
    int (*p)(int,int);
    
    // pointer to function that should take (void) as arguments/parameter and return void
    void (*n)(void);

    // pointer to function that should take (char) as arguments/parameter and return void
    void (*m)(char *);

    // function poiner as argument for call-back function
    void (*ptr)() = printHello;
    printf("Pass function pointer as arguments, ");
    B(ptr);
    printf("\n");

    printf("Pass function pointer as arguments 2, ");
    B(printHello);  //printHello is call-back function
    printf("\n");

    p = &add; 
    res = (*p)(2,3);
    printf("call function pointer : %d \n", res);

    p = add; 
    res = p(9,6);
    printf("call function pointer 2 : %d \n", res);

    n = printHello;
    (*n)();

    m = printInput; 
    m("Josua");

    //Bubblesort example
    printf("Bubble sort array: ");
    bubbleSort(A,6);   
    for(i=0;i<6;i++)
       printf("%d ", A[i]);    
 
    printf("\n");
 
    //Bubblesort with call back example
    printf("Bubble sort array with call back: ");
    bubbleSortCall(A,6,compare);   
    for(i=0;i<6;i++)
       printf("%d ", A[i]);    
 
    printf("\n");


    //Bubblesort with call back and absolute compare example
    printf("Bubble sort with absolute compare and call back: ");
    bubbleSortCall(AA,6,absoluteCompare);   
    for(i=0;i<6;i++)
       printf("%d ", AA[i]);    
 
    printf("\n");

    //quicksort with call back and absolute compare example
    printf("Quick sort with absolute compare and call back: ");
    qsort(AA,6,sizeof(int),compareQuick);   
    for(i=0;i<6;i++)
       printf("%d ", AA[i]);    
 
    printf("\n");

    // To test pass function pointer as an argument
    res = computeSum(&func, 0,1);
    printf("sum: %d \n", res);

    // To test pass function pointer as an argument
    res = computeSum(&func, 1,2);
    printf("sum: %d \n", res);

    return 0;
}
