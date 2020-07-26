/*
*
* Jeremiah Purba
*
* Chapters 20 Programming Example CISC 187 Summer 2020
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

void IntBinaryTree::displayInOrder(TreeNode *nodePtr) const
{

	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}


void IntBinaryTree::displayInOrder() const
{
	displayInOrder(root);
}

//void IntBinaryTree::displayPreOrder() const
//{
//	displayPreOrder(root);
//}

//void IntBinaryTree::displayPostOrder() const
//{
//	displayPostOrder(root);
//}

