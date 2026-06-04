#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

class Temperature {
public:
    float celsius;

    float toFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }

    void display() {
        cout << "Temperature in Fahrenheit: " << toFahrenheit() << endl;
    }
};

#endif
