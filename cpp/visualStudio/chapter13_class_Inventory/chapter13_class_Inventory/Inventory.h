#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
//#include <stdlib.h>

using namespace std;

class Inventory
{
	private:
		
		int checkInNumber;   // positive integer assigned by the clerk when the board is brought in for repair
		string damageDesc;   // string that holds the repair needs(< 25 characters)
		string customerLast; // string that holds last name of the customer (<25 chars)
		string custPhone;    // string that holds customer's phone number(<11 chars)
		float priceQuoted;   // float >=0 that holds the quoted repair price
		float hoursWorked;   // float >=0  that holds the number of hours of labor

	public:
		static const int damageDescriptionLength = 25;  // constant maximum length description
		static const int nameLength = 25;               // constant maximum length last name
		static const int phoneLength = 11;              // constant maximum length phone number
		static const float priceMinimum = 0.0;          // constant minimum price
		static const float hoursMinimum = 0.0;          // constant minimum hours

		Inventory();  	     // constructor
		Inventory(int checkIn, string description, string lastName, string phone,
			float price, float hours);  // overloaded constructor

		void setCheckInNumber(int number);      // mutator check in number
		int getCheckInNumber(void);             // accessor check in number
		void setDamageDesc(string description); // mutator damage description
		string getDamageDesc(void);             // accessor damage description
		void setCustomerLast(string lastName);  // mutator customer last name
		string getCustomerLast(void);           // accessor customer last name

		void setCustPhone(string phoneNumber);  // mutator customer phone
		string getCustPhone(void);              // accessor customer phone
		void setPriceQuoted(float price);       // mutator price quote
		float getPriceQuoted(void);             // accessor price quote
		void setHoursWorked(float hours);       // mutator hours worked
		float getHoursWorked(void);             // accessor hours worked

};

#endif  // INVENTORY_H
