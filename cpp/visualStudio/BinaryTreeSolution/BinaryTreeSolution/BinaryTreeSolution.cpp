// BinaryTreeSolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IntBinaryTree.h"

using namespace std;

int main()
{
    menu();
}

// ************************************************************
// name:      menu                                            *
// called by: main                                            * 
// passed:    nothing                                         *
// returns:   nothing                                         *
// calls:     enqueueNode, dequeueNode, countCars, moveCarKid *
//            moveFriend, printQueue                          *
// The menu function provides menu and its choices for user   *
// to perform tasks that are required. It defines the array   *
// with its pointer that is used by other functions.          *
// It calls other functions and pass the pointer to the array *
// accordingly and quit the program when user select 5.       * 
// ************************************************************
void menu(void) {

    const int EXITCHOICES = 6;  //Assumed 6 is the exit out
    // Define a NumberList object
    IntBinaryTree list;

    int choice = 0;

    // This part of the code follow the example from teacher pseudo code
    while (choice != EXITCHOICES) {

        cout << endl;
        cout << "1. Insert one integer into the tree" << endl;
        cout << "2. Display the tree (in order)" << endl;
        cout << "3. Display Leaf Count" << endl;
        cout << "4. Display Tree Height" << endl;
        cout << "5. Display Tree Width" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "Select menu: ";
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

        case 1:    insert(list);
            break;
        case 2:    displayInOrder(list);
            break;
        case 3:    displayLeafCount(list);
            break;
        case 4:    displayTreeHeight(list);
            break;
        case 5:    displayTreeWidth(list);
            break;
        case 6:  cout << "Thank you for using the software. GoodBye " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-5 or 6 to quit) " << endl << endl;
        }
    }
}

// ************************************************************
// name:      insert                                          *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     void IntBinaryTree::insertNode(int number)      *
// Purpose:   insert one integer into the tree                * 
// Validation: validate the input is a number and not alphabet*
// ************************************************************
void insert(IntBinaryTree& list)
{
    int inputNumber;

    cout << "Enter integer number >= 0: \n";
    cin >> inputNumber;

    // input validation, inputNumber should be >= 0
    while (cin.fail() || inputNumber < 0)
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! You can only input number >=0 for number.\n";
        cout << "Enter integer number >= 0: \n";
        cin >> inputNumber;
    }

    list.insertNode(inputNumber);

}

// ************************************************************
// name:      displayInOrder                                  *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     void IntBinaryTree::displayInOrder() const      *
// Purpose:   display all of the element of tree in order     * 
// Validation: None                                           *
// ************************************************************
void displayInOrder(IntBinaryTree& list)
{
    list.displayInOrder();
}

// ************************************************************
// name:      displayLeafCount                                *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     void IntBinaryTree::displayInOrder() const      *
// Purpose:   display leaf count of the tree which counts and *
//            returns the number of leaf nodes in the tree.   *
// Validation: None                                           *
// ************************************************************
void displayLeafCount(IntBinaryTree& list)
{
    int countLeaf;

    countLeaf = list.leafCount();

    if (countLeaf == -1)
    {
        cout << "Sorry, the tree is empty \n";
    }
    else
    {
        cout << "Display the leaf count : ";
        cout << countLeaf << "\n\n";
    }

}

// ************************************************************
// name:      displayTreeHeight                               *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     int IntBinaryTree::height()                     *
// Purpose:   which counts and returns the height of the tree.*
//            "The height of a tree is the length of the path *
//            from the root to the deepest node in the tree.  *
//            A (rooted) tree with only a node (the root) has *
//            a height of zero."                              *
// Validation: None                                           *
// ************************************************************
void displayTreeHeight(IntBinaryTree& list)
{
    int treeHeight;

    treeHeight = list.height();

    if (treeHeight == -1)
    {
        cout << "Sorry, the tree is empty \n";
    }
    else
    {
        cout << "Display the tree height : ";
        if (treeHeight == 0)
        {
            cout << treeHeight << " (only root)\n\n";
        }
        else
        {
            cout << treeHeight << "\n\n";
        }

    }

}

// ************************************************************
// name:      displayTreeWidth                                *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     int IntBinaryTree::widthTree()                     *
// Purpose:   which counts and returns the width of the tree  *
//            - the width is the largest number of nodes in   *
//            the same level.                                 *
// Validation: None                                           *
// ************************************************************
void displayTreeWidth(IntBinaryTree& list)
{
    int treeWidth;

    treeWidth = list.widthTree();

    if (treeWidth == -1)
    {
        cout << "Sorry, the tree is empty \n";
    }
    else
    {
        cout << "Display the tree width : ";
        cout << treeWidth << "\n\n";
    }
}
