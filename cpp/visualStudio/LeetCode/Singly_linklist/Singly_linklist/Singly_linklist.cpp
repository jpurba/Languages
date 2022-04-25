// Singly_linklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// Making a node struct containing a data int and a pointer
// to another node
struct Node {
    int data;
    Node* next;
};

class LinkedList {
    // Head pointer
    Node* head;

public:
    // default constructor. Initializing head pointer
    LinkedList() {
        head = NULL;
    }

    // inserting elements (At start of the list)
    void insert(int val) {
        // make a new node
        Node* new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        // If list is empty, make the new node, the head
        if (head == NULL) {
            head = new_node;
        }
        // else, make the new_node the head and its next, the previous
        // head
        else {
            new_node-> next = head;
            head = new_node;
        }
    }

    // loop over the list. return true if element found
    bool search(int val)
    {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }
        return false;
    }

    void remove(int val) {
        // If the head is to be deleted

    }
};

int main()
{
    std::cout << "Hello World!\n";
}

