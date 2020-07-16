/*
*
* Jeremiah Purba
*
* Chapters 19 Programming Example CISC 187 Summer 2020
*
* July 15, 2020
*
* File name: NounStack.cpp
*
*/

#include "NounStack.h"
using namespace std;
//************************************************
// Constructor                                   *
// This function initializes topNoun to nullptr  *             
//************************************************

NounStack::NounStack()
{
	topNoun = nullptr;
}

//************************************************
// Destructor                                    *
// This function deletes every node in the list  *             
//************************************************

NounStack::~NounStack()
{
	NounNode* nodePtr = nullptr;
	NounNode* nextNode = nullptr;

	// Position nodePtr at the top of the stack
	nodePtr = topNoun;

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
void NounStack::push(string pushNoun)
{
	NounNode* newNode = nullptr;   // Pointer to a new node

	// Allocate a new node and store input string there
	newNode = new NounNode;
	newNode->nounWord = pushNoun;

	// If there are no nodes in the list
	// make newNode the first node
	if (isEmpty())
	{
		topNoun = newNode;
		newNode->next = nullptr;
	}
	else // otherwise, insert newNode before top
	{
		newNode->next = topNoun;
		topNoun = newNode;
	}
}  // end of NounStack::push(string pushNoun)

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *                                    *             
//****************************************************
void NounStack::pop(string& popNoun)
{
	NounNode* tempNode = nullptr;

	// First make sure the stack
	if (isEmpty())
	{
		cout << "The noun stack is empty !\n";
	}
	else  // pop value from the top of the stack 
	{
		popNoun = topNoun->nounWord;
		tempNode = topNoun->next;
		delete topNoun;
		topNoun = tempNode;
	}
}  // end of NounStack::pop(string& popNoun)

//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise.                     *                                                 
//****************************************************
bool NounStack::isEmpty()
{
	bool status;
	if (!topNoun)
		status = true;
	else
		status = false;

	return status;
} // end of NounStack::isEmpty()

//****************************************************
// Member function display would print stack content *
// to screen.                                        *                                                 
//****************************************************
int NounStack::displayNoun() const
{
	NounNode* nodePtr;    // To move through the list

	// Position nodePtr at the top of the stack
	nodePtr = topNoun;

	// First make sure the stack is not empty
	if (!nodePtr)
	{
		cout << "The verb stack is empty !\n";
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
}  // NounStack::displayNoun() const