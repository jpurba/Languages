/*
*
* Jeremiah Purba
*
* Chapters 19 Programming Example CISC 187 Summer 2020
*
* July 16, 2020
*
* File name: WordStack.cpp
*
*/
#include <iostream>
#include "WordStack.h"

using namespace std;
//************************************************
// Constructor                                   *
// This function initializes topNoun to nullptr  *             
//************************************************

WordStack::WordStack()
{
	topWord = nullptr;
}

//************************************************
// Destructor                                    *
// This function deletes every node in the list  *             
//************************************************

WordStack::~WordStack()
{
	WordNode* nodePtr = nullptr;
	WordNode* nextNode = nullptr;

	// Position nodePtr at the top of the stack
	nodePtr = topWord;

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
void WordStack::push(string pushWord)
{
	WordNode* newNode = nullptr;   // Pointer to a new node

	if ((validateString(pushWord) == false) || (pushWord.length() > maxInputLength))
	{
		cout << "Error ! Wrong input ... Exit ! \n";
		cout << "Either not alphabet, or empty string or longer than 10 letters.\n"; 
		exit(EXIT_FAILURE);
	}

	// Allocate a new node and store input string there
	newNode = new WordNode;
	newNode->nounWord = pushWord;

	// If there are no nodes in the list
	// make newNode the first node
	if (isEmpty())
	{
		topWord = newNode;
		newNode->next = nullptr;
	}
	else // otherwise, insert newNode before top
	{
		newNode->next = topWord;
		topWord = newNode;
	}
}  // end of WordStack::push(string pushNoun)

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *                                    *             
//****************************************************
int WordStack::pop(string& popWord)
{
	WordNode* tempNode = nullptr;

	// First make sure the stack is not empty
	if (isEmpty())
	{
		cout << "The stack is empty !\n";
		return -1;
	}
	else  // pop value from the top of the stack 
	{
		popWord = topWord->nounWord;
		tempNode = topWord->next;
		delete topWord;
		topWord = tempNode;
	}
	return 0;
}  // end of WordStack::pop(string& popNoun)

//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise.                     *                                                 
//****************************************************
bool WordStack::isEmpty()
{
	bool status;
	if (!topWord)
		status = true;
	else
		status = false;

	return status;
} // end of WordStack::isEmpty()

//****************************************************
// Member function display would print stack content *
// to screen.                                        *                                                 
//****************************************************
int WordStack::displayWord() const
{
	WordNode* nodePtr;    // To move through the list

	// Position nodePtr at the top of the stack
	nodePtr = topWord;

	// First make sure the stack is not empty
	if (!nodePtr)
	{
		cout << "The stack is empty !\n";
		return -1;
	}
	else  // pop value from the top of the stack
	{
		// While nodePtr points to a node, traverse the list
		while (nodePtr)
		{
			// Display the value in this node
			cout << nodePtr->nounWord << endl;

			// Move to the next node
			nodePtr = nodePtr->next;
		}
	}

	return 0;
}  // WordStack::displayNoun() const

//****************************************************
// Member function count would count all stack       *
// content.                                          *                                                 
//****************************************************
int WordStack::count()
{
	int countStack = 0;

	WordNode* nodePtr;    // To move through the list

	// Position nodePtr at the top of the stack
	nodePtr = topWord;

	// First make sure the stack is not empty
	if (!nodePtr)
	{
		cout << "The stack is empty !\n";
		return -1;
	}
	else  // pop value from the top of the stack
	{
		// While nodePtr points to a node, traverse the list
		while (nodePtr)
		{
			// Move to the next node
			nodePtr = nodePtr->next;
			countStack++;
		}
	}

	return countStack;
}