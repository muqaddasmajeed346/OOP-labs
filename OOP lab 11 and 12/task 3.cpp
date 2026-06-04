#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    double balance;

public:
    // Static variable to count total accounts
    static int totalAccounts;

    // Constructor
    BankAccount(string name, double bal)
    {
        accountHolderName = name;
        balance = bal;
        totalAccounts++; // Increment account count
    }

    // Display account details
    void display()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Static function to display total accounts
    static void displayTotalAccounts()
    {
        cout << "Total Bank Accounts Created: "
             << totalAccounts << endl;
    }
};

// Definition of static variable
int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount acc1("Ali", 5000);
    BankAccount acc2("Sara", 7500);
    BankAccount acc3("Ahmed", 10000);

    cout << "Account Details:\n" << endl;

    acc1.display();
    cout << endl;

    acc2.display();
    cout << endl;

    acc3.display();
    cout << endl;

    // Display total accounts created
    BankAccount::displayTotalAccounts();

    return 0;
}
