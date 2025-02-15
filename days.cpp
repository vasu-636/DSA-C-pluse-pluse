#include <iostream>
using namespace std;

int main() {
    int dayNumber;
        cout << "Enter any number: ";
        cin >> dayNumber;
        int dayOfWeek = ((dayNumber - 1) % 7 + 7) % 7 + 1;
        if (dayOfWeek == 1) {
            cout << "Monday" << endl;
        } else if (dayOfWeek == 2) {
            cout << "Tuesday" << endl;
        } else if (dayOfWeek == 3) {
            cout << "Wednesday" << endl;
        } else if (dayOfWeek == 4) {
            cout << "Thursday" << endl;
        } else if (dayOfWeek == 5) {
            cout << "Friday" << endl;
        } else if (dayOfWeek == 6) {
            cout << "Saturday" << endl;
        } else if (dayOfWeek == 7) {
            cout << "Sunday" << endl;
        }
    return 0;
}