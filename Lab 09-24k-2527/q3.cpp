/*A simple drawing application needs to handle different shapes. Each shape can calculate its area and draw itself.
Task:
 Design an abstract class Shape with a pure virtual function calculateArea() and a pure virtual function draw().
 Create concrete classes like Circle, Rectangle, and Triangle, derived from Shape.
 Implement the calculateArea() and draw() functions for each shape. For draw(), 
you can simply print a message like "Drawing a circle".
 In main(), create an array of Shape pointers, store instances of different shapes, 
by calling calculateArea() and draw() for each shape.*/
#include <iostream>
using namespace std;
class Shape{
    public:
    virtual float calculateArea()=0;
    virtual void draw()=0;
    virtual ~Shape(){}
};
class Circle:public Shape{
    private:
    float radius;
    public:
    Circle(float radius){
        this->radius=radius;
    }
    void set_radius(float rad){
        radius=rad;
    }
    float get_radius(){
        return radius;
    }
    float calculateArea()override{
        return get_radius()*get_radius()*3.147;

    }
    void draw()override{
        cout <<"Drawing a Circle";
    }
    
};
class Rectangle:public Shape{
    private:
    float width;
    float length;
    public:
    Rectangle(float width,float length){
        this->width=width;
        this->length=length;
    }
    void set_width(float w){
        width=w;
    }
    float get_width(){
        return width;
    }
    void set_length(float l){
        length=l;
    }
    float get_length(){
        return length;
    }
    float calculateArea()override{
        return length*width;
    }
    void draw()override{
        cout <<"Drawing a Rectangle";
    }
};
class Triangle:public Shape{
    private:
    float height;
    float base;
    public:
    Triangle(float h,float b):height(h),base(b){}
    float calculateArea()override{
        return (height*base)/2;
    }
    void draw()override{
        cout <<"Drawing a Triangle";
    }
};

int main() {
    
    Shape* shapes[3];

    
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Triangle(3, 7);


    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
        cout << endl;
        cout <<"Area" <<shapes[i]->calculateArea() <<endl;
        
    }

    
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}

