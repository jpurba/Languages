#include "PrimaryColors.h"

// Destructor
PrimaryColors::~PrimaryColors(void)
{
    cout << "PrimaryColors destructor\n";
}

// Constructor
PrimaryColors::PrimaryColors(void)
{
    this->head = nullptr;
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
    Color* colorPtr = this->head;    // To move through the list

    newColor->setColor(inputColor);
    newColor->setNext(NULL);

    // check for the head of link list
    if (this->head == NULL)
        this->head = newColor;
    else
    {
        while (colorPtr->getNext() != NULL)
        {
            colorPtr = colorPtr->getNext();
        }
        colorPtr->setNext(newColor);
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
    Color* colorList = this->head;
    Color* colorPtr;

    Color* newColor = new Color();
    newColor->setColor(color);

    //To add at the beginning
    if (i == 0)
    {        
        newColor->setNext(this->head);
        this->head = newColor;
        cout << "Insert on header newColor->getColor " << newColor->getColor() << endl;
    }
    else
    {
        int j = 1;
        
        while (j <= i && colorList->getNext() != NULL)
        {
            cout << "Insert j=i temp->getColor, i = " << i << " " << colorList->getColor() << endl;
            colorList = colorList->getNext();
            j++;
        }

        //if the position is not present
        if (i != j)
            return -1;
        else
        {
            colorPtr = colorList->getNext();
            colorList->setNext(newColor);
            newColor->setNext(colorPtr);
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
    Color* colorPtr = this->head;

    while (colorPtr != NULL)
    {
        cout << colorPtr->getColor() << endl;
        colorPtr = colorPtr->getNext();
    }
}

/*
* 1. Remove the node from the list without breaking the links created by
*    the next pointers
* 2. Delete the node from the memory
*/
int PrimaryColors::deleteNode(int inputPosition)
{

    Color* nodePtr = this->head;
    Color* prebiousColor;
    Color* nextColor = new Color();

    //To delete at the head
    if (inputPosition == 0)
    {
        nodePtr = this->head;
        head = head->getNext();
        delete(nodePtr);
    }
    else
    {
        int index = 0;
        while (index < inputPosition && nodePtr->getNext() != NULL)
        {
            // traverse to the next node
            nodePtr = nodePtr->getNext();
            cout << "delete: " <<"index: "<< index << " nodePtr->getColor() " << nodePtr->getColor() << endl;
            index++;
        }

        cout << "Index = " << index << " inputPosition = " << inputPosition << endl;
        //if the position is not present
        if (inputPosition != index)
            return -1;
        else
        {
            prebiousColor = nodePtr->getNext();
            cout << "delete3: nodePtr->getColor()" << nodePtr->getColor() << endl;
            cout << "delete4: temp2->getColor()" << prebiousColor->getColor() << endl;

            nodePtr->setNext(nextColor);
            cout << "delete1: nodePtr->getColor()" << nodePtr->getColor() << endl;
            cout << "delete2: temp2->getColor()" << prebiousColor->getColor() << endl;
 
            nextColor->setNext(prebiousColor);

            delete(nodePtr);
        }
    }

    return 1;
    
}

void PrimaryColors::reverseList(void)
{
    Color* currentColor = this->head;
    Color* previousColor = NULL;
    Color* nextColor = NULL;

    while (currentColor != NULL) {

        // Store next node color
        nextColor = currentColor->getNext();

        // Reverse current node's pointer
        currentColor->setNext(previousColor);

        // Move pointers one position ahead.
        previousColor = currentColor;
        currentColor = nextColor;
    }

    this->head = previousColor;
}

int PrimaryColors::searchNode(string inputcolor)
{
    int index = 0;
    Color* currentColor = this->head;

    while (currentColor != NULL)
    {
        if (strcmp(currentColor->getColor().c_str(), inputcolor.c_str()) == 0)
            break;
        index++;
        currentColor = currentColor->getNext();
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


