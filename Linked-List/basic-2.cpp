#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Node* head;
public:
    
    LinkedList() {
        this->head = NULL;
    }

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
    int n;
    cout << "Enter the number of nodes to add: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> value;
        list.addNode(value);
    }

    list.displayList();

    return 0;
}
