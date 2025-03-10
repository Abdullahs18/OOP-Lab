#include <iostream>
using namespace std;

class Vehicle {
public:
    string manufacturer, model;
    void getInfo() {
        cout << manufacturer << " " << model << endl;
    }
};

class Car : public Vehicle {
public:
    int numDoors;
    void getCarDetails() {
        cout << numDoors << endl;
    }
};

class ElectricCar : public Car {
public:
    int batteryCapacity;
    void getElectricCarDetails() {
        cout << batteryCapacity << endl;
    }
};

int main() {
    ElectricCar e;
    cin >> e.manufacturer >> e.model >> e.numDoors >> e.batteryCapacity;
    e.getInfo();
    e.getCarDetails();
    e.getElectricCarDetails();
    return 0;
}
