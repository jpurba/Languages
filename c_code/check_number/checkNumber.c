/*
 ============================================================================
 Name        : checkNumber.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : prime number, factorial and even/odd examples
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "checkNumber.h"

// To check whether number is odd or even
void evenOdd(int input)
{    

    if (input % 2 == 0 )
    {
        printf("%d is even number",input);
    }
    else
    {
        printf("%d is odd number",input);
    }
}

// To check whether number is odd or even with operator
void evenOddOperator(int input)
{
    (input % 2 == 0) ? printf("%d is even number",input) : printf("%d is odd number",input);
    
}

//Calculate the first n prime number
void primeCalc(int in)
{

     int count, c=0;
     int i=3;

     if(in >=1)
     {
         printf("The first %d prime numbers are: \n", in);
         printf("2, ");
     }

     for(count = 2; count<=in;)
     {
         //printf("count=%d, c=%d, i=%d \n",count,c,i);
         for(c=2;c<=i-1;c++)
         { 
             if(i%c == 0)
                break;     // Not prime number
         }
         if(c==i)
         {
             printf(", %d ",i);
             count++;
         }
         i++;
     } 
     printf("\n");

}

void primeCheck(int in)
{

    int i, flag = 0;

    for(i=2; i<=in/2; ++i)
    {
        // condition for non-prime number
        {
             if(in%i ==0)  // input number is divisible by any i
             {
                 flag = 1;
                 break;
             }
        }
    }

    if (in==1)
    { 
        printf("1 is neither a prime nor a composite number. \n");
    }
    else
    {
        if (flag == 0)
           printf("%d is a prime number.",in);
        else
           printf("%d is not a prime number.",in);
    }

}

void factorialCalc(int in)
{
    int i;
    unsigned long long factorial = 1;

    if (in < 0)
       printf("Error ! Factorial of negative number does not exist !\n");
    else
    {
        for(i=1; i<=in; ++i)
        {
            factorial *= i;  // factorial = factorial * i
        }
        printf("%d Factorial (%d !) = %llu\n", in, in, factorial);
    } 


}

long int factorial(int in)
{

    if (in >= 1)
       return in * factorial(in-1);
    else
       return 1;
}


