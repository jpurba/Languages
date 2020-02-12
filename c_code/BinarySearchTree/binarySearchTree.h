#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_
 
struct node {

    int key;
    struct node * left, *right;
};

struct node * newNode(int n);
void inorder(struct node *root);

#endif
