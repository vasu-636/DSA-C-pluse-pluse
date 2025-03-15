#include <iostream>
#include <string>
using namespace std;


void takeName(string name) { 
    cout << "Length of your name is " << name.length() << endl; 
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    takeName(name);
    return 0;
}