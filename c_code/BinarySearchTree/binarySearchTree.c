/*
 ============================================================================
 Name        : linkList.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : linkList examples
 ============================================================================
 */
#include <stdio.h>
#include <binarySearchTree.h>

/* This function will prints contents of linked list starting from */
/* given node */
void printList(struct Node* n){
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

