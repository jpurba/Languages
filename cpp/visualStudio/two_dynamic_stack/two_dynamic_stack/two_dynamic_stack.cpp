/*
*
* Jeremiah Purba
*
* Chapters 19 Programming Assignment CISC 187 Summer 2020
*
* July 15, 2020
*
* File name: main.cpp
*
*/

//#include <iostream>
#include "NounStack.h"
#include "VerbStack.h"
#include "main.h"

using namespace std;
int main()
{
    string nounWord;
    string verbWord;

    // Create noun and verb stacks object
    NounStack nounStack;
    VerbStack verbStack;

    // Push few noun words to noun stack
    cout << "\nPushing car\n";
    nounStack.push("car");
    cout << "\nPushing house\n";
    nounStack.push("house");
    cout << "\nPushing Vons\n";
    nounStack.push("Vons");

    // Display the value in the noun stack
    cout << "\nThe following are noun stack content:" << endl;
    nounStack.displayNoun();

    //Pop the values of noun stack
    cout << "\nPopping ...\n";
    nounStack.pop(nounWord);
    cout << nounWord << endl;
    nounStack.pop(nounWord);
    cout << nounWord << endl;
    nounStack.pop(nounWord);
    cout << nounWord << endl;

    // Try to pop another value of the noun stack
    cout << "\nAttempting to pop again ...";
    nounStack.pop(nounWord);


    // Push few noun words to verb stack
    cout << "\nPushing drive\n";
    verbStack.push("drive");
    cout << "\nPushing going\n";
    verbStack.push("going_from");
    cout << "\nPushing Vons\n";
    verbStack.push("shopping_to");

    // Display the value in the noun stack
    cout << "\nThe following are noun stack content:" << endl;
    verbStack.displayVerb();

    //Pop the values of noun stack
    cout << "\nPopping ...\n";
    verbStack.pop(verbWord);
    cout << verbWord << endl;
    verbStack.pop(verbWord);
    cout << verbWord << endl;
    verbStack.pop(verbWord);
    cout << verbWord << endl;

    // Try to pop another value of the stack
    cout << "\nAttempting to pop again ...";
    verbStack.pop(verbWord);

    menu();

    return 0;
}

// ************************************************************
// name:      menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     appendNode, insertNode, deleteNode, 
//            printList, reverseNode, searchNode,
//            displaySecondaryColor
// The menu function provides menu and its choices for user   *
// to perform tasks that are required. It defines the object  *
// with its pointer that is used by other functions.          *
// It calls other functions and pass the pointer to object    *
// accordingly and quit the program when user select 8.       * 
// ************************************************************
void menu(void) {

    const int EXITCHOICES = 8;  //Assumed 8 is the exit out
    const int maxInteger = 500;

    // Define a verb and noun object
    VerbStack verbStack;
    NounStack nounStack;


    int choice = 0;

    // This part of the code follow the example from teacher pseudo code
    while (choice != EXITCHOICES) {

        cout << endl;
        cout << "1. Push Noun" << endl;
        cout << "2. Pop Noun" << endl;
        cout << "3. Push Verb" << endl;
        cout << "4. Pop Verb" << endl;
        cout << "5. Concatenate" << endl;
        cout << "6. Add an 's'" << endl;
        cout << "7. Display both stack" << endl;
        cout << "8. Make a Story" << endl;
        cout << "9. Exit" << endl << endl;
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

        case 1:    pushNoun(nounStack);
            break;
        case 2:    popNoun(nounStack);
            break;
        case 3:    pushVerb(verbStack);
            break;
        case 4:    popVerb(verbStack);
            break;
        case 5:    concatenate(nounStack);
            break;
        case 6:    addS(nounStack);
            break;
        case 7:    displayBothStack(nounStack, verbStack);
            break;
        case 8:    makeStory(nounStack, verbStack);
            break;
        case 9:  cout << "Thank you for using this software, goodbye ... " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-8 or 9 to quit) " << endl << endl;
        }
    }
}

// ************************************************************
// name:      pushNoun                                        *
// called by: menu                                            *
// passed:    object noun stack                               * 
// returns:   nothing                                         * 
// calls:     NounStack::push(string pushNoun)                *
// Purpose:   Push a noun onto the Noun Stack                 * 
// Validation: Words cannot be blank and they cannot be       * 
//             longer than 10 letters.                        *
// ************************************************************
void pushNoun(NounStack& nounStack)
{
    //const int maxInputLength = 10;
    //const int minInputLength = 0;
    string inputString;
    const int maxInteger = 500;
    bool stringValidate = true;

    cout << "Enter a word start with alphabetical (less than 10 letter): ";
    cin >> inputString;

    // input validation
    //cout << "\nBefore Validate String results: " << stringValidate << endl;
    //stringValidate = validateString(inputString);
    //cout << "After Validate String results: " << stringValidate << endl;
    while ((validateString(inputString) == false) || (inputString.length() > maxInputLength))
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! Either not alphabet, not empty string or longer than 10 letters.\n";
        cout << "Enter new string (not empty and not longer than 10 letter): ";
        cin >> inputString;
    }

    // Validation, input can't be empty string and can't be > 10 letters
    //while (inputString.length() == minInputLength && inputString.length() > maxInputLength)
    //while (inputString.length() > maxInputLength)
    //{
    //    cout << "Error ! Empty string or longer than 10 letter \n";
    //    cout << "Please enter new string: ";
    //    cin >> inputString;
    //}

    nounStack.push(inputString);
    nounStack.displayNoun();

}

