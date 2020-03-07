// outputExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double one, two;
    int alpha = 5;
    int beta = 10;
    alpha *= beta;
    cout << "alpha *= beta  "<< alpha << endl;
    alpha = alpha*beta;
    cout << "\nalpha *= beta  " << alpha << endl;

    cout << "New line escape equence is \\n" << endl;
    cout << "Tab character is represented as \'\\t\'" << endl;
    cout << "Tab character is represented as '\\t'" << endl;

    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating point division: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "Sunny" << '\n' << "Day" << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
