// unit_8_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Write a C++ function, lastLargestIndex, that takes as parameters an int array and 
its size and returns the index of the last occurrence of the largest element in the array.
To test your function, write a main that prompts a user for a list of 15 integers and 
outputs the index and value of the first occurrence of the largest value.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int lastLargestIndex(int array[], int size, int& largest);

int main()
{
    const int N = 15;
    //int arr[N] = { 5,198,76,9,4,2,15,8,21,34,99,3,6,13,61 };
    //int arr[N] = { 5,76,9,4,2,15,8,21,34,99,3,6,13,61,198 };
    //int arr[N] = { 5,76,9,4,2,15,8,198,21,34,99,3,6,13,61 };
    //int arr[N] = { 1,2,3,4,5,6,7,8,9,0,10,11,12,13,14 };
    //int arr[N] = { 56, 34, 67, 54, 56, 87, 66, 92, 15, 32, 55, 54, 88, 92, 30 };
    //int arr[N] = { 79, 26, 79, 87, 73, 44, 67, 46, 55, 13, 20, 20, 33, 42, 60 };
    //int arr[N] = { 63, 1, 40, 81, 30, 11, 26, 44, 98, 1, 80, 98, 15, 3, 42 };
    int arr[N] = {};
    int i;
    int location, largest;

    largest = 0;

    cout << "Input 15 different numbers : ";
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    location = lastLargestIndex(arr, N, largest);
    cout << "The position of the first occurrence of the largest element in list is:" << location << endl;
    cout << "The largest element in list is: " << largest << endl;

    //std::system("pause");

    return 0;
}

int lastLargestIndex(int arr[], int size, int& largest)
{
    int maxIndex = 0; // start 

    for (int i = 0; i < size; i++)
    {
        cout << "i= " << i<< " arr[maxIndex] = " << arr[maxIndex] << "; arr[i] = " << arr[i] << endl;
        if (arr[maxIndex] <= arr[i])
        {
            maxIndex = i;
            largest = arr[i];
            cout << "First largest number: " << largest << endl;
        }
    }

    return maxIndex;
}
