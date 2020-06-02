// struct_Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);

int main()
{
    prob1();
    cout << endl;
    prob2();
    cout << endl;
    prob3();
    cout << endl;
    prob4();
}

void prob1(void) {
    int number = 22;
    int* var = &number;

    cout << "Value of variable that var point to is: " << *var << endl;
    cout << "Address of variable that var point to is: " << var << endl;
}

void prob2(void) {
    int* numbers = new int[5];

    for (int i = 0; i <= 4; i++)
        *(numbers + i) = i;
    cout << numbers[2] << endl;
}

void prob3(void) {

    int* p;
    int x;
    x = 76;
    p = &x;
    *p = 43;
    cout << x << ", " << *p << endl;
}

void prob4(void) {


}