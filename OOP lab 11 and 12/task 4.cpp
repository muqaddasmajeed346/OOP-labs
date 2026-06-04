#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;

public:
    // Static variable for company name
    static string companyName;

    // Constructor
    Employee(int id, string name)
    {
        employeeID = id;
        employeeName = name;
    }

    // Display employee details
    void displayEmployee()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Company Name: " << companyName << endl;
    }

    // Static member function
    static void displayCompanyInfo()
    {
        cout << "Company Name: " << companyName << endl;
    }
};

// Definition of static variable
string Employee::companyName = "ABC Technologies";

int main()
{
    Employee emp1(101, "Ali");
    Employee emp2(102, "Sara");
    Employee emp3(103, "Ahmed");

    cout << "Employee Details:\n" << endl;

    emp1.displayEmployee();
    cout << endl;

    emp2.displayEmployee();
    cout << endl;

    emp3.displayEmployee();
    cout << endl;

    // Accessing static function using class name
    cout << "Company Information:\n";
    Employee::displayCompanyInfo();

    return 0;
}
