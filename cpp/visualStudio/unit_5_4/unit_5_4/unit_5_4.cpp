// unit_5_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Summary
To make telephone numbers easier to remember, some companies use letters
to show their telephone number.For example, using letters, 
the telephone number 438 - 5626 can be shown as GET LOAN.
In some cases, to make a telephone number meaningful, companies might 
use more than seven letters.For example, 225 - 5466 can be displayed as 
CALL HOME, which uses eight letters.

Instructions
Write a program that prompts the user to enter a telephone number 
expressed in letters and outputs the corresponding telephone number 
in digits.
If the user enters more than seven letters, then process only the 
first seven letters.

Also output the - (hyphen)after the third digit.
Allow the user to use both uppercase and lowercase letters as well as 
spaces between words.

Moreover, your program should process as many telephone numbers as 
the user wants.

Use the dialpad below for reference:

phoneDialpad.jpg
The program should accept inputand produce output similar to the 
example program execution below.

Enter Y / y to convert a telephone number from
letters to digits.
Enter any other letter to terminate the program.
Y
Enter a telephone number using letters: Hello world

The corresponding telephone number is :
435 - 5696
To process another telephone number, enter Y / y
Enter any other letter to terminate the program.
z
*/
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
int main()
{
    char confirm;
    char *pLetter;
    string inputLetter1, inputLetter2;
    int i;
    int counter = 0;

    cout << "Enter Y/y to convert a telephone number from letters to digits." << endl;
    cout << "Enter any other letter to terminate the program: ";
    cin >> confirm;
    
    if ((confirm == 'Y') || (confirm == 'y')) {
        
        cout << "Enter a telephone number using letters: ";

        getline (cin,inputLetter1);
        //getline (cin,inputLetter2);
        //cin >> inputLetter1 >> inputLetter2;
        cout << "input string: " << inputLetter1 << endl;
        cout << "inputLetter1 size: " << inputLetter1.size() << endl;
        cout << "inputLetter2 size: " << inputLetter2.size() << endl;
        
        
        //pLetter = &inputLetter1[0];


        //for (i = 0; i <= inputLetter1.size(); i++)
        //{
            //cout << "\nCharacter: " << *pLetter << endl;
            /*Process non space character*/
            /*if (*pLetter != ' ') {
                //cout << "\nValid letter: " << *pLetter << " ; counter: " << counter << endl;

                
                if (counter < 7) {
                    if (*pLetter >= 'A' && *pLetter <= 'z') {
                        counter++; // increase counter if valid char
                        if (*pLetter > 'Z')
                            *pLetter = (int)*pLetter - 32; // convert to capital letter
                    }

                    if (counter == 4)
                        cout << "-"; // Print the hyphen when required
                    
                    switch (*pLetter) {
                    case 'A':
                    case 'B':
                    case 'C':
                        cout << "2";
                        break;

                    case 'D':
                    case 'E':
                    case 'F':
                        cout << "3";
                        break;

                    case 'G':
                    case 'H':
                    case 'I':
                        cout << "4";
                        break;

                    case 'J':
                    case 'K':
                    case 'L':
                        cout << "5";
                        break;

                    case 'M':
                    case 'N':
                    case 'O':
                        cout << "6";
                        break;

                    case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':
                        cout << "7";
                        break;

                    case 'T':
                    case 'U':
                    case 'V':
                        cout << "8";
                        break;

                    case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':
                        cout << "9";

                    default:
                        break;
                    } // case switch
                    
                    pLetter++; // after finish one letter, increase to next one
                } // if (counter<=7)
                
            } // if not space
            else
                pLetter++; // inclrease pointer to next one
        } */
    } // if (confirm)


    return 0;
}

