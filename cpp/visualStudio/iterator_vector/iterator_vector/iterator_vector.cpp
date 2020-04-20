// iterator_vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{

	vector<int> ar = { 1, 2, 3, 4, 5 };

	// Declaring iterator to a vector
	vector<int>::iterator ptr;

	cout << "\nThe vector elements are: ";
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
		cout << *ptr << " ";


	cout << endl;

	// append value to stack
	ar.push_back(6);
	ar.push_back(7);
	ar.push_back(8);

	ptr = ar.begin();
	advance(ptr, 3);

	cout << "\nThe vector elements are after append and advance by 3: ";
	for (ptr; ptr < ar.end(); ptr++)
		cout << *ptr << " ";

	cout << endl;

	return 0;
}

