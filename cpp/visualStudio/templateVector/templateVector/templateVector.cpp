// templateVector.cpp : 
// This Program demonstrates the SimpleVector template
#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main()
{
    const int SIZE = 10;   // Number of elements
    int count;             // Loop counter

    // Create a SimpleVector of ints
    SimpleVector<int> intTable(SIZE);

    // Create a SimpleVector of doubles
    SimpleVector<double> doubleTable(SIZE);

    // Store values in the two SimpleVectors
    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = (count * 2);
        doubleTable[count] = (count * 2.14);
    }

    // Display the values in the SimpleVectors
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    cout << "Hello World!\n";

    return 0;
}

