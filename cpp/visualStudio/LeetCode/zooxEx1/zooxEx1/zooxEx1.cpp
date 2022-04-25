// zooxEx1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    int inputInt;
    cin >> inputInt;

    string inputString;
    cin >> inputString;

    while (inputString.size() > 50)
    {
        cout << "Input String is longer than 50 char, please make it max 50 char" << endl;
        cin >> inputString;
    }

    for (int i = 0; i < inputInt; i++) {
        cout << inputString << endl;;
    }
    return 0;
}

