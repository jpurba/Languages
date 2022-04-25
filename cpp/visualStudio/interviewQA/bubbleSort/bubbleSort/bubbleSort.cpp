// bubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int temp, pass = 0;
    int a[10] = {10,2,0,14,43,25,18,1,5,45};
    cout << "Input list ...\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }

    cout << endl;

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[i]) {
                temp = a[i];  // swap the array content
                a[i] = a[j];
                a[j] = temp;
            }
        }
        pass++;
    }

    cout << "Sorted Element List ... \n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    cout << "\n Number of passes taken to sort the list: " << pass << endl;
    std::cout << "\nHello World!\n";
    return 0;

}

