#include "PrimaryColors.h"

// Destructor
PrimaryColors::~PrimaryColors(void)
{
    cout << "PrimaryColors destructor\n";
}

// Constructor
PrimaryColors::PrimaryColors(void)
{
    this->start = nullptr;
    cout << "PrimaryColors constructor\n";
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
    Color* newColor = new Color();   // To point to a new node
    Color* temp = this->start;       // To move through the list

    newColor->setColor(inputColor);
    newColor->setNext(NULL);

    // check for the head of link list
    if (this->start == NULL)
        this->start = newColor;
    else
    {
        while (temp->getNext() != NULL)
        {
            temp = temp->getNext();
        }
        temp->setNext(newColor);
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
int PrimaryColors::insertNode(int i, string color)
{
    Color* temp = this->start;
    Color* temp2;

    Color* newColor = new Color();
    newColor->setColor(color);

    //To add at the beginning
    if (i == 0)
    {
        newColor->setNext(this->start);
        this->start = newColor;
    }
    else
    {
        int j = 1;
        while (j <= i && temp->getNext() != NULL)
        {
            temp = temp->getNext();
            j++;
        }

        //if the position is not present
        if (i != j)
            return -1;
        else
        {
            temp2 = temp->getNext();
            temp->setNext(newColor);
            newColor->setNext(temp2);
        }
    }

    return 1;
}

/*
* Assign List head to node pointer.
* White node pointer is not null
*   Display the value member of the node to by node pointer.
*   Assign node pointer to its own next member
* End While
*/
void PrimaryColors::displayList(void)
{
    Color* temp = this->start;

    while (temp != NULL)
    {
        cout << temp->getColor() << endl;
        temp = temp->getNext();
    }
}

/*
* 1. Remove the node from the list without breaking the links created by
*    the next pointers
* 2. Delete the node from the memory
*/
int PrimaryColors::deleteNode(int i)
{
    Color* temp = this->start, * temp2;

    //To add at the beginning
    if (i == 0)
    {
        temp = this->start;
        start = start->getNext();
        delete(temp);
    }
    else
    {
        int j = 0;
        while (j < i && temp->getNext() != NULL)
        {
            temp = temp->getNext();
            j++;
        }

        //if the position is not present
        if (i != j)
            return -1;
        else
        {
            temp2 = temp->getNext();
            temp->setNext(temp->getNext());
            delete(temp2);
        }
    }

    return 1;
}

void PrimaryColors::reverseList(void)
{
    Color* temp = this->start;
    Color* prev = NULL, * next = NULL;

    while (temp != NULL) {

        // Store next
        next = temp->getNext();

        // Reverse current node's pointer
        temp->setNext(prev);

        // Move pointers one position ahead.
        prev = temp;
        temp = next;
    }

    this->start = prev;
}

int PrimaryColors::searchNode(string inputcolor)
{
    int index = 0;
    Color* temp = this->start;

    while (temp != NULL)
    {
        if (strcmp(temp->getColor().c_str(), inputcolor.c_str()) == 0)
            break;
        index++;
        temp = temp->getNext();
    }

    if (temp != NULL)
    {
        return index;
    }
    else
    {
        return -1;
    }

    return 0;
}


