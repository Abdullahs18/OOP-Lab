
#include <iostream>
using namespace std;
class Person{
    public:
    Person(){
        cout <<"Person Default Constructor invoked" <<endl;
    }

};
class Student:public Person{
    public:
    Student(){
        cout <<"Student Default Constructor invoked" <<endl;
    }
};
class Teacher:public Person{
    public:
    Teacher(){
        cout <<"Teacher Default constructor invoked" <<endl;
    }
};

int main (){
    Person p;
    Student s;
    Teacher t;


}