/*
*
* Jeremiah Purba
*
* Chapters 13 Programming Assignment CISC 187 Summer 2020
*
* July 2, 2020
*
* File name: Inventory.cpp
*
*/
#include "Inventory.h"

Inventory::Inventory() {

	checkInNumber = 0;
	damageDesc = "";
	customerLast = "";
	custPhone = "";
	priceQuoted = 0.0;
	hoursWorked = 0.0;

	cout << "Default Inventory constructor" << endl;

}

Inventory::Inventory(int checkIn, string description, string lastName, string phone,
	float price, float hours) {

	checkInNumber = checkIn;
	damageDesc = description;
	customerLast = lastName;
	custPhone = phone;
	priceQuoted = price;
	hoursWorked = hours;

	cout << "Overloaded Inventory constructor" << endl;
}

void Inventory::setCheckInNumber(int number) {
	if (number <= 0) {
		cout << "Error ! Number is either zero or less than zero !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		checkInNumber = number;
	}
}

int Inventory::getCheckInNumber(void) {
	return checkInNumber;
}

void Inventory::setDamageDesc(string description) {

	if (description.size() > damageDescriptionLength) {
		cout << "Error ! Damage description length is too long !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		damageDesc = description;
	}
}

string Inventory::getDamageDesc(void) {
	return damageDesc;
}

void Inventory::setCustomerLast(string lastName) {
	
	if (lastName.size() > nameLength) {
		cout << "Error ! Number is either zero or less than zero !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		customerLast = lastName;
	}
}

string Inventory::getCustomerLast(void) {

	return customerLast;
}

void Inventory::setCustPhone(string phoneNumber) {

	if (phoneNumber.size() > phoneLength) {
		cout << "Error ! Phone number is too long !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		custPhone = phoneNumber;
	}

}
string Inventory::getCustPhone(void) {

	return custPhone;
}

void Inventory::setPriceQuoted(float price) {

	if (price < priceMinimum) {
		cout << "Error ! Price Quoted should be zero or higher !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		priceQuoted = price;
	}
}
float Inventory::getPriceQuoted(void) {

	return priceQuoted;

}

void Inventory::setHoursWorked(float hours) {

	if (hours < hoursMinimum) {
		cout << "Error ! Hours worked should be zero or higher !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		hoursWorked = hours;
	}

}

float Inventory::getHoursWorked(void) {

	return hoursWorked;

}