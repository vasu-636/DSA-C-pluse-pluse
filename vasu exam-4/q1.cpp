#include <iostream>

using namespace std;

int main(){

int arr[5] = {};

for(int i = 0; i < 5 ;i++){
    cout << "Enter value for [" << i <<"] index : " ;
    cin >> arr[i];
}
cout << endl;
cout << "Negative Elements are : ";
for(int i = 0 ; i < 5 ; i++){
    if(arr[i] < 0){
        cout << arr[i] << " " ; 
    }
}
    return 0;
}