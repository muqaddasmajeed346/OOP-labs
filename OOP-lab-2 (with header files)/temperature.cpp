#include <iostream>
using namespace std;

#include "Temperature.h"

int main() {
    Temperature t;

    cout << "Enter temperature in Celsius: ";
    cin >> t.celsius;

    t.display();

    return 0;
}
