#include <iostream>
using namespace std;
int main(){

int n;
cout << "Enter the size of the 2d array :";
cin >> n ;
int arr[n][n];

for(int i=0 ; i < n ; i++){
    for(int j=0 ; j < n ; j++){
        cout << "Enter the element of the position [" << i << "] [" << j << " ] : ";
        cin >> arr[i][j] ;
    }
    cout << endl;
}

for(int i=0 ; i < n ; i++){
    for(int j=0 ; j < n ; j++){
        cout << arr[i][j] << " " ;
    }
    cout << endl;
}

return 0;
}