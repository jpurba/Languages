// unit3_file_IO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //Declare variables
    ifstream inFile;  //input file stream variable
    ofstream outFile; //output file stream variable

    double test1, test2, test3, test4, test5;
    double average;

    string firstName;
    string lastName;


    inFile.open("Test.txt");
    outFile.open("testAvg.out");
    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Processing data" << endl;

    inFile >> firstName >> lastName;
    outFile << "Student Name: " << firstName << " " << lastName << endl;

    inFile >> test1 >> test2 >> test3 >> test4 >> test5;
    outFile << "Test scores: " << setw(6) << test1 << setw(6) << test2;
    outFile << setw(6) << test3 << setw(6) << test4 << setw(6) << test5 << endl;

    average = (test1 + test2 + test3 + test4 + test5) / 5.0;
    outFile << "Average test score: " << setw(6) << average << endl;

    inFile.close();
    outFile.close();

    cout << "Hello World!\n";
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
