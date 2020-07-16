#ifndef MAIN_H
#define MAIN_H

#include "NounStack.h"
#include "VerbStack.h"

const int maxInputLength = 10;
const int minInputLength = 0;

// Function prototype
void pushNoun(NounStack& nounStack);
void popNoun(NounStack& nounStack);
void pushVerb(VerbStack& verbStack);
void popVerb(VerbStack& verbStack);
void concatenate(NounStack& nounStack);
void addS(NounStack& nounStack);
void displayBothStack(NounStack& nounStack, VerbStack& verbStack);
void makeStory(NounStack& nounStack, VerbStack& verbStack);

void menu(void);
bool validateString(const std::string& stringInput);

#endif