// bubbleSortVector.cpp : 
// bubbleSort use vector example

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void printVector(const vector<T>& vec) {
    for (auto& i : vec) {
        cout << i << ", ";
    }
    cout << endl;
}

template<typename T>
void bubbleSort(vector<T>& vec) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        for (size_t j = 0; j < vec.size() - i - 1; ++j) {
            if (vec.at(j) > vec.at(j + 1)) {
                swap(vec.at(j), vec.at(j + 1));
            }
        }
        cout << "pass ..." << i << endl;
        printVector(vec);
    }
}


int main()
{
    vector<int> vec1 = { 43, 5, 123, 94, 359, -23, 2, -1 };

    printVector(vec1);
    bubbleSort(vec1);
    cout << endl;
    printVector(vec1);

    return 0;
}

