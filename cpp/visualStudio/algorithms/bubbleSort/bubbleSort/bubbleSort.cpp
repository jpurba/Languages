// bubbleSort.cpp : The basic sort 
// Bubble sort has O(n^2) or n square complexity
// It is inefficient for large input data set
//

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, temp;
    int a[5] = { 10,2,0,43,12 };

    cout << "Input list ... \n";
    for (i = 0; i < 5; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 5; ++i) {
        for (j = i + 1; j < 5; ++j) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        cout << "\nPass ..." << i << endl;
        for (k = 0; k < 5; ++k) {
            cout << a[k] << "\t";
        }
        cout << endl;
    }
    cout << "\nSorted element list ...\n";
    for (i = 0; i < 5; ++i) {
        cout << a[i] << "\t";
    }
    return 0;
}

