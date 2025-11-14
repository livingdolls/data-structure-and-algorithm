#include "../data-structures/BinarySearchTree.cpp"

int main() {
    cout << "===== Binary Search Tree Demo =====" << endl;
    
    BinarySearchTree bst;
    
    // Insert elements
    cout << "\nInserting elements: 50, 30, 70, 20, 40, 60, 80" << endl;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);
    
    // Display in-order (sorted)
    bst.inorder();
    
    // Search for elements
    cout << "\nSearching for 40: " << (bst.search(40) ? "Found" : "Not Found") << endl;
    cout << "Searching for 100: " << (bst.search(100) ? "Found" : "Not Found") << endl;
    
    // Delete an element
    cout << "\nDeleting 30" << endl;
    bst.remove(30);
    bst.inorder();
    
    cout << "\nDeleting 50" << endl;
    bst.remove(50);
    bst.inorder();
    
    return 0;
}
