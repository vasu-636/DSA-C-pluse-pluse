// #include <iostream>
// using namespace std;

// int main(){

//     for( int i = 1 ; i <= 5 ; i++){
//         for(int j = 1 ; j <= i ; j++){
//             cout << j << " ";
//         }
//         for( int s = 5 ; s > i ; s--){
//             cout <<" ";
//         }
//         for( int s = 5 ; s > i ; s--){
//             cout <<"   ";
//         }
//         for(int j = 1 ; j >= 1 ; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
    

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
   

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int s = 2 * (5 - i); s > 0; s--) {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}
