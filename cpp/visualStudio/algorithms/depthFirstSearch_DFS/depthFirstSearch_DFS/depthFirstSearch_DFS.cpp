// depthFirstSearch_DFS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std;

class Graph {
    int numVertices;
    list<int>* adjLists;
    bool* visited;

public:
    Graph(int V);
    void addEdge(int srd, int dest);
    void DFS(int vertex);
};

// Initialize graph
Graph::Graph(int vertices) {
    numVertices = vertices;
    adjLists = new list<int>[vertices];
    visited = new bool[vertices];
}

// Add edges
void Graph::addEdge(int src, int  dest) {
    adjLists[src].push_front(dest);
}

// DFS algorithm
void Graph::DFS(int vertex) {
    visited[vertex] = true;
    list<int> adjList = adjLists[vertex];
    cout << vertex << " ";

    list<int>::iterator i;
    for (i = adjList.begin(); i != adjList.end(); ++i) {
        if (!visited[*i]) {
            DFS(*i);
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

   
    g.DFS(1);
    g.DFS(2);
    g.DFS(3);

    
    return 0;
}

