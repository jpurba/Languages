// Singleton_BProg.cpp : 
// Singleton Pattern without any pointer

#include <iostream>
#include "Singleton.h"

using namespace std;

int main()
{
    //using instance
    Singleton& s1 = Singleton::theInstance();
    Singleton& s2 = Singleton::theInstance();

    // Displaying instance address
    cout << "&s1: " << &s1 << endl;
    cout << "&s2: " << &s2 << endl;
    
    return 0;
}

