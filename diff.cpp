// write a code to subtract two numbers

#include <iostream>
using namespace std;
int main(){
    int a,b,diff;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    diff = a - b ; 
    cout << "Subtraction of " << a << " and " << b << " is " << diff << endl;
    return 0;
}