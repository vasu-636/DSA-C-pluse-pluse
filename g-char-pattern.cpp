#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 7 ; i++){
        for(int j = 1 ; j <= 6 ; j++){
            // cout << i << j << " ";
            if(i == 1 || j == 1 || i == 7 || (j == 6 && i >= 4) || (i == 4 && j >= 3)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}