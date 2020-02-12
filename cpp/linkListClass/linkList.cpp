#include <iostream>
#include "linkList.h"

using namespace std;


void printList(Node *head){
    
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


int main () {
   
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; // assign data in first node
    head->next = second; // link first node to second node

    second->data = 2; // assign data in second node
    second->next = third; 

    third->data = 3;
    third->next = NULL;

    printList(head);

    cout <<"Main: finished !"<< endl;
    return 0;

}


