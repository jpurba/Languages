/*
 ============================================================================
 Name        : fibonacciTest.c
 Author      : Josua Purba 
 Version     :
 Copyright   : copyright 2018 - 2028
 Description : To test fibonacci module
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main()
{
    int term = 0;
    int res; 

    printf("Enter the number of terms: ");
    scanf("%d", &term);

    res = printFibonacci(term);
    printf("\n");
    
    res = fibRecursive(term-1);
    printf("Using Recursive, the %d term fibonanci is %d ", term,res);
    printf("\n");
    
    res = fibonacciLimit(term);
    printf("\n");

    return 0;
}
