// listNumberImproved.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PrimaryColors.h"

using namespace std;

int main()
{

    // Call menu function
    menu();

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

    const int EXITCHOICES = 7;  //Assumed 7 is the exit out
    const int maxInteger = 500;

    // Define a PrimaryColors object
    PrimaryColors colorList;

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

        case 1:    appendNode(colorList);
            break;
        case 2:    insertNode(colorList);
            break;
        case 3:    deleteNode(colorList);
            break;
        case 4:    printList(colorList);
            break;
        case 5:    reverseNode(colorList);
            break;
        case 6:    searchNode(colorList);
            break;
        case 7:  cout << "Thank you for using this software, goodbye ... " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-6 or 7 to quit) " << endl << endl;
        }
    }
}

void appendNode(PrimaryColors& colorList)
{
    string color;

    cout << "Enter primary color (red, green, blue) to append: ";
    cin >> color;

    // Highe level input validation for primary color
    while ((strcmp(color.c_str(), "red") != 0)
        && (strcmp(color.c_str(), "green") != 0)
        && (strcmp(color.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input" << endl;
        cout << "Enter primary color (red, green, blue) to append: ";
        cin >> color;
    }

    colorList.appendNode(color);

}

void insertNode(PrimaryColors& colorList)
{
    string color;
    int position;
    int validation;
    const int maxInteger = 500;

    cout << "Enter primary color (red, green, blue) to insert: ";
    cin >> color;
    // Highe level input validation for primary color
    while ((strcmp(color.c_str(), "red") != 0)
        && (strcmp(color.c_str(), "green") != 0)
        && (strcmp(color.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input" << endl;
        cout << "Enter primary color (red, green, blue) to insert: ";
        cin >> color;
    }

    cout << "What is the position of this color? ";
    cin >> position;

    // input validation
    while (cin.fail())
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! You can only input number.\n";
        cout << "What position do you want to insert: ";
        cin >> position;
    }

    validation = colorList.insertNode(position, color);

    if (validation == -1)
    {
        cout << "Error !. List empty or there is no position " << position << " in the list.\n\n";
    }
    else
    {
        cout << "Color inserted!\n\n";

    }
}

void deleteNode(PrimaryColors& colorList)
{
    int position;
    int resultValidation;
    const int maxInteger = 500;

    cout << "What position do you want to delete: ";
    cin >> position;

    // input validation
    while (cin.fail())
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! You can only input number.\n";
        cout << "What position do you want to insert: ";
        cin >> position;
    }

    resultValidation = colorList.deleteNode(position);

    if (resultValidation == -1)
    {
        cout << "Error. There is no position " << position << " in the list.\n\n";
    }
    else
    {
        cout << "Color Deleted!\n\n";
    }

}

void printList(PrimaryColors& colorList)
{
    cout << "\nData on the list are: " << endl;
    // Display the values in the list
    colorList.displayList();

}

void reverseNode(PrimaryColors& colorList)
{
    int results;

    results = colorList.reverseList();

    if (results != -1)
    {
        cout <<"Color list is reversed \n\n";
    }
    else
    {
        cout << "List is empty. \n\n";
    }

}

void searchNode(PrimaryColors& colorList)
{
    string inputColor;
    int position;

    cout << "Enter primary color (red, green, blue) to search: ";
    cin >> inputColor;

    // Highe level input validation for primary color
    while ((strcmp(inputColor.c_str(), "red") != 0)
        && (strcmp(inputColor.c_str(), "green") != 0)
        && (strcmp(inputColor.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input" << endl;
        cout << "Enter primary color (red, green, blue) to append: ";
        cin >> inputColor;
    }

    position = colorList.searchNode(inputColor);

    if (position != -1)
    {
        cout << inputColor << " found at index : " << position << "\n\n";
    }
    else
    {
        cout << "List empty or color "<< inputColor << " is not in the list!!\n\n";
    }
}


 