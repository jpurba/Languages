// abstractClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Derived.h"

using namespace std;

int main()
{
    Derived derived;
    
    derived.Execute();
    derived.Run();

    cout << "Hello World!\n";
}

