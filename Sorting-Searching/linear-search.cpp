#include<iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n ;
    vector<int> arr(n);

    for(int i = 0 ; i < arr.size() ; i++){
        cout <<"Enter element : ";
        cin >> arr[i];
    }

    for(int value : arr){
        cout << value << " ";
    }
    cout << endl;
    int key;
    cout << "Enter the element to search : ";
    cin >> key;

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == key){
            cout << "Element found at index : " << i << endl;
            return 0 ;
        }
    }

    cout << "Element not found." << endl;
    return 0;
}