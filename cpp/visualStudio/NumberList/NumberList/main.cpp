// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{
    // Define a NumberList object
    NumberList list;

    // Insert a node in the middle of the list
    list.insertNode(1.0);

    // Append some values to the list
    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6);

    cout << "Before insert, data on the list are: " << endl;
    // Display the values in the list
    list.displayList();

    // Insert a node in the middle of the list
    list.insertNode(0.2);

    cout << "\nAfter insert, data on the list are: " << endl;
    // Display the values in the list
    list.displayList();

    // Delete the middle node
    cout << "Now deleting node in the middle.\n";
    list.deleteNode(2.5);
    
    cout << "\nAfter delete middle node, data on the list are: " << endl;
    // Display the values in the list
    list.displayList();

    // Delete the middle node
    cout << "Now deleting node in the beginning.\n";
    list.deleteNode(0.2);

    cout << "\nAfter delete start node, data on the list are: " << endl;
    // Display the values in the list
    list.displayList();

    return 0;
}

