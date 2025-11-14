# Data Structures and Algorithms in C++

A comprehensive collection of data structures and algorithms implemented in C++. This repository provides clean, well-documented implementations for learning and reference purposes.

## 📚 Contents

### Data Structures
- **Linked List** - Singly linked list with insertion, deletion, and search operations
- **Stack** - LIFO data structure with push, pop, and peek operations
- **Queue** - FIFO data structure with enqueue and dequeue operations
- **Binary Tree** - Tree structure with various traversal methods (in-order, pre-order, post-order, level-order)
- **Binary Search Tree** - Self-balancing tree with efficient search, insertion, and deletion

### Algorithms

#### Sorting Algorithms
- **Bubble Sort** - Simple comparison-based sorting (O(n²))
- **Selection Sort** - In-place comparison sorting (O(n²))
- **Insertion Sort** - Efficient for small data sets (O(n²))
- **Merge Sort** - Divide and conquer sorting (O(n log n))
- **Quick Sort** - Efficient general-purpose sorting (O(n log n) average)

#### Searching Algorithms
- **Linear Search** - Sequential search (O(n))
- **Binary Search** - Efficient search on sorted arrays (O(log n))
- **Jump Search** - Search algorithm for sorted arrays (O(√n))

#### Graph Algorithms
- **Breadth-First Search (BFS)** - Level-order graph traversal
- **Depth-First Search (DFS)** - Explores graph depth-wise (iterative and recursive)

## 🚀 Getting Started

### Prerequisites
- C++ compiler with C++11 support (g++, clang++, etc.)
- Make (optional, for using Makefile)

### Building the Examples

Using Make:
```bash
make all
```

Or compile manually:
```bash
g++ -std=c++11 -Wall examples/linked_list_example.cpp -o build/linked_list_example
```

### Running Examples

Run all examples:
```bash
make run_all
```

Run individual examples:
```bash
make run_linked_list
make run_stack
make run_sorting
make run_graph
make run_bst
```

Or run directly:
```bash
./build/linked_list_example
```

## 📁 Project Structure

```
.
├── data-structures/
│   ├── LinkedList.cpp          # Linked list implementation
│   ├── Stack.cpp               # Stack implementation
│   ├── Queue.cpp               # Queue implementation
│   ├── BinaryTree.cpp          # Binary tree implementation
│   └── BinarySearchTree.cpp    # BST implementation
├── algorithms/
│   ├── Sorting.cpp             # Various sorting algorithms
│   ├── Searching.cpp           # Searching algorithms
│   └── Graph.cpp               # Graph algorithms (BFS, DFS)
├── examples/
│   ├── linked_list_example.cpp # Linked list usage example
│   ├── stack_example.cpp       # Stack usage example
│   ├── sorting_example.cpp     # Sorting algorithms demo
│   ├── graph_example.cpp       # Graph algorithms demo
│   └── bst_example.cpp         # BST usage example
├── Makefile                    # Build configuration
└── README.md                   # This file
```

## 💡 Usage Examples

### Linked List
```cpp
#include "data-structures/LinkedList.cpp"

LinkedList list;
list.insertAtEnd(10);
list.insertAtEnd(20);
list.display();
```

### Stack
```cpp
#include "data-structures/Stack.cpp"

Stack stack;
stack.push(10);
stack.push(20);
int top = stack.pop();
```

### Binary Search Tree
```cpp
#include "data-structures/BinarySearchTree.cpp"

BinarySearchTree bst;
bst.insert(50);
bst.insert(30);
bst.insert(70);
bool found = bst.search(30);
```

### Sorting
```cpp
#include "algorithms/Sorting.cpp"

vector<int> arr = {64, 34, 25, 12, 22};
quickSort(arr);
printArray(arr);
```

### Graph Algorithms
```cpp
#include "algorithms/Graph.cpp"

Graph g(5);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.BFS(0);
g.DFS(0);
```

## 🧹 Cleaning Up

To remove compiled binaries:
```bash
make clean
```

## 📖 Learning Resources

Each implementation includes:
- Clear, commented code
- Time and space complexity notes
- Example usage programs
- Common use cases

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Add new data structures
- Implement additional algorithms
- Improve existing implementations
- Add more examples
- Fix bugs or improve documentation

## 📝 License

This project is open source and available for educational purposes.

## 🎯 Roadmap

Future additions:
- Hash Table implementation
- Heap data structure
- AVL Tree (self-balancing BST)
- Dijkstra's algorithm
- Kruskal's and Prim's algorithms
- Dynamic programming examples
- More advanced sorting algorithms
