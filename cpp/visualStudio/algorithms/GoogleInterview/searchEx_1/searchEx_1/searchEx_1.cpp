// searchEx_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int searchLinear(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
// This method good for sorted array
bool HasPairWithSum(const vector<int>& data, int sum) {
    int low = 0;
    int hi = data.size() - 1;

    std::cout << "HasPairWithSum, hi = " << hi << endl;
    while (low < hi) {
        int s = data[low] + data[hi];
        if (s == sum) {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool HasPairWithSum_2(const vector<int> data, int sum) {
    unordered_set<int> comp; // complements
    for (int value : data) {
        cout << "value = " << value << endl;
        if (comp.find(value) != comp.end())  // Found value = 8
            return true;
        comp.insert(sum - value);
    }

    for (int it : comp) {
        cout << "[" << it << "]";
    }
    cout << endl;
    return false;

}

int main()
{
    vector<int> a = { 1, 2, 3, 9 };
    //vector<int> a = { 1, 2, 4, 4 };
    int sum = 8;
    bool result = false;
    int arr[] = { 2,3,4,10,40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int response = 0;

    cout << "Find x= "<< x << " and with n = " << n << endl;
    response = searchLinear(arr, n, x);

    if (response == -1) {
        cout << "Element is not presennt in array\n";
    }
    else {
        cout << "Element is present in array\n";
    }


    cout << "Before !\n";
    result = HasPairWithSum(a, sum);
    if (result == true)
        cout << "There is a pair of number with sum = " << sum << endl;
    else
        cout << "There is not a pair of number with sum = " << sum << endl;

    a = { 1, 2, 4, 4 };
    result = HasPairWithSum(a, sum);
    if (result == true)
        cout << "There is a pair of number with sum = " << sum << endl;
    else
        cout << "There is not a pair of number with sum = " << sum << endl;

    std::cout << "Hello World!\n";


    result = HasPairWithSum_2(a, sum);
    if (result == true)
        cout << "There is a pair of number with sum = " << sum << endl;
    else
        cout << "There is not a pair of number with sum = " << sum << endl;

    a = { 1, 2, 3, 9 };
    result = HasPairWithSum_2(a, sum);
    if (result == true)
        cout << "There is a pair of number with sum = " << sum << endl;
    else
        cout << "There is not a pair of number with sum = " << sum << endl;


}
