#include <iostream>
#include "TA.h"

using namespace std;

TA::TA() 
{
	cout << "TA default constructor \n";
}

TA::TA(int x) : Student(x), Faculty(x)
{
	cout << "TA::TA(int ) called \n";
}