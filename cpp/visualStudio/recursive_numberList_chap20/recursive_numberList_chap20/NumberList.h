/*
*
* Jeremiah Purba
*
* Chapters 20 Programming Example CISC 187 Summer 2020
*
* July 19, 2020
*
* File name: NumberList.h
*
*/
#ifndef NUMBERLIST_H
#define NUMBERLIST_H
class NumberList
{
private:
	// Declare a structure for the list
	struct ListNode
	{
		double value;
		struct ListNode* next;
	};

	ListNode* head;   // List head pointer

	// Private member functions
	int countNodes(ListNode*) const;
	void showReverse(ListNode*) const;

public:
	// Constructor
	NumberList();

	// Destructor
	~NumberList();

	// Linked List Operations
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
	int numNodes()const;
	void displayBackwards() const;
};

// Function Prototype

void menu(void);
void appendNode(NumberList& list);
void insertNode(NumberList& list);
void deleteNode(NumberList& list);
void printList(NumberList& list);
void reverseNode(NumberList& list);
void searchNode(NumberList& list);

#endif  // for NUMBERLIST_H

