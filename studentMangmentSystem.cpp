#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    Student(int id, string name, float marks) {
        this->id = id;
        this->name = name;
        this->marks = marks;
    }
};

vector<Student> students;

// Function to add a student
void addStudent() {
    int id;
    string name;
    float marks;
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Marks: ";
    cin >> marks;

    students.push_back(Student(id, name, marks));
    cout << "Student added successfully!\n";
}

// Function to display all students
void displayStudents() {
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }
    cout << "\nStudent List:\n";
    for (const auto &s : students) {
        cout << "ID: " << s.id << ", Name: " << s.name << ", Marks: " << s.marks << "\n";
    }
}

// Function to search for a student
void searchStudent() {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for (const auto &s : students) {
        if (s.id == id) {
            cout << "Student Found! ID: " << s.id << ", Name: " << s.name << ", Marks: " << s.marks << "\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

// Function to delete a student
void deleteStudent() {
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

// Function to update a student
void updateStudent() {
    int id;
    cout << "Enter Student ID to update: ";
    cin >> id;

    for (auto &s : students) {
        if (s.id == id) {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, s.name);
            cout << "Enter new marks: ";
            cin >> s.marks;
            cout << "Student updated successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

// Main function
int main() {
    int choice;
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Update Student\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: updateStudent(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
