#include <iostream>
using namespace std;

int main(){

    int row,col;
    cout << "Enter the number of rows and columns of the 2d array :";
    cin >> row >> col;

    int arr[row][col] = {};

    for(int i=0 ; i <  row ;i++ ){
        for(int j = 0 ; j < col ; j++){
            cout << "Enter the element at [ " << i <<" ] [ " << j <<  " ] : ";
            cin >> arr[i][j] ; 
        }
        cout << endl;
    }

    for(int i=0 ; i <  row ;i++ ){
        for(int j = 0 ; j < col ; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }

    cout << endl;

    for(int i=0 ; i < row ; i++){
        for(int j=0 ; j < col ; j++){
            if(i == j){
                cout << arr[i][j] << " ";
            }
        }
    }

    for(int i=0 ; i < row ; i++){
        for(int j=0 ; j < col ; j++){
            if(i+j == row-1){
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
