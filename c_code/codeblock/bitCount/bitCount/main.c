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

int main(void)
{
	int result = 0;
	int index;
	FILE* fptr;

	// open file
	fptr = fopen("output.txt", "w");

	if (fptr == NULL)
	{
		printf("File can't be found !\n");
		exit(1);
	}

	printf("Count ones with Table: \n");
	fprintf(fptr,"Count ones with Table: \n");
	for (index = 0; index < MAXNUMBER; index++)
	{
		result = countTable(index);
		printf("Number = %d; # of ones = %d \n", index, result);
		fprintf(fptr, "Number = %d; # of ones = %d \n", index, result);
	}

	printf("\nCount ones with countOne: \n");
	fprintf(fptr,"\nCount ones with countOne: \n");
	for (index = 0; index < 32; index++)
	{
		result = countOne(index);
		printf("Number = %d; # of ones = %d \n", index, result);
		fprintf(fptr,"Number = %d; # of ones = %d \n", index, result);
	}

	index = 65535;
	result = countOne(index);
	printf("Number = %d; # of ones = %d \n", index, result);
	fprintf(fptr,"Number = %d; # of ones = %d \n", index, result);


	printf("\nCount ones with countOneWhile: \n");
	fprintf(fptr,"\nCount ones with countOneWhile: \n");
	for (index = 0; index < 32; index++)
	{
		result = countOneWhile(index);
		printf("Number = %d; # of ones = %d \n", index, result);
		fprintf(fptr,"Number = %d; # of ones = %d \n", index, result);
	}

	index = 65535;
	result = countOneWhile(index);
	printf("Number = %d; # of ones = %d \n", index, result);
	fprintf(fptr,"Number = %d; # of ones = %d \n", index, result);


	printf("\nCount ones with countOnes funtion: \n");
	fprintf(fptr,"\nCount ones with countOnes funtion: \n");
	for (index = 0; index < 32; index++)
	{
		result = countOnes(index);
		printf("Number = %d; # of ones = %d \n", index, result);
		fprintf(fptr,"Number = %d; # of ones = %d \n", index, result);
	}

	index = 65535;
	result = countOnes(index);
	printf("Number = %d; # of ones = %d \n", index, result);
	fprintf(fptr,"Number = %d; # of ones = %d \n", index, result);

	fclose(fptr);
	return 0;

}
