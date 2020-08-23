// SimpleVector class template
#ifndef SIMPLEVECTOR_H_
#define SIMPLEVECTOR_H_

#include <iostream>
#include <new>       // Needed for bad_alloc exception
#include <cstdlib>   // Needed for the exit function

using namespace std;

template <class T>
class SimpleVector
{
private:
	T* aptr;         // To point to the allocated array
	int arraySize;   // Number of elements in the array
	void memError(); // Handless memory allocation errors
	void subError(); // Handless subscripts out of range

public:
	// Default constructor
	SimpleVector();

	// Constructor declaration
	SimpleVector(int);

	// Copy constructor declaration
	SimpleVector(const SimpleVector&);

	// Destructor declaration
	~SimpleVector();

	// Accessor to return the array size
	int size() const;

	// Accessor to return a specific element
	T getElementAt(int position);

	// Overloaded [] operator declaration
	T& operator[](const int&);
};

#endif


