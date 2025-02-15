#include <iostream>
using namespace std;

int main() {
    char day;
    cout << "Enter initial word of day of the week: ";
    cin >> day;

    switch (day) {
        case 'M':
            cout << "Monday" << endl;
            break;
        case 'T':
            cout << "Tuesday" << endl;
            break;
        case 'W':
            cout << "Wednesday" << endl;
            break;
        case 't':
            cout << "Thursday" << endl;
            break;
        case 'F':
            cout << "Friday" << endl;
            break;
        case 'S':
            cout << "Saturday" << endl;
            break;
        case 's':
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }
    return 0;
}
