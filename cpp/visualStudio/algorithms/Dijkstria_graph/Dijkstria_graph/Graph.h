#pragma once
#include <iostream>
#include <limits>
#include <list>
#include <vector>
#include <algorithm>
#include <set>

int INF = std::numeric_limits<int>::max();

class Graph
{
private:
	std::list<std::pair<int, int>>* adj;
	int V;

public:
	Graph(int v) : V(v) {
		std::cout << "Graph initialization with : " << v << " nodes " << std::endl;

		this->adj = new std::list<std::pair<int, int>>[v];
	}

	void addEdge(int vStart, int vEnd, int cost);
	void Dijkstria(int vStart, std::vector<bool> visited);
	void computeShortestPath(int vStart);
};

