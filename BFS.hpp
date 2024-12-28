#ifndef BFS_HPP
#define BFS_HPP

#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

// BFS Function
void bfs(int startVertex, const vector<vector<int>>& graph) {
    queue<int> q;
    unordered_set<int> visited;

    q.push(startVertex);
    visited.insert(startVertex);

    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();
        cout << currentVertex << " ";

        for (int neighbor : graph[currentVertex]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

#endif // BFS_HPP
