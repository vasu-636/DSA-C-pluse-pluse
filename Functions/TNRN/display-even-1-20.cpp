#include <iostream>
using namespace std;


void onetotwenty(){

    for(int i = 1 ; i <= 20 ; i++ ){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
}


int main(){

    onetotwenty();

    return 0;
}