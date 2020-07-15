/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Example CISC 187 Summer 2020
*
* July 14, 2020
*
* File name: DynIntStack.cpp
*
*/
#include <iostream>
#include "DynIntStack.h"

using namespace std;
//************************************************
// Destructor                                    *
// This function deletes every node in the list  *             
//************************************************
DynIntStack::~DynIntStack()
{
	StackNode* nodePtr = nullptr;
	StackNode* nextNode = nullptr;

	// Position nodePtr at the top of the stack
	nodePtr = top;

	// Traverse the list deleting each node
	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}


//************************************************
// Member function push pushes the argument onto *
// the stack.                                    *             
//************************************************
void DynIntStack::push(int num)
{
	StackNode* newNode = nullptr;       // Pointer to a new node 

	// Allocate a new node and store num there
	newNode = new StackNode;
	newNode->value = num;

	// If there are no nodes in the list
	// make newNode the first node
	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;
	}
	else  // otherwise, insert newNode before top
	{
		newNode->next = top;
		top = newNode;
	}
}  // end of DynIntStack::push(int num)

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *                                    *             
//****************************************************
void DynIntStack::pop(int& num)
{
	StackNode* temp = nullptr;      // temporary pointer
	
	// First make sure the stack is not empty
	if (isEmpty())
	{
		cout << "The stack is empty !\n";
	}
	else  // pop value off top of stack
	{
		num = top->value;
		temp = top->next;
		delete top;
		top = temp;
	}
}

//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise.                     *                                    *             
//****************************************************
bool DynIntStack::isEmpty()
{
	bool status;

	if (!top)
		status = true;
	else
		status = false;

	return status;
}


//****************************************************
// Member function display would print stack content *
// to screen.                                        *                                    *             
//****************************************************
void DynIntStack::display() const
{
	StackNode* nodePtr;    // To move through the list

	// Position nodePtr at the top of the stack
	nodePtr = top;

	// While nodePtr points to a node, traverse the list
	while (nodePtr)
	{

		// Display the value in this node
		cout << nodePtr->value << endl;

		// Move to the next node
		nodePtr = nodePtr->next;
	}

}