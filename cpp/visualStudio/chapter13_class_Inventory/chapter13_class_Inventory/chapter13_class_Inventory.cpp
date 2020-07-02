
#include <iostream>
#include <string>
#include "Inventory.h";

using namespace std;


int main()
{
    const int descriptionLength = 25;  // constant maximum length dexcription
    const int lastNameLength = 25;     // constant maximum length last name
    const int phoneNumberLength = 11;  // constant maximum length phone number
    const int customerInventoryNumber = 5;  // constant number of customer inventory

    Inventory customer[customerInventoryNumber];
    int customerCheckInNumber;
    int i;
    string customerDescription;
    string customerLastName;

    cout << "Mr.Ding Board Repair and Surf Shop" << endl;

    for (i = 0; i < customerInventoryNumber; i++) {

        // Get check in number
        cout << "Enter the checkin number (greater than zero): ";
        cin >> customerCheckInNumber;
        while (cin.fail() || customerCheckInNumber <= 0)  // input validation for input <= 0
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error ! your input is zero or less than zero " << endl;
            cout << "Enter the checkin number (greater than zero): ";
            cin >> customerCheckInNumber;
        }

        cout << "\nYour input number is " << customerCheckInNumber << endl;
        customer[i].setCheckInNumber(customerCheckInNumber);
    
        // Get damage description
        cin.ignore();
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

    }

    cout << "Customers data are : ";
    for (i = 0; i < customerInventoryNumber; i++) {

        cout << customer[i].getCheckInNumber() << endl;
        cout << customer[i].getDamageDesc() << endl;
        cout << customer[i].getCustomerLast() << endl;
        cout << endl << endl;
    }
    cout << endl;
    
    

    cout << "Hello World!\n";
}

