// BFS_graph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//#include <list>
//#include <queue>
#include <algorithm>
#include "Graph.h"


int main()
{
    Graph g(6);

    // Edges for node 0
    g.addEdge(0, 1);
    g.addEdge(0, 2);

    // Edges for node 1
    g.addEdge(1, 0);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    // Edges for node 2
    g.addEdge(2, 0);
    g.addEdge(2, 4);

    // Edges for node 3
    g.addEdge(3, 1);
    g.addEdge(3, 4);
    g.addEdge(3, 5);

    // Edges for node 4
    g.addEdge(4, 1);
    g.addEdge(4, 2);
    g.addEdge(4, 3);
    g.addEdge(4, 5);

    // Edges for node 5
    g.addEdge(5, 3);
    g.addEdge(5, 4);


    //g.printBFS(2);

    g.printBFS(3);
}

