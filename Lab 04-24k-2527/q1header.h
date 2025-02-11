/*1. Write a class named Employee that has the following member variables:
• name. A string that holds the employee’s name.
• idNumber. An int variable that holds the employee’s ID number.
• department. A string that holds the name of the department where the employee
works.
• position. A string that holds the employee’s job title.
The class should have the following constructors:
• A constructor that accepts the following values as arguments and assigns them to
the appropriate member variables: employee’s name, employee’s ID number,
department, and position.
• A constructor that accepts the following values as arguments and assigns them to
the appropriate member variables: employee’s name and ID number. The
department and position fields should be assigned an empty string ( "" ).
• A default constructor that assigns empty strings ( "") to the name, department, and
position member variables, and 0 to the idNumber member variable.
Write appropriate mutator functions that store values in these member variables and
accessor functions that return the values in these member variables. Once you have
written the class, write a separate program that creates three Employee objects to hold the
following data.

The program should store this data in the three objects and then display the data for each
employee on the screen.*/
#ifndef Q1HEADER_H
#define Q1HEADER_H
#include <iostream>
#include <string>
using namespace std;
class Employee{
    private:
    string name;
    int id_number;
    string department;
    string position;

    public:
   
    void name_setter(string set_name){
        name=set_name;
    }
    void id_setter(int set_id){
        id_number=set_id;
    }
    void dept_setter(string set_dept){
        department=set_dept;
    }
    void position_setter(string set_position){
        position=set_position;
    }
    string name_getter(){
        return name;
    }
    int id_getter(){
        return id_number;
    }
    string dept_getter(){
        return department;
    }
    string pos_getter(){
        return position;
    }
    Employee(){
        name=" ";
        id_number=0;
        department=" ";
        position=" ";
    }
    Employee(string employee_name,int employee_id_number,string employee_dept,string pos){
        name=employee_name;
        id_number=employee_id_number;
        department=employee_dept;
        position=pos;
        cout <<"Name: " <<name_getter() <<endl <<"ID Number: " <<id_getter() <<endl <<"Department: " <<dept_getter() <<endl <<"Position: " <<pos_getter();
        
    }
};
#endif
