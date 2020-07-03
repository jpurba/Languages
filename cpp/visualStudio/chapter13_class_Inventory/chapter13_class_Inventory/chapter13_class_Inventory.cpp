
/*
*
* Jeremiah Purba
*
* Chapters 13 Programming Assignment CISC 187 Summer 2020
*
* July 2, 2020
*
* File name: chapter13_class_Inventory.cpp
*
*/
#include <iostream>
#include <string>
#include <iomanip>
#include "Inventory.h";

using namespace std;

const int descriptionLength = 25;  // constant maximum length dexcription
const int lastNameLength = 25;     // constant maximum length last name
const int phoneNumberLength = 11;  // constant maximum length phone number
const int customerInventoryNumber = 2;  // constant number of customer inventory
const float minimumPrice = 0.0;          // constant minimum price
const float minimumHours = 0.0;          // constant minimum hours

// function prototypes
void inputCustomerInventory(Inventory customer[]);
void printCustomerInventory(Inventory customer[]);

int main()
{
    
    Inventory customer[customerInventoryNumber];   // create inventory objects
    Inventory customer1(5, "data 5", "Purba 5", "1234567890", 56.98, 05.67);

    cout << "Mr.Ding Board Repair and Surf Shop" << endl;

    inputCustomerInventory(customer); // get user input for inventory
    
    printCustomerInventory(customer); // print inventory data to screen

    return 0;
    
}


void inputCustomerInventory(Inventory customer[]) {

    int customerCheckInNumber;
    int i;
    string customerDescription;
    string customerLastName;
    string customerPhone;
    string number;
    string price;
    string hours;
    float  customerQuotedPrice;
    float  customerHoursWorked;
    cout << fixed << showpoint << setprecision(2); // set output precision

    for (i = 0; i < customerInventoryNumber; i++) {

        // Get check in number
        cout << "\nEnter the checkin number (greater than zero): ";
        
        getline(cin, number);                 // get input number as string
        customerCheckInNumber = stoi(number); // convert string input to integer
        while (cin.fail() || customerCheckInNumber <= 0)  // input validation for input <= 0
        {
            cout << "Error ! your input is zero or less than zero " << endl;
            cout << "Enter the checkin number (greater than zero): ";
            
            getline(cin, number);
            customerCheckInNumber = stoi(number);
        }

        cout << "\nYour input number is " << customerCheckInNumber << endl;
        customer[i].setCheckInNumber(customerCheckInNumber);

        cout << "Enter Damage Description : ";
        getline(cin, customerDescription);

        while (customerDescription.size() > descriptionLength)  // input validation for input > 25
        {
            cout << "Error ! your description is too long " << endl;
            cout << "Enter Damage Description : ";
            getline(cin, customerDescription);
        }

        cout << "\nYour Damage description is " << customerDescription << endl;
        customer[i].setDamageDesc(customerDescription);

        // Get customer last name
        cout << "Enter Last Name: ";
        getline(cin, customerLastName);

        while (customerLastName.size() > lastNameLength) {

            cout << "Error ! your last name is too long " << endl;
            cout << "Enter Last Name : ";
            getline(cin, customerLastName);

        }

        cout << "\nYour Last Name is " << customerLastName << endl;
        customer[i].setCustomerLast(customerLastName);

        // Get customer phone number
        cout << "Enter Phone Number: ";
        getline(cin, customerPhone);

        while (customerPhone.size() > phoneNumberLength) {

            cout << "Error ! your phone number is too long " << endl;
            cout << "Enter phone number : ";
            getline(cin, customerPhone);

        }

        cout << "\nYour phone number is " << customerPhone << endl;
        customer[i].setCustPhone(customerPhone);

        // Get customer Quoted Price
        cout << "Enter Quoted Prices: $";

        getline(cin, price);
        customerQuotedPrice = stof(price);
        while (customerQuotedPrice < minimumPrice) {

            cout << "Error ! your quoted price is less than zero ! " << endl;
            cout << "Enter Quoted Price : $";
            cin >> customerQuotedPrice;

        }

        cout << "\nYour Quoted Price is " << customerQuotedPrice << endl;
        customer[i].setPriceQuoted(customerQuotedPrice);

        // Get Hours worked
        cout << "Enter Hours Worked: ";

        getline(cin, hours);
        customerHoursWorked = stof(hours);
        while (customerHoursWorked < minimumHours) {

            cout << "Error ! your hours worked is less than zero ! " << endl;
            cout << "Enter Hours Worked : ";
            cin >> customerHoursWorked;

        }

        cout << "\nYour Hours Worked is " << customerHoursWorked << endl;
        customer[i].setHoursWorked(customerHoursWorked);

    } // end for loop
}

// **********************************************************
// name:      printCustomerInventory
// called by: main
// passed:    Inventory customer[]
// returns:   nothing
// calls:     nobody
// The printCustomerInventory function display to screen :  *
// check in number, damage description, customer last name, *
// customer phone number, price quoted, hours worked on the *
// item and total price quoted.                             *
// **********************************************************

void printCustomerInventory(Inventory customer[]) {

    int i;
    float  totalQuotes = 0.0;
    cout << fixed << showpoint << setprecision(2); // set output precision

    cout << "Customers data are : " << endl;
/*
    for (i = 0; i < customerInventoryNumber; i++) {

        cout << "CheckIn Number: ";
        cout << setw(2)  << customer[i].getCheckInNumber() << endl;
        cout << "Damage: ";
        cout << setw(31) << customer[i].getDamageDesc() << endl;
        cout << "Cust: ";
        cout << setw(18) << customer[i].getCustomerLast() << endl;
        cout << "Phone: ";
        cout << setw(20) << customer[i].getCustPhone() << endl;
        cout << "Quote: ";
        cout << setw(12) << "$ " << customer[i].getPriceQuoted() << endl;
        cout << "Hours: ";
        cout << setw(14) << customer[i].getHoursWorked() << endl;
        cout << endl << endl;
        totalQuotes += customer[i].getPriceQuoted();
    }
    */

    for (i = 0; i < customerInventoryNumber; i++) {

        cout << "CheckIn Number: ";
        cout << setw(2) << right << customer[i].getCheckInNumber() << endl;
        cout << "Damage: ";
        cout << setw(31) << right << customer[i].getDamageDesc() << endl;
        cout << "Cust: ";
        cout << setw(18) << right << customer[i].getCustomerLast() << endl;
        cout << "Phone: ";
        cout << setw(20) << right << customer[i].getCustPhone() << endl;
        cout << "Quote: ";
        cout << setw(12) << right << "$ " << customer[i].getPriceQuoted() << endl;
        cout << "Hours: ";
        cout << setw(14) << right << customer[i].getHoursWorked() << endl;
        cout << endl << endl;
        totalQuotes += customer[i].getPriceQuoted();
    }

    cout << "----------------------------------" << endl;
    cout << "Total of all Quotes: $ " << totalQuotes << endl;
    cout << endl;

}