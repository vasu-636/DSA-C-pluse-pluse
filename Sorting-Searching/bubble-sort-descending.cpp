#include <iostream>
#include <vector>

using namespace std;

int main() {
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

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "\n--------- After Sorting (Descending) ---------\n";
    for (int value : arr) {
        cout << value << " ";
    }

    return 0;
}
