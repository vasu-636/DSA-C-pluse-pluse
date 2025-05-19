#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& arr) {
    cout << "\n------------------\n";
    for (int val : arr)
        cout << val << " ";
    cout << "\n------------------\n";
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    while (low < high) {
        int p = partition(arr, low, high);

        // Tail call optimization: sort the smaller part first
        if (p - low < high - p) {
            quickSort(arr, low, p - 1);
            low = p + 1;
        } else {
            quickSort(arr, p + 1, high);
            high = p - 1;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    display(arr);
    quickSort(arr, 0, size - 1);
    display(arr);

    return 0;
}
