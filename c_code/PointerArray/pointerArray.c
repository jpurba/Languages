/*
 ============================================================================
 Name        : pointerArray.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : pointer to an array examples
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

const int MAX = 5;

int main(void)
{

    int(*a)[MAX];
    int var[] = { 10, 20, 30, 40,50};

    int i;

    // Points to the whole array var
    a = &var;


    for(i=0; i<MAX; i++)
    {
        printf("Pointer a[%d] point to var[%d] with value %d \n",i,i, *(*a+i));        
    }        

    

    return 0;
}


