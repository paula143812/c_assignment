// Chained inheritance: Vehicle -> Car -> ElectricCar
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    void startEngine() {
        cout << brand << " is starting." << endl;
    }
};

class Car : public Vehicle {
public:
    int doors;
    void showDoors() {
        cout << brand << " has " << doors << " doors." << endl;
    }
};

class ElectricCar : public Car {
public:
    int battery;
    void charge() {
        cout << brand << " is charging its " << battery << " kWh battery." << endl;
    }
};

int main() {
    ElectricCar e;
    e.brand = "Tesla";
    e.doors = 4;
    e.battery = 75;

    e.startEngine();   // from Vehicle
    e.showDoors();     // from Car
    e.charge();        // from ElectricCar
    return 0;
}