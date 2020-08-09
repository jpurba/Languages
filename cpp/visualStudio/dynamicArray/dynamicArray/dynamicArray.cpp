// dynamicArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int* arrayPtr = nullptr;
    int arraySize;
    int i;
    int n;
    int sum = 0;

    cout << "Enter array size: ";
    cin >> arraySize;

    // Allocate memory for array dynamically based on user input size 
    arrayPtr = new int[arraySize];

    // Show error message if can't allocate memory
    if (arrayPtr == nullptr)
    {
        cout << "Error! Can't allocated memory ! \n";
        exit(EXIT_FAILURE);
    }

    // input array elements using pointer
    cout << "Enter elements: ";
    for (i = 0; i < arraySize; ++i)
    {
        cin >> *(arrayPtr + i);
        sum += *(arrayPtr + i);
    }

    // Printout input array
    cout << "Input array : ";

    for (i = 0; i < arraySize; i++)
    {
        cout << *(arrayPtr + i) << " ";
    }

    // Print out reverse of input array
    cout << "\n\nReverse of input array: ";
    for (i = arraySize-1; i >= 0; i--)
    {
        cout << *(arrayPtr + i) << " ";
        
    }

    cout << "\n\n";

    delete[] arrayPtr;

    return 0;
}

