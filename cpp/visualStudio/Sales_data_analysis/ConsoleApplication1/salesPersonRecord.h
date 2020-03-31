#ifndef __SALESPERSONRECORD_H__
#define __SALESPERSONRECORD_H__

#include <iostream>
#include <string>

using namespace std;

struct salesPersonRec
{
    string ID; // sales person ID
    double saleByQuarter[4]; // array to store total sales each quarter
    double totalSale; // salesperson's yearly sales amount
};

void initialize(ifstream& indata, salesPersonRec list[], int listSize);
void getData(ifstream& infile, salesPersonRec list[], int listSize);
void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]);
void totalSaleByPerson(salesPersonRec list[], int listSize);
void printReport(ofstream outfile, salesPersonRec list[], int listSize, double saleByQuarter[]);
void maxSaleByPerson(void);
void maxSaleByQuarter(void);

#endif
