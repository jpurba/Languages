/*
 ============================================================================
 Name        : arrayPointer.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : array of pointer examples
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

const int MAX = 5;

int main(void)
{

    /* declare same type of variables */
    int a,b,c,d;

    /* we can create an integer pointer array to store the address of these integer */
    int *ptr[MAX];

    int var[] = { 10, 20, 30, 40};
    char *names[] = {"Josua Purba","Rohany Purba", "Jeremiah Purba","Joseph Purba"};
    int i;

    /* assign the address of all integer variables */
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    ptr[3] = &d;
    ptr[4] = &var[0];  // assign the address of var to the last pointer

    /* assign the values to a,b,c,d */
    a=101;
    b=102;
    c=103;
    d=104;

    /* print values using pointer variable */
    printf("Value of a: %d; b: %d; c: %d; d: %d; e: %d \n",*ptr[0],*ptr[1],*ptr[2],*ptr[3],*ptr[4]);

   /* change value to each integer using pointer var */
   *ptr[0] += 10;
   *ptr[1] -= 10;
   *ptr[2] *= 10;
   *ptr[3] /= 10;
   ptr[4] = &var[3];
   
    /* print values using pointer variable */
    printf("Value of a: %d; b: %d; c: %d; d: %d; e: %d \n",*ptr[0],*ptr[1],*ptr[2],*ptr[3],*ptr[4]);


    return 0;
}


