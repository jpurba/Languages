/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Example CISC 187 Summer 2020
*
* July 14, 2020
*
* File name: stackQueue_19_2.cpp
*
*/

#include <iostream>
#include "DynIntStack.h"

using namespace std;

int main()
{
    int catchVar;   // To hold values popped off the stack

    // create a DynIntStack object
    DynIntStack stack;

    // Push 5, 10, and 15 onto the stack
    cout << "\nPushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);

    // Display the value in the stack
    cout << "\nThe following are stack content " << endl;
    stack.display();

    // Pop the values of the stack and display them
    cout << "\nPopping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;

    // Try to pop another value off the stack
    cout << "\nAttempting to pop again ... ";
    stack.pop(catchVar);

    return 0;
}

