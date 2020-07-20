#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H


class DynIntQueue
{
private:
	// Structure for the queue nodes
	struct QueueNode
	{
		int value;        // Value in a node
		QueueNode* next;  // Pointer to the next node
	};

	QueueNode* front;     // The front of the queue
	QueueNode* rear;      // The rear of the queue
	int numItems;         // Number of items in the queue public

	// Recursive methods
	int count(QueueNode*) const;
	void showReverse(QueueNode*) const;

public:// Constructor
	DynIntQueue();

	// Destructor
	~DynIntQueue();

	// Queue operations
	void enqueue(int);
	void dequeue(int&);
	bool isEmpty() const;
	void clear();
	int numNodes()const;
	void displayBackwards() const;

};

#endif  // #ifndef DYNINTQUEUE_H