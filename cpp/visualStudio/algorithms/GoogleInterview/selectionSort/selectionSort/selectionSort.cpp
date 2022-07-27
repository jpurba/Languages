// selectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void swap(int* n, int* m) {
    int tmp;
    tmp = *m;
    *m = *n;
    *n = tmp;
}

void swap1(int* n, int* m) {
    printf("\nbefore swap, first = %d, second = %d\n", *n, *m);
    *n = *n ^ *m;
    *m = *n ^ *m;
    *n = *n ^ *m;
    printf("after swap, first = %d, second = %d\n", *n, *m);
}

void printArray(int* a, int sz) {
    for (int i = 0; i < sz; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}



void SelectionSort(int* a, int sz) {
    int i, j, mn;
    /* traverse the entire array */
    for (i = 0; i < sz; i++) {
        /* find the min */
        mn = i;
        /* compare against all other elements */
        for (j = i + 1; j < sz; j++) {
            //cout << "mn= " << mn << "; *(a+j)= " << *(a + j) << "; *(a+mn)= " << *(a + mn) << endl;
            if (*(a + j) < *(a + mn)) {
                mn = j;
                
            }
            printArray(a, sz);
            //cout << endl;
        }
        swap(*(a + mn), *(a + i));
        printArray(a, sz);
        cout << endl;
        //cout << endl;
    }
}

void SelectionSort1(int a[], int sz) {
    int i, j, mn;
    /* traverse the entire array */
    for (i = 0; i < sz; i++) {
        /* find the min */
        mn = i;
        /* compare against all other elements */
        for (j = i + 1; j < sz; j++) {
            //cout << "mn= " << mn << "; *(a+j)= " << *(a + j) << "; *(a+mn)= " << *(a + mn) << endl;
            
            if (a[j] < a[mn]) {
                mn = j;
            }
            printArray(a, sz);
            //cout << endl;
        }
        swap(a[mn], a[i]);
        printArray(a, sz);
        cout << endl;
        //cout << endl;
    }
}

int main()
{
    int k;
    int a[] = { 5, 7, 1, 3, 4, 9, 2, 6, 8, 0 };
    int b[] = { 5, 7, 1, 3, 4, 9, 2, 6, 8, 0 };

    int size = sizeof(a) / sizeof(a[0]);

//    for (k = 0; k < size; k++) {
//        cout << *(a + k) << " ";
//    }
//    cout << endl;

    printArray(a, size);

    cout << "\n=========================\n";
    cout << "\n== with Selection Sort ==\n";
    cout << "\n=========================\n";

    SelectionSort(a, size);

    cout << endl;
    printArray(b, size);
    cout << "\n=========================\n";
    cout << "\n== with Selection Sort1 ==\n";
    cout << "\n=========================\n";

    SelectionSort1(b, size);

    printArray(b, size);
}

