#include <iostream>
using namespace std;
int main(){
    int marks;
    char grade;
     cout << "Enter your marks :";
     cin >> marks;

     if(marks > 100){
        cout << "Invalid marks ...";
        return 0;
     }
     if((marks < 100) && (marks >= 85)){
        cout << "Your grade is A.";
        grade = 'A';
     }
     else if ((marks < 85) && (marks >= 70)){
        cout << "Your grade is B.";
        grade = 'B';
     }
     else if ((marks < 70) && (marks >= 55)){
        cout << "Your grade is C.";
        grade = 'C';
     }
     else if ((marks < 55) && (marks <= 40)){
        cout << "Your grade is D.";
        grade = 'D';
     }
     else if (40 > marks){
        cout << "You're are FAIL . ";
        grade = 'F';
     }

     switch(grade){
        case 'A':
            cout << "Excellent Work !";
        break;
        case 'B':
            cout << "Well Done !";
        break;
        case 'C':
            cout << "Good Job !";
        break;
        case 'D':
            cout << "You need some more effort !";
        break;
        case 'F':
            cout << "Sorry you are fail !";
        break;
     }

     if ((marks <= 100) && (marks >= 40)){
        cout << "You are eligible for next level.";
     }
     else{
        cout << "You are not eligible for next level.";
     }
    return 0;
}