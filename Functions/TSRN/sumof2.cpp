#include <iostream>

using namespace std;


void takeNum(int num1 , int num2) { 
    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
}

int main() {
    int num1 , num2;

    cout << "Enter two number: ";
    cin >> num1 >> num2; 

    takeNum(num1 , num2);
    return 0;
}