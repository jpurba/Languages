// unit_8_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int* xp, int yp);
void mySort(int arr[], int n);
void printArray(int arr[], int size);
void findPair(int arr[], int size);

using namespace std;

int main()
{
    const int N = 50;
    int i;
    //int arr[N] = {}; // for real code
    //int arr[N] = {23, 30, 34, 1, 3, 4, 9, 12, 96, 92, 80, 84,
    //    123, 54, 67, 87, 34, 55, 21, 38, 29, 111, 10, 44, 103,
    //    47, 83, 72, 77, 88, 80, 56, 49, 5, 102, 166, 134, 200,
    //    205, 188, 178, 133, 154, 148, 162, 191, 193, 207, 209, 
    //    44 };
    /*
    int arr[N] = {10, 17, 23, 65, 34, 6, 18, 27, 35, 110, 75, 25,
        100, 24, 19, 67, 45, 88, 70, 96, 41, 36, 72, 150, 125, 25,
        77, 200, 90, 166, 139, 55, 31, 8, 29, 119, 126, 137, 34,
        62, 135, 121, 108, 197, 45, 35, 24, 1, 16, 43};
    */
    
    int arr[N] = {15, 25, 23, 65, 34, 6, 18, 27, 35, 110, 75, 25,
        100, 24, 19, 67, 45, 90, 70, 96, 41, 36, 72, 150, 125, 25,
        77, 200, 90, 166, 139, 55, 31, 8, 29, 119, 126, 137, 
        34, 62, 135, 121, 108, 197, 45, 35, 24, 1, 16, 43 };
        
    // real code ask user for input number
    //cout << "Input 50 different numbers : ";
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }


    //cout << "Original array: ";
    //printArray(arr, N);

    mySort(arr, N);   // sort the array

    //cout << "Sorted array: ";
    //printArray(arr, N);

    findPair(arr, N);

    return 0;
}


void findPair(int arr[], int size) {
    int i, j, k;

    for (i = 0; i < size; i++) {

        cout << "list[" << i << "] = ";
        cout << arr[i] << " is the sum of: ";

        for (j = 0; j < size; j++) {

            for (k = j + 1; k <= size; k++) {

                if (arr[i] == arr[j] + arr[k]) {
                    cout << "list[" << j << "]" << ", ";
                    cout << "list[" << k << "]; ";
                }
            }
        }
        cout << endl;
    }


}

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void mySort(int arr[], int n) {
    int i, j, min_idx;

    // go through unsorted array
    for (i = 0; i < n; i++) {

        // find minimum element of array
        min_idx = i;  // start from beginning
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        //mySwap(&arr[min_idx], &arr[i]);
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}
