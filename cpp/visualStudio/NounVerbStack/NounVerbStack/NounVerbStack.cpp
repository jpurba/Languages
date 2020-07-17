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

#include <iostream>
#include "WordStack.h"

using namespace std;
int main()
{
    string nounWord;
    string verbWord;

    // Create noun and verb stacks object
    WordStack nounStack;
    WordStack verbStack;

    // Push few noun words to noun stack
    cout << "\nPushing car\n";
    nounStack.push("car");
    cout << "\nPushing house\n";
    nounStack.push("house");
    cout << "\nPushing Vons\n";
    nounStack.push("Vons");

    // Display the value in the noun stack
    cout << "\nThe following are noun stack content:" << endl;
    nounStack.displayWord();

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
    verbStack.push("going");
    cout << "\nPushing shopping\n";
    verbStack.push("shopping");

    // Display the value in the verb stack
    cout << "\nThe following are verb stack content:" << endl;
    verbStack.displayWord();

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

    const int EXITCHOICES = 9;  //Assumed 9 is the exit out
    const int maxInteger = 500;

    // Define a verb and noun object
    WordStack verbStack;
    WordStack nounStack;


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

        case 1:    pushWord(nounStack);
            break;
        case 2:    popWord(nounStack);
            break;
        case 3:    pushWord(verbStack);
            break;
        case 4:    popWord(verbStack);
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
            exit(0);
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-8 or 9 to quit) " << endl << endl;
        }
    }
}

// ************************************************************
// name:      pushWord                                        *
// called by: menu                                            *
// passed:    object noun stack                               * 
// returns:   nothing                                         * 
// calls:     WordStack::push(string pushWord)                *
// Purpose:   Push a word onto the Noun Stack                 * 
// Validation: Words cannot be blank and they cannot be       * 
//             longer than 10 letters.                        *
// ************************************************************
void pushWord(WordStack& wordStack)
{
    string inputString;
    const int maxInteger = 500;
    bool stringValidate = true;

    cout << "Enter a word start with alphabetical (less than 10 letter): ";
    cin >> inputString;

    while ((validateString(inputString) == false) || (inputString.length() > maxInputLength))
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "\nError ! Either not alphabet, or empty string or longer than 10 letters.\n";
        cout << "Enter new string (alphabet string, not empty and not longer than 10 letter): ";
        cin >> inputString;
    }

    wordStack.push(inputString);

}

