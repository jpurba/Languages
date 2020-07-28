/*
*
* Jeremiah Purba
*
* Chapters 21 Programming Example CISC 187 Summer 2020
*
* July 26, 2020
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
	void insert(TreeNode*&, TreeNode*&);
	void displayInOrder(TreeNode*) const;
	void displayPreOrder(TreeNode*) const;
	void displayPostOrder(TreeNode*) const;
	void destroySubTree(TreeNode*);
	int leafCount(TreeNode*) const;
	int height(TreeNode*) ;
	int widthTree(TreeNode*);

public:
	// Constructor
	IntBinaryTree();

	// Destructor
	~IntBinaryTree();

	// public member function
	void insertNode(int);
	void displayInOrder() const;
	void displayPreOrder() const;
	void displayPostOrder() const;
	int leafCount() const;
	int height();
	int widthTree();
	int getWidth(TreeNode*, int);
	int findMax(int, int);

};


// Constant
const int maxInteger = 500;


// Function Prototype

void menu(void);
void insert(IntBinaryTree& list);
void displayInOrder(IntBinaryTree& list);
void displayLeafCount(IntBinaryTree& list);
void displayTreeHeight(IntBinaryTree& list);
void displayTreeWidth(IntBinaryTree& list);


#endif  // INTBINARYTREE_H

