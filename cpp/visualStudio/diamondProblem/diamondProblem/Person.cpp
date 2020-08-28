#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
	cout << "Person default constructor \n";
}
Person::Person(int x)
{
	cout << "Person::Person(int ) called \n";
}