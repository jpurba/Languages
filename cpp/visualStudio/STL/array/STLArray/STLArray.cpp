// STLArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    const int SIZE = 5;

    // store some names in an array object
    array<string, SIZE> names = { "Jamie", "Ashley", "Doug", "CLaire", "Ben" };

    // display the name
    cout << "Use index: here are the names. \n";

    for (int index = 0; index < names.size(); index++)
        cout << names[index] << endl;

    // use iterator
    // create an iterator for the array onject
    array<string, SIZE>::iterator it;
    cout << "\nUse iterator: here are the names. \n";
    for (it = names.begin(); it != names.end(); it++)
        cout << *it << endl;

    // use auto to define iterator
    cout << "\nUse auto to define iterator. \n";
    for (auto it = names.begin(); it != names.end(); it++)
        cout << *it << endl;

    // reverse iterator example
    array<int, SIZE> numbers = { 1, 2, 3, 4, 5 };


    // Define a reverse iterator for the array object
    array<int, SIZE> ::reverse_iterator rit;
    
    cout << "\nHere is the number's array using reverse iterator. \n";
    // Display element of array in reverse order
    for (rit = numbers.rbegin(); rit != numbers.rend(); rit++)
        cout << *rit << endl;

}

