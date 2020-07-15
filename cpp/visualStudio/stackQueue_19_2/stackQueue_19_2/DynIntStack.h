/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Example CISC 187 Summer 2020
*
* July 14, 2020
*
* File name: DynIntStack.h
*
*/
#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack
{
private:
	// Structure for stack nodes
	struct StackNode
	{
		int value;        // value in the node
		StackNode* next;  // Pointer to the next node
	};

	StackNode* top;       // Pointer to the stack top

public:
	// Constructor 
	DynIntStack()
	{
		top = nullptr;
	}

	// Destructor
	~DynIntStack();

	// Stack operations
	void push(int);
	void pop(int&);
	bool isEmpty();
	void display() const;
};

#endif  // DYNINTSTACK_H

