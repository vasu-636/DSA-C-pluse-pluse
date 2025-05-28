#include<iostream>
#include<vector>
using namespace std;


// Node class for Linked List
class Node {
public:
    int data;
    Node* next;


    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};


// Linked List class
class LinkedList {
private:
    Node* head;
    int count;


public:
    LinkedList() {
        head = nullptr;
        count = 0;
    }


    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }


    void addAtBegin(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        count++;
    }


    void addAtEnd(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        count++;
    }


    void deleteAtAny(int pos) {
        if (count == 0) {
            cout << "\nList is Empty!" << endl;
            return;
        }


        if (pos < 0 || pos >= count) {
            cout << "\nInvalid Position!" << endl;
            return;
        }


        Node* temp = head;


        if (pos == 0) {
            head = head->next;
            delete temp;
        } else {
            Node* prev = nullptr;
            for (int i = 0; i < pos; i++) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
        count--;
    }


    void update(int pos, int val) {
        if (count == 0 || pos < 0 || pos >= count) {
            cout << "\nInvalid position or list is empty!" << endl;
            return;
        }


        Node* temp = head;
        for (int i = 0; i < pos; i++) {
            temp = temp->next;
        }
        temp->data = val;
    }


    void display() {
        if (count == 0) {
            cout << "\nList is Empty!" << endl;
            return;
        }


        Node* temp = head;
        cout << "\nLinked List: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};


// Merge Sort Functions
void mergeSort(vector<int>& arr, int low, int high);
void merge(vector<int>& arr, int low, int mid, int high);
void displayVector(const vector<int>& arr);


void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;


    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}


void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;


    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }


    while (left <= mid) {
        temp.push_back(arr[left++]);
    }


    while (right <= high) {
        temp.push_back(arr[right++]);
    }


    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}


void displayVector(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << "\n";
}


// Binary Search Function
int binarySearch(const vector<int>& arr, int low, int high, int key) {
    if (low > high) return -1;


    int mid = (low + high) / 2;


    if (arr[mid] == key) {
        return mid;
    } else if (key < arr[mid]) {
        return binarySearch(arr, low, mid - 1, key);
    } else {
        return binarySearch(arr, mid + 1, high, key);
    }
}


// Main Menu
int main() {
    int choice, subChoice;
    LinkedList list;


    do {
        cout << "\nMain Menu:";
        cout << "\n1. Linked List";
        cout << "\n2. Merge Sort";
        cout << "\n3. Binary Search";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;


        switch (choice) {
            case 1: {
                do {
                    cout << "\nLinked List Menu:";
                    cout << "\n1. Add at Beginning";
                    cout << "\n2. Add at End";
                    cout << "\n3. Delete at Position";
                    cout << "\n4. Update at Position";
                    cout << "\n5. Display List";
                    cout << "\n0. Back to Main Menu";
                    cout << "\nEnter your choice: ";
                    cin >> subChoice;


                    switch (subChoice) {
                        case 1: {
                            int data;
                            cout << "Enter value to insert: ";
                            cin >> data;
                            list.addAtBegin(data);
                            break;
                        }
                        case 2: {
                            int data;
                            cout << "Enter value to insert: ";
                            cin >> data;
                            list.addAtEnd(data);
                            break;
                        }
                        case 3: {
                            int pos;
                            cout << "Enter position to delete: ";
                            cin >> pos;
                            list.deleteAtAny(pos);
                            break;
                        }
                        case 4: {
                            int pos, val;
                            cout << "Enter position to update: ";
                            cin >> pos;
                            cout << "Enter new value: ";
                            cin >> val;
                            list.update(pos, val);
                            break;
                        }
                        case 5:
                            list.display();
                            break;
                        case 0:
                            break;
                        default:
                            cout << "Invalid Choice!" << endl;
                    }
                } while (subChoice != 0);
                break;
            }


            case 2: {
                int size;
                cout << "Enter array size: ";
                cin >> size;
                vector<int> arr(size);


                for (int i = 0; i < size; i++) {
                    cout << "Enter element " << i + 1 << ": ";
                    cin >> arr[i];
                }


                cout << "Before sort: ";
                displayVector(arr);
                mergeSort(arr, 0, size - 1);
                cout << "After sort: ";
                displayVector(arr);
                break;
            }


            case 3: {
                int size, key;
                cout << "Enter array size: ";
                cin >> size;
                vector<int> arr(size);


                for (int i = 0; i < size; i++) {
                    cout << "Enter element " << i + 1 << ": ";
                    cin >> arr[i];
                }


                mergeSort(arr, 0, size - 1);
                cout << "Sorted array: ";
                displayVector(arr);


                cout << "Enter key to search: ";
                cin >> key;


                int index = binarySearch(arr, 0, size - 1, key);
                if (index != -1) {
                    cout << "Element found at index " << index << endl;
                } else {
                    cout << "Element not found!" << endl;
                }
                break;
            }


            case 0:
                cout << "Thank you!" << endl;
                break;


            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);


    return 0;
}
