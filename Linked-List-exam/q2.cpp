#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
class LinkedList{
    public : 
        Node* head = nullptr;
        int count = 0;

        void addNode(int data){
            Node* newNode = new Node(data);
            newNode->next = head;
            head = newNode;
            count++;
        }

        void viewAll(){
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->data << " -> " ; 
                temp = temp->next ;
            }
            cout << "NULL" << endl;
        }

        int getValueAtPosition(int pos){
            if(pos < 0 || pos >= count){
                cout << "Enter Valid Position..." << endl;
                return 2;
            }

            int idx = 0;
            Node* current = head;

            while(current != nullptr){
                if(idx == pos){
                    return current->data;
                }
                idx ++;
                current = current->next;
            }
            cout << "Value at " << pos << "index is " << current->data  << endl;
        }

        void deleteAtPos(int pos){
            if(count == 0){
                cout << "Linked List is empty .." << endl;
                return ;
            }

            if(pos < 0 || pos >= count){
                cout << "Invalid Position..." << endl;
            }

            if(pos == 0){
                Node* toDelete = head;
                head = head->next ;
                delete toDelete;
            }
            else{
                Node* prev = head;
                for(int i = 0 ; i < (pos - 1) ; i++ ){
                    prev = prev->next;
                }

                Node* toDelete = prev->next;
                prev->next = toDelete->next;
                delete toDelete;
            }
            count-- ; 
            cout << "Node at Position " << pos << "deleted." << endl;
        }
};
int main(){
    LinkedList list;
    int choice;

    do
    {
        cout << "1. Add Node At Begin." << endl;
        cout << "2. View All Node." << endl;
        cout << "3. Search Node by Position." << endl;
        cout << "4. Delete Node At any Position." << endl;
        cout << "5. Exit." << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1 : {
                int data;
                cout << "Enter value you want to enter : " ;
                cin >> data;
                list.addNode(data);
            
                break;
            }
            case 2 : {
                list.viewAll();
                break;
            }
            case 3 :{
                int pos;
                cout << "Enter position you want to search : ";
                cin >> pos;
                list.deleteAtPos(pos);
                break;
            }
            case 4 :{
                int pos;
                cout << "Enter position of node you want to delete : ";
                cin >> pos;
                list.deleteAtPos(pos);
                break;
            }
            case 5 :{
                break;
            }
        }
    } while (choice != 5);
    
    return 0;
}