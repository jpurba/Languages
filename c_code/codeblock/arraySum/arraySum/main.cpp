#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 6;

    int arr[SIZE] = {};
    int i;
    int arraySum = 0;


    for (i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
        arraySum += arr[i];
    }
    cout << arraySum;

    return 0;
}
