
#include <iostream>
using namespace std;

class BankAccount {
    protected:
        int accountNumber, balance = 0;
        string accountHolderName;
    public:
        void createAccount(int acnumber, string name , int balance) {
            this->accountNumber = acnumber;
            this->balance = balance;
            this->accountHolderName = name;
            cout << "\nAccount Created Successfully!";
        }

        void displayAccountInfo() {
            cout << "\n---------Account Details-----------" << endl;
            cout << "\nAccount Number : " << this->accountNumber;
            cout << "\nAccount Holder Name : " << this->accountHolderName;
            cout << "\nAccount Balance : " << this->balance;
            cout << "\n-----------------------------------" << endl;
        }   

        int getAccNumber() {
            return this->accountNumber;
        }


    void deposit(int amount) {
        this->balance += amount;
        cout << "Amount Added Successfully!";
        cout << "Current Balance after deposite : " << this->balance;
    }


    void withdraw(int amount) {
        if (this->balance >= amount) {
            this->balance -= amount;
            cout << "Amount Withdrawn Successfully!";
            cout << " Current balance is: " << this->balance;
        } else {
            cout << "You have insufficient Balance!";
        }
    }
};


class SavingAccount : public BankAccount {
public:
    void calculateInterest(double interestRate) {
        this->balance += (this->balance / 100) * interestRate;
        cout << "Interest Added Successfully!";
    }
};


int main() {
    SavingAccount account[10];
    string name;
    int accountNumber, count = 0;
    int choice , balance;


    do {
        cout << "\n----------Welcome to SBI Bank ---------";
        cout << "\n1. Create Account";
        cout << "\n2. View Account Details";
        cout << "\n3. Deposit";
        cout << "\n4. Withdraw";
        cout << "\n5. Calculate Interest";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;


        switch (choice) {
        case 1: {
            bool exists = false;
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            cin.ignore();


            for (int i = 0; i < count; i++) {
                if (account[i].getAccNumber() == accountNumber) {
                    exists = true;
                    break;
                }
            }


            if (!exists) {
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter first deposite  : ";
                cin >> balance;
                account[count].createAccount(accountNumber, name , balance);
                count++;
            } else {
                cout << "Account already exists!";
            }
            break;
        }
        case 2: {
            int acnumber;
            bool found = false;
            cout << "Enter Account Number: ";
            cin >> acnumber;


            for (int i = 0; i < count; i++) {
                if (account[i].getAccNumber() == acnumber) {
                    found = true;
                    account[i].displayAccountInfo();
                    break;
                }
            }


            if (!found) {
                cout << "Please Enter Valid Account Number!";
            }
            break;
        }
        case 3: {
            int acnumber, amount;
            bool found = false;
            cout << "Enter Account Number: ";
            cin >> acnumber;


            for (int i = 0; i < count; i++) {
                if (account[i].getAccNumber() == acnumber) {
                    found = true;
                    cout << "Enter Amount: ";
                    cin >> amount;
                    account[i].deposit(amount);
                    break;
                }
            }


            if (!found) {
                cout << "Please Enter Valid Account Number!";
            }
            break;
        }
        case 4: {
            int acnumber, amount;
            bool found = false;
            cout << "Enter Account Number: ";
            cin >> acnumber;


            for (int i = 0; i < count; i++) {
                if (account[i].getAccNumber() == acnumber) {
                    found = true;
                    cout << "Enter Amount: ";
                    cin >> amount;
                    account[i].withdraw(amount);
                    break;
                }
            }


            if (!found) {
                cout << "Please Enter Valid Account Number!";
            }
            break;
        }
        case 5: {
            int acnumber;
            double interestRate;
            bool found = false;
            cout << "Enter Account Number: ";
            cin >> acnumber;
            cout << "Enter Interest Rate (%): ";
            cin >> interestRate;


            for (int i = 0; i < count; i++) {
                if (account[i].getAccNumber() == acnumber) {
                    found = true;
                    account[i].calculateInterest(interestRate);
                    break;
                }
            }


            if (!found) {
                cout << "Please Enter Valid Account Number!";
            }
            break;
        }
        case 6:
            cout << "Thank you for banking with us!";
            break;


        default:
            cout << "Invalid choice!";
        }


    } while (choice != 6);


    return 0;
}



