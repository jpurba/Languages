// recursive_numberList_chap20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{

    const int MAX = 10;   // Maximum number of values

    // Defines a NumberList object
    NumberList list;
    
    // Build a list with a series of numbers
    for (int x = 0; x < MAX; x++)
        list.insertNode(x);

    // Display the number of nodes in the list 
    cout << "\nThe number of nodes is " << list.numNodes() << endl;

    // Display all nodes in the list
    cout << "\nAll values nodes on the list are: \n";
    list.displayList();

    // Display all nodes in reverse
    cout << "\nHere are the values in reverse order. \n";
    list.displayBackwards();

    for (double y = 1.1; y < MAX; y += 1.1)
        list.appendNode(y);

    // Display the number of nodes in the list 
    cout << "\n\nThe number of nodes is " << list.numNodes() << endl;

    // Display all nodes in the list
    cout << "\nAll values nodes on the list are: \n";
    list.displayList();

    // Display all nodes in reverse
    cout << "\nHere are the values in reverse order. \n";
    list.displayBackwards();

    // Call menu function
    //menu();

    return 0;
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
    NumberList list;

    int choice = 0;

    // This part of the code follow the example from teacher pseudo code
    while (choice != EXITCHOICES) {

        cout << endl;
        cout << "1. Append" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Print" << endl;
        cout << "5. Reverse" << endl;
        cout << "6. Search" << endl;
        cout << "7. Exit" << endl << endl;
        cout << "Please choose a menu option: ";
        cin >> choice;

        cout << endl;
        switch (choice) {

        case 1:    appendNode(list);
            break;
        case 2:    insertNode(list);
            break;
        case 3:    deleteNode(list);
            break;
        case 4:    printList(list);
            break;
        case 5:    reverseNode(list);
            break;
        case 6:    searchNode(list);
            break;
        case 7:  cout << "Thank you for using this software, goodbye ... " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-6 or 7 to quit) " << endl << endl;
        }
    }
}

void appendNode(NumberList& list)
{
    double inputNumber;

    cout << "Enter the number that you want to append: ";
    cin >> inputNumber;

    list.appendNode(inputNumber);

}

void insertNode(NumberList& list)
{
    double inputNumber;

    cout << "Enter the number that you want to insert: ";
    cin >> inputNumber;

    list.insertNode(inputNumber);
}

void deleteNode(NumberList& list)
{
    double inputNumber;

    cout << "Enter the number that you want to delete: ";
    cin >> inputNumber;

    list.deleteNode(inputNumber);
}

void printList(NumberList& list)
{
    cout << "\nData on the list are: " << endl;
    // Display the values in the list
    list.displayList();

}

void reverseNode(NumberList& list)
{

}

void searchNode(NumberList& list)
{

}


