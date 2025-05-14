#include <iostream>
using namespace std;

int i = 1;
int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n ;
    cout << "Factorial : " << fact(n) << endl;
    return 0;
}