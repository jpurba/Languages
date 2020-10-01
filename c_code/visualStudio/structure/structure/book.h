#ifndef BOOK_H_
#define BOOK_H_


struct StudentData
{
	char* Name;
	int ID;
	int Age;
};

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int  bookId;
} Book;



#endif
