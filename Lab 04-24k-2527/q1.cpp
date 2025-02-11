/* A default constructor that assigns empty strings ( "") to the name, department, and
position member variables, and 0 to the idNumber member variable.
Write appropriate mutator functions that store values in these member variables and
accessor functions that return the values in these member variables. Once you have
written the class, write a separate program that creates three Employee objects to hold the
following data.

The program should store this data in the three objects and then display the data for each
employee on the screen.*/
#include "q1header.h"
int main(){
    Employee e1;
   
    e1.name_setter("Abdullah");
    e1.id_setter(123);
    e1.position_setter("Head");
    e1.dept_setter("Accounting");

    Employee e2("Talha",145,"Marketing","Manager");
    cout <<endl;
    Employee e3("Moiz",435,"Sale & Purchase","Manager");
    cout <<endl;


    cout <<"Name: " <<e1.name_getter() <<endl;
    cout <<"ID Number: " <<e1.id_getter() <<endl;
    cout <<"Position: " <<e1.pos_getter() <<endl;
    cout <<"Department: " <<e1.dept_getter() <<endl;






}
