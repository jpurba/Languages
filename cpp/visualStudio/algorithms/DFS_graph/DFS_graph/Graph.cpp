#include "Graph.h"

void Graph::addEdge(int vStart, int vEnd) {
	this -> adj[vStart].push_back(vEnd);
}

void Graph::traverseDFS(int vStart, bool* visited) {
	visited[vStart] = true;
	for (auto i = adj[vStart].begin(); i != adj[vStart].end(); ++i) {
		if (visited[*i] == false)
		{
			std::cout<<"from vertex: "<<vStart<<" to vertex : "<<*i<<std::endl;
			Graph::traverseDFS(*i, visited);
		}
	}
}

void Graph::printDFS(int vStart) {
	bool* visited = new bool[this->V];
	for (int i = 0; i < this->V; ++i)
	{
		visited[i] = false;
	}
	Graph::traverseDFS(vStart, visited);
}