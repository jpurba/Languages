// simpleLinkList_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linkList.h"

using namespace std;

int main()
{

	node* root;
	root = new node;
	root->num = 5;
	root->next = p;
	p = root;

	node* a;
	a = new node;
	a->num = 10;
	a->next = NULL;
	root->next = a;

	node* b;
	b = new node;
	b->num = 15;
	a->next = b;
	b->next = NULL;

	node* c;
	c = new node;
	c->num = 20;
	b->next = c;
	c->next = NULL;

	node* d;
	d = new node;
	d->num = 25;
	c->next = d;
	d->next = NULL;
	
	node* q;
	for (q = p; q != NULL; q = q->next) {
		cout << q->num;
		cout << endl;
	}
}

