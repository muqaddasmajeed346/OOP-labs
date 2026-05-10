#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
};


class Student {
private:
    string name;
    Calculator* calculator;   

public:

    Student(string n, Calculator* calc) {
        name = n;
        calculator = calc;
    }


    void doAddition(int a, int b) {
        int result = calculator->add(a, b);
        cout << name << " performed Addition: "
             << a << " + " << b
             << " = " << result << endl;
    }

    // Perform multiplication
    void doMultiplication(int a, int b) {
        int result = calculator->multiply(a, b);
        cout << name << " performed Multiplication: "
             << a << " * " << b
             << " = " << result << endl;
    }
};

int main() {

    Calculator sharedCalculator;
    Student s1("ahmad", &sharedCalculator);
    Student s2("maira", &sharedCalculator);
    Student s3("suzain", &sharedCalculator);

    s1.doAddition(5, 3);
    s2.doMultiplication(4, 6);
    s3.doAddition(10, 20);

    return 0;
}
