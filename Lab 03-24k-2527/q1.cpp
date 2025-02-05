/*Design a class called Date. The class should store a date in three integers: month, day, and year.
There should be member functions to print the date in the following forms:
12/25/2018
December 25, 2018
25 December 2018
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1.
Do not accept values for the month greater than 12 or less than 1.*/
#include <iostream>
using namespace std;
class DATE {
private:
  int day;
  int month;
  int year;

public:
  void set_day() {
    cout << "Enter the day:(1-31):";
    cin >> day;
    if (day > 31 || day < 1) {
      cout << "Invalid day please enter again:(1-31):";
      cin >> day;
    }
  }
  void set_month() {
    cout << "Enter the month:(1-12):";
    cin >> month;
    if (month > 12 || month < 1) {
      cout << "Invalid month please enter again:(1-12):";
      cin >> month;
    }
  }
  void set_year(){
    cout <<"Enter the year:";
    cin >>year;
    if (year<1850){
        cout <<"Enter year again:";
        cin >>year;
    }
  }
  int get_day(){
    return day;
  }
  int get_month(){
    return month;
  }
  int get_year(){
    return year;
  }

};
int main() {
    DATE date;
    date.set_day();
    date.set_month();
    date.set_year();
    cout <<date.get_day()<<"/"<<date.get_month()<<"/"<<date.get_year() <<endl;
    switch (date.get_month()){
        case 1:
        cout <<"Janurary "<<date.get_day() <<"," <<date.get_year() <<endl;
        cout <<date.get_day()<<"Janurary"<<date.get_year() <<endl;
        break;
         case 2:
        cout <<"February "<<date.get_day() <<"," <<date.get_year() <<endl;
        cout <<date.get_day()<<"February"<<date.get_year() <<endl;
        break;
         case 3:
        cout <<"March "<<date.get_day()<<"," <<date.get_year() <<endl;
         cout <<date.get_day()<<"March"<<date.get_year() <<endl;
        break;
         case 4:
        cout <<"April "<<date.get_day()<<"," <<date.get_year() <<endl;
         cout <<date.get_day()<<"April"<<date.get_year() <<endl;
        break;
         case 5:
        cout <<"May "<<date.get_day()<<"," <<date.get_year()<<endl;
         cout <<date.get_day()<<" May "<<date.get_year() <<endl;
        break;
         case 6:
        cout <<"June "<<date.get_day()<<"," <<date.get_year() <<endl;
         cout <<date.get_day()<<" July "<<date.get_year() <<endl;
        break;
         case 7:
        cout <<"July "<<date.get_day()<<"," <<date.get_year() <<endl;
         cout <<date.get_day()<<" July "<<date.get_year() <<endl;
        break;
         case 8:
        cout <<"August "<<date.get_day()<<"," <<date.get_year() <<endl;
        cout <<date.get_day()<<" August "<<date.get_year() <<endl;
        break;
         case 9:
        cout <<"September "<<date.get_day()<<"," <<date.get_year() <<endl;
        cout <<date.get_day()<<" September "<<date.get_year() <<endl;
        break;
         case 10:
        cout <<"October "<<date.get_day()<<"," <<date.get_year() <<endl;
        cout <<date.get_day()<<" October "<<date.get_year() <<endl;
        break;
         case 11:
        cout <<"November "<<date.get_day()<<"," <<date.get_year()<<endl;
        cout <<date.get_day()<<" November "<<date.get_year() <<endl;
        break;
         case 12:
        cout <<"December "<<date.get_day()<<date.get_year() <<endl;
        cout <<date.get_day()<<" December "<<date.get_year() <<endl;
        break;
}

}