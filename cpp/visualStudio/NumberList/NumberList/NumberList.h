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
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
	struct ListNode
	{
		double value;			// The value in this node
		struct ListNode* next;	// To point to the next node
	};

	ListNode* head;				// List head pointer

public:
	// Constructor
	NumberList(void);

	// Destructor
	~NumberList();

	// Linked list operations
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
};

#endif  // NUMBERLIST_H

