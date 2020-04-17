//
//
#include <iostream>
#include <string>
#include "apex_code.h"

using namespace std;

// It takes email addresses from the user, as many as they want to specify 
// and outputs all of the email address with colons in between so they 
// are ready to cut and paste into an email "To" line. If there is only 
// one email address provided it just outputs the single email address 
// without any colons.
void email_concat(stringstream& cin, stringstream& cout){
    string email1, email2, email3;
    char *pemail;
    string email;
    string allEmail;

    cin >> email >> email1;
    pemail = &email1[0];

    cout << "email = " << email << "; *pemail = " << *pemail << endl;

    if (*pemail != ' ') {
        allEmail += email + ":" + email1;
        cin >> email2;
        pemail = &email2[0];
        if (*pemail != ' ') {

            allEmail += ":" + email;
        }
        else
        {
            cout << allEmail;
        }
       
    }
    else {
        cout << email;
    }
    //check the next email
    //if (*pemail == ' ') {
    //    cout << email;
    //}
    //else
    //{
    //    cout << email << ":" << email1;

    //    cin >> email;
    //    pemail = &email[0];
    //}

    //cin >> email1 >> email2 >> email3;
    //pemail = &email1[0];
    
    //cout << "received email1: " << email1 << endl;
    //cout << email1 << ":" << email2 << ":" << email3 << ":";
   
}


// This block tallies all the donations made to the local community center. 
// The program keeps tallying donations until it gets a negative value, and 
// then it stops. If a donation is more than $100, the program outputs, 
// "Send a t-shirt". For example,
void donation_total(stringstream& cin, stringstream& cout) {
    cout << "donation_total" << endl;
}


// The user provided how many books were checked out every month. It takes 
// a year's worth of data and averages the books checked out in a month. 
// If every month had more than 1268 check outs and the average checkout 
// per month was greater than 2500, then the library should consider 
// staying open in the evenings.
void average_books_checked_out(std::stringstream& cin, std::stringstream& cout){
    cout << "average_books_checked_out" << endl;
}


// The user provides the width, heightand a character to print.
// The output is a rectangle of width x height of the character type.
void rectangles(std::stringstream& cin, std::stringstream& cout){
    cout << "rectangles" << endl;
}
