

#include <iostream>
#include <vector>
using namespace std;

class Sort {
public:
    void showArray(vector<int> arr) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    void selectionSort(vector<int>& arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            int minPos = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minPos]) {
                    minPos = j;
                }
            }
            if (minPos != i) {
                int temp = arr[i];
                arr[i] = arr[minPos];
                arr[minPos] = temp;
            }
        }
        cout << "After Selection Sort : ";
        showArray(arr);
    }


    void mergeParts(vector<int>& arr, int start, int mid, int end) {
        vector<int> merged;
        int i = start, j = mid + 1;
        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                merged.push_back(arr[i++]);
            } else {
                merged.push_back(arr[j++]);
            }
        }
        while (i <= mid){
             merged.push_back(arr[i++]);
        }
        while (j <= end){
             merged.push_back(arr[j++]);
        }
        for (int k = 0; k < merged.size(); k++) {
            arr[start + k] = merged[k];
        }
    }


    void mergeSort(vector<int>& arr, int start, int end) {
        if (start >= end) return;


        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        mergeParts(arr, start, mid, end);
    }


    int binarySearch(vector<int> arr, int start, int end, int key) {
        if (start > end) {
            return -1;
        }
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (key < arr[mid]) {
            return binarySearch(arr, start, mid - 1, key);
        }
        else {
            return binarySearch(arr, mid + 1, end, key);
        }
    }

    int linearSearch(vector<int> arr, int n, int key) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) return i;
        }
        return -1;
    }
};

int main() {
    Sort s1;
    int size, choice;

    cout << "Enter array size: ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter the value : ";
        cin >> arr[i];
    }
    vector<int> orgarr(size);
    for (int i = 0; i < size; i++) {
        orgarr[i] = arr[i];
    }
    do {
        cout << "\n--------- MENU ---------\n";
        cout << "1. Selection Sort." << endl;
        cout << "2. Merge Sort." << endl;
        cout << "3. Binary Search." << endl;
        cout << "4. Linear Search." << endl;
        cout << "5. Exit." << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Original Array: ";
            s1.showArray(orgarr);
            s1.selectionSort(arr, size);
            break;

        case 2:
            cout << "Original Array: ";
            s1.showArray(orgarr);
            s1.mergeSort(arr, 0, size - 1);
            cout << "After Merge Sort: ";
            s1.showArray(arr);
            break;

        case 3: {
            s1.selectionSort(arr, size);
            int key;
            cout << "Enter number to search: ";
            cin >> key;
            int result = s1.binarySearch(arr, 0, size - 1, key);
            if (result != -1){
                cout << "Found at index: " << result << endl;
            }
            else{
                cout << "Not found in the list." << endl;
            }
            break;
        }

        case 4: {
            int key;
            cout << "Enter number to search: ";
            cin >> key;
            int pos = s1.linearSearch(arr, size, key);
            if (pos != -1){
                cout << "Found at index: " << pos << endl;
            }
            else{
                cout << "Number not found." << endl;
            }
            break;
        }

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
