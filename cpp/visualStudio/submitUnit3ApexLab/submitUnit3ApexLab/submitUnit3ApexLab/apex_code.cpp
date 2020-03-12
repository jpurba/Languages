// submitUnit3ApexLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "apex_code.h"

using namespace std;

// This function will get the address from input and pass it as output 
void street_address(stringstream& cin, stringstream& cout)
{
    const int SKIPCHAR = 18;
    string address;
    string city;
   
    cin.ignore(SKIPCHAR, '\n');  // skip the family
    getline(cin, address);       // get the address from input
    cout << address;             // return address as required
}

// This function will get drink type, number and price from input.
// It calculates the total sales and return it as result
void coffee_sale_item(stringstream& cin, stringstream& cout) {

    string drink;
    int number;
    double price, total;

    cin >> drink >> number >> price;    // get input data
    total = number * price;     // calculate total price        
    cout << fixed << showpoint << setprecision(2); // set output precision
    
    cout << drink << " total sales = $" << total; //return results
}

// This function gets first name and country from input string
// and returns it on output
void first_name_and_country(std::stringstream& cin, std::stringstream& cout)
{
    string name, country;

    cin >> name;               // get the name from input stream
    cin.ignore(29, '.');       // ignore the address
    cin >> country;            // get the country 
    if (country == ",")        // check for extra comma
        cin >> country;
    
    cout << name << " is from " << country;  //return name and country
}