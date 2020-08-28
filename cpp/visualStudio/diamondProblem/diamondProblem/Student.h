#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"
class Student : virtual public Person
{
public:
	Student();
	Student(int x);
};

#endif
