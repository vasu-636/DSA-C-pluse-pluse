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

    void addAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void addAtEnd(int value) {
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

    void addAtPosition(int value, int position) {
        Node* newNode = new Node(value);
        if (position == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Position out of bounds." << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtStart() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL)
            temp = temp->next;
        delete temp->next;
        temp->next = NULL;
    }

    void deleteAtPosition(int position) {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        if (position == 0) {
            deleteAtStart();
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL || temp->next == NULL) {
            cout << "Position out of bounds." << endl;
            return;
        }

        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        toDelete = NULL;
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
    int choice, count = 0;

    do {
        cout << "\n1. Add Node at Start." << endl;
        cout << "2. Add Node at End." << endl;
        cout << "3. Add Node at Position." << endl;
        cout << "4. Delete Node at Start." << endl;
        cout << "5. Delete Node at End." << endl;
        cout << "6. Delete Node at Position." << endl;
        cout << "7. Display List." << endl;
        cout << "8. Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to add at start: ";
                cin >> value;
                list.addAtStart(value);
                count++;
                cout << "Node added at start." << endl;
                break;
            }

            case 2: {
                int value;
                cout << "Enter value to add at end: ";
                cin >> value;
                list.addAtEnd(value);
                count++;
                cout << "Node added at end." << endl;
                break;
            }

            case 3: {
                int value, position;
                cout << "Enter value to add: ";
                cin >> value;
                cout << "Enter position to add at: ";
                cin >> position;
                list.addAtPosition(value, position);
                count++;
                cout << "Node added at position." << endl;
                break;
            }

            case 4:
                list.deleteAtStart();
                if (count > 0) count--;
                cout << "Node deleted at start." << endl;
                break;

            case 5:
                list.deleteAtEnd();
                if (count > 0) count--;
                cout << "Node deleted at end." << endl;
                break;

            case 6: {
                int position;
                cout << "Enter position to delete: ";
                cin >> position;
                list.deleteAtPosition(position);
                if (count > 0) count--;
                cout << "Node deleted at position." << endl;
                break;
            }

            case 7:
                list.displayList();
                cout << "Total Nodes: " << count << endl;
                break;

            case 8:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 8);

    return 0;
}
