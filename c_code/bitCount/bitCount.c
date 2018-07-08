/*
 ============================================================================
 Name        : bitCount.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Bitwise simple example
 ============================================================================
 */
#include <stdio.h>
#include "bitCount.h"


int countTable(unsigned int input){
    /* Note: This function has limit only for 4 bitss */
    unsigned int temp;
    int table[MAX_NUMBER]={0,1,1,2,1,2,2,3,1,2,2,3,3,3,3,4}; // # of ones

    if((input<0) && (input>15))
    {
        printf("Input number is out of range \n");
        return -1;
    }
    temp = input&15;
    printf("Number of ones on %d is %d\n", input,table[temp]);
    return table[temp];
}

int countOne(int input){
    int count;
    for(count=0;input!=0; input>>=1)
    {
        //printf("countOnes: input = %d; count = %d \n",input,count);
        if(input&01)
             ++count;
    }
    return count;
}

int countOnes(int input){
/* Note: This function has limit only for 4 bitss */
    int i;
    int bits = 0;
    for(i=0;i<sizeof(input); i++)
    {
        //printf("countOnes:i=%d;input=%d;bits=%d \n",i,input,bits);
        bits += input & 0001;
        input >>=1;;
    }
    return bits;
}
