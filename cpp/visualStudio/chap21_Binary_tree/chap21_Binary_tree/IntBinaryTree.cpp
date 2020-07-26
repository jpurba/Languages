/*
*
* Jeremiah Purba
*
* Chapters 21 Programming Example CISC 187 Summer 2020
*
* July 26, 2020
*
* File name: IntBinaryTree.cpp
*
*/
#include <iostream>
#include "IntBinaryTree.h"

using namespace std;
// Constructor
IntBinaryTree::IntBinaryTree()
{
	root = nullptr;
}

// Destructor
IntBinaryTree::~IntBinaryTree()
{
	//destroySubTree(root);

}

// Binary tree operations
void IntBinaryTree::insertNode(int num)
{
	TreeNode* newNode = nullptr;    // Pointer to a new node

	// Create a new node and store num in it
	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = nullptr;

	// Insert the node
	insert(root, newNode);
}

void IntBinaryTree::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
	if (nodePtr == nullptr)
		nodePtr = newNode;                     // insert the node
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode);        // search the left branch 
	else
		insert(nodePtr->right, newNode);       // search the right branch
}

//bool IntBinaryTree::searchNode(int)
//{
//	return true;
//}

//void IntBinaryTree::remove(int)
//{

//}

//***************************************************************
// The displayInOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via inorder traversal. *
//***************************************************************
void IntBinaryTree::displayInOrder(TreeNode *nodePtr) const
{

	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

//****************************************************************
// The displayPreOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via preorder traversal. *
//****************************************************************
void IntBinaryTree::displayPreOrder(TreeNode* nodePtr) const
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}

//****************************************************************
// The displayPostOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via postorder traversal. *
//****************************************************************
void IntBinaryTree::displayPostOrder(TreeNode* nodePtr) const
{
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}


//***************************************************************
// The displayInOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via inorder traversal. *
//***************************************************************
void IntBinaryTree::displayInOrder() const
{
	displayInOrder(root);
}

//****************************************************************
// The displayPreOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via preorder traversal. *
//****************************************************************
void IntBinaryTree::displayPreOrder() const
{
	displayPreOrder(root);
}


//****************************************************************
// The displayPostOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via postorder traversal. *
//****************************************************************
void IntBinaryTree::displayPostOrder() const
{
	displayPostOrder(root);
}

