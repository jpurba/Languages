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

#ifndef VERBSTACK_H
#define VERBSTACK_H

#include <iostream>
#include <string>

using namespace std;

class VerbStack
{
private:
	// Structure for stack nodes
	struct VerbNode
	{
		string    verbWord;   // Verb word in the node
		VerbNode* next;       // Pointer to the next node
	};

	VerbNode* topVerb;        // Pointer to the verb stack top

public:
	// Constructor
	VerbStack();

	// Destructor
	~VerbStack();

	// Stack Operations
	void push(string pushString);
	void pop(string& popString);
	bool isEmpty();
	int displayVerb() const;
};

#endif

