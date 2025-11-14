#include "../data-structures/LinkedList.cpp"

int main() {
    cout << "===== Linked List Demo =====" << endl;
    
    LinkedList list;
    
    // Insert elements
    cout << "\nInserting elements at the end: 10, 20, 30" << endl;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    
    // Insert at beginning
    cout << "\nInserting 5 at the beginning" << endl;
    list.insertAtBeginning(5);
    list.display();
    
    // Search for element
    cout << "\nSearching for 20: " << (list.search(20) ? "Found" : "Not Found") << endl;
    cout << "Searching for 100: " << (list.search(100) ? "Found" : "Not Found") << endl;
    
    // Delete element
    cout << "\nDeleting 20" << endl;
    list.deleteNode(20);
    list.display();
    
    return 0;
}
