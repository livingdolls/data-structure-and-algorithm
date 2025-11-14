#include "../data-structures/Stack.cpp"

int main() {
    cout << "===== Stack Demo =====" << endl;
    
    Stack stack;
    
    // Push elements
    cout << "\nPushing elements: 10, 20, 30, 40" << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.display();
    
    // Peek
    cout << "\nTop element (peek): " << stack.peek() << endl;
    
    // Pop elements
    cout << "\nPopping element: " << stack.pop() << endl;
    stack.display();
    
    cout << "\nPopping element: " << stack.pop() << endl;
    stack.display();
    
    cout << "\nStack size: " << stack.size() << endl;
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
