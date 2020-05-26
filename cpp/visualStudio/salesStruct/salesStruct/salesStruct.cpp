// salesStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

void initialize(ifstream& indata, salesPersonRec list[], int listSize);
void getData(ifstream& infile, salesPersonRec list[], int listSize);
using namespace std;

int main()
{
    cout << "Hello World!\n";
}

void initialize(ifstream& indata, salesPersonRec list[], int listSize) {
    
    int index;
    int quarter;

    for (index = 0; index < listSize; index++)
    {
        indata >> list[index].ID; // get salesperson's ID

        for (quarter = 0; quarter < 4; quarter++)
            list[index].salesByQuarter[quarter] = 0.0;
        list[index].totalSale = 0.0;
    }

} // end initialize

void getData(ifstream& infile, salesPersonRec list[], int listSize) {

    int index;
    int quarter;
    string sID;
    int month;
    double amount;

    infile >> sID;  //get salesperson's ID 
    while (infile)
    {
        infile >> month >> amount;

        for (index = 0; index < listSize; index++)
            if (sID == list[index].ID)
                break;

        if (1 <= month && month <= 3)
            quarter = 0;
        else if (4 <= month && month <= 6)
            quarter = 1;
        else if (5 <= month && month <= 9)
            quarter = 2;
        else
            quarter = 3;

        if (index < listSize)
            list[index].saleByQuarter[quarter] += amount;
        else
            cout << "Invalid salesperson's ID." << endl;
    }
}
