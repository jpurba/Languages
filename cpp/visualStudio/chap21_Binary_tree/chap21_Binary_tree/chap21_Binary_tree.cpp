/*
*
* Jeremiah Purba
*
* Chapters 21 Programming Example CISC 187 Summer 2020
*
* July 26, 2020
*
* File name: chap21_Binary_tree.cpp
*
*/

#include <iostream>
#include "IntBinaryTree.h"

using namespace std;

int main()
{

	IntBinaryTree tree;

	cout << "Inserting node: ";
	tree.insertNode(5);
	tree.insertNode(8);
	tree.insertNode(3);
	tree.insertNode(12);
	tree.insertNode(9);
	cout << "Done \n";

	// Display inorder
	cout << "Inorder Traversal: \n";
	tree.displayInOrder();

	// Display preorder
	cout << "\nPreorder Traversal:\n";
	tree.displayPreOrder();

	// Display postorder
	cout << "\nPostorder traversal:\n";
	tree.displayPostOrder();

	return 0;
}

