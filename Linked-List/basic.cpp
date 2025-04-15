#include <iostream>
using namespace std;


class Node{
    public : 
    int data;
    Node *next;
};

int main(){

    Node *HEAD = NULL;
    HEAD = new Node();

    HEAD->data = 10;
    HEAD->next = NULL;

    Node *n2 = NULL;
    n2 = new Node();

    n2->data = 25;
    n2->next = NULL;
    HEAD->next = n2;

    cout << "Value Of Head : " << HEAD->data << endl;
    cout << "Value Of N1 Node : " << HEAD->next->data << endl;

    
    
    return 0;
}