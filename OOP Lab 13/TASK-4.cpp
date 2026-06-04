#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator
{
private:
    T a, b;

public:
    // Constructor
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    // Add two values
    T add()
    {
        return a + b;
    }

    // Subtract two values
    T subtract()
    {
        return a - b;
    }

    // Multiply two values
    T multiply()
    {
        return a * b;
    }
};

int main()
{
    // Integer Calculator
    Calculator<int> intCalc(10, 5);

    cout << "Integer Values:" << endl;
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;

    cout << endl;

    // Double Calculator
    Calculator<double> doubleCalc(10.5, 4.5);

    cout << "Double Values:" << endl;
    cout << "Addition: " << doubleCalc.add() << endl;
    cout << "Subtraction: " << doubleCalc.subtract() << endl;
    cout << "Multiplication: " << doubleCalc.multiply() << endl;

    return 0;
}
