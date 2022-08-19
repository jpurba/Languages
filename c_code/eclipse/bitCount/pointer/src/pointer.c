/*
 ============================================================================
 Name        : pointer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int a,b;
	unsigned int volatile *ptr = NULL;
    //unsigned int const volatile * const ptr1 = NULL; has error
	unsigned int const volatile *ptr1 = NULL;

	ptr = &a;
	a = 10;
	b = 19;
	ptr1 = &b;

	printf("a = %d ; address of a = %p \n", a, &a);
	printf("*ptr = %d; ptr = %p \n", *ptr, ptr);

    printf("*ptr1 = %d; ptr1 = %p \n", *ptr1, ptr1);

    ptr = (unsigned *) 0xFFFFcb98;
    *ptr = 15;
    printf("*ptr1 = %d; ptr1 = %p \n", *ptr1, ptr1);

	(*ptr)++;
	printf("After (*ptr)++; *ptr = %d; ptr = %p \n", *ptr, ptr);

	ptr++;
	printf("After *ptr++; *ptr = %d; ptr = %p \n", *ptr, ptr);




	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
