#include <iostream>
#include <queue>
using namespace std;

class Queue {
private:
    queue<int> items;
    
public:
    // Enqueue element
    void enqueue(int value) {
        items.push(value);
    }
    
    // Dequeue element
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int front = items.front();
        items.pop();
        return front;
    }
    
    // Get front element
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return items.front();
    }
    
    // Check if queue is empty
    bool isEmpty() {
        return items.empty();
    }
    
    // Get size of queue
    int size() {
        return items.size();
    }
    
    // Display queue (note: this requires copying the queue)
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        queue<int> temp = items;
        cout << "Queue: ";
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};
