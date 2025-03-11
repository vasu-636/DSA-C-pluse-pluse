#include <iostream>
using namespace std;

int main() {
    int row, col, temp;
    cout << "Enter number of rows and column in array : ";
    cin >> row >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element at index [ " << i << " ] [ " << j << " ] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }


    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) { 
            temp = arr[i][j];  
            arr[i][j] = arr[j][i];  
            arr[j][i] = temp;  
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
