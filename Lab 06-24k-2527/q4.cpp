
#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    int employee_number;
    string hire_date;
    public:
    Employee() {
        name = "";
        employee_number = 0;
        hire_date = "";
    }
    void set_name(string name){
        this->name=name;
    }
    string get_name(){
        return name;
    }
    void set_number(int num){
        employee_number=num;
    }
    int get_number(){
        return employee_number;
    }
    void set_date(string date){
        hire_date=date;
    }
    string get_date(){
        return hire_date;
    }
    Employee(string n,int e,string h){
        name=n;
        employee_number=e;
        hire_date=h;
    }
};
class ProductionWorker:public Employee{
    private:
    int shift;
    double pay_rate;
    public:
    ProductionWorker() : Employee() {
        shift = 0;
        pay_rate = 0.0;
    }
   
    ProductionWorker(int s,int p){
        shift=s;
        pay_rate=p;
    }
    void setshift(int shift){
        this->shift=shift;
    }
    int getshift(){
        return shift;
    }
    void setpayrate(double prate){
        pay_rate=prate;
    }
    double getpayrate(){
        return pay_rate;
    }
    void display_shift() {
        if (shift == 1) {
            cout << "Day Shift" << endl;
        } else if (shift == 2) {
            cout << "Night Shift" << endl;
        } else {
            cout << "Invalid Shift" << endl;
        }
    }


};


int main(){
    ProductionWorker pw;

    pw.set_name("Abdullah");
    pw.set_date("21-Jan-2016");
    pw.set_number(2343424);
    pw.setpayrate(24.56);
    pw.setshift(1);
    cout <<"NAME:" <<pw.get_name() <<endl;
    cout <<"DATE:" <<pw.get_date() <<endl;
    cout <<"NUMBER:" <<pw.get_number() <<endl;
    cout <<"PAYRATE:" <<pw.getpayrate() <<endl;
    pw.display_shift();

}