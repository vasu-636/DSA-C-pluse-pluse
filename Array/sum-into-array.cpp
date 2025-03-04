#include <iostream>
using namespace std;

int main(){

    int n ; 
    cout << "Enter the size of array :";
    cin >> n;

    int arr1[n] , arr2[n] , arr3[n];

    cout << "Enter the elements for array 1..." << endl;

    for(int i = 0 ; i < n ;i++){
        cout << "Enter the element of array 1 :";
        cin >> arr1[i];
    }

    cout << "Enter the elements for array 2 ...." << endl;

    for(int i = 0 ; i < n ;i++){
        cout << "Enter the element of array 1 :";
        cin >> arr2[i];
    }

    for(int i = 0 ; i < n ;i++){
        
        arr3[i] = arr1[i] + arr2[i] ; 
    }
    cout << endl << "Elements of array 3 are : ";
    for( int i = 0 ; i < n ;i++){
        cout << arr3[i] << " "; 
    }

    return 0;
}