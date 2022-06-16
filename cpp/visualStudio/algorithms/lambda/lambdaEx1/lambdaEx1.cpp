// lambdaEx1.cpp : This file contains the 'main' function. 
// Program execution begins and ends there.
//
#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ex1(int a, int b) {
    // Assign the lambda expression that adds 2 numbers to auto variables
    auto f1 = [](int x, int y) {return x + y; };

    cout << f1(a, b) << endl;

    // Assign the same lambda expression to a function object
    function<int(int, int)> f2 = [](int x, int y) { return x + y; };

    cout << f2(a, b) << endl;
}

void ex2() {
    int i = 3;
    int j = 5;

    // The following lambda expression captures i by value
    // and j by reference
    function<int(void)> f = [i, &j] { return i * j;  };

    cout << "i = " << i << "; j = " << j << "; f() = "<< f() << endl;

    // change i and j values
    i = 7;
    j = 9;
    cout << "i = " << i << "; j = " << j << "; f() = " << f() << endl;

}

// Function to print vector
void printVector(vector<int> v) {
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i)
        {
            cout << i << " ";
        });
    cout << endl;
}

void ex3() {
    vector<int> v{ 4, 1, 3, 5, 2, 3, 1, 7 };

    printVector(v);

    // Below snippet find first number greather than 4
    // find_if searches for an element for which
    // function(third argument) returns true
    vector<int>::iterator p = find_if(v.begin(), v.end(), [](int i)
        {
            return i > 4;
        });
    cout << "First number greater than 4 is : " << *p << endl;

    // Function to sort vector, lambda expression is for sorting in
    // non-increasing order. Compiler can make out return type as
    // bool, but shown here just for explanation
    sort(v.begin(), v.end(), [](const int& a, const int& b)->bool
        {
            return a > b;
        });

    printVector(v);

    // function to count numbers greater than or equal to 5
    int count_5 = count_if(v.begin(), v.end(), [](int a)
        {
            return (a >= 5);
        });

}

int main()
{
    int c, d;
    c = 2;
    d = 3;
    ex1(c, d);
    ex2();
    ex3();
    std::cout << "Hello World!\n";
}

