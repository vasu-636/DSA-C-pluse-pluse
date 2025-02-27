#include <iostream>
using namespace std;
int main(){
    int start,end,sum=0;
    bool flag = true;
    cout << "Enter starting and ending number :";
    cin >> start >> end;

    for(int i=start ; i <= end ; i++){
        for(int j=2 ; j < i ; j++){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            sum += i;
            cout << i << " ";
        }
        flag = true;
    }

    cout << endl;
    cout << "Sum :" << sum << endl;

    return 0;
}