/*
 ============================================================================
 Name        : Tree.cpp
 Author      : Josua Purba
 Version     :
 Copyright   : Your copyright notice
 Description : Example for static class variable member
 ============================================================================
 */
#include <iostream>
#include "Tree.h"


using namespace std;

// Constructor
Tree::Tree()
{
	objectCount++;
}

// Destructor
Tree::~Tree()
{

}

// Accessor function for objectCount
int Tree::getObjectCount() const
{
	return objectCount;
}

// Definition of the static member variable 
// Written outside the class.
int Tree::objectCount = 0;