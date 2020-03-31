// interviewTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Therefore, the result of 25u - 50u will itself be an unsigned integer 
    // as well. So the result of -25 converts to 4294967271 when promoted 
    // to being an unsigned integer.
    cout << 25u - 50;  //4294967271

    /////////////////////////////////////////////////////////////////////


    int x = 25;
    int* p;
    p = &x;

    cout << "\n\n&p = " << &p << endl;
    cout << "p = " << p << endl;
    cout << "*p= " << *p << endl;
    cout << "&x = " << &x << endl;
    cout << "x = " << x << endl;

    *p = 38;

    cout << "\n&p = " << &p << endl;
    cout << "p = " << p << endl;
    cout << "*p= " << *p << endl;
    cout << "&x = " << &x << endl;
    cout << "x = " << x << endl;

    /////////////////////////////////////////////////////////////////////
    int i = 5;
    int j = i++;

    cout << "\n" << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    int k = --i;
    cout << "\n" << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;

    ////////////////////////////////////////////////////////////////////

}

