#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

#endif
