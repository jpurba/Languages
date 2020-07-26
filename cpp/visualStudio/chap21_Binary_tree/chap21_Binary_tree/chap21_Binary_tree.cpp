// chap21_Binary_tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

	return 0;
}

