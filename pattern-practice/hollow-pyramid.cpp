#include <iostream>
using namespace std;

int main(){

    for(int i = 1 ; i <= 4 ; i++){
        for(int j = 1 ; j <= 7 ; j++){
            // cout << i << j << " ";
            if( i + j == 5 || ( i == 2 && j == 5) || ( i == 3 &&  j == 6) || i == 4){
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