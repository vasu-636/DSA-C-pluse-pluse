// #include <iostream>
// using namespace std;

// int main(){
//    int choice , n;
//    int arr[n] = {};
//    do{
//     cout << "Enter 1 to insert" << endl;
//     cout << "Enter 2 to review" << endl;
//     cout << "Enter 3 to update" << endl;
//     cout << "Enter 4 to delete" << endl;
//     cout << "Enter 5 to exit" << endl;
//     cin >> choice ;
//      switch (choice) {
     
//          case 1:
//              cout << "Enter the size of the array :";
//              cin >> n;
 
//              for(int i = 0 ; i <n ; i++){
//                  cout << "Enter the element of the array :";
//                  cin >> arr[i];
//              }
 
//          break;
//          case 2:
//              cout << "The elements of the array are :";
//              for(int i = 0 ; i <n ; i++){
//                  cout << arr[i] << " ";
//              }
//          break;
//          case 3:
//              int  position ;
//              cout << "Enter the position of the element you want to update :";
//              cin >> position ; 
//              cout << "Enter the value you want to update :";
//              cin >> arr[position - 1];
//          break;
//          case 4 :
//              int pos ; 
//              cout << "Enter the position of the element you want to delete :";
//              cin >> pos ;
//              arr[pos - 1] = 0 ;
//          break;
 
//          case 5:
//              cout << "Thanks for visiting us.." << endl;
//              break;
//          }
//    }
//    while(choice != 5);
   
    
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int choice, n = 0; // Initialize n to avoid garbage value
    const int MAX_SIZE = 100; // Define a maximum array size
    int arr[MAX_SIZE]; // Use a fixed-size array

    do {
        cout << "\nEnter 1 to insert" << endl;
        cout << "Enter 2 to review" << endl;
        cout << "Enter 3 to update" << endl;
        cout << "Enter 4 to delete" << endl;
        cout << "Enter 5 to exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
                cin >> n;

                if (n > MAX_SIZE || n <= 0) {
                    cout << "Invalid size! Please enter a number between 1 and " << MAX_SIZE << "." << endl;
                    n = 0; // Reset n to prevent errors
                } else {
                    for (int i = 0; i < n; i++) {
                        cout << "Enter element " << i + 1 << ": ";
                        cin >> arr[i];
                    }
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "Array is empty! Please insert elements first." << endl;
                } else {
                    cout << "The elements of the array are: ";
                    for (int i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "Array is empty! Cannot update." << endl;
                } else {
                    int position, value;
                    cout << "Enter the position (1 to " << n << ") of the element you want to update: ";
                    cin >> position;

                    if (position < 1 || position > n) {
                        cout << "Invalid position!" << endl;
                    } else {
                        cout << "Enter the new value: ";
                        cin >> value;
                        arr[position - 1] = value;
                    }
                }
                break;

            case 4:
                if (n == 0) {
                    cout << "Array is empty! Cannot delete." << endl;
                } else {
                    int pos;
                    cout << "Enter the position (1 to " << n << ") of the element you want to delete: ";
                    cin >> pos;

                    if (pos < 1 || pos > n) {
                        cout << "Invalid position!" << endl;
                    } else {
                        // Shift elements left to remove the selected element
                        for (int i = pos - 1; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--; // Decrease array size
                        cout << "Element deleted successfully." << endl;
                    }
                }
                break;

            case 5:
                cout << "Thanks for visiting us.." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
