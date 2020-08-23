// containerVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count;  // Loop counter

    // Define a vector object
    vector<int> vect;

    // Use the size member function to get the number of 
    // elements in the vector
    cout << "Vect starts with " << vect.size()
        << " elements.\n";

    // Use push_back to push values into the vector
    for (count = 0; count < 10; count++)
        vect.push_back(count);

    // Display the size of the vector now
    cout << "Now vect has " << vect.size()
        << " elements, Here they are: \n";

    // Use the [] operator to display each element
    for (count = 0; count < vect.size(); count++)
        cout << vect[count] << " ";
    cout << endl;

    // Use the pop_back member function.
    cout << "\nPopping the values out of vect ... \n";
    for (count = 0; count < 5; count++)
        vect.pop_back();

    // Display the size of the vector now
    cout << "Now vect has " << vect.size()
        << " elements, Here they are: \n";

    // Use the [] operator to display each element
    for (count = 0; count < vect.size(); count++)
        cout << vect[count] << " ";
    cout << endl;

    
}

