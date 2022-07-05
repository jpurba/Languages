// linkList_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List Josua;

    Josua.addNote(3);
    Josua.addNote(5);
    Josua.addNote(7);
    cout << "The following is the content of the list\n";
    Josua.printList();

    Josua.deleteNode(3);
    Josua.printList();



}

