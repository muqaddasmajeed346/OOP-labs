#include <iostream>
using namespace std;

class Device {
protected:
    string deviceName;
    int deviceID;
    int* data;

public:
    Device(string name, int id) {
        deviceName = name;
        deviceID = id;
        data = new int(100);   // allocate memory
        cout << "Device created" << endl;
    }

    ~Device() {
        delete data;   // free memory
        cout << "Device destroyed" << endl;
    }
};

class Sensor : public Device {
private:
    string sensorType;
    float* sensorValue;

public:
    Sensor(string name, int id, string type)
        : Device(name, id) {
        sensorType = type;
        sensorValue = new float(25.5);
        cout << "Sensor created" << endl;
    }

    ~Sensor() {
        delete sensorValue;
        cout << "Sensor destroyed" << endl;
    }
};

int main() {
    Sensor* s = new Sensor("TempDevice", 101, "Temperature");

    delete s;   // triggers destructors
}
