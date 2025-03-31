#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle is starting..." << endl;
    }

    virtual void stop() {
        cout << "Vehicle is stopping..." << endl;
    }
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car is starting with key ignition." << endl;
    }

    void stop() override {
        cout << "Car is stopping by applying brakes." << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike is starting with self-start or kick." << endl;
    }

    void stop() override {
        cout << "Bike is stopping by pressing the brake lever." << endl;
    }
};

class Truck : public Vehicle {
public:
    void start() override {
        cout << "Truck is starting with heavy-duty ignition." << endl;
    }

    void stop() override {
        cout << "Truck is stopping using air brakes." << endl;
    }
};

int main() {
    Vehicle* v;

    Car c;
    Bike b;
    Truck t;

    v = &c;
    v->start();
    v->stop();

    v = &b;
    v->start();
    v->stop();

    v = &t;
    v->start();
    v->stop();

    return 0;
}
