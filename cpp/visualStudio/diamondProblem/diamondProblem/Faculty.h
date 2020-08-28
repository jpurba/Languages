#ifndef FACULTY_H_
#define FACULTY_H_

#include "Person.h"

class Faculty : virtual public Person
{
public:
	Faculty();
	Faculty(int x);
};

#endif