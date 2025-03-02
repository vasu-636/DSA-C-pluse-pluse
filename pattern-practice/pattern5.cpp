#include <iostream>
using namespace std;

int main() {

    for(char i = 'A' ; i <= 'E' ; i++){
        for(char j = i ; j <= 'E' ; j++){
            if(j == 'C'){
                cout << "* ";
            }
            else {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