// ************************************************************
// name:      popNoun                                         *
// called by: menu                                            *
// passed:    object noun stack                               * 
// returns:   nothing                                         * 
// calls:     NounStack::pop(string& popNouns)                 *
// Purpose:   Pop a noun off of the Noun Stack                * 
// ************************************************************
void popNoun(NounStack& nounStack)
{
    string nounString;

    nounStack.pop(nounString);
    cout << "Noun pop result: " << nounString << endl;
}

// ************************************************************
// name:      pushVerb                                        *
// called by: menu                                            *
// passed:    object verb stack                               * 
// returns:   nothing                                         * 
// calls:     VerbStack::push(string pushVerb)                *
// Purpose:   Push a verb onto the verb Stack                 * 
// ************************************************************
void pushVerb(VerbStack& verbStack)
{
    //const int maxInputLength = 10;
    //const int minInputLength = 0;
    string inputString;
    const int maxInteger = 500;
    bool stringValidate = true;

    cout << "Enter a word start with alphabetical (less than 10 letter): ";
    cin >> inputString;

    // input validation
    //cout << "\nBefore Validate String results: " << stringValidate << endl;
    //stringValidate = validateString(inputString);
    //cout << "After Validate String results: " << stringValidate << endl;
    while ((validateString(inputString) == false) || (inputString.length() > maxInputLength))
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! Either not alphabet, not empty string or longer than 10 letters.\n";
        cout << "Enter new string (not empty and not longer than 10 letter): ";
        cin >> inputString;
    }

    // Validation, input can't be empty string and can't be > 10 letters
    //while (inputString.length() == minInputLength && inputString.length() > maxInputLength)
    //while (inputString.length() > maxInputLength)
    //{
    //    cout << "Error ! Empty string or longer than 10 letter \n";
    //    cout << "Please enter new string: ";
    //    cin >> inputString;
    //}

    verbStack.push(inputString);


    verbStack.displayVerb();

}

// ************************************************************
// name:      popVerb                                         *
// called by: menu                                            *
// passed:    object verb stack                               * 
// returns:   nothing                                         * 
// calls:     VerbStack::pop(string& popVerb)                 *
// Purpose:   Pop a verb off of the verb Stack                * 
// ************************************************************
void popVerb(VerbStack& verbStack)
{
    string verbString;

    verbStack.pop(verbString);
    cout << "verb pop result: " << verbString << endl;
}

// ************************************************************
// name:      concatenate                                     *
// called by: menu                                            *
// passed:    object noun stack                               * 
// returns:   nothing                                         * 
// calls:     NounStack::pop(string& popNoun) and             *
//            NounStack::push(string pushNoun)                *  
// Purpose:   concatenate the top two words on the Noun Stack * 
//            and replace those two words with the resultant  *
//            concatenation. Shorten resultant word if        *
//            necessary.                                      *
// ************************************************************
void concatenate(NounStack& nounStack)
{

}

// ************************************************************
// name:      addS                                            *
// called by: menu                                            *
// passed:    object noun stack                               * 
// returns:   nothing                                         * 
// calls:     NounStack::pop(string& popNoun) and             *
//            NounStack::push(string pushNoun)                *  
// Purpose:   Add an "s" to the end of the top word on the    * 
//            Noun Stack                                      *
// ************************************************************
void addS(NounStack& nounStack)
{


}

// ************************************************************
// name:      displayBothStack                                *
// called by: menu                                            *
// passed:    object noun stack and verb stack                * 
// returns:   nothing                                         * 
// calls:     NounStack::displayNoun() and                    *
//            VerbStack::displayVerb()                        *  
// Purpose:   display to screen all of the content of         * 
//            Noun Stack and Verb Stack                       *
// ************************************************************
void displayBothStack(NounStack& nounStack, VerbStack& verbStack)
{
    int result;

    result = nounStack.displayNoun();
    if ( result == -1)
    {
        cout << "The noun stack is empty !\n";
    }
    else
    {
        cout << "That's the content of noun stack !\n";
    }
    
    verbStack.displayVerb();
    if (result == -1)
    {
        cout << "The verb stack is empty !\n";
    }
    else
    {
        cout << "That's the content of verb stack !\n";
    }

    
}

// ************************************************************
// name:      makeStory                                       *
// called by: menu                                            *
// passed:    object noun stack and verb stack                * 
// returns:   nothing                                         * 
// calls:     NounStack::pop(string& popNoun) and             *
//            VerbStack::pop(string& popVerb)                 *  
// Purpose:   Make a Story (Pop words from the appropriate    * 
//            stacks and use them to fill in the blanks of a  *
//            story that you have created. Display the story.)*
// ************************************************************
void makeStory(NounStack& nounStack, VerbStack& verbStack)
{

}


// ************************************************************
// name:      validateString                                  *
// called by: menu                                            *
// passed:    string                                          * 
// returns:   bool                                            * 
// calls:     nothing                                         * 
// Purpose:   Make a Story (Pop words from the appropriate    * 
//            stacks and use them to fill in the blanks of a  *
//            story that you have created. Display the story.)*
// ************************************************************
bool validateString(const std::string& stringInput)
{
    cout << "validateString: input: " << stringInput << " ;" << endl;
    for (const char charInput : stringInput) 
    {
        // check if the character is alphabetic letter
        // and check if string white space
        if (!isalpha(charInput) && !isspace(charInput))
            return false;
    }

    return true;
}