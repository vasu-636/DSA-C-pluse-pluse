#include <iostream>
using namespace std;

int main(){

    int arr[5] = {};

    for(int i = 0 ; i <5 ; i++){
        cout << "Enter value at index [ " << i << " ] :";
        cin >> arr[i];
    }

    cout << "Negative numbers are : ";

    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] < 0 ){
            cout << arr[i] << " ";
        }
    }
    return 0;
}