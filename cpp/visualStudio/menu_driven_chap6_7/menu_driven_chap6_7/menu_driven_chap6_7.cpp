// menu_driven_chap6_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

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
        case 5:    cout << "Bye and see you later ... ";
            break;
        }
    }
    return 0;
}

//function for switching column values of column 1 and 4
void columnSwitch(char str[ROWS][COLUMNS]){
    
    int i;
    char temp;
    const int COLUMN_1 = 1;
    const int COLUMN_4 = 4;

    for (i = 0; i < ROWS; i++) {

        // interchange the values between column 1 and 4
        temp = str[i][COLUMN_1];    
        str[i][COLUMN_1] = str[i][COLUMN_4];
        str[i][COLUMN_4] = temp;
    }

    cout << "Values of column 1 and column 4 are switched " << endl << endl;
}

//function for finding and count total number of vowels
void totalVowel(char str[ROWS][COLUMNS]) {

    int i, j, temp = 0;
    cout << endl;

    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLUMNS; j++) {

            //check and count vowels here
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u') {  
                
                temp++;
            }
        }
    }
    cout << " Number of Vowels : " << temp << endl;
}

//function for displaying all values in matrix form
void displayMatrix(char str[ROWS][COLUMNS]){
    
    int i, j;
    cout << "Here is your array: " << endl << endl;

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
    int temp = 0;
    char ch1;                

    //Ask user to input character to be searched
    cout << "Enter a character to search : ";
    cin >> ch1;
    cout << endl;

    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLUMNS; j++) {

            // Check if the character is match
            if (str[i][j] == ch1) {

                temp++;
            }
        }
    }

    cout << "Number of times " << ch1 << " occurs : " << temp << endl << endl;

}