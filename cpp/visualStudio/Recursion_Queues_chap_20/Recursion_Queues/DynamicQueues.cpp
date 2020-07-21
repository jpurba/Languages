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

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue                  *
//********************************************
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
		// Save the front node value in num
		numberOfKid = front->numberOfKid;
		inputString = front->name;

		cout << "Now, customer " << inputString << " can order. \n";

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
			cout << "Name: " << nodePtr->name << "; # of kid: " <<
				nodePtr->numberOfKid;
			cout << "; position: " << numberList << endl;
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
int DynamicQueues::numNodes()const
{
	return countNodes(front);
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

//void displayBackwards() const;

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