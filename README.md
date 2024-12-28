# W10---Graph-Traversal
Graph Traversal Algorithms: Depth-First Search (DFS) and Breadth-First Search (BFS)

## Overview
This repository contains the implementation of two fundamental graph traversal algorithms:
- **Depth-First Search (DFS)**
- **Breadth-First Search (BFS)**

The graph used for traversal is represented as an adjacency list for efficiency. The algorithms are showcasing both recursive and iterative approaches for DFS and an iterative approach for BFS.

## Graph Details
The graph used in this project is as follows:
- **Vertices**: `{0, 1, 2, 3, 4}`
- **Edges**:
  - `(0, 1)`
  - `(0, 4)`
  - `(1, 2)`
  - `(1, 3)`
  - `(3, 4)`

## Implementation
The repository includes the following:
1. **DFS**:
   - Recursive implementation.
   - Iterative implementation using a stack.
2. **BFS**:
   - Iterative implementation using a queue.

### Input
The program takes the graph as input using an adjacency list and allows traversal from a specified starting vertex.
### Output
The traversal order of vertices is printed to the console for both DFS and BFS.

## Results
The traversal results starting from vertex `0` are:

- **DFS**: `0 -> 1 -> 2 -> 3 -> 4`
- **BFS**: `0 -> 1 -> 4 -> 2 -> 3`

## Explanation of Traversal Processes
### Depth-First Search (DFS)
DFS explores as far as possible along each branch before backtracking:
- **Recursive DFS**: Utilizes the call stack to backtrack.
- **Iterative DFS**: Uses an explicit stack to simulate recursion.

### Breadth-First Search (BFS)
BFS explores all neighbors of the current vertex before moving deeper. It uses a queue to maintain the order of exploration.

### Key Differences:
- DFS is a depth-oriented approach, resulting in a different order of traversal depending on the sequence of neighbor exploration.
- BFS is breadth-oriented, ensuring all vertices at a particular depth are visited before moving deeper.

## Observations
- **Traversal Order**: The order differs between DFS and BFS due to the depth-first vs. breadth-first nature.
- **Applications**:
  - DFS: Suitable for connected components, topological sorting, and cycle detection.
  - BFS: Useful for shortest path algorithms in unweighted graphs.