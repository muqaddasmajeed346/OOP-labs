#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Parameterized constructor
    BankAccount(string accNum, string accHolder, double bal) {
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = bal;
    }

    // Method to display details
    void showAccountDetails() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {
    // User-defined values (no input)
    BankAccount account("PK0309800780100", "Muhammad Awais", 10000);

    cout << "--- Account Details ---" << endl;
    account.showAccountDetails();

    return 0;
}
