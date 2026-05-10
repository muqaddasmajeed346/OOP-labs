#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string type) {
        cout << "Vehicle Constructor: " << type << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string type, string model) : Vehicle(type) {
        cout << "Car Constructor: " << model << endl;
    }
};

class ElectricCar : public Car {
public:
    ElectricCar(string type, string model, int battery)
        : Car(type, model) {
        cout << "ElectricCar Constructor: Battery " << battery << " kWh" << endl;
    }
};

int main() {
    ElectricCar ec("Transport", "Tesla", 75);
}
