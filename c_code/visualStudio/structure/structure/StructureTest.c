#include <stdio.h>
#include <string.h>
#include "book.h"

int main (void) 
{
	struct StudentData student;
	Book book;
	FILE* fptr;

	fptr = fopen("output.txt", "w");

	if (fptr == NULL)
	{
		printf("Error on opening the file \n");
		exit(1);
	}

	/*For Student data structure*/
	student.Name = "Josua Purba";
	student.ID = 2161969;
	student.Age = 19;

	printf("Student Name: %s \n", student.Name);
	fprintf(fptr, "Student Name: %s \n", student.Name);
	printf("Student ID: %d \n", student.ID);
	fprintf(fptr, "Student ID: %d \n", student.ID);
	printf("Student Age: %d \n", student.Age);
	fprintf(fptr, "Student Age: %d \n", student.Age);

	/* For book structure */
	strcpy (book.title, "C Programming");
	strcpy (book.author, "Josua Purba");
	strcpy (book.subject, "C Programming Tutorial");
	book.bookId = 6495407;

	printf("\nBook Title: %s\n", book.title);
	fprintf(fptr, "\nBook Title: %s\n", book.title);
	printf("Book Author: %s\n", book.author);
	fprintf(fptr, "Book Author: %s\n", book.author);

	printf("Book Subject: %s\n", book.subject);
	fprintf(fptr, "Book Subject: %s\n", book.subject);
	printf("Book ID: %d \n", book.bookId);
	fprintf(fptr, "Book ID: %d \n", book.bookId);

	fclose(fptr);

	return 0;
}
