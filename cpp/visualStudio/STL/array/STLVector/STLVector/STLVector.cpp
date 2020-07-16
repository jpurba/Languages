// STLVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int SIZE = 10;

    // Define a vector to hold 10 int values
    vector <int> numbers(SIZE);
    cout << "Here is the vector and its elements\n";

    // Store the values 0 through 9 in the vector
    for (int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = i*2;
    }

    // Display the vector elements
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // create a vector containing names
    vector <string> names = { "Joe", "Karen", "Lisa", "Jackie" };

    // create an iterator
    vector <string>::iterator it;

    // use the iterator to display each element in the vector
    for (it = names.begin(); it != names.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

