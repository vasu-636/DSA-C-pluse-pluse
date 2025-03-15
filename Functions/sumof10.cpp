#include <iostream>
using namespace std;

void sumof10(){
    int sum = 0 ; 
    for(int i = 1 ; i <= 10 ; i++ ){
        sum += i;
    }

    cout << "Sum of 1 to 10 is " << sum << endl;
}

int main(){

    sumof10();

    return 0;
}