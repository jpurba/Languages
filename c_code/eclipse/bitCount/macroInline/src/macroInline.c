/*
 ============================================================================
 Name        : macroInline.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// macro examples
#define SQUARE(x) (x*x)
#define SWAP(a,b) ({a^=b; b^=a; a^=b;})
#define MIN(a,b) ((a)<=(b) ? (a):(b))
#define MAX(a,b) ((a)>=(b) ? (a):(b))
#define SECONDS_PER_YEAR (60*60*24*365)

void static inline func1(int a, int b){
	printf("Inline func1: a = %d and b = %d \n", a,b);
}

int static inline func2(int x){
	return x*x;
}
int main(void) {

	int a,b,x;
	unsigned long secondsPerYear = SECONDS_PER_YEAR;

	a=7;
	b=19;
	x=5;

	printf("Before swap, a=%d; b=%d; MIN(%d,%d)=%d; MAX(%d,%d)=%d \n", a,b,a,b,MIN(a,b),a,b,MAX(a,b));
	printf("x= %d; x^2 = %d \n", x, SQUARE(x));
	printf("After SQUARE, a^2 = %d\n",SQUARE(a));

    SWAP(a,b);
	printf("After SWAP, a=%d; b=%d; MIN(%d,%d)=%d; MAX(%d,%d)=%d \n", a,b,a,b,MIN(a,b),a,b,MAX(a,b));

	printf("Number of seconds per year = %ld \n", secondsPerYear);

	// call inline function 1 and 2
	func1(a,b);
	printf("\nInline func2, square of %d = %d \n", a, func2(a));

	return EXIT_SUCCESS;
}
