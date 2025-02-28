#include <iostream>
using namespace std;

int main() {
    int rows = 5, coef = 1;
    
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++)
            cout << "  ";
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1; // First and last element in a row is always 1
            else
                coef = coef * (i - j + 1) / j; // Calculate next coefficient
            cout << coef << "   ";
        }
        cout << endl;
    }
    return 0;
}
