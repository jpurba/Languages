//
//
#include <iostream>
#include <string>
#include <iomanip>
#include "apex_code.h"

using namespace std;

// This function will get the address from input and pass it as output 
void street_address(stringstream& cin, stringstream& cout)
{
    string family;
    string address;
    string city;
    getline(cin, family);  // use get line because input string is seperated by "\n"
    getline(cin, address); // use get line on first part to get the address   
    //getline(cin, city);
    //cout << "Family: " << family << "; address: " << address << "; city: " << city;
    cout << address; // return address as required
}

// This function will get drink type, number and price from input.
// It calculates the total sales and return it as result
void coffee_sale_item(stringstream& cin, stringstream& cout) {

    string drink;
    int number;
    double price;
    double total;

    cin >> drink >> number >> price;
    total = (double)number * price;
    cout << fixed << showpoint << setprecision(2);
    //cout << "Drink: " << drink << "; Number: " << number << "; Price: " << price;
    cout << drink << " total sales = $" << total;

}
// This function return first name and country from input name, address and country
void first_name_and_country(std::stringstream& cin, std::stringstream& cout)
{
    string name, country;
    
    cin >> name;
    cin.ignore(29, '.');
    cin >> country;
    if (country == ",")
        cin >> country;
    //cout << "Name: " << name << "; Country: " << country << endl;
    cout << name << " is from " << country;

}
