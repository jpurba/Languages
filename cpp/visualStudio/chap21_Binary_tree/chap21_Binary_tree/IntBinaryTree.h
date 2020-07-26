/*
*
* Jeremiah Purba
*
* Chapters 20 Programming Example CISC 187 Summer 2020
*
* July 26, 2020
*
* File name: IntBinaryTree.h
*
*/
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

#include <iostream>

class IntBinaryTree
{

private:

	struct TreeNode
	{
		int value;			// The value in the node
		TreeNode* left;     // Pointer to the left child node
		TreeNode* right;    // Pointer to the right child node
	};

	TreeNode* root;			// Pointer to the root node

	// Private member functions
	void insert(TreeNode*&, TreeNode*&);
	//void destroySubTree(TreeNode*);
	//void deleteNode(int, TreeNode*&);
	//void makeDeletion(TreeNode*&);
	void displayInOrder(TreeNode*) const;
	//void displayPreOrder(TreeNode*) const;
	//void displayPostOrder(TreeNode*) const;

public:
	// Constructor
	IntBinaryTree();

	// Destructor
	~IntBinaryTree();

	// Binary tree operations
	void insertNode(int);
	//bool searchNode(int);
	//void remove(int);
	void displayInOrder() const;
	//void displayPreOrder() const;
	//void displayPostOrder() const;

};


#endif // !INTBINARYTREE_H


