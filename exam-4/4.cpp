#include <iostream>
using namespace std;

int main(){

    int row , col;
    cout << "Enter number of rows and columns in array : ";
    cin >> row >> col;
    int arr[row][col] = {};
    
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << "Enter element at index [ " << i << " ] [ " << j << " ] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    int rowchoice , colcchoice;
    cout << "Enter row number to sum (1-based index): ";
    cin >> rowchoice;

    
    if(rowchoice < 1 || rowchoice > row){
        cout << "Invalid row choice!" << endl;
        return 0;
    }

    int sum = 0; 

   
    cout << "Elements in row " << rowchoice << " : ";
    for(int j = 0; j < col; j++){
        cout << arr[rowchoice - 1][j] << " ";
        sum += arr[rowchoice - 1][j];
    }
    cout << endl;

    cout << "Sum of elements in row " << rowchoice << " : " << sum << endl;

    cout << "Enter column number to sum (1-based index): ";
    cin >> colcchoice;

    if(colcchoice < 1 || colcchoice > col){
        cout << "Invalid column choice!" << endl;
        return 0;
    }

    sum = 0;

    cout << "Elements in column " << colcchoice << " : ";
    for(int i = 0; i < row; i++){
        cout << arr[i][colcchoice - 1] << " ";
        sum += arr[i][colcchoice - 1];
    }
    cout << endl;
    cout << "Sum of elements in column " << colcchoice << " : " << sum << endl;
    
    
    return 0;
}
