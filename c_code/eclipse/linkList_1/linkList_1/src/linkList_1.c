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

// add new node to the end
void newNode(node *ptr, int val){
	if(ptr != NULL){
		while (ptr->next != NULL)
			ptr = ptr->next;
        // if next node is NULL, then create a new one
		ptr->next = (node *)malloc(sizeof(node));

		// check is the memory is created
		if(ptr->next ==NULL){
			printf("Fail to create node\n");
			return;
		}
		ptr->next->data = val;
		/* next is null */
		ptr->next->next = NULL;
	}
	// if pre = NULL, then return
	return;
}

node * searchInList(node **prev, node *head, int val){
    node *temp = NULL;
    bool found = false;
    printf("\nSearching the list for value [%d] \n",val);

    if(head == NULL){
    	printf("List is empty\n");
    	return NULL;
    }

    while(head != NULL){
    	printf("%d\n",head->data);
    	if(head->data == val){
    		found = true;
    		return head;
    	}
    	else{
    		temp = head;
    		head = head->next;
    	}
    }
/*
    if(found == true){
    	if(prev){
    		*prev = temp;
    	}
    	return head;
    } else{
    	return NULL;
    }
*/
    return NULL;
}

void addToEnd(node * head, int val){

	//node * current = head;
	if(head == NULL){
	    return;
	}

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


/* Remove first item */
int delFirst(node ** head){
	int retVal = -1;
	node * nextNode = NULL;
	if(*head == NULL){
		return -1;
	}
	nextNode = (*head)->next;
	retVal = (*head)->data;
	free(*head);
	*head = nextNode;
	return retVal;
}

/* remove last item */
int delLast(node * head){

	int retVal = -1;

	if(head == NULL){
		return retVal;
	}
	/* if there is only one item in the list, remove it */
	if(head->next == NULL){
		retVal = head->data;
		free(head);
        return retVal;
	}
	/* get to the second to the last node in the list */
	node * current = head;
	while(current->next->next != NULL){
		current = current->next;
	}
	/* now current points to the second to last item of the list, */
	/* so let's remove current->next */
	retVal = current->next->data;
	free(current->next);
	current->next = NULL;
	return retVal;
}

/* remove node by index, head = 0 */
int delIndex(node ** head, int n){
	int i = 0;
	int retVal = -1;
	node * current = *head;
	node * temp = NULL;

	/* if it is the first node */
	if(n==0){
		return delFirst(head);
	}
	for(i=0; i<n-1; i++){
		if (current->next == NULL){
			return -1;
		}
		current = current->next;
	}

	if(current->next == NULL){
		return -1;
	}

	temp = current->next;
	retVal = temp->data;
	current->next = temp->next;
	free(temp);
    return retVal;
}

int delValue(node ** head, int inData){
	node *temp = *head;
	node *curr = *head;
	int retVal=-1;

	/* check whether head need to be deleted */
	if(temp != NULL && temp->data == inData){
		*head = (*head)->next;  // connect head to next node
		retVal = (*head)->data;
		free(temp);
		return retVal;
	}
	else{
		while(curr->next != NULL){
			if(curr->next->data ==inData){  // if data found delete node
				temp = curr->next; // after delete need to link to next node
				retVal = curr->next->data;
				curr->next = curr->next->next;
				free(temp);
                //return retVal;
			}
			else{
				curr = curr->next; // if not found, go to next
			}
		}
	}

    return retVal;
}


void printList(node * ptr){

	printf("in printList\n");
	if(ptr == NULL)
		printf("Empty list\n");
	printf("\n ------- Printing list Start -------\n");
	while(ptr != NULL){
		printf("%d \n",ptr->data);
		ptr = ptr->next;
	}
	printf("\n ------- Printing list end ---------\n");
}



int main(void) {

	node *ptr = NULL;
	node *prev = NULL;
	node * results = NULL;
	int retVal=-1;

	retVal = delFirst(&ptr);
	printf("First node value = %d\n",retVal);


	retVal = delLast(ptr);
	printf("Last node value = %d\n",retVal);


	int a = 123;         // an integer:
	int *aptr =NULL;;        // a pointer to an integer
    aptr = &a;
    unsigned int volatile * numPtr1;
    //unsigned int  volatile * const numPtr;
    //numPtr = (unsigned int volatile * const)0x0028FF30;
    numPtr1 = (unsigned int volatile *)0x0028FF30;
    *numPtr1 = 0xaa55;
    printf("value in numPtr = 0x%x \n",*(unsigned int *)0x0028FF30);

    //numPtr = (unsigned int const volatile *)0x0028FF30;

	printf("\n[*aptr]:Value of aptr = %d\n", *aptr);
	printf("\n[ &a  ]: address of a = %p\n", &a);

	//printList(ptr);

	ptr = createList(5);
	printList(ptr);

	newNode(ptr,87);
	printList(ptr);

	addToEnd(ptr, 13);
	printList(ptr);

	addToBegin(&ptr,75);
	printList(ptr);

	addToEnd(ptr, 109);
	printList(ptr);

	addToBegin(&ptr,38);
	printList(ptr);

	addToEnd(ptr, 56);
	printList(ptr);

	addToBegin(&ptr,82);
	printList(ptr);

	addToEnd(ptr, 27);
	printList(ptr);

	addToBegin(&ptr,89);
	printList(ptr);

	addToEnd(ptr, 91);
	printList(ptr);

	addToBegin(&ptr,11);
	printList(ptr);

	retVal = delIndex(&ptr, 7);
	printf("Node with index 7 = %d \n",retVal);
	printList(ptr);

	retVal = delValue(&ptr, 27);
	printf("Node value = %d \n", retVal);
	printList(ptr);

	retVal = delFirst(&ptr);
	printf("First node value = %d\n",retVal);
	printList(ptr);

	retVal = delLast(ptr);
	printf("Last node value = %d\n", retVal);
	printList(ptr);

	retVal = delValue(&ptr,5);
	printf("Node value = %d \n", retVal);
	printList(ptr);

	results = searchInList(&prev, ptr,75);
	printf("Search result: %d\n", results->data);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
