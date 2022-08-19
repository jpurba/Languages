/*
 ============================================================================
 Name        : powerOfTwo.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// If the input is a power of 2, then return 0
// otherwise return 1

int isPowerOfTwo(int n){
	int result = 0;

	if (n==0){
		result = 0;
		return result;
	}

	while(n!=1){
		if(n%2 != 0){
			result = 0;
			return result;
		}
		n = n >> 1;

	}
	result = 1;
	return result;
}

int bitSet(unsigned int n){

	int result = 0;
	int index = 0;
	int mask = 0;

	for (index = 0; index < n; index ++){
		printf("index = %d; mask = %d; result = %d \n", index, mask, result);

		mask = 1 << index;
		result = result | mask;
	}

	return result;
}

int main(void) {
	int result = 0;
	int number = 0;

	number = 3;
	result = bitSet(number);
	printf("Set %d LSB bits on the number = %d \n\n", number, result);


	number = 4;
	result = bitSet(number);
	printf("Set %d LSB bits on the number = %d \n\n", number, result);


	number = 31;
	result = isPowerOfTwo(number);
	if(result == 1){
		printf("\n%d is power of two \n", number);
	}
	else{
		printf("\n%d is not power of two \n", number);
	}

	number = 512;
	result = isPowerOfTwo(number);
	if(result == 1){
		printf("\n%d is power of two \n", number);
	}
	else{
		printf("\n%d is not power of two \n", number);
	}

	number = 6;
	result = isPowerOfTwo(number);
	if(result == 1){
		printf("\n%d is power of two \n", number);
	}
	else{
		printf("\n%d is not power of two \n", number);
	}

	return EXIT_SUCCESS;
}
