#include <iostream>

using namespace std;


void takeNum(int num) { 
   for( int i = 1; i <= 10; i++){
         cout << num << " x " << i << " = " << num * i << endl;
   }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    takeNum(num);
    return 0;
}