#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};
typedef struct node node_t;
void printList(node_t *head);
node_t *insert_at_head_head(node_t *head, node_t *node_to_insert);
node_t *create_new_node(int value) ;

void printList(node_t *head){
    node_t *temporary = head;

    printf("Data value in the link list are: \n");
    while(temporary != NULL){
        printf("%d - ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}


node_t *create_new_node(int value) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert){
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}

node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while (tmp != NULL){
        if(tmp->value == value)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}

void insert_after_node(node_t *node_to_insert_after, node_t *newnode){
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}

int main()
{
    node_t *tmp;
    node_t *head=NULL;

    for(int i=0; i< 25; i++){
        tmp = create_new_node(i);
        //tmp->next = head;         // add number to the front of the list
        //head = tmp;
        head = insert_at_head(&head, tmp);
    }

    printList(head);

    tmp = find_node(head, 80);
    if(tmp){
        printf("\nfound node with value %d\n\n", tmp->value);
    } else {
        printf("\nNOT found node with value 80\n\n");
    }


    tmp = create_new_node(32);
    tmp->next = head;
    head = tmp;     // head = tmp

    tmp = create_new_node(80);
    tmp->next = head;
    head = tmp;
    tmp = create_new_node(34);
    tmp->next = head;

    head = tmp;

    printList(head);

    tmp = find_node(head, 80);
    if(tmp){
        printf("\nfound node with value %d\n\n", tmp->value);
    } else {
        printf("\nNOT found node with value 136\n\n");
    }

    insert_after_node(tmp, create_new_node(75));

    printList(head);
    return 0;
}
