/*
*
* Jeremiah Purba
*
* Chapters 19 Programming Example CISC 187 Summer 2020
*
* July 15, 2020
*
* File name: NounStack.h
*
*/

#ifndef NOUNSTACK_H
#define NOUNSTACK_H

#include <iostream>
#include <string>

using namespace std;

class NounStack
{
private:
	// Structure for stack nodes
	struct NounNode
	{
		string    nounWord;   // Verb word in the node
		NounNode* next;       // Pointer to the next node
	};

	NounNode* topNoun;        // Pointer to the verb stack top

public:
	// Constructor
	NounStack();


	// Destructor
	~NounStack();

	// Stack Operations
	void push(string pushNoun);
	void pop(string& popNoun);
	bool isEmpty();
	int displayNoun() const;
};

#endif
