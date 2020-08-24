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

    // Define an iterator object
    vector<int>::iterator iter;
    vector<int>::iterator it;

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

    // Use iterator to traverse through the vector
    for (count = 5; count < 10; count++)
        vect.push_back(count*count);

    // Printout vector contents begin and end
    cout << "\nThe content of the vector using iterator begin and end: \n";
    for (iter = vect.begin(); iter < vect.end(); ++iter)
        cout << *iter << " ";

    // Printout vector contents backward with begin and end
    cout << "\nThe content of the vector backward using iterator\n";
    for (it = vect.end() - 1; it > vect.begin(); it--)
        cout << *it << " ";

    // Printout vector content useing cbegin and cend
    cout << "\n\nThe content of the vector using cbegin and cend: \n";
    for (auto i = vect.cbegin(); i != vect.cend(); ++i)
        cout << *i << " ";

    // Printout vector content useing crbegin and crend
    cout << "\n\nThe content of the vector using crbegin and crend: \n";
    for (auto ir = vect.crbegin(); ir != vect.crend(); ++ir)
        cout << *ir << " ";
    cout << "\n";
    return 0;
}

