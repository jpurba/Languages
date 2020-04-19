// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linkList.h"

using namespace std;

void insert(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void display(void) {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    insert(3);
    insert(1);
    insert(2);
    insert(7);
    insert(2);
    insert(9);
    
    cout << "\n" << endl;

    cout << "The link list is: ";
    display();

    cout << "\n\n" << endl;

    return 0;
}
