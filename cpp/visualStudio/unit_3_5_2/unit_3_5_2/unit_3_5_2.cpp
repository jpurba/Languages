// unit_3_5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string lastnameA, firstnameA;
    double currentSalaryA, percentPayIncreaseA, updatedSalaryA;

    string lastnameB, firstnameB;
    double currentSalaryB, percentPayIncreaseB, updatedSalaryB;

    string lastnameC, firstnameC;
    double currentSalaryC, percentPayIncreaseC, updatedSalaryC;

    ifstream inFile;
    ofstream outFile;
    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5Output.dat");
    outFile << setprecision(2) << showpoint << fixed;

    inFile >> lastnameA >> firstnameA >> currentSalaryA >>
        percentPayIncreaseA;

    inFile >> lastnameB >> firstnameB >> currentSalaryB >>
        percentPayIncreaseB;

    inFile >> lastnameC >> firstnameC >> currentSalaryC >>
        percentPayIncreaseC;

    updatedSalaryA = currentSalaryA + (currentSalaryA * percentPayIncreaseA / 100);
    updatedSalaryB = currentSalaryB + (currentSalaryB * percentPayIncreaseB / 100);
    updatedSalaryC = currentSalaryC + (currentSalaryC * percentPayIncreaseC / 100);

    outFile << lastnameA << " " << firstnameA << " " << updatedSalaryA << endl;
    outFile << lastnameB << " " << firstnameB << " " << updatedSalaryB << endl;
    outFile << lastnameC << " " << firstnameC << " " << updatedSalaryC << endl;

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
