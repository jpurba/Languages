// algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>     // Required for the vector type
#include <algorithm>  // Required for STL algorithms

using namespace std;

int main()
{
    int index;       // Loop counter

    // Define a vector object
    vector<int> vect;

    // Define iterator
    vector<int>::iterator iter;

    // Use pich_back to push values into the vector
    for (index = 0; index < 10; index++)
        vect.push_back(index);

    // Display the vector's elemnents
    cout << "The vector has " << vect.size() << " elements. Here they are: \n";
    for (index = 0; index < vect.size(); index++)
        cout << vect[index] << " ";
    cout << "\n";

    // Randomly shuffle the vector's contents
    random_shuffle(vect.begin(), vect.end());

    // Display the vector's elements.
    cout << "\nThe elements have been shuffled: \n";
    for (index = 0; index < vect.size(); index++)
        cout << vect[index] << " ";
    cout << endl;

    // Now sort the vector's elements
    sort(vect.begin(), vect.end());

    // Display the vector's elements again
    cout << "The elements have been sorted:\n";
    for (index = 0; index < vect.size(); index++)
        cout << vect[index] << " ";
    cout << endl;

    // Now search  for an element with the value 7
    if (binary_search(vect.begin(), vect.end(), 7))
        cout << "The value 7 was found in the vector. \n";
    else
        cout << "The value 7 was not found in the vector.\n";

    // resize the vector
    vect.resize(15);

    for (iter = vect.end() - 5; iter < vect.end(); iter++)
        *iter = 5;

    // Display the vector's elements again
    cout << "\nThe elements have been resize to 15:\n";
    for (index = 0; index < vect.size(); index++)
        cout << vect[index] << " ";
    cout << endl;

    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(4);
    vect.push_back(5);

    // Display the vector's elements again
    cout << "\nThe elements have been added:\n";
    for (index = 0; index < vect.size(); index++)
        cout << vect[index] << " ";
    cout << endl << endl;

    for (iter = vect.begin(); iter < vect.end(); iter++)
    {
        cout <<"The number of " << *iter << " in the vector is " 
            << count(vect.begin(), vect.end(), *iter) << endl;

    }

    cout << endl << endl;
    for (index = 0; index < 10; index++)
    {
        cout << "The number of " << index << " in the vector is "
            << count(vect.begin(), vect.end(), index) << endl;

    }
}

