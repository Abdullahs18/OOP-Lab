/*Question 1: Vehicle Management System
A software system is needed to manage different types of vehicles in a garage. Each vehicle has
some common properties like a unique ID, model, and year of manufacture. However, different
vehicles have specific behaviors. For example, a Car needs a function to display the number of
doors, and a Motorcycle needs a function to display if it has a sidecar.
Task:

 Design an abstract class Vehicle with common properties (ID, model, year) and a
pure virtual function displayDetails().
 Create two concrete classes, Car and Motorcycle, derived from Vehicle.
 Car should have an additional attribute: numberOfDoors and implement the
displayDetails() to show all vehicle info including the number of doors.
 Motorcycle should have an additional attribute: hasSideCar and implement
displayDetails() to show all vehicle info including whether it has a sidecar.
 In the main() function, create instances of Car and Motorcycle and call their
respective display functions to show the details.*/
#include <iostream>
using namespace std;

class Vehicle {
protected:
    int Id;
    string model;
    int year;

public:
    Vehicle(int Id, string model, int year) {
        this->Id = Id;
        this->model = model;
        this->year = year;
    }

    virtual void displayfunction() = 0;
};

class Car : public Vehicle {
private:
    int number_of_doors;

public:
    Car(int Id, string model, int year) : Vehicle(Id, model, year) {}

    void set_doors(int doors) {
        number_of_doors = doors;
    }

    int get_doors() {
        return number_of_doors;
    }

    void displayfunction() override {
        cout << "Car Details:" << endl;
        cout << "Id: " << Id << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Doors: " << number_of_doors << endl;
    }
};

class Motorcycle : public Vehicle {
private:
    bool has_side_car;

public:
    Motorcycle(int Id, string model, int year) : Vehicle(Id, model, year) {}

    void check_cars(bool check) {
        has_side_car = check;
    }

    bool get_check() {
        return has_side_car;
    }

    void displayfunction() override {
        cout << "Motorcycle Details:" << endl;
        cout << "Id: " << Id << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << (has_side_car ? "Has Side Car" : "No Side Car") << endl;
    }
};

int main() {
    int id, year, doors, check;
    string model;

    cout << "Enter Id: ";
    cin >> id;
    cout << "Enter Model: ";
    cin >> model;
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter Number of Doors: ";
    cin >> doors;

    Car* c = new Car(id, model, year); 
    c->set_doors(doors);
    c->displayfunction();


    Vehicle* v1 = c;

    cout << "\nEnter Id: ";
    cin >> id;
    cout << "Enter Model: ";
    cin >> model;
    cout << "Enter Year: ";
    cin >> year;
    cout << "Has Side Car (1 for Yes, 0 for No): ";
    cin >> check;

    Motorcycle* m = new Motorcycle(id, model, year);
    m->check_cars(check);
    m->displayfunction();
    Vehicle* v2=m;
}
