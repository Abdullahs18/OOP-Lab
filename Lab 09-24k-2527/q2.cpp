/*Question 2: Employee Payroll System
A company needs a payroll system to manage employee salaries. There are different types of
employees: salaried employees and hourly employees. Salaried employees are paid a fixed
monthly salary, while hourly employees are paid based on the number of hours worked. Both
employee types need to calculate their earnings.
Task:

 Design an abstract class Employee with common properties like name and ID and
a pure virtual function calculatePay().
 Create two concrete classes: SalariedEmployee (with a monthlySalary attribute)
and HourlyEmployee (with hourlyRate and hoursWorked attributes), both derived
from Employee.
 Implement the calculatePay() function in each derived class to calculate the pay
accordingly.
 In the main() function, create instances of both employee types and demonstrate
calculating and displaying their pay.*/
#include <iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int Id;
    public:
    Employee(string name,int Id){
        this->name=name;
        this->Id=Id;
    }
    virtual float calculatepay()=0;
};
class SalariedEmployee:public Employee{
    private:
    float monthlysalary;
    public:
    SalariedEmployee(string name,int Id):Employee(name,Id){}
    void set_monthly_salary(float salary){
        monthlysalary=salary;
    }
    float get_monthly_salary(){
        return monthlysalary;
    }
    float calculatepay()override{
        int month;
        cout <<"Enter Number of Months To calculate your pay:";
        cin >>month;
        float salary=get_monthly_salary()*month;
        return salary;
    }
};
class HourlyEmployee:public Employee{
    private:
    float hourlysalary;
    public:
    HourlyEmployee(string name,int id):Employee(name,id){}
    void set_hourly_salary(float salary){
        hourlysalary=salary;
    }
    float get_hourly_salary(){
        return hourlysalary;
    }
    float calculatepay()override{
        float hour;
        cout <<"Enter Number of Hours To calculate your pay:";
        cin >>hour;
        float salary=get_hourly_salary()*hour;
        return salary;
    }
};

int main (){
    string name;
    int id;
    cout <<"Enter Name:";
    cin >>name; 
    cout <<"\nEnter ID:";
    cin >>id;

    SalariedEmployee* s=new SalariedEmployee(name,id);
    s->set_monthly_salary(43000.00);
    cout <<"Salary per Month" <<s->get_monthly_salary() <<endl;
   
    cout <<s->calculatepay();

    Employee* e1=s;

    cout <<"Enter Name:";
    cin >>name;
    cout <<"\nEnter ID:";
    cin >>id;

    HourlyEmployee* h=new HourlyEmployee(name,id);
    h->set_hourly_salary(430.00);
    cout <<"Salary per Month" <<h->get_hourly_salary() <<endl;
   
    cout <<h->calculatepay();

    Employee* e2=h;

    return 0;







}