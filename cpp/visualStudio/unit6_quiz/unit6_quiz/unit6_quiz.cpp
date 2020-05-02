// unit6_quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Suppose j, sum, and num are int variables, and 
// the input is 26 34 61 4 -1. 
// What is the output of the code?
void forloop(void) {

    int sum = 0;
    int num;
    
    cout << "\n";
    cin >> num;
    cout << "\ninput: " << num << endl;
    for (int j = 1; j <= 4; j++)
    {
        sum = sum + num;
        cin >> num;
        cout << "\nsum = " << sum << " ; input: " << num << endl;

    }
    cout << sum << endl;
}

void whileLoop(void) {
    int n = 1;
    while (n < 5)
    {
        n++;
        cout << n << " ";
    }
}


int main()
{
    whileLoop();
    forloop();
}

