// vectorSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v;
    int size;
    int index;
    int number;

    cout << "Enter the vector size: ";
    cin >> size;

    for (index = 0; index < size; index++)
    {
        cin >> number;
        v.push_back(number);
    }
    
    cout << "\nThe content original vector : \n";
    for (index = 0; index < size; index++)
    {
        cout << v[index] << " ";
    }
    cout << "\n";

    sort(v.begin(), v.end());

    cout << "The vector content after sort : \n";
    for (index = 0; index < size; index++)
    {
        cout << v[index] << " ";
    }
    cout << "\n";

}

