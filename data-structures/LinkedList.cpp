#include <iostream>
using namespace std;

// Node structure for Linked List
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    
public:
    LinkedList() : head(nullptr) {}
    
    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    
    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        
        if (head == nullptr) {
            head = newNode;
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    // Delete a node with given value
    void deleteNode(int value) {
        if (head == nullptr) return;
        
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }
        
        if (temp->next != nullptr) {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }
    
    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    
    // Search for a value
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    
    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};
