#include "../algorithms/Graph.cpp"

int main() {
    cout << "===== Graph Algorithms Demo =====" << endl;
    
    // Create a graph with 6 vertices
    Graph g(6);
    
    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    
    cout << "\n";
    g.display();
    
    // Perform BFS
    cout << "\n";
    g.BFS(0);
    
    // Perform DFS (iterative)
    cout << "\n";
    g.DFS(0);
    
    // Perform DFS (recursive)
    cout << "\n";
    g.DFSRecursive(0);
    
    return 0;
}
