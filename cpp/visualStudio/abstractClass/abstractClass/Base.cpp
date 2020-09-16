#include <iostream>
#include "Base.h"

using namespace std;

Base::Base()
{
	cout << "Base::Constructor \n";
}

Base::~Base()
{
	cout << "Base::Sestructor \n";
}

void Base::Execute()
{
	cout << "Base::Execute \n";
	baseDone(23);   // Call base class method
	doDone(25);     // call derived class method
}

void Base::baseDone(int value) {
	cout << "Base::baseDone; value = " << value << "\n";
}