#include <iostream>
using namespace std;

#include "Calculator.h"

int main() {
    Calculator c;
    int choice;

    c.setValues();

    cout << "\nChoose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << c.add() << endl;
            break;
        case 2:
            cout << "Result: " << c.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << c.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << c.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
