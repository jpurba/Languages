/*
*
* Jeremiah Purba
*
* Chapters 19 Programming Example CISC 187 Summer 2020
*
* July 16, 2020
*
* File name: WordStack.h
*
*/

#ifndef WORDSTACK_H
#define WORDSTACK_H

#include <string>

using namespace std;

class WordStack
{
private:
	// Structure for stack nodes
	struct WordNode
	{
		string    word;   // Word in the node
		WordNode* next;       // Pointer to the next node
	};

	WordNode* topWord;        // Pointer to the word stack top

public:
	// Constructor
	WordStack();


	// Destructor
	~WordStack();

	// Stack Operations
	void push(string pushWord);
	void pop(string& popWord);
	bool isEmpty();
	int displayWord() const;
	int count();
};

// Constant for minimum maximum word length
const int maxInputLength = 10;
const int minInputLength = 0;

// Function prototype
void pushWord(WordStack& wordStack);
void popWord(WordStack& wordStack);
void concatenate(WordStack& nounStack);
void addS(WordStack& nounStack);
void displayBothStack(WordStack& nounStack, WordStack& verbStack);
void makeStory(WordStack& nounStack, WordStack& verbStack);

void menu(void);
bool validateString(const string& stringInput);

#endif   // end of WORDSTACK_H 