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
	unsigned int index;

	printf("Count ones with Table: \n");
	for (index = 0; index < MAXNUMBER; index++)
	{
		result = countTable(index);
	}
	return 0;
}