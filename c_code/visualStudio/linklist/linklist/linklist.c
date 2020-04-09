// linklist.c : link list simple example
//

#include <stdio.h>
#include "linklist.h"

// This function will prints contents of linked list starting
// from given node
void printList(struct Node * n){

	while (n != NULL) {
		printf(" %d ", n->data);
		n = n->next;
	}

}

