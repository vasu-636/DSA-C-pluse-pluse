#include <iostream>
using namespace std;
int main(){

    for (int i = 1; i <= 5; i++) {  // Loop for rows
        for (int j = 5; j >= i; j--) {  // Loop for printing numbers
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}