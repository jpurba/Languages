// linkList_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linkList.h"

using namespace std;

// Initialize the first node
void initNode(struct Node* head, int n) {

    head->data = n;   // initialize head data with n
    head->next = NULL;

}

// Appending node
void addNode(struct Node* head, int n) {

    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;

    Node* cur = head;
    while (cur) {
        if (cur->next == NULL) {
            cur->next = newNode;
            return;
        }
        cur = cur->next;
    }

}

// insert node at infront
void insertFront(struct Node** head, int n) {
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = *head;
    *head = newNode;
}

// search node
struct Node* searchNode(struct Node* head, int n) {

    Node* cur = head;
    while (cur) {
        if (cur->data == n)
            return cur;
        cur = cur->next;
    }
    cout << "No Node " << n << " in list. \n";
}

// Delete node
bool deleteNode(struct Node** head, Node* ptrDel) {

    Node* cur = *head;
    if (ptrDel == *head) {
        *head = cur->next;
        delete ptrDel;
        return true;
    }

    while (cur) {
        if (cur->next == ptrDel) {
            cur->next = ptrDel->next;
            delete ptrDel;
            return true;
        }
        cur = cur->next;
    }
    return false;
}

/* reverse the list */
struct Node* reverse(struct Node** head) {
    Node* parent = *head;
    Node* me = parent->next;
    Node* child = me->next;

    /* make parent as tail */
    parent-> = NULL;
    while (child) {
        me->next = parent;
        parent = me;
        me = child;
        child = child->next;
    }
    me->next = parent;
    *head = me;
    return *head;
}

void copyLinkedList(struct Node* node, struct Node** pNew) {

}


int compareLinkedList(struct Node* node1, struct Node* node2);
void deleteLinkedList(struct Node** node);
void display(struct Node* head);

int main()
{
    std::cout << "Hello World!\n";
}

