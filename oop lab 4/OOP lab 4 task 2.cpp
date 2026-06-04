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

    // Method to display account details
    void showAccountDetails() {
        cout << "Account Number  : " << accountNumber << endl;
        cout << "Account Holder  : " << accountHolder << endl;
        cout << "Balance         : " << balance << endl;
    }
};

int main() {
    // User-defined values
    string accNum;
    string accHolder;
    double bal;

    cout << "Enter Account Number: ";
    cin >> accNum;

    cin.ignore(); // to handle newline issue

    cout << "Enter Account Holder Name: ";
    getline(cin, accHolder);

    cout << "Enter Balance: ";
    cin >> bal;

    // Creating object using user input
    BankAccount account(accNum, accHolder, bal);

    cout << "\n--- Account Details ---\n";
    account.showAccountDetails();

    return 0;
}
