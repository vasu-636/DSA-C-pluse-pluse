#include <iostream>
using namespace std;
int main(){
    int maths,bme,pps,bee,etc,grade;
    cout << "Enter marks of Maths-2 :";
    cin >> maths;
    cout << "Enter marks of BME :";
    cin >> bme;
    cout << "Enter marks of PPS :";
    cin >> pps;
    cout << "Enter marks of BEE :";
    cin >> bee;
    cout << "Enter marks of ETC :";
    cin >> etc;

    grade = (maths + bme + pps + bee + etc)/5 ;
    cout << "Grade is : " << grade << endl;

    if(grade >= 85){
        cout << "Grade A" << endl;
    }
    else if(grade >= 70){
        cout << "Grade B" << endl;
    }
    else if(grade >=55){
        cout <<"Grade C" << endl;
    }
    else if(grade >=40){
        cout << " Grade D" << endl;
    }
    else if(grade >=35){
        cout << "Grade E" << endl;
    }
    else{
        cout << "Fail" <<endl;
    }

    return 0;
}