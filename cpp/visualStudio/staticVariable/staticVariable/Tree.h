/*
 ============================================================================
 Name        : Tree.h
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Example for static class variable member
 ============================================================================
 */
#ifndef TREE_H_
#define TREE_H_


// Tree class
class Tree
{
private:
	static int objectCount;   // static member variable

public:
	// constructor
	Tree();

	// destructor
	~Tree();

	// Accessor function for objectCount
	int getObjectCount() const;
};


#endif // !TREE_H_


