/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Example CISC 187 Summer 2020
*
* July 19, 2020
*
* File name: DynamicQueues.cpp
*
*/
#include <iostream>
#include "DynamicQueues.h"

using namespace std;

//*****************************************
// The constructor creates an empty queue *
//*****************************************

DynamicQueues::DynamicQueues()
{
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}

//*****************************************
// The Destructor clear queue             *
//*****************************************
DynamicQueues::~DynamicQueues()
{
	int numberOfKid;
	string inputString;
	QueueNode* temp = nullptr;

	// check whether the queue is empty or not
	while (numItems > 0 )
	{
		// Save the front node value in inputString and numberOfKid 
		inputString = front->name;
		numberOfKid = front->numberOfKid;

		// remove the front node and delete it
		temp = front;
		front = front->next;
		delete temp;

		// update numItems
		numItems--;
	}
}

//*****************************************
// Accessor to get numItems               *
//*****************************************
int DynamicQueues::getNumberItems()
{
	return numItems;
}

//***************************************************
// Function enqueue inserts the name and number kid *
// to queue at the rear of the queue                *
//***************************************************
void DynamicQueues::enqueue(string inputString, int numberOfKid)
{
	QueueNode* newNode = nullptr;

	
	// Validate input string 
	if (inputString.length() == 0 || inputString.length() > maxNameLength)
	{
		cout << "Error ! Wrong input string ... Exit ! \n";
		cout << "Either empty string or string equal and longer than 20 letters.\n";
		exit(EXIT_FAILURE);
	}
	// Validate numberOfKid
	else if (numberOfKid < 0)
	{
		cout << "Error ! Wrong input integer ... Exit ! \n";
		cout << "Number of kid should be at least zero and larger .\n";
		exit(EXIT_FAILURE);
	}
	else
	{

		// Create a new node and store string there
		newNode = new QueueNode;
		newNode->name = inputString;
		newNode->numberOfKid = numberOfKid;
		newNode->next = nullptr;

		cout << newNode->name << " has been added to the queue" << endl;

		// Adjust front and rear as necessary
		if (isEmpty())
		{
			// If queue empty, both front and rear point to new node
			front = newNode;
			rear = newNode;
		}
		else
		{
			rear->next = newNode;
			rear = newNode;
		}

		// Update numItems
		numItems++;
	}

}

//**************************************************************
// Function dequeue remove the name and number of kid at the   *
// front of the queue, and copies them into passing parameter  *
//**************************************************************
void DynamicQueues::dequeue(string& inputString,int& numberOfKid)
{
	QueueNode* temp = nullptr;

	// check whether the queue is empty or not
	if (front==nullptr && rear==nullptr)
	{
		cout << "The queue is empty. \n";
	}
	else
	{
		// Save the front node values in inputString and numberOfKid
		numberOfKid = front->numberOfKid;
		inputString = front->name;

		cout << inputString << " has been served and left the queue. \n";

		// remove the front node and delete it
		temp = front;
		front = front->next;
		delete temp;

		// update numItems
		numItems--;
	}
}

//***************************************************
// Function displayQueue would display all customer *  
// in the queue including its position. Position #1 *
// is start at infront and increase to rear.        *
//***************************************************
void DynamicQueues::displayQueue() const
{
	int numberList;
	QueueNode* nodePtr;

	// Position nodePtr at the front
	nodePtr = front;
	numberList = 1;  // number of position in the queue

	// check if queue is empty
	if (numItems == 0)
	{
		cout << "Queue is empty, so there is no customer. \n";
	}
	else
	{
		cout << "Customer in the queue start from front (position #1): \n";
		// While nodePtr at the front, traverse the list
		while (nodePtr)
		{
			// Display the name, number of kid and position (from rear)
			cout << "Pos " << numberList << "\t" << nodePtr->name
				<< "\t" << nodePtr->numberOfKid << " kid(s)" << endl;
			
			numberList++;
			nodePtr = nodePtr->next;
		}
	}
}

//***************************************************
// Function numNodes would count cars in line       *  
// (display the total number of cars in the queue)  *
// **you must use recursion to accomplish this item.*
//***************************************************
void DynamicQueues::numNodes()const
{

	cout << "\nThere are " << countNodes(front) << " cars in the queue" << endl;
}

//*****************************************************
// Function countNodes would count cars in line       *  
// (display the total number of cars in the queue)    *
// **you must use recursion to accomplish this item.  *
//*****************************************************
int DynamicQueues::countNodes(QueueNode* nodePtr) const
{
	if (nodePtr != nullptr)
	{
		return 1 + countNodes(nodePtr->next);
	}
	else
	{
		return 0;
	}
}


//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise              *
//*********************************************
bool DynamicQueues::isEmpty()
{
	bool status;

	if (numItems > 0)
		status = false;
	else
		status = true;

	return status;
}

//*********************************************
// Function clear dequeues all the elements   *
// in the queue                               *
//*********************************************
void DynamicQueues::clear()
{
	string name;
	int number;

	while (front!=nullptr && rear!=nullptr)
		dequeue(name,number);
}

