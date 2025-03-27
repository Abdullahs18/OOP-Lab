/*Design a Car class that holds details such as the model name and price, and a Mechanic (or
Technician) class that can view and modify these details. Make the Mechanic a friend class of
Car so that it can apply discounts.
Requirements:
 Implement a friend class declaration in Car.
 In Mechanic, add functions to display car details and apply a discount (modify the price).
 In main(), create a Car object, display its details, apply a discount, and display the updated
details.*/
#include <iostream>
using namespace std;
class Car;
class Car{
    private:
    string model;
    float price;
    public:
    Car(string m,float p):model(m),price(p){}
    friend class Mechanic;
};
class Mechanic{
    public:
    void displayfunction(const Car& c){
        cout <<"Car Model:" <<c.model <<endl;
        cout <<"Car Price:" <<c.price <<endl;
    }
    void discount(Car& c,float dis){
        c.price=c.price-dis;
    
        cout <<"After applying discount:" <<c.price <<endl;
        
    }
};
int main (){
    Car car1("Honda Civic",4500000.00);
    Mechanic m;
    m.displayfunction(car1);
    m.discount(car1,23000.00);
    m.displayfunction(car1);


}