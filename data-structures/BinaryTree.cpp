#include <iostream>
#include <queue>
using namespace std;

// Node structure for Binary Tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;
    
    // Helper function for in-order traversal
    void inorderHelper(TreeNode* node) {
        if (node == nullptr) return;
        inorderHelper(node->left);
        cout << node->data << " ";
        inorderHelper(node->right);
    }
    
    // Helper function for pre-order traversal
    void preorderHelper(TreeNode* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderHelper(node->left);
        preorderHelper(node->right);
    }
    
    // Helper function for post-order traversal
    void postorderHelper(TreeNode* node) {
        if (node == nullptr) return;
        postorderHelper(node->left);
        postorderHelper(node->right);
        cout << node->data << " ";
    }
    
    // Helper function to delete tree
    void deleteTree(TreeNode* node) {
        if (node == nullptr) return;
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
    
public:
    BinaryTree() : root(nullptr) {}
    
    // Insert using level order (for demonstration)
    void insert(int value) {
        TreeNode* newNode = new TreeNode(value);
        
        if (root == nullptr) {
            root = newNode;
            return;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            
            if (temp->left == nullptr) {
                temp->left = newNode;
                break;
            } else {
                q.push(temp->left);
            }
            
            if (temp->right == nullptr) {
                temp->right = newNode;
                break;
            } else {
                q.push(temp->right);
            }
        }
    }
    
    // In-order traversal (Left, Root, Right)
    void inorder() {
        cout << "In-order: ";
        inorderHelper(root);
        cout << endl;
    }
    
    // Pre-order traversal (Root, Left, Right)
    void preorder() {
        cout << "Pre-order: ";
        preorderHelper(root);
        cout << endl;
    }
    
    // Post-order traversal (Left, Right, Root)
    void postorder() {
        cout << "Post-order: ";
        postorderHelper(root);
        cout << endl;
    }
    
    // Level-order traversal (BFS)
    void levelorder() {
        if (root == nullptr) return;
        
        cout << "Level-order: ";
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            
            if (temp->left != nullptr) q.push(temp->left);
            if (temp->right != nullptr) q.push(temp->right);
        }
        cout << endl;
    }
    
    // Destructor
    ~BinaryTree() {
        deleteTree(root);
    }
};
