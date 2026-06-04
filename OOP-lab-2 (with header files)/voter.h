#ifndef VOTER_H
#define VOTER_H

#include <iostream>
using namespace std;

class Voter {
private:
    string name;
    int age;

public:
    void setData() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    bool isEligible() {
        return age > 18;
    }
};

#endif
