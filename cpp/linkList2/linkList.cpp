#include <iostream>
#include "linkList.h"

using namespace std;


void initNode(struct Node *head, int n){}
void addNode(struct Node *head, int n){}
void insertFront(struct Node **head, int n){}
struct Node *searchNode(struct Node *head, int n);
bool deleteNode(struct Node **head, Node *ptrDel);
void copyLinkedList(struct Node *node, struct Node **pNew);
int compareLinkedList(struct Node *node1, struct Node *node2);
void deleteLinkedList(struct Node **node){}
void display(struct Node *head){}

int main () {

    node1 * n;
    node1 * t;
    node1 * x;

    n = new node1;
    n -> data = 1;
    t = n;
    x = n;
    n -> next = NULL;


    cout <<"n data : " << n -> data << endl;
    cout <<"t data : " << t -> data << endl;
    cout <<"x data : " << x -> data << endl;

    t -> data = 72;
    cout <<"Change data on n,t and h to 72 "<< endl;
    cout <<"n data : " << n -> data << endl;
    cout <<"t data : " << t -> data << endl;
    cout <<"x data : " << x -> data << endl;

    n = new node1;
    n -> data = 2;
    t = n;
    x->next = n;

    cout <<"makes n as new node + point t to it "<< endl;
    cout <<"n data : " << n -> data << endl;
    cout <<"t data : " << t -> data << endl;
    cout <<"x data : " << x -> data << endl;

    n = new node1;
    n -> data = 3;
    n -> next = NULL; 
    
    cout <<"makes n as new node + point t to it "<< endl;
    cout <<"n data : " << n -> data << endl;
    cout <<"t data : " << t -> data << endl;
    cout <<"x data : " << x -> data << endl;

    
    cout << "\nUse different link list" << endl;
    node *root;
    root = new node;
    root -> num = 4;
    root -> link = p;
    p = root;

    node *branch;
    branch = new node;
    root -> link = branch;
    branch -> link = NULL;
    branch -> num = 6;

    node *branch1;
    branch1 = new node;
    branch -> link = branch1;    
    branch1 -> link = NULL;
    branch1 -> num=11;

    node *branch2;
    branch2 = new node;
    branch1 -> link = branch2;
    branch2 -> link = NULL;
    branch2 -> num = 8;
    

    node *q;
    for(q=p; q!=NULL; q=q->link)
    {
        cout<<q->num;
        cout<<endl; 
    }


    cout << "\nUse class and print function example" << endl;
    // use class and print function example
    Node2* head   = NULL;
    Node2* second = NULL;
    Node2* third  = NULL;

    head = new Node2();
    second = new Node2();
    third  = new Node2();

    head->data = 1;       // assign data in first node
    head->next = second;  // Link first node with second

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
   
    cout<<"\n"<<endl;

    return 0;

}


