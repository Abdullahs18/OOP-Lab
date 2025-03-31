/*Implement an Employee class that stores an employee's name and an array of three salaries
(for three months). Also, create a Manager class (declared as a friend in Employee) that can
update and view these salaries. Additionally, include a friend function to compute the average
salary.
Requirements:
Use a friend class declaration so Manager can access and modify Employee's salaries.
Define a friend function calculateAverageSalary() to compute the average.
In main(), simulate a scenario by displaying salaries, updating one salary, and showing the
new average.*/
#include <iostream>
using namespace std;
class Employee;
class Employee{
    private:
    string name;
    float salary[3];
    public:
    Employee(string n, float s[3]) : name(n) {
        for (int i = 0; i < 3; i++) {
            salary[i] = s[i]; 
        }
    }
    friend class Manager;
    friend float average_salary(Employee e);
};
class Manager{
    public:
    void display(const Employee& e){
        cout <<"Employee Name:" <<e.name <<endl;
        cout <<"Salary before changing:";
        for (int i=0;i<3;i++){
            cout <<e.salary[i];
        }
    }
    void modify(Employee& e){
        int n;
        float newsalary;
        cout <<"Enter the month number you want to modify the salary(1,2,3)";
        cin >>n;
        cout <<"Enter new salary:";
        cin >>newsalary;
        e.salary[n-1]=newsalary;
    }
};
float average_salary(Employee e){
    float total=0;
    
    for (int i=0;i<3;i++){
        total=e.salary[i];
    }
    float average=total/3;
    cout <<"Average Salary:" <<average;

}
int main() {
    float salaries[3] = {50000.5, 52000.75, 55000.25}; 
    Employee emp("Abdullah", salaries);
    Manager mgr;

    
    mgr.display(emp);
    cout << endl;

    
    mgr.modify(emp);

    
    cout <<"Updated Salaries:" << endl;
    mgr.display(emp);
    cout << endl;


    cout << endl;
    average_salary(emp);

    return 0;
}
