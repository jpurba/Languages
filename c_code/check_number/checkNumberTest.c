/*
 ============================================================================
 Name        : checkNumberTest.c
 Author      : Josua Purba 
 Version     :
 Copyright   : copyright 2018 - 2028
 Description : To test fibonacci module
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "checkNumber.h"

int main()
{
    int num = 0;
    int res; 

    printf("Enter integer number: ");
    scanf("%d", &num);

    
    printf("\nCheck even or odd number: ");
    evenOdd(num);
    printf("\n");
    
    printf("\nCheck even or odd number with operator: ");
    evenOddOperator(num);
    printf("\n");        

    // calculate prime number
    printf("\nCheck if number is prime or not: ");
    primeCheck(num);
    printf("\n\n");       

    // calculate prime number
    primeCalc(num);
    printf("\n"); 

    // calculate factorial
    factorialCalc(num);
    printf("\n"); 

    printf("Calculate factorial with recursive function \n");
    printf("%d factorial = %ld \n", num, factorial(num));

    return 0;
}
