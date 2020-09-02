// oopTest1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.h"

using namespace std;

void investment(void)
{
    double principal;
    double interest;
    int year;
    const double yearlyCost = 4000000000.00;
    int index;

    cout << "Enter the amount of money: ";
    cin >> principal;
    cout << endl;
    cout << "For how many year ?";
    cin >> year;
    cout << endl;
    cout << "Interest rate (in percent)?";
    cin >> interest;
    for (index = 0; index < year; index++)
    {
        cout << "Start of the year, principal: " << principal << endl;
        principal = principal - yearlyCost;

        principal = principal + (principal * interest);
        cout << "At the end of year: " << index + 1
            << " principal = " << principal << "\n" << endl;
    }
}

//****************************************************
// Definition of function displayMenu. This function *
// displays the user's menu on the screen.           *
//****************************************************
void displayMenu()
{
    cout << "\n                   MENU\n";
    cout << "-----------------------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Display the number of transactions\n";
    cout << "C) Display interest earned for this period\n";
    cout << "D) Make a deposit\n";
    cout << "E) Make a withdrawal\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the program\n\n";
    cout << "Enter your choice: ";
}

//************************************************************
// Definition of function makeDeposit. This function accepts *
// a reference to an Account object. The user is prompt for  *
// the dollar amount of the deposit, and the makeDeposit     *
// member of the account object is then called.              *
//************************************************************
void makeDeposit(Account& acnt)
{
    double dollars;
    cout << "Enter the amount of the deposit: ";
    cin >> dollars;
    cin.ignore();
    acnt.makeDeposit(dollars);
}


//************************************************************
// Definition of function withdraw. This function accepts    *
// a reference to an account object. The user is promped for *
// the dollar amount of the withdrawal, and the withdraw     *
// member of the account object is then called.              *
//************************************************************
void withdraw(Account& acnt)
{
    double dollars;
    cout << "Enter the amount of the withdrawal: ";
    cin >> dollars;
    cin.ignore();
    if (!acnt.withdraw(dollars))
        cout << "Error: withdrawal amount too large.\n\n";
}

int main()
{
    Account savings(0.045,0.0);   //Savings account object
    char choice;

    // Set numeric output formatting:
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Display the menu and get a valid selection
        displayMenu();
        cin >> choice;
        while (toupper(choice) < 'A' || toupper(choice) > 'G')
        {
            cout << "Please make a choice in the range "
                << "of A through G:";
            cin >> choice;
        }

        // Process the user's menu selection
        switch (choice)
        {
            case 'a':
            case 'A': cout << "The current balance is $";
                      cout << savings.getBalance() << endl;
                      break;

            case 'b':
            case 'B': cout << "There have been ";
                      cout << savings.getTransactions() 
                           << " transactions. \n"; 
                      break;

            case 'c':
            case 'C': cout << "Interest earned for this period: $ ";
                      cout << savings.getInterest() << endl;
                      break;

            case 'd':
            case 'D': makeDeposit(savings);
                      break;

            case 'e':
            case 'E': withdraw(savings);
                      break;

            case 'f':
            case 'F': savings.calcInterest();
                      cout << "Interest added.\n";
                      break;
            default :
                cout << "Wrong choice ! Please enter correct choice \n";
        }
    } while (toupper(choice) != 'G');

    //investment();
    
    return 0;
}

