#pragma once
#include <iostream>
#include <list>
#include <queue>


class Graph
{
private:
	int V;
	std::list<int>* adj;
public:
	Graph(int v) : V(v) {
		std::cout << "Initialization of graph with number of vertex = " << v <<  std::endl;

		adj = new std::list<int>[V];
	}

	void addEdge(int vStart, int vEnd);
	void traverseBFS(int vStart, std::vector<bool>& visited);
	void printBFS(int vStart);
};

