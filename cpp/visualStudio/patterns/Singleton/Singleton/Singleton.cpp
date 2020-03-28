// Singleton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Singleton.h"

using namespace std;

Singleton* Singleton::getInstance()
{
    if (!instance) {
        instance = new Singleton();
        cout << "getInstance(): First instance\n";
        return instance;
    }
    else {
        cout << "getInstance(): previous instance\n";
        return instance;
    }
}

int main()
{
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    Singleton* s3 = Singleton::getInstance();
    return 0;    
}

