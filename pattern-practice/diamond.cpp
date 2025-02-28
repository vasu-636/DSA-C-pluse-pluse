#include <iostream>
using namespace std;

int main(){

    for(int i=1 ; i <= 5 ; i++){

        for(int s=5 ; s > i ; s-- ){
            cout << " ";
        }

        for (int j= 1 ; j <= i ; j++){
            cout << "* ";
        }
       cout << endl; 
    }

    for(int i=1 ; i <= 5 ; i++){
        
        for(int s=1 ; s < i ; s++ ){
            cout << " ";
        }

        for (int j= 5 ; j >= i ; j--){
            cout << "* ";
        }
       cout << endl;
    }

    return 0;
}