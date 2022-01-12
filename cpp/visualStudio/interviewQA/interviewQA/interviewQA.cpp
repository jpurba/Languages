// interviewQA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int* ptrgen()
{
    int i = 1;
    return &i;  // return i
}

int main()
{
    int* p = ptrgen();
    cout << *p << endl;; // print i even i already out of scope
                         // This is not guarantee
    *p = 2;
    cout << *p << endl;

    cout << "Hello World!\n";

    // Question 2
    int* i = new int;
    *i = 100;
    delete(i);
    cout << *i; // will get exception by compiler
    return 0;
}

