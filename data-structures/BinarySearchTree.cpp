#include <iostream>
using namespace std;

// Node structure for BST
struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
    
    BSTNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    BSTNode* root;
    
    // Helper function to insert a node
    BSTNode* insertHelper(BSTNode* node, int value) {
        if (node == nullptr) {
            return new BSTNode(value);
        }
        
        if (value < node->data) {
            node->left = insertHelper(node->left, value);
        } else if (value > node->data) {
            node->right = insertHelper(node->right, value);
        }
        
        return node;
    }
    
    // Helper function to search for a value
    bool searchHelper(BSTNode* node, int value) {
        if (node == nullptr) return false;
        if (node->data == value) return true;
        
        if (value < node->data) {
            return searchHelper(node->left, value);
        } else {
            return searchHelper(node->right, value);
        }
    }
    
    // Helper function to find minimum value node
    BSTNode* findMin(BSTNode* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }
    
    // Helper function to delete a node
    BSTNode* deleteHelper(BSTNode* node, int value) {
        if (node == nullptr) return nullptr;
        
        if (value < node->data) {
            node->left = deleteHelper(node->left, value);
        } else if (value > node->data) {
            node->right = deleteHelper(node->right, value);
        } else {
            // Node to be deleted found
            
            // Case 1: Node has no children
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                return nullptr;
            }
            // Case 2: Node has one child
            else if (node->left == nullptr) {
                BSTNode* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                BSTNode* temp = node->left;
                delete node;
                return temp;
            }
            // Case 3: Node has two children
            else {
                BSTNode* temp = findMin(node->right);
                node->data = temp->data;
                node->right = deleteHelper(node->right, temp->data);
            }
        }
        
        return node;
    }
    
    // Helper function for in-order traversal
    void inorderHelper(BSTNode* node) {
        if (node == nullptr) return;
        inorderHelper(node->left);
        cout << node->data << " ";
        inorderHelper(node->right);
    }
    
    // Helper function to delete tree
    void deleteTree(BSTNode* node) {
        if (node == nullptr) return;
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
    
public:
    BinarySearchTree() : root(nullptr) {}
    
    // Insert a value
    void insert(int value) {
        root = insertHelper(root, value);
    }
    
    // Search for a value
    bool search(int value) {
        return searchHelper(root, value);
    }
    
    // Delete a value
    void remove(int value) {
        root = deleteHelper(root, value);
    }
    
    // In-order traversal (gives sorted order)
    void inorder() {
        cout << "In-order: ";
        inorderHelper(root);
        cout << endl;
    }
    
    // Destructor
    ~BinarySearchTree() {
        deleteTree(root);
    }
};
