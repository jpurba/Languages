// stringCompare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void relationalOperation(string s1, string s2)
{
    if (s1 != s2)
        cout << s1 << " is not equal to " << s2 << endl;    
    if (s1 > s2)
        cout << s1 << " is greater than " << s2 << endl;
    else
        cout << s2 << " is greater than " << s1 << endl;
}

void compareFunction(string s1, string s2)
{
    // comparing both using inbuilt function
    int x = s1.compare(s2);

    if (x != 0)
        cout << s1 << " is not equal to " << s2 << endl;
    if (x > 0)
        cout << s1 << " is greater than " << s2 << endl;
    else
        cout << s2 << " is greater than " << s1 << endl;
}



int main()
{
    string s1("Geeks");
    string s2("forGeeks");
    relationalOperation(s1, s2);
    cout << endl;
    compareFunction(s1, s2);

    s1 = ""
    return 0;

}

