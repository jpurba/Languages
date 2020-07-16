/*
*
* Jeremiah Purba
*
* Chapters 19 Programming Example CISC 187 Summer 2020
*
* July 15, 2020
*
* File name: VerbStack.h
*
*/
#include "VerbStack.h"
using namespace std;

//************************************************
// Constructor                                   *
// This function initializes topNoun to nullptr  *             
//************************************************

VerbStack::VerbStack()
{
	topVerb = nullptr;
}

//************************************************
// Destructor                                    *
// This function deletes every node in the list  *             
//************************************************
VerbStack::~VerbStack()
{
	VerbNode* nodePtr = nullptr;
	VerbNode* nextNode = nullptr;

	// Position nodePtr at the top of the stack
	nodePtr = topVerb;

	//Traverse the list deleting each node
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
void VerbStack::push(string pushVerb)
{
	VerbNode* newNode = nullptr;   // Pointer to a new node

	// Allocate a new node and store input string there
	newNode = new VerbNode;
	newNode->verbWord = pushVerb;

	// If there are no nodes in the list
	// make newNode the first node
	if (isEmpty())
	{
		topVerb = newNode;
		newNode->next = nullptr;
	}
	else // otherwise, insert newNode before top
	{
		newNode->next = topVerb;
		topVerb = newNode;
	}
}  // end of VerbStack::push(string pushVerb)

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *                                    *             
//****************************************************
int VerbStack::pop(string& popVerb)
{
	VerbNode* tempNode = nullptr;  // temporary pointer

	// First make sure the stack is not empty
	if (isEmpty())
	{
		cout << "The verb stack is empty !\n";
		return -1;
	}
	else  // pop value from the top of the stack
	{
		popVerb = topVerb->verbWord;
		tempNode = topVerb->next;
		delete topVerb;
		topVerb = tempNode;
	}
	return 0;

}  // VerbStack::pop(string& popVerb)

//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise.                     *                                                 
//****************************************************
bool VerbStack::isEmpty()
{
	bool status;
	if (!topVerb)
		status = true;
	else
		status = false;

	return status;

} // end of VerbStack::isEmpty()

//****************************************************
// Member function display would print stack content *
// to screen.                                        *                                                 
//****************************************************
int VerbStack::displayVerb() const
{
	VerbNode* nodePtr;    // To move through the list

	// Position nodePtr at the top of the stack
	nodePtr = topVerb;

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
			cout << nodePtr->verbWord << endl;

			// Move to the next node
			nodePtr = nodePtr->next;
		}
	}
	return 0;
} // end of VerbStack::displayVerb() const