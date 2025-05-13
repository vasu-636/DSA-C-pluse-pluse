#include <iostream>
#include <vector>
using namespace std;

class Sorting{
    public:
        void selectionSort(vector<int>& arr){
            for(int i = 0; i < arr.size() - 1 ; i++){
                int minIdx = i;
                for(int j = i+1; j < arr.size() ; j++){
                    if(arr[j] < arr[minIdx]){
                        minIdx = j; 
                    }

                    int temp = arr[minIdx];
                    arr[minIdx] = arr[i];
                    arr[i] = temp;
                }
            }
        }
};
int main(){
    Sorting s;
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
    s.selectionSort(arr);
    cout << "\n--------- After Sorting ---------\n" ;
    for(int value : arr){
        cout << value << " ";
    }
    return 0;
}