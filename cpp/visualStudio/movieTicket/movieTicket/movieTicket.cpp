// movieTicket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string movieName;
    double adultTicketPrice, childTicketPrice;
    int noOfAdultTicketSold, noOfChildTicketSold;
    double amountDonated;
    double grossAmount, netSaleAmount;
    double percentDonation;

    cout << fixed << showpoint << setprecision(2);  // set output format to 2 decimal places

    cout << "Enter the movie name: ";
    getline(cin, movieName);
    cout << endl;

    cout << "Enter the price of an adult ticket: ";
    cin >> adultTicketPrice;
    cout << endl;

    cout << "Enter the price of a child ticket: ";
    cin >> childTicketPrice;
    cout << endl;
    
    cout << "Enter the number of adult ticket sold: ";
    cin >> noOfAdultTicketSold;
    cout << endl;

    cout << "Enter the number of child ticket sold: ";
    cin >> noOfChildTicketSold;
    cout << endl;

    cout << "Enter the percentage of donation: ";
    cin >> percentDonation;
    cout << endl << endl;

    
    // Calculate gross amount
    grossAmount = (adultTicketPrice * noOfAdultTicketSold)
        + (childTicketPrice * noOfChildTicketSold);

    // Calculate amount donated
    amountDonated = (grossAmount * (percentDonation / 100));

    // Calculate net sale amount
    netSaleAmount = grossAmount - amountDonated;


    cout << setfill('.') << left << setw(35) << "Movie Name: ";
    cout << right << " " << movieName << endl;
    cout << left << setw(35) << "Number of Tickets Sold: ";
    
    cout << setfill('.') << right << setw(10);
    cout << noOfAdultTicketSold + noOfChildTicketSold;
    cout << endl;
    
    cout << setfill('.') << left << setw(36);
    cout << "Gross Amount: ";
    
    cout << setfill(' ') << right << " ";
    cout << setw(8) << grossAmount << endl;

    cout << setfill('.') << left << setw(35);
    cout << "Percentage of Gross Amount Donated: ";
    cout << setfill(' ') << right << setw(9);
    cout << percentDonation << '%' << endl;

    cout << setfill('.') << left << setw(35);
    cout << "Amount Donated: ";
    cout << setfill(' ') << right << " $";
    cout << setw(8) << amountDonated << endl;

    cout << setfill('.') << left << setw(35) << "Net Sale: ";
    cout << setfill(' ') << right << " $";
    cout << setw(8) << netSaleAmount << endl;

    return 0;
}

