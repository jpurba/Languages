// dynamicArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int* a = NULL;   //Pointer to integer, initialize to nothing 
    int* b = NULL;   //Pointer to integer, initialize to nothing 
    int n;           // size needed for array
    int q;           // size needed for array

    int i, j;        // for loop index variables

    cin >> n;        // read input for size
    a = new int[n];  // allocate n ints and save ptr in a,
                     // like 1 dimention array

    for (i = 0; i < n; i++) {
        cin >> *(a + i);       // fill array with values from input
    }
 
    cout << "The input array is: " << endl;
    for (i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
    delete[] a; // when done, free memory pointed to by a

    return 0;
}

/*
int main() { */
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* int n, q; //n number of variable lenght arrays
    // q no of queries asked
    cin >> n >> q;
    int** Vectors = new int* [n];//no of length of var. arrays
    int j;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        Vectors[i] = new int[j];
        for (int y = 0; y < j; y++)
            cin >> Vectors[i][y];
    }
    int q1, q2;
    for (int i = 0; i < q; i++)
    {
        cin >> q1 >> q2;
        cout << Vectors[q1][q2] << endl;

    }

    return 0;
} */