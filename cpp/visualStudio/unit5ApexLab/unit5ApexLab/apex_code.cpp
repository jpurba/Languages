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
    
    char *pemail;
    char breakColon = ':';;
    string inEmail;
    string email;
    string outEmail;
    int i;
    int count = 0;
        
    getline(cin, inEmail);
    //cout << inEmail << endl;
    

    pemail = &inEmail[0];
    //cout << "email = " << inEmail << "; *pemail = " << *pemail << endl;

    for (i = 0; i < inEmail.size(); i++) {  // check all input
        
        // get the non space char
        if (*pemail != ' ') {
            //cout << "email: " << email << " ; *pemail: " << *pemail;
            email.push_back(*pemail);
            
        }
        else {            
            //pemail++;              // check the next one
            ++count;
            //cout << "inside " << *pemail <<" ; email count: " << count;

            if (*pemail == '\f') {  // if 2 consecutive space, it's done
                outEmail = email;
                //cout << "\noutEmail: " << outEmail <<endl;
                --pemail;

            }
            else {                           // if there is a next email
                email.push_back(breakColon); // insert colon
                //email.push_back(*pemail);
            }
        }
        pemail++;            // increase pointer
        //cout << endl;
    }
    //if (count > 0) {
    email.push_back(breakColon);
    outEmail = email;
    //}
    //else {
    //    outEmail = email;
    //}
        
    //cout << "count: " << count << " ; *pemail = " << *pemail << endl;
 
    cout << outEmail;
   
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
