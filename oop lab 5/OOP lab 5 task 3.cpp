#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    void input_employee() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Developer : public Employee {
private:
    string programming_language;

public:
    void input_developer() {
        input_employee();
        cout << "Enter Programming Language: ";
        cin >> programming_language;
    }

    void display_developer() {
        display_employee();
        cout << "Programming Language: " << programming_language << endl;
    }
};

class Designer : public Employee {
private:
    string design_tool;

public:
    void input_designer() {
        input_employee();
        cout << "Enter Design Tool: ";
        cin >> design_tool;
    }

    void display_designer() {
        display_employee();
        cout << "Design Tool: " << design_tool << endl;
    }
};

int main() {

    Developer d;
    Designer ds;

    cout << "Enter Developer Details\n";
    d.input_developer();

    cout << "\nEnter Designer Details\n";
    ds.input_designer();

    cout << "\nDeveloper Information\n";
    d.display_developer();

    cout << "\nDesigner Information\n";
    ds.display_designer();

    return 0;
}
