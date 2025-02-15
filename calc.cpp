#include <iostream>
using namespace std;
int main(){
    int n1,n2,add,sub,mul,div;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;
    add = n1 +n2 ;
    sub = n1 - n2 ;
    mul = n1*n2;
    div = n1/n2;
    cout << "Addition of " << n1 << " and " << n2 << " is "<< add << endl;
    cout << "Subtraction of " << n1 << " and " << n2 << " is "<< sub << endl;
    cout << "Multiplication of " << n1 << " and " << n2 << " is "<< mul << endl;
    cout << "Division of " << n1 << " and " << n2 << " is "<< div << endl;
}
