/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : Fibonacci module examples
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int fibRecursive(unsigned int input)
{    

    if (input < 2)
    {
        //printf("%d",input);
        return input;
    }
    else
        return fibRecursive(input-1) + fibRecursive(input-2);    
}

int printFibonacci(unsigned int input)
{
    int i, t1=0, t2=1, nextTerm;
    printf("%d terms Fibonacci series: ", input);
    for (i = 1; i<=input; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

int fibonacciLimit (unsigned int input)
{

    int t1 = 0, t2=1, nextTerm;

    printf("Fibonacci series less than %d is: %d, %d, ", input,t1,t2);
    nextTerm = t1 + t2;
    while(nextTerm <= input)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1+t2;
    } 
   
    printf("\n");
    return 0;

}
