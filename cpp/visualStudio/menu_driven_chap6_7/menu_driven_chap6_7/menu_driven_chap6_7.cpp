// menu_driven_chap6_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

// Assume there is not constraint on the memory
// Define constant or read only variables
const int ROWS = 5;
const int COLUMNS = 6;

// functions prototype
void columnSwitch(char str[ROWS][COLUMNS]);
void totalVowel(char str[ROWS][COLUMNS]);
void displayMatrix(char str[ROWS][COLUMNS]);
void searchCountChar(char str[ROWS][COLUMNS]);

int main(){
    
    const int EXITCHOICES = 5;

    // Note: extra one character for each row for '\0' null character
    // Format: str[rows][columns] = { ... }; 
    char str[ROWS][COLUMNS] = { "sweet","heart","egrit","clone","odors" };
    int choice = 0;

    // This part of the code follow the example from teacher template
    while (choice != EXITCHOICES) { //Assume 5 is the exit out
    
        cout << "1. Interchange column 1 and 4" << endl;
        cout << "2. Display the total number of vowels" << endl;
        cout << "3. Display the array in a matrix (rows and columns)" << endl;
        cout << "4. Search for and display number of instances of any given character" << endl;
        cout << "5. Exit" << endl << endl;
        cout << "Enter the number of your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {

        case 1:   columnSwitch(str);       
            break;
        case 2:   totalVowel(str);       
            break;
        case 3:   displayMatrix(str);       
            break;
        case 4:    searchCountChar(str);       
            break;
        case 5:    cout << "Thank you for playing this game, goodbye ... ";
            break;

        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-4 or 5 to quit) " << endl << endl;
        }
    }
    return 0;
}

//function for switching column values of column 1 and 4
void columnSwitch(char str[ROWS][COLUMNS]){
    
    int i;
    char temp;               // temporary place for interchange the values 
    const int COLUMN_1 = 0;  // first column
    const int COLUMN_4 = 3;  // fourth column

    for (i = 0; i < ROWS; i++) {

        // interchange the values between column 1 and 4
        temp = str[i][COLUMN_1];    
        str[i][COLUMN_1] = str[i][COLUMN_4];
        str[i][COLUMN_4] = temp;
    }

    cout << "The columns in your array have been switched " << endl << endl;
}

//function for finding and count total number of vowels
void totalVowel(char str[ROWS][COLUMNS]) {

    int i;
    int j; 
    int total = 0;

    cout << endl;

    // loop through the rows and columns
    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLUMNS; j++) {

            //check and count vowels here
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u') {  
                
                total++;
            }
        }
    }
    cout << "There are " << total << " vowels in this array." << endl << endl;
}

//function for displaying all values in matrix form
void displayMatrix(char str[ROWS][COLUMNS]){
    
    int i, j;
    cout << "Here is your array: " << endl << endl;

    // loop through the rows and columns
    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLUMNS; j++) {

            cout << str[i][j] << " ";
        }
        cout << endl << endl;
    }
}

//function for searching a particular character
void searchCountChar(char str[ROWS][COLUMNS]){
    
    int i;
    int j; 
    int count = 0;    // initialize count to zero
    char inputChar;                

    //Ask user to input character to be searched
    cout << "Please enter a specific character to locate : ";
    cin >> inputChar;
    cout << endl;

    // loop through the rows and columns
    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLUMNS; j++) {

            // Check if the character is match
            if (str[i][j] == inputChar) {

                count++;
            }
        }
    }

    cout << "There are " << count << " instances of your character." << endl << endl;

}