//
//
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "apex_code.h"

using namespace std;

// It takes email addresses from the user, as many as they want to specify 
// and outputs all of the email address with colons in between so they 
// are ready to cut and paste into an email "To" line. If there is only 
// one email address provided it just outputs the single email address 
// without any colons.
void email_concat(stringstream& cin, stringstream& cout){
    
    char *pemail;
    char breakColon = ':';
    string inEmail;
    string outEmail;
    int i;

    while (cin >> inEmail) {
        cout << inEmail << ":";
    }
    /*
    getline(cin, inEmail);

    pemail = &inEmail[0];

    for (i = 0; i < inEmail.size(); i++) {  // check all input character
        
        if (*pemail != ' ') {               // get the non space char  
            outEmail.push_back(*pemail);    // push the char to Email output 
        }
        else {            
            outEmail.push_back(breakColon); // insert colon before next email
        }
        pemail++;                           // increase pointer for next char
    }

    outEmail.push_back(breakColon);         // add colon at the end
    cout << outEmail;
    */
}


// This block tallies all the donations made to the local community center. 
// The program keeps tallying donations until it gets a negative value, and 
// then it stops. If a donation is more than $100, the program outputs, 
// "Send a t-shirt". For example,
void donation_total(stringstream& cin, stringstream& cout) {

    double inNumber;
    double total=0.0;
    const double minDonation = 100.00;
    const int precision = 2;

    cout << fixed << showpoint << setprecision(precision);
    
    while(cin >> inNumber){
        
        if (inNumber > 0) {       // if input number positive
            total += inNumber;    // sum all input number into total
        }
        else {                    // stop calculation if input negative
            break;
        }
    }
    if (total > minDonation) {            // if total donation > 100.00
        cout << "Send a t-shirt" << endl; // send t-shirt
        cout << "Send a t-shirt" << endl;
        cout << "Total donations made $" << total;
    }
    else {                               
        cout << "Total donations made $" << total; // if it is less or equal 100
    }

}


// The user provided how many books were checked out every month. It takes 
// a year's worth of data and averages the books checked out in a month. 
// If every month had more than 1268 check outs and the average checkout 
// per month was greater than 2500, then the library should consider 
// staying open in the evenings.
void average_books_checked_out(std::stringstream& cin, std::stringstream& cout){
   
    const int LIMIT = 2500;
    int inBook = 0;
    int total = 0;
    int average = 0;
    int count = 0;

    while (cin>>inBook) {    // read input number
        total += inBook;     // add all input number into total
        ++count;             // count how many nu8mber exists
    }
    
    average = total / count; // calculate the average of the number
    
    if (average > LIMIT) {
        cout << "Average monthly circulation: " << average << " books" << endl;
        cout << "Extend hours!!";
    }
    else {
        cout << "Average monthly circulation: " << average << " books" << endl;   
    }
}


// The user provides the width, height and a character to print.
// The output is a rectangle of width x height of the character type.
void rectangles(std::stringstream& cin, std::stringstream& cout){

    int column, row;
    char inputChar;
    int i, j;

    cin >> column >> row >> inputChar;

    for (i = 0; i < row; i++) {         // for row
        for (j = 0; j < column; j++) {     // for column
            cout << inputChar << " ";
        }
        cout << endl;
    }

    //cout << "rectangles" << endl;
}
