// clockClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClockType.h"

using namespace std;
int main()
{
    int x;
    int y;
    int z;
    bool test = false;

    ClockType myClock;
    ClockType yourClock;


    myClock.setTime(5, 2, 30);
    cout << "My Clock:";
    myClock.printTime();
    
    x = 17;
    y = 23;
    z = 34;

    yourClock.setTime(x, y, z);
    cout << "Your Clock:";
    yourClock.printTime();

    test = myClock.equalTime(yourClock);
    if (test)    
        cout << "Both clock are the same"  << endl;
    else
        cout << "Both clock are not the same" << endl;

    myClock.setTime(17, 23, 34);
    cout << "My Clock:";
    myClock.printTime();

    test = myClock.equalTime(yourClock);
    if (test)
        cout << "Both clock are the same" << endl;
    else
        cout << "Both clock are not the same" << endl;

}

