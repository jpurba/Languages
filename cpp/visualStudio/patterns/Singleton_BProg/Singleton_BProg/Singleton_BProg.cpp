// Singleton_BProg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Singleton.h"

using namespace std;

int main()
{
    // Using instance
    Singleton* s1 = Singleton::theInstance();
    Singleton* s2 = Singleton::theInstance();
    Singleton &s3 = *s2;

    // Displaying instance addresses
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << &s3 << endl;

    return 0;
}

