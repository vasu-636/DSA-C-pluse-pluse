#include <iostream>
using namespace std;
int main(){
    int base,height;
    float area;
    cout << "Enter base of triangle : ";
    cin >> base;
    cout << "Enter height of triangle : ";
    cin >> height;
    area = 0.5 * base *height ;
    cout << "Area of triangle : " << area << endl;
    return 0;
}