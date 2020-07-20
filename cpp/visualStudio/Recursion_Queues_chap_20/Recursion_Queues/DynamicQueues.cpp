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
	clear();
}

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue                  *
//********************************************
void DynamicQueues::enqueue(string inputString, int numberOfKid)
{
	QueueNode* newNode = nullptr;

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
//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise              *
//*********************************************
bool DynamicQueues::isEmpty() const
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

	while (!isEmpty)
		dequeue(name);
}