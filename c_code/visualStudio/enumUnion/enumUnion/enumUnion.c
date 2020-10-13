#include <stdio.h>
#include <stdlib.h>
#include "enumUnion.h"

int main()
{
	data unionData;
	Weekdays days;
	FILE * fptr;

	fptr = fopen("output.txt", "w");
	
	if (fptr == NULL)
	{
		printf("Error on opening the file \n");
		exit(1);
	}

	printf("Memory size occupied by unionData is %d\n", sizeof(unionData));
	fprintf(fptr, "Memory size occupied by unionData is %d\n", sizeof(unionData));

	printf("When unionData's field is used one by one \n");
	fprintf(fptr, "When unionData's field is used one by one \n");

	unionData.i = 15;
	printf("unionData.i : %d \n", unionData.i);
	fprintf(fptr, "unionData.i : %d \n", unionData.i);

	unionData.f = 123.45;
	printf("unionData.f : %f \n", unionData.f);
	fprintf(fptr, "unionData.f : %f \n", unionData.f);

	strcpy(unionData.str,"Josua Purba");
	printf("unionData.str : %s \n", unionData.str);
	fprintf(fptr, "unionData.str : %s \n", unionData.str);


	printf("\nWhen unionData's field is used more than one \n");
	fprintf(fptr, "\nWhen unionData's field is used more than one \n");


	unionData.i = 57;
	unionData.f = 176.98;

	printf("\nThe first union output is wrong because 2 field are used\n");
	fprintf(fptr, "\nThe first union output is wrong because 2 field are used\n");

	printf("unionData.i : %d\n", unionData.i);
	fprintf(fptr, "unionData.i : %d\n", unionData.i);
	printf("unionData.f : %f\n", unionData.f);
	fprintf(fptr, "unionData.f : %f\n", unionData.f);

	unionData.i = 10;
	unionData.f = 220.5;
	strcpy(unionData.str, "C Programming");

	printf("\nThe first 2 union output are wrong because the string is used\n");
	fprintf(fptr,"\nThe first 2 union output are wrong because the string is used\n");

	printf("unionData.i : %d\n", unionData.i);
	fprintf(fptr,"unionData.i : %d\n", unionData.i);
	printf("unionData.f : %f\n", unionData.f);
	fprintf(fptr,"unionData.f : %f\n", unionData.f);
	printf("unionData.str : %s\n", unionData.str);
	fprintf(fptr, "unionData.str : %s\n", unionData.str);


	fclose(fptr);
	return 0;
}