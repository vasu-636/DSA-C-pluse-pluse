#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accnumber;
    string name;
    int balance = 0;

public:
    void create_account(int accnum, string nameInput) {
        this->accnumber = accnum;
        this->name = nameInput;
        cout << "Account created successfully!\n";
    }

    int getAccNumber() {
        return this->accnumber;
    }

    void deposit(int amount) {
        if (amount > 0) {
            this->balance += amount;
            cout << "Deposit successful! Current balance: " << this->balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= this->balance) {
            this->balance -= amount;
            cout << "Withdrawal successful! Current balance: " << this->balance << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    virtual void account_details() {
        cout << "Account Number: " << this->accnumber << endl;
        cout << "Account Holder Name: " << this->name << endl;
        cout << "Current Balance: " << this->balance << endl;
    }
};

class SavingAccount : public BankAccount {
    // Can extend with interest later
};

class FixedDepositeAccount : public BankAccount {
protected:
    double fdbalance = 0;
    double principal = 0;
    double years = 0;

public:
    void calcInterest(double amt, double year) {
        this->principal = amt;
        this->years = year;

        double interest = (this->principal * 8 * this->years) / 100;
        this->fdbalance = this->principal + interest;

        cout << "FD Interest: " << interest << endl;
        cout << "Total FD Amount (with interest): " << this->fdbalance << endl;
    }

    void account_details() override {
        cout << "FD Balance (including interest if calculated): " << this->fdbalance << endl;
    }
};

int main() {
    const int MAX = 10;
    SavingAccount savingAcc[MAX];
    FixedDepositeAccount fdAcc[MAX];
    int accountCount = 0;
    int choice;

    do {
        cout << "\n=== Welcome to the Banking System ===\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit (Saving Account)\n";
        cout << "3. Withdraw (Saving Account)\n";
        cout << "4. Show Account Details\n";
        cout << "5. Calculate Fixed Deposit Interest\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            if (accountCount >= MAX) {
                cout << "Account limit reached!\n";
                break;
            }

            int accnum;
            string name;
            cout << "Enter Account Number: ";
            cin >> accnum;
            cin.ignore();
            cout << "Enter Account Holder Name: ";
            getline(cin, name);

            savingAcc[accountCount].create_account(accnum, name);
            fdAcc[accountCount].create_account(accnum, name);
            accountCount++;
            break;
        }

        case 2: {
            int accnum;
            cout << "Enter Account Number: ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accountCount; i++) {
                if (savingAcc[i].getAccNumber() == accnum) {
                    int amt;
                    cout << "Enter amount to deposit: ";
                    cin >> amt;
                    savingAcc[i].deposit(amt);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found.\n";
            break;
        }

        case 3: {
            int accnum;
            cout << "Enter Account Number: ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accountCount; i++) {
                if (savingAcc[i].getAccNumber() == accnum) {
                    int amt;
                    cout << "Enter amount to withdraw: ";
                    cin >> amt;
                    savingAcc[i].withdraw(amt);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found.\n";
            break;
        }

        case 4: {
            int accnum;
            cout << "Enter Account Number: ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accountCount; i++) {
                if (savingAcc[i].getAccNumber() == accnum) {
                    cout << "\n--- Saving Account Details ---\n";
                    savingAcc[i].account_details();
                    cout << "--- Fixed Deposit Account Details ---\n";
                    fdAcc[i].account_details();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found.\n";
            break;
        }

        case 5: {
            int accnum;
            double amt, year;
            cout << "Enter Account Number: ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accountCount; i++) {
                if (fdAcc[i].getAccNumber() == accnum) {
                    cout << "Enter amount for Fixed Deposit: ";
                    cin >> amt;
                    cout << "Enter number of years: ";
                    cin >> year;
                    fdAcc[i].calcInterest(amt, year);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found.\n";
            break;
        }

        case 6:
            cout << "Thank you for using the banking system. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
            break;
        }

    } while (choice != 6);

    return 0;
}
