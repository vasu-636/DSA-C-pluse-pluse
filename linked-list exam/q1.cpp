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

    void addAtBegin(int data) {
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

    

    int getValueAtPosition(int position) {
        if (position < 0 || position >= count) {
            cout << "Position out of range!" << endl;
            return -1;
        }

        int index = 0;
        Node* current = head;

        while (current != nullptr) {
            if (index == position) {
                return current->data;
            }
            index++;
            current = current->next;
        }

        return 1; 
    }

    void deleteAtAny(int pos) {
        if (count == 0) {
            cout << "Linked List is Empty!" << endl;
            return;
        }

        if (pos < 0 || pos >= count) {
            cout << "Invalid Position!" << endl;
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
};

int main() {
    LinkedList list;
    int choice;

    do {
        cout << "\n===== Linked List Menu =====" << endl;
        cout << "1. Add At Beginning" << endl;
        cout << "2. View All Values" << endl;
        cout << "3. Search by Position" << endl;
        cout << "4. Delete At Any Position" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter Value: ";
                cin >> data;
                list.addAtBegin(data);
                break;
            }
            case 2: {
                list.viewAll();
                break;
            }
            case 3: {
                int pos;
                cout << "Enter Position of the Data You Want to Search: ";
                cin >> pos;
                int value = list.getValueAtPosition(pos);
                if (value != -1) {
                    cout << "Value at position " << pos << " is: " << value << endl;
                }
                break;
            }
            case 4: {
                int pos;
                cout << "Enter Position to Delete: ";
                cin >> pos;
                list.deleteAtAny(pos);
                break;
            }
            case 5: {
                cout << "Thank you for using the program!" << endl;
                break;
            }
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
