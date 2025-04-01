#include <iostream>
#include <cstring>
using namespace std;

class Account{
    private:
        char name[50];
        int accnumber;
        double balance;
    public :
        Account(int accNum ,const char *name , double bal ){ // constructor
            this->accnumber = accNum;
            this->balance = bal;
            strcpy(this->name , name);
        }

        // getter 
        int getAccNumber(){
            return this->accnumber;
        }
        const char* getName(){
            return this->name;
        }
        double getBalance(){
            return this->balance;
        }
        // setter 
        void setBalance(double bal){
            this->balance = bal;
        }

        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << " Deposit successful. New balance: " << balance << endl;
            }
            else{
                cout << "Please Enter a valid deposit amount." << endl;
            }
        }
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << " Withdraw successful. New balance: " << balance << endl;
            }
            else{
                cout << "Please Enter a valid withdraw amount." << endl;
            }
        }
        void displayDetails(){
            cout << "Account Number: " << accnumber << endl;
            cout << "Account Holder Name: " << name << endl;
            cout << "Account Balance: " << balance << endl;
        }
};
Account* createAccount() {
    int accNum;
    char accName[50];
    double accBalance;

    cout << "Enter Account Number: ";
    cin >> accNum;
    cin.ignore();  // Ignore leftover newline character
    cout << "Enter Account Holder Name: ";
    cin.getline(accName, 50);
    cout << "Enter Initial Balance: ";
    cin >> accBalance;

    return new Account(accNum, accName, accBalance);
}

int main(){
    Account* acc = nullptr; // Pointer to store an account object
    int choice;
    double amount;

    while (true) {
        cout << "\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Display Details\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (acc != nullptr) {
                    delete acc;  // Free previous account memory if exists
                }
                acc = createAccount();
                cout << "Account Created Successfully!\n";
                break;
            case 2:
                if (acc != nullptr) {
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    acc->deposit(amount);
                } else {
                    cout << "No account found! Create an account first.\n";
                }
                break;
            case 3:
                if (acc != nullptr) {
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    acc->withdraw(amount);
                } else {
                    cout << "No account found! Create an account first.\n";
                }
                break;
            case 4:
                if (acc != nullptr) {
                    acc->displayDetails();
                } else {
                    cout << "No account found! Create an account first.\n";
                }
                break;
            case 5:
                cout << "Exiting Program. Thank You!\n";
                delete acc;  // Free allocated memory before exiting
                return 0;
            default:
                cout << "Invalid Choice! Try Again.\n";
        }
    }
}
