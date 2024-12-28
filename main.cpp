#include <iostream>
#include "DFS.hpp"
#include "BFS.hpp"
#include "GraphUtil.hpp"

using namespace std;

int main() {
    vector<vector<int>> graph(5);

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 3, 4);


    cout << "DFS Recursive Traversal: ";
    dfsRecursive(0, graph);

    cout << "DFS Iterative Traversal: ";
    dfsIterative(0, graph);

    cout << "BFS Traversal: ";
    bfs(0, graph);

    return 0;
}
