/*
 ============================================================================
 Name        : fibonacciTest.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : To test fibonacci number example 0,1,1,2,3,5,8,13, ... 
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main(void) {

    int number, fibNum;
    int result=0;
    
    number = getNumber();
    fibNum = fib(number);
    printf("\nThe %d fibonacci number is %d \n",number,fibNum);
    printFibo(number);
	
    return 0;
}
