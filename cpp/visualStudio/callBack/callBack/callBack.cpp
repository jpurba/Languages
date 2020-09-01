// callBack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// An example of a call back function
bool updateProgress(int pct)
{
    cout << "UpdateProgress: pct: " << pct << "% complete ... \n";

    return(true);

}

//A typedef to make for easier reading
typedef bool (*FuncPtrBoolInt)(int);

// A function that runs for a while
void longOperation(FuncPtrBoolInt f)
{
    for (long index = 0; index < 100000000; index++)
    {
        if (index % 10000000 == 0)
        {
            f(index / 1000000);
        }
    }
}

int main()
{
    longOperation(updateProgress);
}

