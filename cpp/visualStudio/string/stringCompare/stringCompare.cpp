// stringCompare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    const char *str1 = "neighneigh";
    const char *str2 = "neigh";
    const char* str3 = "neigh";
    int numHorse=0;
    int k = 0;
    string strCompare = "";

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    for (int j = 0; j < 6; j++) {
        k = 0;
        str1 + j;
        for (int i = j; k < 5; k++) {
            strCompare = strCompare + *(str1+j+k);
            cout << i << " " << j << endl;
        }
        
        cout << "\nstrCompare: " << strCompare << endl;

        if (strcmp(str2, strCompare.c_str()) == 0) {
            cout << "Both strings are equal." << endl;
            numHorse++;
        }
        else {
            cout << "Both strings are not equal." << endl;
        }

        strCompare = "";

    
    }
    cout << "Number of horse: " << numHorse << endl;
}

