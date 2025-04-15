#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the linked list
    LinkedList() {
        head = NULL;
    }

    // Function to add node at the end
    void addNode(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Function to display the list
    void displayList() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    int value;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter value " << i << ": ";
        cin >> value;
        list.addNode(value);
    }

    list.displayList();

    return 0;
}
