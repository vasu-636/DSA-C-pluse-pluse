#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head = nullptr;
    int count = 0;

    void addNode(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        count++;
    }

    void viewAll() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int getValueAtPosition(int pos) {
        if (pos < 0 || pos >= count) {
            cout << "Invalid position. Please enter between 0 and " << count - 1 << "." << endl;
            return -1; // Return -1 as a sentinel for invalid
        }

        Node* current = head;
        int idx = 0;

        while (current != nullptr) {
            if (idx == pos) {
                return current->data;
            }
            idx++;
            current = current->next;
        }

        return -1; // This will not be reached if position is valid
    }

    void deleteAtPos(int pos) {
        if (count == 0) {
            cout << "Linked List is empty." << endl;
            return;
        }

        if (pos < 0 || pos >= count) {
            cout << "Invalid position." << endl;
            return;
        }

        if (pos == 0) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
        } else {
            Node* prev = head;
            for (int i = 0; i < pos - 1; i++) {
                prev = prev->next;
            }

            Node* toDelete = prev->next;
            prev->next = toDelete->next;
            delete toDelete;
        }

        count--;
        cout << "Node at position " << pos << " deleted." << endl;
    }

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    int choice;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Add Node at Beginning\n";
        cout << "2. View All Nodes\n";
        cout << "3. Search Node by Position\n";
        cout << "4. Delete Node at Position\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter value to insert: ";
                cin >> data;
                list.addNode(data);
                break;
            }
            case 2: {
                list.viewAll();
                break;
            }
            case 3: {
                int pos;
                cout << "Enter position to search: ";
                cin >> pos;
                int value = list.getValueAtPosition(pos);
                if (value != -1) {
                    cout << "Value at position " << pos << " is " << value << endl;
                }
                break;
            }
            case 4: {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtPos(pos);
                break;
            }
            case 5: {
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