// ************************************************************
// name:      popNoun                                         *
// called by: menu                                            *
// passed:    object noun stack                               * 
// returns:   nothing                                         * 
// calls:     NounStack::pop(string& popNouns)                *
// Purpose:   Pop a noun off of the Noun Stack                * 
// ************************************************************
void popWord(WordStack& wordStack)
{
    string wordString;
    int result;
    WordStack* newNode;

    // Check if the stack is empty
    newNode = &wordStack;

    if (newNode->isEmpty())
    {
        cout << "The stack is empty !\n";
    }
    else  
    {   // stack is not empty
        // pop value from the top of the stack 
        result = wordStack.pop(wordString);
    }

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
// Validation: validate for at least two words on the stack.  *
// ************************************************************
void concatenate(WordStack& nounStack)
{
    string nounWord1;
    string nounWord2;
    string concatenateWord;
    int result;
    WordStack* newNode;

    // Check if the stack is empty
    newNode = &nounStack;

    if (newNode->isEmpty())
    {
        cout << "The noun stack is empty !\n";
    }
    // check is stack has at least 2 elements
    else if (newNode->count() < 2)
    {
        cout << "The noun stack does not have 2 words !\n";
    }
    else 
    {
        // stack has at least 2 elements
        // Pop the first word from the stack
        result = nounStack.pop(nounWord1);

        // Pop the second word from the stack    
        result = nounStack.pop(nounWord2);

        concatenateWord = nounWord1 + nounWord2;
        nounStack.push(concatenateWord);

        // to check will be deleted
        //result = nounStack.displayWord();
        //cout << "That's the content of noun stack !; result = " << result << "\n";
    }
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
// Validation:  validate for stack not empty.                 *
// ************************************************************
void addS(WordStack& nounStack)
{
    string popNoun;
    string popNounAddS;
    int result;

    result = nounStack.pop(popNoun);
    if (result == -1)
    {
        cout << "The noun stack is empty !\n";
    }
    else
    {
        popNounAddS = popNoun + "s";
        nounStack.push(popNounAddS);
    }
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
void displayBothStack(WordStack& nounStack, WordStack& verbStack)
{
    int result;

    // Display for Noun stack
    result = nounStack.displayWord();

    // Validate the results
    if (result == -1)
    {
        cout << "The noun stack is empty !\n\n";
    }
    else
    {
        cout << "That's the content of noun stack !\n\n";
    }

    // Display for verb stack
    verbStack.displayWord();

    // Validate the results
    if (result == -1)
    {
        cout << "The verb stack is empty !\n\n";
    }
    else
    {
        cout << "That's the content of verb stack !\n\n";
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
// Validation:Validate that there are enough words on the     *
//            stack to fill in all your blanks.  If not then  *
//            notify user and do not display the story.       * 
// ************************************************************
void makeStory(WordStack& nounStack, WordStack& verbStack)
{
    string nounWord;
    string verbWord;
    int result;
    WordStack* nounNode;
    WordStack* verbNode;
    int stackCountNoun = 0;
    int stackCountVerb = 0;
    const int minimumNounStack = 15;
    const int minimumVerbStack = 6;

    // To check if the stack has enough word
    nounNode = &nounStack;
    verbNode = &verbStack;

    // This is the story: Today, I go to Vons to buy milk, eggs, chicken,
    // bread, icecream, tomatoes, carrots, oranges, banana, kale and 
    // spinach. All of them cost $32.45. After I pay them, I walk back home
    // to prepare for my lunch.

    // Story with blank: Today, I --- to --- to --- ---, ---, ---,
    // ---, ---, ---, ---, ---, ---, --- and ---. All of them --- $32.45.
    // After I --- them, I --- back --- to --- for my ---.

    // There are 15 words for noun
    nounStack.push("lunch");     
    nounStack.push("home");
    nounStack.push("spinach");     
    nounStack.push("kale");     
    nounStack.push("banana");
    nounStack.push("oranges");     
    nounStack.push("carrots");     
    nounStack.push("tomatoes");
    nounStack.push("icecream");     
    nounStack.push("bread");     
    nounStack.push("chicken");
    nounStack.push("eggs");     
    nounStack.push("milk");
    nounStack.push("Vons");
    nounStack.push("Today");
    
    // There are 6 words for verbs
    verbStack.push("prepare");     
    verbStack.push("walk");     
    verbStack.push("pay");     
    verbStack.push("cost");
    verbStack.push("buy");
    verbStack.push("go");     

    // Validate both noun and verb stacks
    if (nounNode->isEmpty())
    {
        cout << "The noun stack is empty !\n";
    }
    else 
    {   
        stackCountNoun = nounNode->count();
        cout << "There are " << stackCountNoun << " elements in noun stack \n";
    }

    if (verbNode->isEmpty())
    {
        cout << "The noun stack is empty !\n";
    }
    else
    {
        stackCountVerb = verbNode->count();
        cout << "There are " << stackCountVerb << " elements in verb stack \n";
    }

    if ((stackCountNoun >= minimumNounStack) && (stackCountVerb >= minimumVerbStack))
    {
        cout << "There are enough elements to tell the story \n";
        cout << "This is the story: \n" << endl;

        // Start telling the story
        cout << "\n";
        result = nounStack.pop(nounWord);
        result = verbStack.pop(verbWord);
        cout << nounWord << ", I " << verbWord << " to ";

        result = nounStack.pop(nounWord);
        result = verbStack.pop(verbWord);

        cout << nounWord << " to " << verbWord;
        cout << " ";
        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        cout << "\n";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ", ";

        result = nounStack.pop(nounWord);
        cout << nounWord << " and ";

        result = nounStack.pop(nounWord);
        cout << nounWord << ".";

        result = verbStack.pop(verbWord);
        cout << " All of them ";
        cout << verbWord << " $32.45. \n";

        result = verbStack.pop(verbWord);
        cout << "After I " << verbWord << " them, I ";

        result = verbStack.pop(verbWord);
        result = nounStack.pop(nounWord);
        cout << verbWord << " back " << nounWord << " to ";

        result = verbStack.pop(verbWord);
        result = nounStack.pop(nounWord);
        cout << verbWord << " for my " << nounWord << ".";

        cout << "\n";

    }
    else
    {
        cout << "There are not enough stack elements to tell the story \n";
    }
}


// ************************************************************
// name:      validateString                                  *
// called by: pushNoun and pushVerb                           *
// passed:    string                                          * 
// returns:   bool                                            * 
// calls:     nothing                                         * 
// Purpose:   Make a Story (Pop words from the appropriate    * 
//            stacks and use them to fill in the blanks of a  *
//            story that you have created. Display the story.)*
// ************************************************************
bool validateString(const std::string& stringInput)
{
    // Check input for each character
    for (const char charInput : stringInput)
    {
        // check if the character is alphabetic letter
        // and check if string white space
        if (!isalpha(charInput) && !isspace(charInput))
            return false;
    }

    return true;
}