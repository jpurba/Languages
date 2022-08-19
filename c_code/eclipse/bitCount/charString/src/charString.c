/*
 ============================================================================
 Name        : charString.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char name[20];
	printf("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf("Enter name: ");
	scanf("%s", name);
	printf("Your name is %s. \n", name);


	return EXIT_SUCCESS;
}
