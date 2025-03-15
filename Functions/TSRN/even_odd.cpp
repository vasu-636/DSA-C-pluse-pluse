#include <iostream>

using namespace std;


void takeNum(int num) { 
    if( num % 2 == 0) {
        cout << num << " is even . " << endl;
    }
    else{
        cout << num << " is odd . " << endl;
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    takeNum(num);
    return 0;
}