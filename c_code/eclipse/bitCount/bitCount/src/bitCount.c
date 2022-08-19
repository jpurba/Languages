/*
 ============================================================================
 Name        : bitCount.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXNUMBER 16

unsigned int bitreverse(unsigned int num){
	unsigned int rev_bits=0;

	while (num > 0){
		// keep shifting each bit
		rev_bits = rev_bits << 1;

		// if the bit is 1 then XOR with 1
		if(num & 1){
			rev_bits = rev_bits ^ 1;
		}
		// right shift num
		num = num >>1;
	}

	return rev_bits;
}

int countTable(unsigned int input){
    /*This function has limit only for 4 bits */
	unsigned int inputBit;
	int table[MAXNUMBER] = {0,1,1,2,1,2,2,3,1,2, 2, 3, 3, 3, 3, 4};
	//int for[16]        = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15);

	if((input<0) && (input>15)){
		//printf("Inlut number is out of range \n");
		return -1;
	}
    inputBit = input&15;
    //printf("Number of ones on %d is %d\n", input, table[inputBit]);

    return table[inputBit];
}

int countOne(int input) {
	unsigned int count = 0;

	for (count=0; input !=0 ; input>>=1){
		printf("countOne: input = %d; count = %d; \n", input, count);
		if(input&01)
			++count;
	}
	return count;
}

int countOneWhile(int input){
	int count=0;
	while(input&01){
		count++;
		//printf("countOneWhile: input = %d; count = %d\n",input, count);
	    input >>=1;
	}
	return count;
}

int setBit(int input, unsigned char position){
	int mask = (0x01 << position);
	return input | mask;
}

int clearBit(int input, unsigned char position){
	int mask = (0x01 << position);
	return (input &=~mask);
}

int main(void) {
	FILE *fptr;
	int i;
	int result=0;
	int a;
    int position;
    const volatile int * const ptr = 0x102793412;
    unsigned int rev_bit, num;

	//open file
	fptr = fopen("output.txt","w");

	if(fptr==NULL){
		printf("FIle can't be found !\n");
		exit(1);
	}


	printf("Count ones with Table: \n");
	fprintf(fptr,"Count ones with Table: \n");
	for (i=0; i<MAXNUMBER; i++){
		result = countTable(i);
		//printf("Number = %d; # of ones = %d \n", i, result);
		fprintf(fptr,"Number = %d; # of ones = %d \n", i, result);
	}

	printf("Count ones with while: \n");
	fprintf(fptr,"Count ones with while: \n");
	for(i=0; i<32;i++){
		result = countOneWhile(i);
		//printf("Number = %d; # of ones = %d \n", i, result);
		fprintf(fptr,"Number = %d; # of ones = %d \n", i, result);
	}

	printf("Count ones with countOne: \n");
	fprintf(fptr,"Count ones with countOne: \n");
	for(i=0; i<32;i++){
		result = countOne(i);
		printf("Number = %d; # of ones = %d \n", i, result);
		fprintf(fptr,"Number = %d; # of ones = %d \n", i, result);
	}

	a = 0;
	position = 0;
    printf("\nOrigonal a = %d or in hex a = 0x%x \n", a, a);
    result = setBit(a,position);
    printf("After set bit on position %d, a = %d or in hex a = 0x%x \n", position, result, result);

    position = 1;
    printf("\nOriginal result = %d or in hex a = 0x%x \n", result, result);
    result = setBit(result,position);
    printf("After set bit on position %d, a = %d or in hex a = 0x%x \n", position, result, result);


    position = 0;
    printf("\nOriginal result = %d or in hex a = 0x%x \n", result, result);
    result = clearBit(result,position);
    printf("After set bit on position %d, a = %d or in hex a = 0x%x \n", position, result, result);

    num = 2;
    rev_bit = bitreverse(num);
    printf("num = %d and rev_bit = %d \n", num, rev_bit);

    num = 11;
    rev_bit = bitreverse(num);
    printf("num = %d and rev_bit = %d \n", num, rev_bit);

    num = 1495;
    rev_bit = bitreverse(num);
    printf("num = %d and rev_bit = %d \n", num, rev_bit);

	fclose(fptr);
	return EXIT_SUCCESS;
}
