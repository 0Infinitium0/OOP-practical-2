#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    // Private members protect account information from direct modification.
    string accountHolder;
    string accountNumber;
    double balance;

public:
    // Public constructor initializes the account with validated starting data.
    BankAccount(string holder, string number, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    // Public member function displays account information.
    void displayDetails() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << fixed << setprecision(2) << balance << endl;
    }

    // Public member function deposits only a positive amount.
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public member function prevents invalid withdrawals and overdrafts.
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
    }
};

int main() {
    cout << "----- BANK ACCOUNT DETAILS -----" << endl;

    // Create the first object using the constructor.
    BankAccount account1("Satinderpal Singh Chaney", "E26B00S2034", 10000);

    account1.displayDetails();

    cout << "\nDepositing Rs. 2000" << endl;
    account1.deposit(2000);

    cout << "\nWithdrawing Rs. 1500" << endl;
    account1.withdraw(1500);

    cout << "\n----- FINAL ACCOUNT DETAILS -----" << endl;
    account1.displayDetails();

    cout << "\n----- SECOND BANK ACCOUNT -----" << endl;

    // Create a second object to demonstrate that each object has its own data.
    BankAccount account2("Priya", "E26B00S2035", 5000);

    account2.displayDetails();

    cout << "\nDepositing Rs. 1000" << endl;
    account2.deposit(1000);

    cout << "\nWithdrawing Rs. 500" << endl;
    account2.withdraw(500);

    cout << "\n----- FINAL ACCOUNT DETAILS -----" << endl;
    account2.displayDetails();

    cout << "\nProgram executed successfully." << endl;

    return 0;
}
