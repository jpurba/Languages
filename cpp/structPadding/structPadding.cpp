/*
 * structPadding.cpp
 *
 *  Created on: Jan 9, 2019
 *      Author: jpurba
 */

#include <iostream>

using namespace std;
#pragma pack(push, 1) // allign to single bit to avoid padding

struct Person {
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop) // end pragma

int main () {

	cout << sizeof(Person) << endl;


	return 0;
}



