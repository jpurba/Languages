#include <stdio.h>
#include <stdlib.h>

typedef enum {
   false,
   true
} bool;

typedef struct node {
   int val;
   struct node *next;
} node;

node *head = NULL;
node *curr = NULL;


node * createList(int val){
    printf("\nCreating list with head node as [%d]\n", val);
    node *ptr = (node *)malloc(sizeof(node));
    if(ptr==NULL){
        printf("\nNode creation failed \n");
        return NULL;
    }
    ptr->val = val;
    ptr->next = NULL;  // set next ptr to NULL

    head = curr = ptr;
    return ptr;
}

node * addList(int val, int addToEnd){

    if (head == NULL){
        return(createList(val));
    }
    node *ptr = (node *)malloc(sizeof(node));
    if(ptr == NULL){
        printf("\nNode creation failed \n");
        return NULL;
    }
    ptr->val = val;
    ptr->next = NULL;
    if(addToEnd){
        printf("Adding node to end of list with value of %d\n", val);
        curr->next = ptr;
        curr = ptr;
    } else{
        printf("Adding node at the beginning of list with value of %d\n", val);
        ptr->next = head;
        head = ptr;
    }
}
node * searchInList(int val, node **prev){
    node *ptr = head;
    node *tmp = NULL;
    bool found = false;
    printf("\nSearching the list for value [%d] \n",val);
    while(ptr != NULL){
        if(ptr->val == val){
            found = true;
            break;
        }
        else{
            tmp = ptr;
            ptr = ptr->next;
        }
    }
    if(found == true){
        if(prev){
            *prev = tmp;
        }
        return ptr;
    } else {
        return NULL;
    }
}

int deleteFromList(int val){

    node *prev = NULL;
    node *del = NULL;
    printf("\nDeleting value [%d] from list\n",val);
    del = searchInList(val,&prev);
    if(del==NULL){
        return -1;
    }
    else {
        if(prev != NULL){
            prev->next = del->next;
        }
        if(del == curr) {
            curr = prev;
        }

    }
}

void printList(void){

    node *ptr = head;
    printf("\n ------- Printing list Start -------\n");
    while(ptr != NULL){
        printf("%d \n", ptr->val);
        ptr= ptr->next;
    }
    printf("\n ------- Printing list end ---------\n");
}

int main()
{
    int i = 0;
    int result = 0;
    node *ptr = NULL;

    /* Without function */

    node *p_head = NULL;
    node *np = malloc(sizeof(node));
    np->val = 800;
    np->next = p_head;
    p_head = np;
    np = malloc(sizeof(node));
    np->val = 150;
    np->next = p_head;
    p_head = np;
    np = malloc(sizeof(node));
    np->val = 100;
    np->next = p_head;
    p_head = np;

    printf("\n ------- Printing list Start -------\n");
    while(p_head != NULL){
        printf("[%d]\n",p_head->val);
        p_head = p_head->next;
    }

    printf("\n ------- Printing list end ---------\n");

    addList(100,1);
    printList();

    createList(5);
    printList();

    for(i=6; i<11; i++){
        addList(i,1);
    }
    printList();

    for(i=11; i< 16; i++){
        addList(i,0);
    }

    printList();
    printf("Hello world!\n");
    return 0;
}
