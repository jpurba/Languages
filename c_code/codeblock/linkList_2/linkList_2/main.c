#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};
typedef struct node node_t;
void printList(node_t *head);

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

int main()
{
    node_t n1,n2,n3, n4;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    // link them up
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    printf("n1.value = %d\n",n1.value);

    printList(head);

    // link them up
    head = &n1;
    n3.next = NULL;
    n2.next = &n3;
    n1.next = &n2;

    printList(head);

    n4.value = 13;
    n4.next = &n3;
    n2.next = &n4;
    printList(head);

    head = head ->next;
    printList(head);

    return 0;
}
