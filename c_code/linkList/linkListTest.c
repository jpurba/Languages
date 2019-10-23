/*
 ============================================================================
 Name        : linkListTest.c
 Author      : Josua Purba
 Version     : 
 Copyright   : copyright 2018 - 2028
 Description : To test linkList module
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <linkList.h>


int main()
{
    struct Node* head   = NULL;
    struct Node* second = NULL;  
    struct Node* third  = NULL;  

    head   = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;    

    printf("The following are the content of the linkList \n");
    printList(head);

    printf("\n");

    return 0;
}
