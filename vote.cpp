#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age :";
    cin >> age;
    if (age >= 18){
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not elegible to vote because you are under 18." << endl;
    }

    return 0;
}