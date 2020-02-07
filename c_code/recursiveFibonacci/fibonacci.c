/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : fibonacci number example 0,1,1,2,3,5,8,13, ... 
 ============================================================================
 */
#include <stdio.h>
#include "fibonacci.h"

int fib(int input){

    if (input<=1)
        return input ;
    else if (input < 3)
          return 1 ;
    else
        return (fib(input -1) + fib(input-2)) ;
}

void printFibo(int input){
    int i;    
    printf("All Fibonacci sequence up to %d number\n", input);
    for(i=0;i<=input;i++)
        printf("Fibonacci #: %d is %d\n", i, fib(i));
    
}

int getNumber(void){
    int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    return number;
}
