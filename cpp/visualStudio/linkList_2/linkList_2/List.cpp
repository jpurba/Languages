#include<cstdlib>
#include<iostream>
#include "List.h"

using namespace std;

List::List() {
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::addNote(int addData) {
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;

	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = n;
	}
	else {
		head = n;
	}
}

void List::deleteNode(int delData) {
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;

	cout << " In deleteNode \n";
	while (curr != NULL && curr->data != delData) {
		cout << " In while loop \n";
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << delData << " was not in the list \n";
		delete delPtr;
	}
	else {
		cout << " In else \n";
		if (delPtr == head) {
			cout << " In if(delPtr == head) \n";
			head = head->next;
			temp = NULL;
		}
		delPtr == curr;
		curr = curr->next;
		temp->next = curr;

		delete delPtr;
		cout << "The value " << delData << " was deleted \n";
	}

}

void List::printList() {
	curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}