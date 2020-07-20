/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Example CISC 187 Summer 2020
*
* July 19, 2020
*
* File name: DynamicQueues.h
*
*/
#ifndef DYNAMICQUEUES_H
#define DYNAMICQUEUES_H

#include <string>
using namespace std;


class DynamicQueues
{
private:
	struct QueueNode
	{
		string name;        // Name can sccept 2 words
		//string message;   // Assume for multiple words
		int    numberOfKid; // For number of kids
		QueueNode* next;    // Pointer to the next node
	}; 

	QueueNode* front;       // The front of the queue
	QueueNode* rear;        // The rear of the queue
	int numItems;           // Number of Items in the queue public

	// Recursive methods
	int count(QueueNode*) const;
	void showReverse(QueueNode*) const;

public:

	// Constructor
	DynamicQueues();

	// Destructor
	~DynamicQueues();

	// Queue operations
	void enqueue(string, int);
	void dequeue(string&);
	bool isEmpty() const;
	void clear();
	int numNodes() const;
	int search();
	void insert(string);
	void displayQueue() const;
};

#endif // DYNAMICQUEUES_H

