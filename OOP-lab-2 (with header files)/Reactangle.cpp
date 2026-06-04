#include <iostream>
using namespace std;

#include "Reactangle.h"

int main() {
    Rectangle r;

    r.setDimensions();

    cout << "\nArea: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
