/*
 ============================================================================
 Name        : bitCountTest.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : To test bitCount simple example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bitCount.h"

int main(void) {
        
    int res=0;
    unsigned int idx;
    
    printf("Count ones with Table: \n");
    for(idx=0;idx<=MAX_NUMBER;idx++)
    {
        res = countTable(idx);
    }

    printf("\nCount ones with algorithm 1: \n");
    for(idx=0;idx<=256;idx++)
    {
        res = countOne(idx);
        printf("Number = %d; # of ones = %d; \n",idx,res); 
    }

    printf("\nCount ones with algorithm 2: \n");
    for(idx=0;idx<=MAX_NUMBER;idx++)
    {
        res = countOnes(idx);
        printf("Number = %d; # of ones = %d; \n",idx,res); 
    }

    return 0;
}
