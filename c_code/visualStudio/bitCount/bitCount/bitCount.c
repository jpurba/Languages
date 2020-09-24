/*
 ============================================================================
 Name        : bitCount.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : bit Count simple example
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "bitCount.h"

int countTable(unsigned int input)
{
	/* Note: This function has limit only for 4 bits */
	unsigned int inputBit;
	int table[MAXNUMBER] = { 0,1,1,2,1,2,2,3,1,2, 2, 3, 3, 3, 3, 4 };  // # of ones
//        int number[16] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };}

	if ((input < 0) && (input > 15))
	{
		printf("Input number is out of range \n");
		return -1;
	}

	inputBit = input & 15;
	printf("Number of ones on %d is %d\n", input, table[inputBit]);
	return table[inputBit];
}

int countOne(int input)
{
	int count;
	for (count = 0; input != 0; input >>= 1)
	{
		if (input & 01)
			++count;
	}

	return count;
}

/* Note: This function has limit only for 4 bits */
int countOnes(int input) {

	
	int i;
	int bits = 0;
	int size = 0;
	size = sizeof(input) * 4;  // size of returns size_t unsigned number
	//printf("sizeof(%d) = %d \n", input, sizeof(input));

	for (i = 0; i < size; i++)
	{
		//printf("countOnes: i= %d; input=%d; bits=%d \n", i, input, bits);
		bits += input & 1;
		input >>= 1;
	}
	return bits;
}