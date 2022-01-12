#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr = NULL;
	int number;

	number = 5;  // address: 0x46fda0; 0x48f728
	ptr = &number;

	printf("\nNumber = %d; number address = 0x%x\n", number, &number);
	
	//ptr = 0x48f728;
	*ptr = 0xaa55;
	printf("\nvalue in ptr = 0x%x; ptr address = 0x%x\n", *ptr, ptr);
	printf("\nHello World !\n\n");

	return 0;
}