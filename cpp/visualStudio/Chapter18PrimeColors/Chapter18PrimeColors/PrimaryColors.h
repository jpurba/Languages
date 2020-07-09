#ifndef PRIMARYCOLORS_H
#define PRIMARYCOLORS_H

#include <iostream>
#include <string>
#include "Color.h";

using namespace std;

class PrimaryColors
{
private:
	Color* head;

public:
	// Constructor
	PrimaryColors(void);

	// Destructor
	~PrimaryColors();

	// Linked list operations
	void appendNode(string inputString);
	int insertNode(int inputNumber, string inputColor);
	int deleteNode(int inputNumber);
	void displayList(void);
	void reverseList(void);
	int searchNode(string inputcolor);
	Color* getStart(void)
	{
		return this->head;
	}

};


// Function Prototype that are called from menu function

void menu(void);
void appendNode(PrimaryColors& list);
void insertNode(PrimaryColors& list);
void deleteNode(PrimaryColors& list);
void printList(PrimaryColors& list);
void reverseNode(PrimaryColors& list);
void searchNode(PrimaryColors& list);


#endif  // PRIMARYCOLORS_H