#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary()
    {
        cout << "Base Employee salary calculation called." << endl;
        return 0;
    }
};

class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double bonus;

public:
    PermanentEmployee(double bSalary, double bns)
    {
        basicSalary = bSalary;
        bonus = bns;
    }

    // Override calculateSalary()
    double calculateSalary() override
    {
        return basicSalary + bonus;
    }
};

class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(double rate, int hours)
    {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    // Override calculateSalary()
    double calculateSalary() override
    {
        return hourlyRate * hoursWorked;
    }
};

int main()
{
    Employee* emp;

    PermanentEmployee pEmp(40000, 5000);
    ContractEmployee cEmp(800, 30);

    emp = &pEmp;
    cout << "Permanent Employee Salary: "
         << emp->calculateSalary() << endl;

    emp = &cEmp;
    cout << "Contract Employee Salary: "
         << emp->calculateSalary() << endl;

    return 0;
}
