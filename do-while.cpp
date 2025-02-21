#include <iostream>
using namespace std;

int main(){

    int i=1,n,sum = 0;

    cout << "Enter a number : ";
    cin >> n;
    do{
        sum = sum + i;
        cout << "Enter a number " << i << endl;
        i++;
    }
    while(i <= n);
    cout << "Sum of " << n <<" number is " << sum << endl;
    return 0;
}