// linearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 15, 10, 42 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "\nElement is not in array\n"
        : cout << "\nElement is in array at index " << result << endl;

    // Function call
    x = 123;
    result = search(arr, n, x);
    (result == -1)
        ? cout << "\nElement is not in array\n"
        : cout << "\nElement is in array at index " << result << endl;

    return 0;
}

