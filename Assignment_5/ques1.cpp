#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;
    
public:
    SinglyLinkedList() {
        head = nullptr;
    }
    
    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
    
    // (a) Insertion at the beginning
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << data << " at the beginning." << endl;
    }
    
    // (b) Insertion at the end
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        cout << "Inserted " << data << " at the end." << endl;
    }
    
    // (c) Insertion before a specific value
    void insertBefore(int data, int targetValue) {
        if (head == nullptr) {
            cout << "List is empty. Cannot insert before " << targetValue << endl;
            return;
        }
        
        if (head->data == targetValue) {
            insertAtBeginning(data);
            return;
        }
        
        Node* current = head;
        while (current->next != nullptr && current->next->data != targetValue) {
            current = current->next;
        }
        
        if (current->next == nullptr) {
            cout << "Value " << targetValue << " not found in the list." << endl;
            return;
        }
        
        Node* newNode = new Node(data);
        newNode->next = current->next;
        current->next = newNode;
        cout << "Inserted " << data << " before " << targetValue << "." << endl;
    }
    
    // (c) Insertion after a specific value
    void insertAfter(int data, int targetValue) {
        if (head == nullptr) {
            cout << "List is empty. Cannot insert after " << targetValue << endl;
            return;
        }
        
        Node* current = head;
        while (current != nullptr && current->data != targetValue) {
            current = current->next;
        }
        
        if (current == nullptr) {
            cout << "Value " << targetValue << " not found in the list." << endl;
            return;
        }
        
        Node* newNode = new Node(data);
        newNode->next = current->next;
        current->next = newNode;
        cout << "Inserted " << data << " after " << targetValue << "." << endl;
    }
    
    // (d) Deletion from the beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete from beginning." << endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        cout << "Deleted " << temp->data << " from the beginning." << endl;
        delete temp;
    }
    
    // (e) Deletion from the end
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete from end." << endl;
            return;
        }
        
        if (head->next == nullptr) {
            cout << "Deleted " << head->data << " from the end." << endl;
            delete head;
            head = nullptr;
            return;
        }
        
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        
        cout << "Deleted " << current->next->data << " from the end." << endl;
        delete current->next;
        current->next = nullptr;
    }
