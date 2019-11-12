/*
 ============================================================================
 Name        : arrayPointer.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : array pointer examples
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

const int MAX = 4;

int main(void)
{

    int var[] = { 10, 20, 30, 40};
    char *names[] = {"Josua Purba","Rohany Purba", "Jeremiah Purba","Joseph Purba"};
    int i;
    int *ptr[MAX];


    for(i = 0; i<MAX;i++)
    { 
         ptr[i] = &var[i]; // assign the address of integer to integer
    }

    for(i=0; i<MAX; i++)
    {
        printf("Value of var[%d] = %d \n",i, *ptr[i]);        
    }
    
    printf("\n");
    for(i=0; i<MAX; i++)
    {        
        printf("Value of names[%d] = %s\n",i, names[i]);
    }

    return 0;
}


