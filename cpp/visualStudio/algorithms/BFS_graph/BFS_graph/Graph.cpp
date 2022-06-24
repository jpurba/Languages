#include "Graph.h"


void Graph::addEdge(int vStart, int vEnd) {
	this -> adj[vStart].push_back(vEnd);
}

void Graph::traverseBFS(int vStart, std::vector<bool>& visited) {
	
	std::queue<int> queue;
	visited[vStart] = true;
	queue.push(vStart);

	while (std::count(visited.begin(), visited.end(), true) < this->V) {
		int node = queue.front();
		queue.pop();
		std::cout << " ==== visited node ==== : " << node << std::endl;

		for (auto i = adj[node].begin(); i != adj[node].end(); i++) {

			if (visited[*i] != true) {
				queue.push(*i);
				visited[*i] = true;
				std::cout << "adjacent edge : " << *i << std::endl;

			}
		}
	}
}

void Graph::printBFS(int vStart) {
	std::vector<bool> visited;
	for (int i = 0; i < this->V; i++) {
		visited.push_back(false);
	}
	Graph::traverseBFS(vStart, visited);
}
