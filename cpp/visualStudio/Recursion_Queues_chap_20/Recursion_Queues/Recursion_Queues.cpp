// Recursion_Queues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "DynamicQueues.h"

using namespace std;
int main()
{
    DynamicQueues test;
    string testStr;
    int i;
    int num = -1;
    //test.enqueue("",num);
    testStr = "data";
    //test.enqueue(testStr, num);

    for (i = 0; i < 10; i++)
    {
        testStr = "data" + to_string(i);
        test.enqueue(testStr, i);
    }
    // Display the number of nodes in the list 
    cout << "\nThe number of nodes is " << test.numNodes() << endl;

    cout << "The customer in the queue: \n";
    test.displayQueue();
    
    
    

    menu();
}

// ************************************************************
// name:      menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     columnSwitch, totalVowel, displayArray, 
//            searchCountChar
// The menu function provides menu and its choices for user   *
// to perform tasks that are required. It defines the array   *
// with its pointer that is used by other functions.          *
// It calls other functions and pass the pointer to the array *
// accordingly and quit the program when user select 5.       * 
// ************************************************************
void menu(void) {

    const int EXITCHOICES = 7;  //Assumed 5 is the exit out
    // Define a NumberList object
    DynamicQueues list;

    int choice = 0;

    // This part of the code follow the example from teacher pseudo code
    while (choice != EXITCHOICES) {

        cout << endl;
        cout << "1. Append a name to the queue" << endl;
        cout << "2. Allow front of line to order food and exit the queue" << endl;
        cout << "3. Count cars in the queue" << endl;
        cout << "4. Move car with most kids to front of the queue" << endl;
        cout << "5. Move a friend to the front of the queue" << endl;
        cout << "6. Display the queue" << endl;
        cout << "7. Exit the program" << endl << endl;
        cout << "Display Menu: ";
        cin >> choice;

        // input validation
        while (cin.fail())
        {
            // clear input buffer to restore cin to a usable state
            cin.clear();
            cin.ignore(maxInteger, '\n');   // ignore last input
            cout << "Error ! You can only input number.\n";
            cout << "Please choose a menu option: ";
            cin >> choice;
        }

        cout << endl;
        switch (choice) {

        case 1:    enqueueNode(list);
            break;
        case 2:    dequeueNode(list);
            break;
        case 3:    countCars(list);
            break;
        case 4:    searchNode(list);
            break;
        case 5:    reverseNode(list);
            break;
        case 6:    printQueue(list);
            break;
        case 7:  cout << "Thank you for using this software, goodbye ... " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-6 or 7 to quit) " << endl << endl;
        }
    }
}

// ************************************************************
// name:      enqueueNode                                      *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     DynamicQueues::enqueue(string,int)              *
// Purpose:   append (to the end of the line)                 * 
// Validation: <20 char's and must not be empty               * 
// ************************************************************

void enqueueNode(DynamicQueues& list)
{
    int numberOfKids;
    string customerName;

    cin.clear();                    // clear buffer
    cin.ignore(maxInteger, '\n');   // ignore last input
    cout << "What is the name of the car driver ? ";
    getline(cin, customerName);

    //cout << "Car driver name is " << customerName << "; its length : " 
    //     << customerName.length()  << endl;

    // Validate input string 
    while (customerName.length() == 0 || customerName.length() > maxNameLength || (validateString(customerName) == false))
    {
        cout << "Error ! Wrong input string ... ! \n";
        cout << "It is not alphabet, empty string or string length more than 19 characters.\n";
        cout << "\nEnter new string (alphabet string, not empty and not longer than 19 characters): ";
        //cin.clear();                    // clear buffer
        //cin.ignore(maxInteger, '\n');   // ignore last input
        getline (cin, customerName);
        cout << "Length: " << customerName.length() << endl;
    }

    cout << "How many kids ? ";
    cin >> numberOfKids;
    
    // input validation, numberOfKids should be >= 0
    while (cin.fail() || numberOfKids < 0)
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! You can only input number >=0 for number of kid.\n";
        cout << "How many kids ?: ";
        cin >> numberOfKids;
    }

    list.enqueue(customerName, numberOfKids);

}

// ************************************************************
// name:      dequeueNode                                      *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     DynamicQueues::enqueue(string,int)              *
// Purpose:   allow-front-of-line-to to place their order     *
//            (display their name and a message that they can * 
//            order then delete from the front of the line. ) *
// Validation: check if queue is empty or not                 * 
// ************************************************************
void dequeueNode(DynamicQueues& list)
{
    string customerName;
    int numberOfKid;
    int numberOfItems;

    numberOfItems = list.getNumberItems();
    
    // check if the queue is empty
    if (numberOfItems == 0)
    {
        cout << "The queue is empty. \n";
    }
    else
    {
        list.dequeue(customerName, numberOfKid);
    }
}

// ************************************************************
// name:      countCars                                       *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     DynamicQueues::numNodes()const                  *
// Purpose:   count cars in line (display the total number of *  
//            cars in the queue)                              * 
// Validation: None                                           * 
// ************************************************************
void countCars(DynamicQueues& list)
{

    // Display the number of cars in the queue 
    cout << "\nThe number of cars in the queue is " << list.numNodes() << endl;
}

// ************************************************************
// name:      validateString                                  *
// called by: pushNoun and pushVerb                           *
// passed:    string                                          * 
// returns:   bool                                            * 
// calls:     nothing                                         * 
// Purpose:   check the input string whether it is alphabetic * 
//            or not. It will check each character. It also   *
//            check whether input white space or not.         *
// ************************************************************
bool validateString(const std::string& stringInput)
{

    // Check input for each character
    for (const char charInput : stringInput)
    {
        // check if the character is alphabetic letter
        // and check if string white space
        //if (!isalpha(charInput) || isspace(charInput))
        if (isdigit(charInput))
            return false;
    }

    return true;
}


void insertNode(DynamicQueues& list)
{
    //double inputNumber;

    //cout << "Enter the number that you want to insert: ";
    //cin >> inputNumber;

    //list.insertNode(inputNumber);
}


void printQueue(DynamicQueues& list)
{
    int numberOfItems;

    numberOfItems = list.getNumberItems();

    // check if the queue is empty
    if (numberOfItems == 0)
    {
        cout << "The queue is empty. \n";
    }
    else
    {
        list.displayQueue();
    }

}

void reverseNode(DynamicQueues& list)
{

}

void searchNode(DynamicQueues& list)
{

}