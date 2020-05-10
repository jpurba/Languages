// unit6_quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

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


void forLoop_2(void) {
    for (int x = 20; x < 40; x = x + 3)
    {
        cout << x << " ";
    }
}

void forLoop_3(void) {
    int i, j;
    for (i = 0; i < 4; i++)
    {
        cout << "i = " << i << endl;

        for (j = 0; j < 3; j++)
        {
            if (i == 2)
                break;
        }
    }

    cout << i << endl;
 
}

void forLoop_4(void) {
    int total = 0;
    for (int s = 1; s < 15; s++)
    {
        total = total + s;
    }
    cout << (total) << endl;
}

void powerOf(void) {
    
    float x = 36.0;
    x = sqrt(x);
    cout << "x = sqrt(36.0) = " << x << endl;
    cout << "pow(4,2): " << pow(4, 2) << endl;
    cout << "sqrt(sqrt(pow(2,4))): " << sqrt(sqrt(pow(2, 4))) << endl;
}




int main()
{
    cout << tolower('$') << endl;
    cout << "\n\nHello world ! " << endl;




    //whileLoop();
//forloop();
//forLoop_2();
//forLoop_3();
//forLoop_4();
//powerOf();
    return 0;

}


