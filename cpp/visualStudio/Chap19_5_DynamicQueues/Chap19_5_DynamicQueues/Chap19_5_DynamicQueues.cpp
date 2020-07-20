// Chap19_5_DynamicQueues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DynIntQueue.h"

using namespace std;

int main()
{
	const int MAX_VALUES = 5;
	int numberNode = 0;

	// Create a DynIntQueue object
	DynIntQueue iQueue;
	DynIntQueue* inode;
	//inode = iQueue;

	// Enqueue a series of numbers
	cout << "Enqueuing " << MAX_VALUES << " items...\n";
	for (int x = 0; x < MAX_VALUES; x++)
		iQueue.enqueue(x);

	// count how many node in the queue
	//numberNode = iQueue.count(iQueue.);

	cout << "There are " << numberNode << " in the queue. \n\n";

	// Dequeue and retrieve all numbers in the queue
	cout << "The values in the queue were: \n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << endl;
	}
	return 0;
}

