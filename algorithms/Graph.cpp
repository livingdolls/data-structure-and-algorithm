#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjList;
    
public:
    Graph(int vertices) : numVertices(vertices) {
        adjList.resize(vertices);
    }
    
    // Add edge to the graph
    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        // For undirected graph, uncomment the line below:
        // adjList[dest].push_back(src);
    }
    
    // Breadth First Search (BFS)
    void BFS(int startVertex) {
        vector<bool> visited(numVertices, false);
        queue<int> q;
        
        visited[startVertex] = true;
        q.push(startVertex);
        
        cout << "BFS traversal starting from vertex " << startVertex << ": ";
        
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            cout << vertex << " ";
            
            for (int adjacent : adjList[vertex]) {
                if (!visited[adjacent]) {
                    visited[adjacent] = true;
                    q.push(adjacent);
                }
            }
        }
        cout << endl;
    }
    
    // Depth First Search (DFS) - Iterative
    void DFS(int startVertex) {
        vector<bool> visited(numVertices, false);
        stack<int> s;
        
        s.push(startVertex);
        
        cout << "DFS traversal starting from vertex " << startVertex << ": ";
        
        while (!s.empty()) {
            int vertex = s.top();
            s.pop();
            
            if (!visited[vertex]) {
                visited[vertex] = true;
                cout << vertex << " ";
                
                // Push adjacent vertices in reverse order for correct DFS order
                for (int i = adjList[vertex].size() - 1; i >= 0; i--) {
                    int adjacent = adjList[vertex][i];
                    if (!visited[adjacent]) {
                        s.push(adjacent);
                    }
                }
            }
        }
        cout << endl;
    }
    
    // DFS Helper for recursive version
    void DFSRecursiveHelper(int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        cout << vertex << " ";
        
        for (int adjacent : adjList[vertex]) {
            if (!visited[adjacent]) {
                DFSRecursiveHelper(adjacent, visited);
            }
        }
    }
    
    // Depth First Search (DFS) - Recursive
    void DFSRecursive(int startVertex) {
        vector<bool> visited(numVertices, false);
        cout << "DFS recursive traversal starting from vertex " << startVertex << ": ";
        DFSRecursiveHelper(startVertex, visited);
        cout << endl;
    }
    
    // Display the graph
    void display() {
        cout << "Graph adjacency list:" << endl;
        for (int i = 0; i < numVertices; i++) {
            cout << i << ": ";
            for (int j : adjList[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
