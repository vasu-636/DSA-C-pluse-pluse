#include<iostream>
#include<vector>

using namespace std;

class Student {
    private :
    int id;
    string name;
    public:
    Student(int id,string name){
        this->id = id;
        this->name = name;
    }
    void getStudentDetails(){
        cout << "------------------------------"<<endl;
        cout << "Student Id Is : "<<this->id<<endl;
        cout << "Student Name Is : "<<this->name<<endl;
        cout << "------------------------------"<<endl;
    }
    int getId(){
        return this->id;
    }
};

int main(){

    vector<Student>student;
    int choice;

        do
        {
            cout << " 1. Add Student to a list ." <<endl;
            cout << " 2. Display the list of student ." <<endl;
            cout << " 3. Remove student from the list ." <<endl;
            cout << " 4. Add search a Student ." <<endl;
            cout << " 5. Exit ." <<endl;
            cout << "Enter your choice : " ;
            cin >> choice;
            switch (choice)
            {
                case 1 :{
                    int id;
                    string name;

                    cout << "Enter your id : ";
                    cin >> id;

                    cin.ignore();

                    cout << "Enter your name :";
                    getline(cin , name);

                    student.push_back(Student(id,name));
        
                    cout << "------------------------------"<<endl;
                    cout << "Student Added Succesfully"<<endl;
                    cout << "------------------------------"<<endl;
                    break;
                }
                case 2 :{
                    for(auto value : student){
                        value.getStudentDetails();
                    }
                    break;
                    break;
                }
                case 3 :{
                    int id;
                cout << "Enter Id For Delete : ";
                 cin >> id;
                bool isFound=false;
                
            for (auto i = student.begin(); i != student.end(); i++)
            {
                if (i->getId() == id)
                {
                    isFound = true;
                    student.erase(i);
                    cout << "------------------------------"<<endl;
                    cout << "Student Deleted Succesfully..."<<endl;
                    cout << "------------------------------"<<endl;
                    break;
                }  
            }
                 if (isFound == false)
                 {   cout << "------------------------------"<<endl;
                     cout << "Student not found..."<<endl;
                     cout << "------------------------------"<<endl;
                 }
                    break;
                }
                case 4 :{
                    int id;
                    cout << "Enter Id For Search : ";
                    cin >> id;
                    bool isFound=false;
                    for (auto i = student.begin(); i != student.end(); i++)
                    {
                        if (i->getId() == id)
                        {
                            isFound = true;
                            i->getStudentDetails();
                            break;
                        }
                       
                    }
                    if (isFound == false)
                    {   cout << "------------------------------"<<endl;
                        cout << "Student not found..."<<endl;
                        cout << "------------------------------"<<endl;
                    }
                    break;
                }
                case 5 :{
                    cout << "------------------------------"<<endl;
                    cout << "Thank you visit again " << endl;
                    cout << "------------------------------"<<endl;
                    break;
                }
               
            }
        } while (choice != 5);
    return 0;
}
