#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }

    int getRollNo() const {
        return rollNo;
    }
};

class StudentManagementSystem {
    vector<Student> students;

public:
    void addStudent() {
        Student s;
        s.input();
        students.push_back(s);
        cout << "Student added successfully.\n";
    }

    void displayAll() {
        if (students.empty()) {
            cout << "No student records found.\n";
            return;
        }
        for (const auto& s : students) {
            s.display();
        }
    }

    void searchStudent(int rollNo) {
        bool found = false;
        for (const auto& s : students) {
            if (s.getRollNo() == rollNo) {
                s.display();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student with Roll No " << rollNo << " not found.\n";
        }
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;
    
    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sms.addStudent();
                break;
            case 2:
                sms.displayAll();
                break;
            case 3: {
                int roll;
                cout << "Enter Roll No to search: ";
                cin >> roll;
                sms.searchStudent(roll);
                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
