#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main(){
    int n;
    cout << "Enter the number of elements you want to enter in array : ";
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n ; i++){
        cout << "Enter the element  : ";
        cin >> arr[i];
    }

    cout << "\n--------- Before Sorting ---------\n" ;

    for(int value : arr){
        cout << value << " ";
    }
    
    insertionSort(arr);

    cout << "\n--------- After Sorting ---------\n" ;
    for(int value : arr){
        cout << value << " ";
    }

    return 0;
}