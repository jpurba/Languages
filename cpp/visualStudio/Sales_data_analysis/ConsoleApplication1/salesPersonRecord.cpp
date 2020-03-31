// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "salesPersonRecord.h"
#include <fstream>
#include <iomanip>


// Input data from file stream
void initialize(ifstream& indata, salesPersonRec list[], int listSize) {
    
    int index;
    int quarter;

    for (index = 0; index < listSize; index++)
    {
        indata >> list[index].ID;  // get salesperson's ID

        for (quarter = 0; quarter < 4; quarter++)
            list[index].saleByQuarter[quarter] = 0.0;

        list[index].totalSale = 0.0;
    }
} // end initialize


void getData(ifstream& infile, salesPersonRec list[], int listSize) {
    int index;
    int quarter;
    string sID;
    int month;
    double amount;

    infile >> sID;  // get salesperson's ID
    while (infile)
    {
        infile >> month >> amount;  // get the sale month and the sale amount

        for (index = 0; index < listSize; index++)
            if (sID == list[index].ID)
                break;

        if (1 <= month && month <= 3)
            quarter = 0;

        else if (4 <= month && month <= 6)
            quarter = 1;

        else if (7 <= month && month <= 9)
            quarter = 2;

        else
            quarter = 3;

        if (index < listSize)
            list[index].saleByQuarter[quarter] += amount;
        else
            cout << "Invalid salesperson's ID." << endl;

        infile >> sID;
    } // end while

} // end getData


void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]) {

    int quarter;
    int index;

    for (quarter = 0; quarter < 4; quarter++)
        totalByQuarter[quarter] = 0.0;

    for (quarter = 0; quarter < 4; quarter++)
        for (index = 0; index < listSize; index++)
            totalByQuarter[quarter] += list[index].saleByQuarter[quarter];
} // end saleByQuarter


void totalSaleByPerson(salesPersonRec list[], int listSize) {
    int index;
    int quarter;

    for (index = 0; index < listSize; index++)
        for (quarter = 0; quarter < 4; quarter++)
            list[index].totalSale += list[index].saleByQuarter[quarter];

} // end totalSaleByPerson


void printReport(ofstream outfile, salesPersonRec list[], int listSize, double saleByQuarter[]) {

    int index;
    int quarter;

    outfile << "---------- Annual Sales Report ----------"
        << "----" << endl;
    outfile << endl;
    outfile << "  ID         QT1       QT2       QT3      QT4       Total" << endl;
    outfile << "_________________________________________________________" << endl;


    for (index = 0; index < listSize; index++)
    {
        outfile << list[index].ID << "    ";

        for (quarter = 0; quarter < 4; quarter++)
            outfile << setw(10)
            << list[index].saleByQuarter[quarter];

        outfile << setw(10) << list[index].totalSale << endl;
    }
    outfile << "Total     ";

    for (quarter = 0; quarter < 4; quarter++)
        outfile << setw(10) << saleByQuarter[quarter];

    outfile << endl << endl;
} // end printReport


int main()
{
    std::cout << "Hello World!\n";
}

