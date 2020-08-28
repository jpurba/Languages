#include "Faculty.h"
#include <iostream>

using namespace std;

Faculty::Faculty() : Person()
{
	cout << "Faculty default constructor \n\n";
}
Faculty::Faculty(int x) : Person(x)
{
	cout << "Faculty::Faculty(int ) called \n\n";
}