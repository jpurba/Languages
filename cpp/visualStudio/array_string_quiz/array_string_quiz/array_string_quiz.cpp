// array_string_quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);

int main()
{
    prob1();
    cout << "\n";
    prob2();
    cout << "\n";
    prob3();
    cout << "\n";
    prob4();
    cout << "\n";
    prob5();
    cout << "\n";
    prob6();
    cout << "\n";
    prob7();
    cout << "\n";

}


void prob7(void) {

    int alpha[5] = { 2, 4, 6, 8, 10 };
    int j;

    for (j = 4; j >= 0; j--)
        cout << alpha[j] << " ";

    cout << endl;

}

void prob1(void) {
    int array[10] = { 1 };
    cout << array[4] << endl;
    for (int i = 0; i < 10; i++)
        cout << "array[" << i << "] = " << array[i] << endl;
}

void prob2(void) {
    int iarray[5] = { 99,100,1 };
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "iarray[" << i << "] = " << iarray[i] << endl;
        sum += iarray[i];
    }
    cout << sum << endl;

}

void prob3(void) {
    int numbers[] = { 99, 87, 66, 55, 101 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Array size = " << size << endl;

    for (int i = 1; i < 4; i++)
        cout << numbers[i] << endl;
}

void prob4(void) {
    int numbers[4] = { 99,87 };

    cout << numbers[4] << endl; // read empty element

}

void prob5(void) {

    string string_to_test = "Hello World";

    int array[10] = { };
    cout << array[4] << endl;
    for (int i = 0; i < 10; i++)
        cout << "array[" << i << "] = " << array[i] << endl;

    cout << "\nString is: " << string_to_test <<"; String Length is " << string_to_test.length() << endl;
}

void prob6(void) {

    double sales[] = { 12.25, 32.50, 16.90, 23, 45.68 };

    cout << "\nsales: " << sales << endl;
    cout << "sales[-1] =  " << sales[1] << " ; Garbage " << endl;
    cout << "sales[6] =  " << sales[6] << " ; Garbage" << endl;
}

