// binaryTree2DoublyLinkList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/* A binary tree node has data, and left and right pointers */
struct node {
    int data;
    node* left;
    node* right;
};

// A simple recursive function to convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head --> Pointer to head node of created doubly linked list

void BinaryTree2DoubleLinkedList(node* root, node** head) {
    // Base case
    if (root == NULL) return;

    // Initialize previously visited node as NULL. This is
    // static so that the same value is accessible in all recursive
    // calls
    static node* prev = NULL;
    
    // Recursively convert left subtree
    BinaryTree2DoubleLinkedList(root->left, head);

    // Now convert this node
    if (prev == NULL)
        *head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }

    prev = root;
    // Finally convert right subtree
    BinaryTree2DoubleLinkedList(root->right, head);

}

/*
Helper function that allocates a new node with the 
given data and NULL left and right pointers. */

*/
int main()
{

    std::cout << "Hello World!\n";
}

