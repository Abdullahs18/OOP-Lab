#include <iostream>
using namespace std;

class Engine {
private:
  string engine_name;

public:
  Engine() : engine_name("") {}
  Engine(string name) : engine_name(name) {}

  void displayEngine() const { cout << "Engine Name: " << engine_name << endl; }

  ~Engine() { cout << "Engine Destructor Called" << endl; }
};

class Car {
private:
  string car_name;
  Engine car_engine;

public:
  Car(string c_name, string c_engine)
      : car_name(c_name), car_engine(c_engine) {}

  void displayCar() {
    cout << "Car Name: " << car_name << endl;
    car_engine.displayEngine();
  }

  ~Car() { cout << "Car Destructor Called" << endl; }
};

int main() {
  Car car1("Toyota Revo", "V8");
  car1.displayCar();
  return 0;
}