//**************************************************************
// Function searchKid find the customer whith number of kid   *
// the most and it will return the position of the car.        *
// The search start from front not rear                        *
//**************************************************************
int DynamicQueues::searchKid() 
{
	QueueNode* newNode = nullptr;
	QueueNode* nodePtr;             // To traverse the queue
	QueueNode* previousNode = nullptr;      // to be deleted

	int maximumKid=0;
	int numberKid=0;
	string customerName;

	// position start at 0 and index at infront start from 1
	int position = 0;
	int index = 1;

	// Position nodePtr at the front
	nodePtr = front;

	// check if queue is empty
	if (numItems == 0)
	{
		cout << "Queue is empty, so there is no customer. \n";
		position = -1; 
	}
	else  
	{
		// This part when queue is not empty
		// While nodePtr at the front, traverse the list
		while (nodePtr)
		{
			// Find location car which has most kids
			numberKid = nodePtr->numberOfKid;
			if (numberKid > maximumKid)
			{
				maximumKid = numberKid;
				position = index;
			}
			
			index++;
			nodePtr = nodePtr->next;
		}

		// If there is a car with most kid, process more
		if (position > 0)
		{
			//cout << "numberKid: " << numberKid << "; maxkid: " << maximumKid;
			//cout << "; position: " << position << endl;

			// get data if there is a car with most kid
			// Position nodePtr at the front and set index again to 1
			nodePtr = front;
			index = 1;
			// Create a new node and store string there
			newNode = new QueueNode;
			//cout << "Position: " << position << endl;
			while (nodePtr)
			{
				// if the position is at car with most kid 
				if (index == position)
				{
					numberKid = nodePtr->numberOfKid;
					customerName = nodePtr->name;	
				}
				index++;
				nodePtr = nodePtr->next;
			}

			// Delete the node from old position
			deleteNodeKid(numberKid);

            // add new node at front
			newNode->name = customerName;
			newNode->numberOfKid = numberKid;
			newNode->next = front;
	        front = newNode;
		}
		else // no kid int he queue
		{    // position = 0
			cout << "There is no kid in the queue \n";
		}

	} // end of else not empty

	return position;
}



//**************************************************************
// Function searchName find the customer whith number of kid   *
// the most and it will return the position of the car.        *
// The search start from front not rear                        *
//**************************************************************
int DynamicQueues::searchName(string nameSearch)
{
	QueueNode* newNode = nullptr;
	QueueNode* nodePtr;             // To traverse the queue
 
	// position start at 0 and index at infront start from 1
	int position = 0;
	int index = 1;

	int numberKid = 0;
	string customerName;

	// Position nodePtr at the front
	nodePtr = front;

	// check if queue is empty
	if (numItems == 0)
	{
		cout << "Queue is empty, so there is no customer. \n";
		position = -1;
	}
	else
	{
		// While nodePtr at the front, traverse the list
		while (nodePtr)
		{
			// Display the name, number of kid and position (from rear)			
			if (nameSearch == nodePtr->name)
			{				
				position = index;
				numberKid = nodePtr->numberOfKid;
				customerName = nodePtr->name;
			}

			index++;
			nodePtr = nodePtr->next;
		}

		if (position > 0)
		{
			//cout << "Friend's name: " << nameSearch << " is on position: ";
			//cout << position << endl;

			// Delete the node from old position
			deleteNodeName(nameSearch);
	
			// Create a new node and store string there
			// add new node at front
			newNode = new QueueNode;
			newNode->name = customerName;
			newNode->numberOfKid = numberKid;
			newNode->next = front;
			front = newNode;
		}
		else
		{   // position = 0
			cout << "Your friend " << nameSearch << " is not in the queue \n";
		}
	}

	return position;
}

/*
* 1. Remove the node from the list without breaking the links created by
*    the next pointers
* 2. Delete the node from the memory
*/
void DynamicQueues::deleteNodeName(string inputName)
{
	QueueNode* nodePtr;      // To traverse the list
	QueueNode* previousNode = nullptr; // To point to the previous node

	// If the list empty, do nothing
	if (!front)
		return;

	// Determine if the first node is the one.
	if (front->name == inputName)
	{
		nodePtr = front->next;
		delete front;
		front = nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = front;

		// Skip all nodes whose value member is 
		// not equal to num
		while (nodePtr != nullptr && nodePtr->name != inputName)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		// If nodeptr is not at the end of the list
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

/*
* 1. Remove the node from the list without breaking the links created by
*    the next pointers
* 2. Delete the node from the memory
*/
void DynamicQueues::deleteNodeKid(int numberOfKid)
{
	QueueNode* nodePtr;      // To traverse the list
	QueueNode* previousNode = nullptr; // To point to the previous node

	// If the list empty, do nothing
	if (!front)
		return;

	// Determine if the first node is the one.
	if (front->numberOfKid == numberOfKid)
	{
		nodePtr = front->next;
		delete front;
		front = nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = front;

		// Skip all nodes whose value member is 
		// not equal to num
		while (nodePtr != nullptr && nodePtr->numberOfKid != numberOfKid)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		// If nodeptr is not at the end of the list
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}