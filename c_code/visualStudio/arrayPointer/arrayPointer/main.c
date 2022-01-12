#include <stdio.h>

#define ARRAYSIZE 3


void multiplyVec(int* v1, int* v2, int* v3, int n);

int main(void)
{
	int* ptr = NULL;
	int* ptr2 = NULL;
	int* ptr3 = NULL;
	int i;

	int v1[ARRAYSIZE];
	int v2[ARRAYSIZE];
	int v3[ARRAYSIZE];

	ptr = &v1;

	printf("Enter elements for first array\n");
	for (i = 0; i < ARRAYSIZE; i++)
	{
		//scanf("%d", &v1[i]);
		scanf("%d", (ptr + i));
	}

	printf("\nFirst array is: \n");
	for (i = 0; i < ARRAYSIZE; i++)
	{
		//printf("%d ", v1[i]);
		printf("%d ", *(ptr + i));
	}

	ptr2 = &v2;

	printf("\nEnter elements for second array\n");
	for (i = 0; i < ARRAYSIZE; i++)
	{
		//scanf("%d", &v2[i]);
		scanf("%d", (ptr2 + i));
	}

	printf("\nSecond array is: \n");
	for (i = 0; i < ARRAYSIZE; i++)
	{
		//printf("%d ", v2[i]);
		printf("%d ", *(ptr2 + i));
	}


	ptr3 = &v3;
	//printf("Multiply both array: \n");
	for (i = 0; i < ARRAYSIZE; i++)
	{
		//v3[i] = v1[i] * v2[i];
		*(ptr3 + i) = *(ptr + i) * *(ptr2 + i);
		//printf("i = %d; v1 = %d; v2 = %d; v3 = %d\n", i, *(ptr + i), *(ptr2 + i), *(ptr3 + i));
	}

	printf("\n\nMultiplication results is: \n");
	for (i = 0; i < ARRAYSIZE; i++)
	{
		printf("%d ", *(ptr3 +i));
	}

	printf("\n");

	return 0;
}