#include <iostream>
using namespace std;

class Display {
private:
    double lastResult;

public:
    Display() {
        lastResult = 0;
    }

    void showResult(double result) {
        lastResult = result;
        cout << "Result: " << result << endl;
    }

    double getLastResult() {
        return lastResult;
    }
};


class Calculator {
private:
    Display display;

public:
    // Addition function
    void add(double a, double b) {
        double result = a + b;
        display.showResult(result);
    }

    // Multiplication function
    void multiply(double a, double b) {
        double result = a * b;
        display.showResult(result);
    }


    void showLastResult() {
        cout << "Last Displayed Result: "
             << display.getLastResult() << endl;
    }
};

// Main function
int main() {
    Calculator calc;

    calc.add(10, 5);
    calc.multiply(4, 3);

    calc.showLastResult();

    return 0;
}
