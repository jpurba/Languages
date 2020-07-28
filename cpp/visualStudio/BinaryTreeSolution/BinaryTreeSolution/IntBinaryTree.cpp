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
	destroySubTree(root);
}

// public member function
void IntBinaryTree::insertNode(int inputNumber)
{
	TreeNode* newNode = nullptr;

	// input validation, inputNumber should be >= 0
	if (inputNumber < 0)
	{
		cout << "Error ! Wrong input integer ... Exit ! \n";
		cout << "Number should be at least zero and larger .\n";
		exit(EXIT_FAILURE);
	}
	else
	{

		// create a new node that will be inserted 
		// and store the number in it
		newNode = new TreeNode;
		newNode->data = inputNumber;
		newNode->left = newNode->right = nullptr;

		// call insert function to do insertion
		insert(root, newNode);
	}
}

void IntBinaryTree::displayInOrder() const
{
	if (root)
	{
		cout << "This is the display of the tree in order: \n";
		displayInOrder(root);
		cout << "\n\n";
	}
	else
	{
		cout << "The tree is empty \n";
	}
		

}

void IntBinaryTree::displayInOrder(TreeNode* nodePtr) const
{
	if (nodePtr)
	{
		// traversal to the left
		displayInOrder(nodePtr->left);
		cout << nodePtr->data;
		cout << " ";
		// traversal to the right
		displayInOrder(nodePtr->right);
	}
}

void IntBinaryTree::displayPreOrder() const
{
	displayPreOrder(root);
}

void IntBinaryTree::displayPreOrder(TreeNode* nodePtr) const
{
	if (nodePtr)
	{
		cout << nodePtr->data;
		cout << " ";
		// traversal to the left
		displayPreOrder(nodePtr->left);
		// traversal to the right
		displayPreOrder(nodePtr->right);
	}
}

void IntBinaryTree::displayPostOrder() const
{
	displayPostOrder(root);
}

void IntBinaryTree::displayPostOrder(TreeNode* nodePtr) const
{
	if (nodePtr)
	{
		// traversal to the left
		displayPostOrder(nodePtr->left);
		// traversal to the right
		displayPostOrder(nodePtr->right);
		cout << nodePtr->data;
		cout << " ";
	}
}

int IntBinaryTree::leafCount() const
{
	int countLeaf;

	if (root)
	{
		cout << "Display the leaf count : ";
		countLeaf = leafCount(root);
		cout << countLeaf << "\n\n";
		return countLeaf;
	}
	else
	{
		cout << "The tree is empty \n";
		return -1;
	}
	
}

int IntBinaryTree::leafCount(TreeNode* nodePtr) const
{
	// If the tree is empty
	if (!nodePtr)
	{
		return 0;
	}
	if ((nodePtr->left == nullptr) && (nodePtr->right == nullptr))
	{
		return 1;
	}
	else
		return leafCount(nodePtr->left) + leafCount(nodePtr->right);
}

int IntBinaryTree::height() 
{
	return height(root);
}

int IntBinaryTree::findMax(int left, int right)
{
	int max = 0;

	max = (left > right) ? left : right;

	return max;
}

int IntBinaryTree::height(TreeNode* nodePtr) 
{
	int left = 0;
	int right = 0;
	int max = 0;

	// If the tree is empty, return 0;
	if (!nodePtr)
	{
		return 0;
	}
	else
	{
		left = height(nodePtr->left);
		cout << "left " << left << endl;
		right = height(nodePtr->right);
		cout << "right " << right << endl;
		max = findMax(left, right);
		cout << "max " << max << endl;
		return  max + 1;
	}
}



int IntBinaryTree::widthTree()
{
	return widthTree(root);
}

int IntBinaryTree::widthTree(TreeNode* nodePtr)
{
	

	if (nodePtr == nullptr)
	{
		return 0;   // return 0 when the tree is empty
	}
	else
	{
		int maxWidth = 0;
		int width;
		int h = height(root);
		int i;
		 

		for (i = 1; i <= h; i++)
		{
			width = getWidth(root, i);
			if (width > maxWidth)
			{
				maxWidth = width;
				cout << "i = " << i << " ; maxWidth = " << maxWidth
					<< " ; width = " << width << " \n";
			}
		}

		return maxWidth;
	}
}

int IntBinaryTree::getWidth(TreeNode* nodePtr, int level)
{
	if (nodePtr == nullptr)
		return 0;
	
	if (level == 1)
		return 1;

	else if (level > 1)
	{
		return (getWidth(nodePtr->left, level - 1)) + (getWidth(nodePtr->right, level - 1));
	}
	
}

void IntBinaryTree::destroySubTree(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		if (nodePtr->left)
		{
			destroySubTree(nodePtr->left);
		}

		if (nodePtr->right)
		{
			destroySubTree(nodePtr->right);
		}

		delete nodePtr;
	}
}

void IntBinaryTree::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
	// if tree is empty then the new node is the root
	if (!nodePtr)
	{
		nodePtr = newNode;
	}
	// check if new node data less than root data, then go to left
	else if (newNode->data < nodePtr->data)
	{
		insert(nodePtr->left, newNode);   // go through left branch
	}
	// check if new node data greater than root data, then go to right
	else
	{
		insert(nodePtr->right, newNode);  // go through right branch
	}
}

