#include <iostream>
#include <new>       // Needed for bad_alloc exception
#include <cstdlib>   // Needed for the exit function
#include "SimpleVector.h"

using namespace std;

//**********************
// Default Constructor *
//**********************
template <class T>
SimpleVector<T>::SimpleVector()
{
	aptr = 0;
	arraySize = 0;
}

//***********************************************************
// Constructor for SimpleVecotr class. Sets the size of the *
// array and allocates memory for it.
//***********************************************************
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
	arraySize = s;
	// Allocate memory for the array.
	try
	{
		aptr = new T[s];
	}
	catch (bad_alloc)
	{
		memError();
	}

	// Initialize the array.
	for (int count = 0; count < arraySize; count++)
		*(aptr + count) = 0;
}

//********************************************
// Copy Constructor for Simple Vector class. *
//********************************************

template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
	// Copy the array size
	arraySize = obj.arraySize;

	// Allocate memory for the array.
	aptr = new T[arraySize];
	if (aptr == 0)
		memError();

	// Copy the elements of obj's array.
	for (int count = 0; count < arraySize; count++)
		*(aptr + count) = *(obj.aptr + count);
}

//*************************************
// Destructor for SimpleVector class. *
//*************************************
template <class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
		delete [] aptr;
}

//*******************************************************
// memError function. Displays an error message and     *
// terminates the program when memory allocation fails. *
//*******************************************************
template <class T>
void SimpleVector<T>::memError()
{
	cout << "ERROR:Cannot allocate memory.\n";
	exit(EXIT_FAILURE);
}

//**********************************************************
// subError function. Displays an error message and        *
// terminates the program when a subscript is out of range *
//**********************************************************
template <class T>
void SimpleVector<T>::subError()
{
	cout << "ERROR: Subscript out of range.\n";
	exit(EXIT_FAILURE);
}

//************************************
// Accessor to return the array size *
//************************************
template <class T>
int SimpleVector<T>::size() const
{
	return arraySize;
}

//******************************************************
// getElementAt function. The argument is a subscript. *
// This function returns the value stored at the       *
// subscript in the array.                             * 
//******************************************************
template <class T>
T SimpleVector<T>::getElementAt(int sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();

	return aptr[sub];
}

//*******************************************************
// Overloaded [] operator. The argument is a subscript. *
// This function returns a reference to the element     *
// in the array indexed by the subscript.               *
//*******************************************************
template <class T>
T &SimpleVector<T>::operator[](const int& sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();

	return aptr[sub];
}
