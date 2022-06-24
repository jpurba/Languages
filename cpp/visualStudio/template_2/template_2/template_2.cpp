// template_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y) {
    return (x > y) ? x : y;
}

template <typename T> T myMin(T x, T y) {
    return (x < y) ? x : y;
}

int main()
{
    cout << "Integer (max): " << myMax<int>(3, 7) << endl;  
    cout << "Double (max): " << myMax<double>(6.0, 4.5) << endl;
    cout << "Char (max): " << myMax<char>('g', 'e') << endl;

    cout << "Integer (min): " << myMin<int>(3, 7) << endl;
    cout << "Double (min): " << myMin<double>(6.0, 4.5) << endl;
    cout << "Char (min): " << myMin<char>('g', 'e') << endl;

}

