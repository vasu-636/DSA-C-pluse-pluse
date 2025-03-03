#include <iostream>
using namespace std;;
int main(){

    int a[5] = {};

    for(int i = 0 ; i <= 4 ; i++){
        cout << "Enter value of array A :";
        cin >> a[i];
    }

    for(int i = 0 ; i <= 4 ; i++){
        cout << "Value of array A is : " << a[i] << endl;
    }

    return 0;
}