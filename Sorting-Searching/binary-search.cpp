#include <iostream>
#include <vector>

using namespace std;
int binarySearch(vector<int>,int,int,int);
void sort(vector<int>&);
int main(){
    int size, key,searchIdx;
    cout << "Enter size of array : ";
    cin >> size; 
    vector<int> arr(size, 0);
    
    for(int i = 0; i < size ; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }
    sort(arr);
    cout <<"\n------------------\n";
    for(int value :  arr){
        cout << value << " " ; 
    }
    cout <<"\n------------------\n\n";
    cout << "Enter key you want to search  : " ;
    cin >> key;

    searchIdx = binarySearch(arr , 0 , arr.size() , key);

    if(searchIdx == -1){
        cout << "Element not Found......" << endl;
    }else{
        cout << "Element fount at : " << searchIdx ; 
    }

    
    return 0;
}

int binarySearch(vector<int> arr , int start , int end , int key){

    if(start > end){
        return -1;
    }
    int mid = (start + end)/ 2 ;
    if(key == arr[mid]){
        return mid;
    }
    else if(key < arr[mid]){
        return binarySearch(arr , start , mid , key);
    }
    else if(key > arr[mid]){
        return binarySearch(arr,mid +1 ,end , key);
    }
    
}

void sort(vector<int>& arr){
     for(int i = 0 ; i < arr.size() - 1 ; i++){
        for(int j = 0 ; j < arr.size() - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }   
    }
}