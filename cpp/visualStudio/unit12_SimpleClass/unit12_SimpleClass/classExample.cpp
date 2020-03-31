#include <iostream>
#include "classExample.h"

using namespace std;

void ClassExample::setX(int a)
{
	x = a;
}

void ClassExample::print() const
{
	cout << "x = " << x << endl;
}