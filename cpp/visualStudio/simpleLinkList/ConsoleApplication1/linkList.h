#ifndef _LINKLIST_H_
#define _LINKLIST_H_

struct Node {
	int data;
	struct Node* next;
};

struct Node* head = NULL;

void insert(int new_data);
void display(void);

#endif