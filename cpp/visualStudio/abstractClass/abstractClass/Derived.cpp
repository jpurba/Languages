#include <iostream>
#include "Derived.h"

using namespace std;

Derived::Derived()
{
	cout << "Derived::Constructor \n";
}

Derived::~Derived()
{
	cout << "Derived::Destructor \n";
}

void Derived::Run()
{
	cout << "Derived::Run \n";
}

void Derived::doDone(int value)
{
	cout << "Derived::doDone value = " << value << "\n";
}