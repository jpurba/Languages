#include <iostream>
#include "Student.h"

using namespace std;

Student::Student()
{
	cout << "Student::Student default constructor \n\n";
}

Student::Student(int x) : Person(x)
{
	cout << "Student::Student(int ) called\n\n";
}