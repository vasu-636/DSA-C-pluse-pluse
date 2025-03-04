#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter the number of elements : " ;
    cin >> n;
    int arr[n];

    for( int i = 0 ; i < n ; i++){
        cout  << "Enter values for array : ";
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    cout << "Average of all element of array is " << sum/n << endl;

    return 0;
}