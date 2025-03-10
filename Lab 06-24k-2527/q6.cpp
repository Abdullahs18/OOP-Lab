#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void getInfo() {
        cout << name << " " << age << endl;
    }
};

class Teacher : public Person {
public:
    string subject;
    double salary;
    void getTeacherDetails() {
        cout << subject << " " << salary << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;
    string course;
    void getStudentDetails() {
        cout << rollNumber << " " << course << endl;
    }
};

int main() {
    Teacher t;
    Student s;
    cin >> t.name >> t.age >> t.subject >> t.salary;
    cin >> s.name >> s.age >> s.rollNumber >> s.course;
    t.getInfo();
    t.getTeacherDetails();
    s.getInfo();
    s.getStudentDetails();
    return 0;
}
