/*
 ============================================================================
 Name        : bitwiseTest.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : To test bitwise simple example
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "bitwise.h"


int main(void)
{
	int a;
	int result = 0;
	unsigned char position;
	FILE* fptr;

	// File open
	fptr = fopen("output.txt", "w");

	if (fptr == NULL)
	{
		printf("Error on opening the file \n");
		exit(1);
	}

	a = 0;
	position = 0;
	printf("original: a = %d or in hex a = 0x%x \n", a, a);
	fprintf(fptr, "original: a = %d or in hex a = 0x%x \n", a, a);
	result = setBit(a, position);
	printf("after setBit position = %d: a= %d or in hex a= 0x%x \n", position,result, result);
	fprintf(fptr, "after setBit position = %d: a= %d or in hex a= 0x%x \n", position, result, result);

	result = setBit1(result);
	printf("\nafter setBit1 : a = %d or in hex a=0x%x \n", result, result);
	fprintf(fptr,"\nafter setBit1 : a = % d or in hex a = 0x % x \n", result, result);

	result = setBit2(result);
	printf("after setBit2 : a = %d or in hex a=0x%x \n", result, result);
	fprintf(fptr, "after setBit2 : a = %d or in hex a=0x%x \n", result, result);
	
	result = setBit3(result);
	printf("after setBit3 : a = %d or in hex a=0x%x \n", result, result);
	fprintf(fptr, "after setBit3 : a = %d or in hex a=0x%x \n", result, result);
	
	position = 4;
	result = setBit(result, position);
	printf("after setBit position = %d: a= %d or in hex a= 0x%x \n", position, result, result);
	fprintf(fptr, "after setBit position = %d: a= %d or in hex a= 0x%x \n", position, result, result);
	
	fclose(fptr);
	return 0;
}