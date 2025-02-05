/*2. Design a class that holds the following personal data: name, address, age, and phone number.
Write appropriate accessor and mutator functions. Demonstrate the class by writing a program
that creates three instances of it. One instance should hold your information, and the other two
should hold your friends’ or family members’ information.*/
#include <iostream>
using namespace std;
class personel_info{
    private:
    string name;
    string address;
    int age;
    int phone_number;
    public:
    void set_name(string nm){
        name=nm;
    }
    void set_address(string add){
        address=add;
    }
    void set_age(int ag){
        age=ag;
    }
    void set_ph_number(int ph_no){
        phone_number=ph_no;
    }
    string get_name(){
        return name;
    }
    string get_address(){
        return address;
    }
    int get_age(){
        return age;
    }
    int get_ph_no(){
        return phone_number;
    }
};
int main (){
    personel_info my_info;
    personel_info friend1_info;
    personel_info friend2_info;
    my_info.set_name("Abdullah");
    my_info.set_age(18);
    my_info.set_ph_number(5);
    my_info.set_address("hyd 123");


    friend1_info.set_name("abcd");
    friend1_info.set_age(18);
    friend1_info.set_address("khi 32f");
    friend1_info.set_ph_number(2114134141);
    

    friend2_info.set_name("abcd");
    friend2_info.set_age(18);
    friend2_info.set_address("khi 32f");
    friend2_info.set_ph_number(2114134141);

    cout <<my_info.get_name() <<endl;
    cout <<my_info.get_age() <<endl;
    cout <<my_info.get_ph_no() <<endl;
    cout <<my_info.get_address() <<endl;

    cout <<friend1_info.get_name() <<endl;
    cout <<friend1_info.get_age() <<endl;
    cout <<friend1_info.get_ph_no() <<endl;
    cout <<friend1_info.get_address() <<endl;

     cout <<friend2_info.get_name() <<endl;
    cout <<friend2_info.get_age() <<endl;
    cout <<friend2_info.get_ph_no() <<endl;
    cout <<friend2_info.get_address() <<endl;


    





} 