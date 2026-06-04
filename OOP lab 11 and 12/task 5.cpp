#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class HospitalStaff
{
protected:
    string staffName;

public:
    HospitalStaff(string name)
    {
        staffName = name;
    }

    // Pure Virtual Function
    virtual void performDuty() = 0;
};

// Derived Class: Doctor
class Doctor : public HospitalStaff
{
public:
    Doctor(string name) : HospitalStaff(name) {}

    void performDuty() override
    {
        cout << "Doctor " << staffName
             << " is diagnosing and treating patients." << endl;
    }
};

// Derived Class: Nurse
class Nurse : public HospitalStaff
{
public:
    Nurse(string name) : HospitalStaff(name) {}

    void performDuty() override
    {
        cout << "Nurse " << staffName
             << " is caring for patients and administering medicines." << endl;
    }
};

// Derived Class: Receptionist
class Receptionist : public HospitalStaff
{
public:
    Receptionist(string name) : HospitalStaff(name) {}

    void performDuty() override
    {
        cout << "Receptionist " << staffName
             << " is managing appointments and patient records." << endl;
    }
};

int main()
{
    Doctor d("Ali");
    Nurse n("Sara");
    Receptionist r("Ahmed");

    d.performDuty();
    n.performDuty();
    r.performDuty();

    return 0;
}
