#include <iostream>
#include <string>
using namespace std;

class Bank {
protected:
    int accnumber;
    int balance = 0;
    string name;
    string password;

public:
    void create_account(int accnum, string nameInput, string passInput) {
        accnumber = accnum;
        name = nameInput;
        password = passInput;
        cout << "Account created successfully!\n";
    }

    bool verify_password(string passInput) {
        return password == passInput;
    }

    int getAccNumber() {
        return accnumber;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! Current balance: " << balance << endl;
        } else {
            cout << " Invalid deposit amount!" << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! Current balance: ₹" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void account_details() {
        cout << "Account Number: " << accnumber << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

class Account : public Bank {
    // Inherits everything from Bank
};

int main() {
    Account acc[10]; // array of Account objects
    int accCount = 0;
    int choice;

    do {
        cout << "\n=== Welcome to the Banking System ===\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (accCount >= 10) {
                cout << "Cannot create more than 10 accounts.\n";
                continue;
            }
            int accnum;
            string name;
            string pass;

            cout << "Enter Account Number: ";
            cin >> accnum;
            cout << "Enter Account Holder Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Set Password: ";
            getline(cin, pass);

            acc[accCount].create_account(accnum, name, pass);
            accCount++;
        }

        else if (choice >= 2 && choice <= 4) {
            int accnum;
            string pass;
            cout << "Enter Account Number: ";
            cin >> accnum;
            cout << "Enter Password: ";
            cin.ignore();
            getline(cin, pass);

            bool found = false;
            for (int i = 0; i < accCount; i++) {
                if (acc[i].getAccNumber() == accnum && acc[i].verify_password(pass)) {
                    found = true;
                    if (choice == 2) {
                        int amt;
                        cout << "Enter amount to deposit: ";
                        cin >> amt;
                        acc[i].deposit(amt);
                    } else if (choice == 3) {
                        int amt;
                        cout << "Enter amount to withdraw: ";
                        cin >> amt;
                        acc[i].withdraw(amt);
                    } else if (choice == 4) {
                        acc[i].account_details();
                    }
                    break;
                }
            }

            if (!found) {
                cout << "Incorrect account number or password.\n";
            }
        }

        else if (choice == 5) {
            cout << "Exiting the Banking System. Thank you!\n";
        }

        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
