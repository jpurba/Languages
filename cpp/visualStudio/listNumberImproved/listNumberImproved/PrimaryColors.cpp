#include <iostream>
#include "PrimaryColors.h"


using namespace std;

PrimaryColors::~PrimaryColors(void)
{
    ListNode* nodePtr;       // To traverse the list
    ListNode* nextNode;      // To point to the next node

    // Position nodePtr at the head of the list
    nodePtr = head;

    // While nodePtr is not at the end of the list
    while (nodePtr != nullptr)
    {
        // Save a pointer to the next node
        nextNode = nodePtr->next;

        // Delete the current node.
        delete nodePtr;

        // Position nodePtr at the next node;
        nodePtr = nextNode;
    }

}

PrimaryColors::PrimaryColors(void)
{
    head = nullptr;
}
/*
* Create a new node
* Store data in the new node
* If there are no node in the list
*    Make the new node the first node
* Else
*    Traverse the list to find the last node
*    Add the new node to the end of the list
* End if
*/
void PrimaryColors::appendNode(string inputColor)
{
    ListNode* newNode;   // To point to a new node
    ListNode* nodePtr;   // To move through the list

    // Low level input validation for primary color
    if ((strcmp(inputColor.c_str(), "red") != 0)
        && (strcmp(inputColor.c_str(), "green") != 0)
        && (strcmp(inputColor.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input color" << endl;
        cout << "Input color should be red, green or blue. Exit ! ";
        exit(EXIT_FAILURE);
    }

    // Allocate a new node and store num there
    newNode = new ListNode;
    newNode->colors = inputColor;
    newNode->next = nullptr;

    // If there are no nodes in the list 
    // make newNode the first node
    if (!head)
        head = newNode;
    else // Otherwise, insert newNode at end
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Find the last node in the list
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        // Insert newNode as the last node
        nodePtr->next = newNode;
    }
}

/*
* Assign List head to node pointer.
* White node pointer is not null
*   Display the value member of the node to by node pointer.
*   Assign node pointer to its own next member
* End While
*/
void PrimaryColors::displayList() const
{
    ListNode* nodePtr;   // To move through the list

    // Position nodePtr at the head of the list
    nodePtr = head;

    // While nodePtr points to a node, traverse the list
    while (nodePtr)
    {
        // Display the value in this node
        cout << nodePtr->colors << endl;

        // Move to the next node
        nodePtr = nodePtr->next;
    }
}

/*
* Create a new node
* Store data in the new node
* If there are no nodes in the list
*    Make the new node the first node
* Else
*    Find the first node whose value is greater than or equal to the new
*    value, or the end of the list (whichever is first).
*    Insert the new node before the found node, or at the end of the list
*    if no such node was found.
* End if
*/
int PrimaryColors::insertNode(int inputPosition, string inputColor)
{
    ListNode* newNode;                  // A new node
    ListNode* nodePtr;                  // To traverse the list
    ListNode* previousNode = nullptr;   // The previous node
    int index = 0;

    // Low level input validation for primary color
    if ((strcmp(inputColor.c_str(), "red") != 0)
        && (strcmp(inputColor.c_str(), "green") != 0)
        && (strcmp(inputColor.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input color" << endl;
        cout << "Input color should be red, green or blue. Exit ! ";
        exit(EXIT_FAILURE);
    }


    // Allocate a new node and store num there
    newNode = new ListNode;
    newNode->colors = inputColor;

    // If there are no nodes in the list and input position > 0
    if (!head && (inputPosition > 0) )
    {
        return -1;
    }
    // If there are no nodes in the list and input position == 0
    else if (!head && (inputPosition == 0))
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else // otherwise, insert newNode
    {
        // Position nodePtr at the head of list
        nodePtr = head;

        // Initialize previousNode to nullptr
        previousNode = nullptr;

        // Skip all nodes whose value is less than num
        //while (nodePtr != nullptr && nodePtr->value < num)
        while (nodePtr != nullptr && inputPosition != index)
        {
            cout << "inputPosition = " << inputPosition <<
                " ; index = " << index << endl;
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            index++;
            
        }

        //cout << "inputPosition = " << inputPosition <<
        //    " ; index = " << index << endl;

        if (inputPosition != index)
        {
            return -1;
        }

        // If the new node is to be the 1st in the list
        // insert it before all other nodes
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }

    return 1;
}

/*
* 1. Remove the node from the list without breaking the links created by
*    the next pointers
* 2. Delete the node from the memory
*/
int PrimaryColors::deleteNode(int inputPosition)
{
    ListNode* nodePtr;      // To traverse the list
    ListNode* previousNode = nullptr; // To point to the previous node
    int index = 0;

    // If the list empty, do nothing
    if (!head)
        return -1;

    // Determine if the first node is the one.
    if(inputPosition == 0)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        // Initialize nodePtr to head of list
        nodePtr = head;

        // Skip all nodes whose value member is 
        // not equal to num
        while (nodePtr != nullptr && inputPosition != index)
        {
            cout << "inputPosition = " << inputPosition <<
                " ; index = " << index << endl;
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            index++;
        }

        cout << "inputPosition = " << inputPosition <<
            " ; index = " << index << endl;

        if (inputPosition != index)
        {
            return -1;
        }
        // If nodeptr is not at the end of the list
        // link the previous node to the node after
        // nodePtr, then delete nodePtr.
        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }

    return 0;
}

int PrimaryColors::reverseList(void)
{
    ListNode* currentColor = head;
    ListNode* previousColor = nullptr;
    ListNode* nextColor = nullptr;

    if (!head)
        return -1;

    while (currentColor != nullptr) {

        // Store next
        nextColor = currentColor->next;

        // Reverse current node's pointer
        currentColor->next = previousColor;

        // Move pointers one position ahead.
        previousColor = currentColor;

        currentColor = nextColor;
    }

    // set head to previous node
    head = previousColor;

    return 0;
}

int PrimaryColors::searchNode(string inputcolor)
{

    int index = 0;
    ListNode* currentColor = head;

    while (currentColor != NULL)
    {
        if (strcmp(currentColor->colors.c_str(), inputcolor.c_str()) == 0)
            break;
        index++;
        currentColor = currentColor->next;
    }

    if (currentColor != NULL)
    {
        return index;
    }
    else
    {
        return -1;
    }

    return 0;
}