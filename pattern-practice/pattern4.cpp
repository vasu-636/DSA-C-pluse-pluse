#include<iostream>
using namespace std;
int main(){

   for(int i = 5 ; i >= 1 ; i--){
    for(int s = 1 ; s <= i-1 ; s++){
        cout << "  ";
    }
    for(int j = i ; j <= 5 ; j++){
        cout << j << " ";
    }
    for(int j = i ; j <= 4 ; j++){
        cout << j << " ";
    }
    
    cout << endl; 
   }

    return 0;
}