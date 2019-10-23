#ifndef LINKLIST_H_
#define LINKLIST_H_
 
struct Node {

    int data;
    struct Node * next;
};

void printList(struct Node* n);

#endif
