#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout << "Enter the array row size : ";
    cin >> row;
    cout << "Enter the array col size : ";
    cin >> col;

    int arr[row][col];

    for(int i = 0 ; i < row ;i++){
        for(int j = 0 ; j < col ; j++){
            cout << "Enter value at [" << i << "] [" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    int max = 0;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j]  >max){
                max = arr[i][j];
            }
        }
    }

    cout << "The Largest element is  : " << max ;

    return 0;
}