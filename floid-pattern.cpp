#include <iostream>
using namespace std;
int main(){
    int k =1, n ;
    cout << "Enter the number of rows: ";
    cin >> n ;


    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << k++ << " ";
        }
        cout << endl;
    }

    return 0;
}