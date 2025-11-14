#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> items;
    
public:
    // Push element onto stack
    void push(int value) {
        items.push_back(value);
    }
    
    // Pop element from stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int top = items.back();
        items.pop_back();
        return top;
    }
    
    // Get top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return items.back();
    }
    
    // Check if stack is empty
    bool isEmpty() {
        return items.empty();
    }
    
    // Get size of stack
    int size() {
        return items.size();
    }
    
    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = items.size() - 1; i >= 0; i--) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};
