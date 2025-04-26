#include <iostream>
#include <stack>
using namespace std;

bool palindromeornot(string str){
    stack<char> palStack;

    for(char c : str){
       palStack.push(c); 
    }

    for(char c : str){
        if(palStack.top() != c){
            return false;
        }
        palStack.pop();
    }

    return true;
}

int main(){
    string str;

    cout << "Enter your string : ";
    getline(cin , str);

    if(palindromeornot(str) == true){
        cout << "String is a palindrome.";
    }
    else{
        cout << "String is not a  palindrome.";
    }
    return 0;
}