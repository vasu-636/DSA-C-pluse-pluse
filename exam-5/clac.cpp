#include <iostream>
using namespace std;

float sub(float,float);
float add(float,float);
float mul(float,float);
float div(float,float);
int rem(int,int);

int main(){

    float firstnum,secondnum;
    int choice;

    do{
        cout << "Enter first number :";
        cin >> firstnum;
        cout << "Enter second number :";
        cin >> secondnum;
        cout << endl;

        cout << "Enter 1 for Addittion." << endl;
        cout << "Enter 2 for Subtraction." << endl;
        cout << "Enter 3 for Multiplication." << endl;
        cout << "Enter 4 for Division" << endl;
        cout << "Enter 5 for Modulous " << endl;
        cout << "Enter 0 to exit." << endl;
        cout << "Enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:

            add(firstnum , secondnum);
        break;

        case 2:

            sub(firstnum , secondnum);
        break;
        
        case 3: 

            mul(firstnum,secondnum);
        break;

        case 4:

            div(firstnum,secondnum);
        break;

        case 5 :

            rem(firstnum,secondnum);
        break;

        case 0:

            cout << "EXITING ...";
            return 0 ;

        }
    }
    while(choice != 0);
    

    return 0;
}

float add(float a , float b){
    cout << "Addition of " << a << " and " << b << " is " << a+b << endl;
}

float sub(float a , float b){
    cout << "Subtraction  of " << a << " from " << b << " is " << a - b << endl;
}

float mul(float a , float b){
    cout << "Multiplication  of " << a << " and " << b << " is " << a*b << endl;
}

float div(float a , float b){
    cout << "Division  of " << a << " and " << b << " is " << a/b << endl;
}

int rem(int c , int d){
    cout << "Modulous   of " << c << " and " << d << " is " << c%d << endl;
}