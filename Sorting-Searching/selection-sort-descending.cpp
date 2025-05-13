#include <iostream>
#include <vector>
using namespace std;

class Sorting {
public:
    void selectionSort(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            int maxIdx = i;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] > arr[maxIdx]) { // Changed < to > for descending
                    maxIdx = j;
                }
            }
            // Swap outside the inner loop
            int temp = arr[maxIdx];
            arr[maxIdx] = arr[i];
            arr[i] = temp;
        }
    }
};

int main() {
    Sorting s;
    int n;
    cout << "Enter the number of elements you want to enter in array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the element: ";
        cin >> arr[i];
    }

    cout << "\n--------- Before Sorting ---------\n";
    for (int value : arr) {
        cout << value << " ";
    }

    s.selectionSort(arr);

    cout << "\n--------- After Sorting (Descending) ---------\n";
    for (int value : arr) {
        cout << value << " ";
    }

    return 0;
}
