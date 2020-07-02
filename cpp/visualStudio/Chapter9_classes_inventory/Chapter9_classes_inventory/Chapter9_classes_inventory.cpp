// Chapter9_classes_inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*If you have any queries , feel free to contact via legal mediums*/

#include <iostream>
#include<string>
#include "Inventory.h";

using namespace std;

int main() {
	Inventory repair[5];
	int checkIn;
	float hrs, price, totalQuote = 0.0;
	string desc, last, phone;
	cout << "Mr.Ding Board Repair and Surf Shop";
	for (int i = 0; i < 5; i++) {
		cout << "Enter the CheckIn Number: ";
		cin >> checkIn;
		if (checkIn > 0) {
			repair[i].setCheckInNumber(checkIn);
		}
		else {
			cout << "Invalid Input !!!";
		}
		cout << "Enter Damage Description: ";
		cin >> desc;
		if (desc.length() < 25) {
			repair[i].setDamageDesc(desc);
		}
		else {
			cout << "Invalid Input !!!";
		}
		cout << "Enter Custormer Last Name: ";
		cin >> last;
		if (last.length() < 25) {
			repair[i].setCustomerLast(last);
		}
		else {
			cout << "Invalid Input !!!";
		}
		cout << "Enter Customer Phone Number: ";
		cin >> phone;
		if (phone.length() < 11) {
			repair[i].setCustPhone(phone);
		}
		else {
			cout << "Invalid Input !!!";
		}
		cout << "Enter the Quoted Price: ";
		cin >> price;
		if (price >= 0.0) {
			repair[i].setPriceQuoted(price);
		}
		else {
			cout << "Invalid Input !!!";
		}
		cout << "Enter the Number of Hours Worked: ";
		cin >> hrs;
		if (hrs >= 0.0) {
			repair[i].setHoursWorked(hrs);
		}
		else {
			cout << "Invalid Input !!!";
		}
	}
	for (int j = 0; j < 5; j++) {

		cout << "CheckIn Number: " << repair[j].getCheckInNumber() << endl;
		cout << "Damage: " << repair[j].getDamageDesc() << endl;
		cout << "Cust: " << repair[j].getCustomerLast() << endl;
		cout << "Phone: " << repair[j].getCustPhone() << endl;
		cout << "Quote: $" << repair[j].getPriceQuoted() << endl;
		cout << "Hours: " << repair[j].getHoursWorked() << endl;
		totalQuote += repair[j].getPriceQuoted();
	}
	for (int k = 0; k < 15; k++) {
		cout << "- ";
	}
	cout << "\nTotal of all Quotes: $" << totalQuote;
	return 0;
}