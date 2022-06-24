#include "Graph.h"

void Graph::addEdge(int vStart, int vEnd, int cost) {
	this->adj[vStart].push_back(std::make_pair(cost, vEnd));
}

void Graph::Dijkstria(int vStart, std) {

}
