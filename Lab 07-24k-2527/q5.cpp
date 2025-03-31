#include <iostream>

using namespace std;

class Ship {
protected:
    string name, yearBuilt;

public:
    Ship(string n, string y) : name(n), yearBuilt(y) {}

    virtual void print() {
        cout << "Ship Name: " << name << endl;
        cout << "Year Built: " << yearBuilt << endl;
    }

    virtual ~Ship() {}
};

class CruiseShip : public Ship {
    int maxPassengers;

public:
    CruiseShip(string n, string y, int passengers) : Ship(n, y), maxPassengers(passengers) {}

    void print() override {
        cout << "Cruise Ship Name: " << name << endl;
        cout << "Max Passengers: " << maxPassengers << endl;
    }
};

class CargoShip : public Ship {
    int cargoCapacity;

public:
    CargoShip(string n, string y, int capacity) : Ship(n, y), cargoCapacity(capacity) {}

    void print() override {
        cout << "Cargo Ship Name: " << name << endl;
        cout << "Cargo Capacity: " << cargoCapacity << " tons" << endl;
    }
};

int main() {
    Ship* ships[3];

    ships[0] = new Ship("Titanic", "1912");
    ships[1] = new CruiseShip("Symphony of the Seas", "2018", 6680);
    ships[2] = new CargoShip("Ever Given", "2018", 200000);

    for (int i = 0; i < 3; i++) {
        ships[i]->print();
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete ships[i];
    }

    return 0;
}
