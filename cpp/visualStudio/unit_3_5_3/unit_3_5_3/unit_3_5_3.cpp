// unit_3_5_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //Declare variables
    ifstream inFile;  // input file stream variable
    ofstream outFile; // output file stream variable

    double currentSalary, updatedSalary, percentIncrease;
    const double PERCENT = 100.00;

    string firstName;
    string lastName;

    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5Output.dat");
    outFile << setprecision(2) << fixed << showpoint;

    cout << "Processing data" << endl;
    while (inFile >> lastName) {
        inFile >> firstName;
        inFile >> currentSalary >> percentIncrease;
        updatedSalary = currentSalary + (currentSalary * (percentIncrease / PERCENT));
        outFile << firstName << " " << lastName << " " << updatedSalary << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
