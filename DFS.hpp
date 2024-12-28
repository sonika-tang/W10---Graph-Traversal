#ifndef DFS_HPP
#define DFS_HPP

#include <iostream>
#include <vector>
#include <unordered_set>
#include <stack>

using namespace std;

// DFS Recursive Function
void dfsRecursiveHelper(int currentVertex, const vector<vector<int>>& graph, unordered_set<int>& visited) {
    visited.insert(currentVertex);
    cout << currentVertex << " ";

    for (int neighbor : graph[currentVertex]) {
        if (visited.find(neighbor) == visited.end()) {
            dfsRecursiveHelper(neighbor, graph, visited);
        }
    }
}

void dfsRecursive(int startVertex, const vector<vector<int>>& graph) {
    unordered_set<int> visited;
    dfsRecursiveHelper(startVertex, graph, visited);
    cout << endl;
}

// DFS Iterative Function
void dfsIterative(int startVertex, const vector<vector<int>>& graph) {
    stack<int> s;
    unordered_set<int> visited;

    s.push(startVertex);
    while (!s.empty()) {
        int currentVertex = s.top();
        s.pop();

        if (visited.find(currentVertex) == visited.end()) {
            visited.insert(currentVertex);
            cout << currentVertex << " ";

            for (auto it = graph[currentVertex].rbegin(); it != graph[currentVertex].rend(); ++it) {
                if (visited.find(*it) == visited.end()) {
                    s.push(*it);
                }
            }
        }
    }
    cout << endl;
}

#endif 
