#ifndef GRAPH_UTILS_HPP
#define GRAPH_UTILS_HPP

#include <vector>
using namespace std;

// Function to add an edge to an undirected graph
void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

#endif 
