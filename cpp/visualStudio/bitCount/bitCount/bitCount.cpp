// bitCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "bitCount.h"

using namespace std;

int countTable(unsigned int input)
{
	/*Note: this function has limit only for 4 bits */
	unsigned int inputBit;
	int table[MAXNUMBER] = { 0,1,1,2,1,2,2,3,1,2, 2, 3, 3, 3, 3, 4 };
	//    int number[16] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 );

	if ((input < 0) && (input > 15))
	{
		cout << "Input number is out of range \n";
	}

	inputBit = input & 15;
	cout << "Number of ones on " << input << " is " << table[inputBit] <<"\n";
	return table[inputBit];
}

