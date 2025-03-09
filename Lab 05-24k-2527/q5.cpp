#include <iostream>
#include <string>
using namespace std;

class ParkedCar {
private:
  string make;
  int model;
  string color;
  string license_number;
  int minutes_parked;

public:
  ParkedCar(string m, int mo, string co, string number, int min)
      : make(m), model(mo), color(co), license_number(number),
        minutes_parked(min) {}

  int getMinutesParked() const { return minutes_parked; }
  string getMake() const { return make; }
  int getModel() const { return model; }
  string getColor() const { return color; }
  string getLicenseNumber() const { return license_number; }

  void display() const {
    cout << "Car Make: " << make << "  Model: " << model
         << "  Color: " << color << "  License Number: " << license_number
         << "  Minutes Parked: " << minutes_parked << endl;
  }
};

class ParkingMeter {
private:
  int allowed_minutes;

public:
  ParkingMeter(int minutes) : allowed_minutes(minutes) {}

  int getAllowedMinutes() const { return allowed_minutes; }

  void displayDetails() const {
    cout << "Allowed Minutes: " << allowed_minutes << endl;
  }
};

class ParkingTicket {
private:
  string car_make;
  int car_model;
  string car_color;
  string car_license;
  int fine_amount;
  string officer_name;
  int badge_number;

public:
  ParkingTicket(const ParkedCar &car, int fine, string officer, int badge)
      : car_make(car.getMake()), car_model(car.getModel()),
        car_color(car.getColor()), car_license(car.getLicenseNumber()),
        fine_amount(fine), officer_name(officer), badge_number(badge) {}

  void displayTicket() const {
    cout << "\n PARKING TICKET\n";
    cout << "Car Make: " << car_make << "  Model: " << car_model
         << "  Color: " << car_color << "  License Number: " << car_license
         << endl;
    cout << "Fine Amount: $" << fine_amount << endl;
    cout << "Issued By: " << officer_name << "  Badge Number: " << badge_number
         << endl;
  }
};

class PoliceOfficer {
private:
  string officer_name;
  int badge_number;

public:
  PoliceOfficer(string name, int badge)
      : officer_name(name), badge_number(badge) {}

  ParkingTicket *inspectCar(const ParkedCar &car, const ParkingMeter &meter) {
    int excess_minutes = car.getMinutesParked() - meter.getAllowedMinutes();

    if (excess_minutes > 0) {
      int extra_hours = (excess_minutes + 59) / 60; 
      int fine = 25 + (extra_hours - 1) * 10;
      return new ParkingTicket(car, fine, officer_name, badge_number);
    }
    return nullptr;
  }
};

int main() {

  ParkedCar car("Toyota", 2022, "Black", "XYZ-123", 130);
  ParkingMeter meter(60);
  PoliceOfficer officer("John Doe", 45678);

  ParkingTicket *ticket = officer.inspectCar(car, meter);

  car.display();
  meter.displayDetails();

  if (ticket) {
    ticket->displayTicket();
    delete ticket; 
  } else {
    cout << "\nNo violations detected. No ticket issued.\n";
  }

  return 0;
}
