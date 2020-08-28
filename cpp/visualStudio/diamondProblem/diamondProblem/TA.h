#ifndef TA_H_
#define TA_H_

#include "Faculty.h"
#include "Student.h"

class TA :
    public Faculty, public Student
{
public:
    TA();
    TA(int x);
};

#endif