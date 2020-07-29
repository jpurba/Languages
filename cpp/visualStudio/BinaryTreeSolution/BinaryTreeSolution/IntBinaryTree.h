/*
*
* Jeremiah Purba
*
* Chapters 21 Programming Example CISC 187 Summer 2020
*
* July 29, 2020
*
* File name: IntBinaryTree.h
*
*/
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H
class IntBinaryTree
{
private:
	struct TreeNode
	{
		int data;
		TreeNode* left;
		TreeNode* right;
	};

	TreeNode* root;

	// private membeer function
	void insert(TreeNode*&, TreeNode*&);     // insert onde node to tree
	void displayInOrder(TreeNode*) const;    // display the tree element in order
	void destroySubTree(TreeNode*);          // delete the tree or subtree
	int leafCount(TreeNode*) const;          // count the leaf
	int height(TreeNode*) ;                  // calculate the height of the tree 
	int widthTree(TreeNode*);                // calculate the max width of the tree

public:
	// Constructor
	IntBinaryTree();

	// Destructor
	~IntBinaryTree();

	// public member function
	void insertNode(int);                 // insert onde node to tree
	void displayInOrder() const;          // display the tree element in order
	int leafCount() const;                // count the leaf
	int height();                         // calculate the height of the tree
	int widthTree();                      // handler to calculate max width of the tree
	int calculateWidth(TreeNode*, int);   // calculate the max width of the tree
	int findMax(int, int);                // compare 2 number and return the larger
};


// Constant
const int maxInteger = 500;
const int positiveOne = 1;
const int negativeOne = -1;
const int zeroConstant = 0;
const int exitChoices = 6;  //Assumed 6 is the exit out

// Function Prototype
void menu(void);                             // menu function to provide selection
void insert(IntBinaryTree& list);            // menu handler for insert 
void displayInOrder(IntBinaryTree& list);    // menu handler for display in order
void displayLeafCount(IntBinaryTree& list);  // menu handler for leaf count
void displayTreeHeight(IntBinaryTree& list); // menu handler for height calculation
void displayTreeWidth(IntBinaryTree& list);  // menu handler for width calculation


#endif  // INTBINARYTREE_H

