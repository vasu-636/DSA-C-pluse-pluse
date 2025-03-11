#include <iostream>
using namespace std;

int main(){

    int row , col , max =0; 
    
    cout  << "Enter number of rows and columns in array :" ;
    cin >> row >> col ;
    int arr[row][col] = {}; 
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << "Enter element at index [ " << i << " ] [ " << j << " ] : " ;
            cin >> arr[i][j] ;
        }
        cout << endl;
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum element in the array is : " << max << endl;
    return 0;
}