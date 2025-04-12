

#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accnumber;
    int balance = 0;
    string name;

public:
    void create_account(int accnum, string nameInput)
    {
        accnumber = accnum;
        name = nameInput;
        cout << "Account created successfully!\n";
    }

    int getAccNumber()
    {
        return accnumber;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            this->balance += amount;
            cout << "Deposit successful! Current balance: " << this->balance << endl;
        }
        else
        {
            cout << " Invalid deposit amount!" << endl;
        }
    }
    void account_details()
    {
        cout << "Account Number: " << this->accnumber << endl;
        cout << "Account Holder Name: " <<this->name << endl;
        cout << "Current Balance: " << this->balance << endl;
        // cout << "FD Balance : " << this->fdbalance << endl;
    }
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            this->balance -= amount;
            cout << "Withdrawal successful! Current balance: " << this->balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    
};

class SavingAccount : public BankAccount
{
};
class FixedDeposite : public BankAccount
{   
    protected:
        double fdbalance;
        double amt;
        double year;
    public :
        FixedDeposite(){
            this->fdbalance = 0;
            this->amt = 0;
            this->year = 0;
        }
        double calcInterest(double amt,double year){
            this->amt = amt;
            this->year = year;

            this->fdbalance = (this->amt * 8 * this->year)/100;

            cout << "Interest in Fixed Deposite : " << this->fdbalance << endl ;
        }
   
};

int main()
{
    FixedDeposite fdacc[10];
    SavingAccount acc[10]; 
    int accCount = 0;
    int choice;

    do
    {
        cout << "\n=== Welcome to the Banking System ===\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Account Details\n";
        cout << "5. Calculate Fixed Deposite\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int accnum;
            string name;

            cout << "Enter Account Number: ";
            cin >> accnum;
            cout << "Enter Account Holder Name: ";
            cin.ignore();
            getline(cin, name);

            acc[accCount].create_account(accnum, name);
            accCount++;
            break;
        }

        case 2:
        {
            int accnum;
            cout << "Enter Account Number: ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accCount; i++)
            {
                if (acc[i].getAccNumber() == accnum)
                {
                    found = true;
                        int amt;
                        cout << "Enter amount to deposit: ";
                        cin >> amt;
                        acc[i].deposit(amt);
                }
            }
            break;
        }
        case 3: {
            int accnum;
            cout << "Enter Account Number: ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accCount; i++)
            {
                if (acc[i].getAccNumber() == accnum)
                {
                    found = true;
                        int amt;
                        cout << "Enter amount to deposit: ";
                        cin >> amt;
                        acc[i].withdraw(amt);
                }
            }
            break;
        }

        case 4 :{
            int accnum;
            cout << "Ener Account Number : ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accCount; i++)
            {
                if (acc[i].getAccNumber() == accnum)
                {
                    found = true;
                       fdacc[i].account_details();
                }
            }
            break;
        }

        case 5 : {
            int accnum;
            double amt,year;
            cout << "Ener Account Number : ";
            cin >> accnum;

            bool found = false;
            for (int i = 0; i < accCount; i++)
            {
                if (acc[i].getAccNumber() == accnum)
                {
                    found = true;
                    cout << "Enter amount you want to deposite : ";
                    cin >> amt;
                    cin.ignore();
                    cout << "Enetr no. of year for you want to deposite above amount : ";
                    cin >> year;
                    fdacc[i].calcInterest(amt,year);
                     
                }
            }
            break;
        }
        case 6 : {
            cout << "Thanks for visiting..." << endl;
            break;
        }
        }
    
    }
    while (choice != 6);

    return 0;
}

