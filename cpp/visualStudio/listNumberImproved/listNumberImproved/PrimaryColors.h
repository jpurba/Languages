/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Example CISC 187 Summer 2020
*
* July 7, 2020
*
* File name: NumberList.h
*
*/
#ifndef PRIMARYCOLORS_H
#define PRIMARYCOLORS_H

#include <string>

using namespace std;

class PrimaryColors
{
private:
	struct ListNode
	{
		string colors;			// The value in this node
		struct ListNode* next;	// To point to the next node
	};

	ListNode* head;				// List head pointer

public:
	// Constructor
	PrimaryColors(void);

	// Destructor
	~PrimaryColors();

	// Linked list operations
	void appendNode(string inputColor);
	int insertNode(int inputPosition, string inputColor);
	int deleteNode(int inputPosition);
	void displayList(void) const;
	int reverseList(void);
	int searchNode(string inputcolor);

};


// Function Prototype

void menu(void);
void appendNode(PrimaryColors& list);
void insertNode(PrimaryColors& list);
void deleteNode(PrimaryColors& list);
void printList(PrimaryColors& list);
void reverseNode(PrimaryColors& list);
void searchNode(PrimaryColors& list);


#endif  // NUMBERLIST_H

