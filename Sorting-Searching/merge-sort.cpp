#include<iostream>
#include<vector>

using namespace std;

class Sort {
    public:
        void mergeSort(vector<int>& arr, int low, int high){
            if(low >= high){
                return;
            }

            int mid = (low + high) / 2;

            mergeSort(arr, low, mid); // dividing first half
            mergeSort(arr, mid + 1, high); // dividing second half
            this->merge(arr, low, mid, high); // merge the sorted array
        }

        void merge(vector<int>& arr, int low, int mid, int high){
            vector<int> temp;
            int left = low;
            int right = mid + 1;

            // with two pointers merged array into temp array
            while(left <= mid && right <= high){
                if(arr[left] <= arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                } else {
                    temp.push_back(arr[right]);
                    right++;
                }
            }

            // adding remaining elements of left array in temp
            while(left <= mid){
                temp.push_back(arr[left]);
                left++;
            }

            // adding remaining elements of right array in temp
            while(right <= high){
                temp.push_back(arr[right]);
                right++;
            }

            for(int i = low; i <= high; i++){
                arr[i] = temp[i - low];
            }
        }
};

int main(){
    Sort s1;
    vector<int> arr(7);

    for(int i = 0; i < arr.size(); i++){
        cout << "Enter any value : ";
        cin >> arr[i];
    }

    cout << "\n------------- Before --------------\n";
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    
    s1.mergeSort(arr, 0, arr.size() - 1);

    cout << "\n------------- After --------------\n";
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}