/*
 ============================================================================
 Name        : linkList_1.c
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkList.h"

//void printList(node * n){
//	while(n!= NULL){
//		printf(" %d ", n->data);
//		n = n->next;
//	}
//}

node * createList(int val){

	printf("Create link list with value %d", val);
	node *ptr = (node *)malloc(sizeof(node));
	if(ptr == NULL){
		printf("\nNode creation failed\n");
		return NULL;
	}
	ptr->data = val;
	ptr->next = NULL;
    return ptr;
}

void addToEnd(node * head, int val){

	//node * current = head;
	while(head->next != NULL){
		head = head->next;
	}
	// Now we can add new node at the end
    head->next = (node *) malloc (sizeof(node));
    head->next->data = val;
    head->next->next = NULL;
}

void addToBegin(node ** head, int val){
    node *newNode = (node *)malloc(sizeof(node));
    newNode -> data = val;
    newNode ->next = *head;
    *head = newNode;
}

void printList(node * ptr){

	printf("\n ------- Printing list Start -------\n");
	while(ptr != NULL){
		printf("%d \n",ptr->data);
		ptr = ptr->next;
	}
	printf("\n ------- Printing list end ---------\n");
}



int main(void) {

	node *ptr = NULL;

	ptr = createList(5);
	printList(ptr);

	addToEnd(ptr, 13);
	printList(ptr);

	addToBegin(&ptr,75);
	printList(ptr);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
