#include <iostream>
#include <string>
using namespace std;


void takeName(string name) { 
    cout << "Hello, " << name  << endl;
}

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name); 
    takeName(name);
    return 0;
}