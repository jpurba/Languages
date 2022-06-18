#pragma once
#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph
{
private:
	int V;
	std::list<int>* adj;

public:
	Graph(int v) : V(v) {
		std::cout << "init of graph with size of : " << v << std::endl;
		this->adj = new std::list<int>[v];
	}

	void addEdge(int vStart, int vEnd);
	void traverseDFS(int vStart, bool* visited);
	void printDFS(int vStart);
};

