#include <iostream>
#include<stack>
using namespace std;

class Stack{
    private :
        int top;
        int count;
        int size;
        int* arr;
    public :
        Stack(int size = 5){
            this->size = size;
            arr = new int[size];
            top = -1;
            count = 0;
        }
        ~Stack(){
            delete[] arr;
        }
        void push(int value){
            if (count == size) {
                cout << "Stack Overflow" << endl;
                return;
            }
            arr[++top] = value;
            count++;
            cout << "Value added to stack successfully." << endl;
        }
        void pop(){
            if (count == 0) {
                cout << "Stack Underflow" << endl;
                return;
            }
            top--;
            count--;
        }
        void display(){
            cout << "- - -" << endl ;
            for(int i = 0;i < count ; i++){
                cout << "| " << arr[i] << " |" << endl; 
            }
            cout << "- - -" << endl;
        };
        int peek(){
            if (count == 0) {
                cout << "Stack is empty" << endl;
                return -1; // or some other error value
            }
            return arr[top];
        }
        bool isEmpty(){
            return count == 0;
        }
        int getSize(){
            return count;
        }
        

};
int main(){
    Stack stack;
    int choice;
    do
    {
        cout << "===== Stack ========" << endl;
        cout << "1.Add Number at top . " << endl;
        cout << "2.Display All Number." << endl;
        cout << "3.Pop Last Number." << endl;
        cout << "4.Peek Last Number." << endl;
        cout << "5.Check whether stack is empty or not." << endl;
        cout << "6.Check size of stack." << endl;
        cout << "7.Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:{
            int data;
            cout << "Enter value : ";
            cin >> data;
            stack.push(data);
            break;
        } 
        case 2:{
            stack.display();
            break;
        } 
        case 3:{
            stack.pop();
            break;
        } 
        case 4:{
            cout << "Last Element Of Stack : " << stack.peek() << endl;
            break;
        } 
        case 5:{
             if(stack.isEmpty()){
                cout << "Empty" << endl; 
             }
             else{
                cout << "Not Empty." << endl;
             }
            break;
        } 
        case 6:{
            cout << "Size Of Stack : " << stack.getSize() << endl;
            break;
        } 
        case 7:{
            cout << "Exiting...." << endl;
            break;
        } 
        }
    } while (choice != 7);
    

    return 0;
}