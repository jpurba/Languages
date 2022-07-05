#pragma once
class List
{
private:
    typedef struct node {
        int data;
        node* next;
    }* nodePtr;

    //typedef struct node* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;

public:  // for method or function
    List();
    void addNote(int addData);
    void deleteNode(int delData);
    void printList();
    
};

