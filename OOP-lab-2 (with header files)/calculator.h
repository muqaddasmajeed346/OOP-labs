#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    void setValues() {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
};

#endif
