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

    cout << endl;
    cout << "Address of s1 = " << s1 << endl;
    cout << "Address of s2 = " << s2 << endl;
    cout << "Address of s3 = " << s3 << endl;

    return 0;    
}

