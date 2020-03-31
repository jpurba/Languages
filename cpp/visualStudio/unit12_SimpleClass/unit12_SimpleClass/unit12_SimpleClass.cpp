// unit12_SimpleClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "classExample.h"

using namespace std;

int main()
{
    ClassExample *cExpPtr;
    ClassExample cExpObject;

    cExpPtr = &cExpObject;

    cExpPtr->setX(5);
    cExpPtr->print();

    cExpPtr->setX(15);
    cExpPtr->print();

    return 0;
}

