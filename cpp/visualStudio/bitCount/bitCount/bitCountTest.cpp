/*
 ============================================================================
 Name        : bitCountTest.cpp
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : To test bitCount simple example
 ============================================================================
 */
#include <iostream>
#include "bitCount.h"

using namespace std;

int main()
{
	int result = 0;
	unsigned int index;

	cout << "Count ones with Table: \n";
	for (index = 0; index < MAXNUMBER; index++)
	{
		result = countTable(index);
	}

	cout << "\nCount ones with algorithm 1 count one function\n";
	for (index = 0; index < 256; index++)
	{
		result = countOne(index);
		cout << "Number = " << index << "; # of ones = " << result << endl;
	}

	cout << "\nCount ones with algorithm 2 count Ones function\n";
	for (index = 0; index < MAXNUMBER; index++)
	{
		result = countOnes(index);
		cout << "Number = " << index << "; # of ones = " << result << endl;
	}


	return 0;
}