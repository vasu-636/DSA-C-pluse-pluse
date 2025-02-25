#include <iostream>
using namespace std;
int main(){
    int n;
    bool flag = true;
    cout << "Enter number :";
    cin >> n;

    for(int i=2 ; i < n ; i++){
        if(n % i == 0){
            flag = false;
            break;
        }
    }
    cout << "Its is a prime number ." << endl;

    return 0;
}