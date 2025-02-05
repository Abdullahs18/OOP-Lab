/*3. Write a Circle class that has the following member variables:
• radius: a double
• pi: a double initialized with the value 3.14159
The class should have the following member functions:
• setRadius. A mutator function for the radius variable.
• getRadius. An accessor function for the radius variable.
• getArea. Returns the area of the circle, which is calculated as

area = pi * radius * radius

• getDiameter. Returns the diameter of the circle, which is calculated as

diameter = radius * 2

• getCircumference. Returns the circumference of the circle, which is calculated as

circumference = 2 * pi * radius

Write a program that demonstrates the Circle class by asking the user for the circle’s radius,
creating a Circle object, and then reporting the circle’s area, diameter, and circumference.*/
#include <iostream>
using namespace std;

class CIRCLE{
    private:
    double radius;
    public:
    float pi=3.147;
    void set_radius(){
        cout <<"Enter Radius:";
        cin >>radius;
    }
    double get_radius(){
        return radius;
    }
    double get_diameter(){
        return 2*radius;
    }
    double get_circumference(){
        return 2*pi*radius;
    }
};
int main (){
    CIRCLE c1;
    c1.set_radius();
    cout <<"Radius is " <<c1.get_radius() <<endl;
    cout <<"Diameter is " <<c1.get_diameter() <<endl;
    cout <<"Circumference is :" <<c1.get_circumference() <<endl;

    return 0;
}