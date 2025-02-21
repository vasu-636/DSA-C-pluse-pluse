#include <iostream>
using namespace std;
int main(){

    int num1,num2,sum,diff,mul,div;
    char sign;
    sign:
    cout << "Enter two number :";
    cin >> num1 >> num2;
    cout << " Select Sign (*,-,/,+) : ";
    cin >> sign ;

    switch (sign){
        case '+' : 
             sum = num1 + num2 ;
            cout << "Sum of two number is " << sum  << endl;
            goto sign;
        break;
        case '-':
             diff = num1 - num2 ;
            cout << "Difference of two number is " << diff << endl;
            goto sign;
        break;
        case '*':
             mul = num1 * num2;
            cout << "Multiplication of two number is " << mul << endl;
            goto sign;
        break;
        case '/' :
             div = num1 / num2 ;
            cout << "Division of two number is "<< div << endl;
            goto sign;
        break;
    }
    return 0;
}