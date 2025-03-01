#include <iostream>
using namespace std;

int main() {

    for(char i = 'A' ; i <= 'E' ; i++){
        for(char j = i ; j <= 'E' ; j++){
            if(j == 'C'){
                cout << "* ";
            }
            else if(j == 'A' || j == 'B' || j == 'D' || j == 'E'){
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
