#include <iostream>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to count the number of leap years in the range
int countLeapYears(int start, int end) {
    int count = 0;
    for (int year = start; year <= end; year++) {
        if (isLeapYear(year)) {
            count++;
        }
    }
    return count;
}

int main() {
    int start, end;
    
    // Taking input for range
    cout << "Enter start year: ";
    cin >> start;
    cout << "Enter end year: ";
    cin >> end;
    
    // Count number of leap years
    int leapCount = countLeapYears(start, end);
    
    // Declare array to store leap years
    int leapYears[leapCount];  
    int index = 0;

    // Store leap years in the array
    for (int year = start; year <= end; year++) {
        if (isLeapYear(year)) {
            leapYears[index++] = year;
        }
    }

    // Display leap years
    cout << "Leap years from " << start << " to " << end << " are:\n";
    for (int i = 0; i < leapCount; i++) {
        cout << leapYears[i] << " ";
    }
    
    return 0;
}
