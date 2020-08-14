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
	return 0;
}