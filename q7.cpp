/*You are assigned the task of developing a GPA Calculator for FAST-NUCES. The program should accept
the student's name and marks as input and display the corresponding grade and GPA points based on the
university’s grading system."
Input:
Student Name: Noman
Marks: 74
Output:
Student Name: Noman
Grade: B
GPA: 3*/
#include <iostream>
using namespace std;
void gpa_calculator(int marks){
    if (marks>=90){
        cout <<"Grade: A+" <<endl;
        cout <<"GPA: 4.00" <<endl;
    }
    if (marks==86){
        cout <<"Grade: A" <<endl;
        cout <<"GPA: 4.00" <<endl;
    }
    if (marks>=82 && marks<86){
        cout <<"Grade: A-" <<endl;
        cout <<"GPA: 3.67" <<endl;
    }
    if (marks>=78 && marks<82){
        cout <<"Grade: B+" <<endl;
        cout <<"GPA: 3.33" <<endl;
    }
    if (marks>=74 && marks<78){
        cout <<"Grade: B" <<endl;
        cout <<"GPA: 3.00" <<endl;
    }
    if (marks>=70 && marks<78){
        cout <<"Grade: B-" <<endl;
        cout <<"GPA: 2.67" <<endl;
    }
    if (marks>=66 && marks<70){
        cout <<"Grade: C+" <<endl;
        cout <<"GPA: 2.33" <<endl;
    }
    if (marks>=62 && marks<66){
        cout <<"Grade: C" <<endl;
        cout <<"GPA: 2.00" <<endl;
    }
    if (marks>=58 &&marks<62){
        cout <<"Grade: C-" <<endl;
        cout <<"GPA: 1.67" <<endl;
    }
    if (marks>=54 && marks<58){
        cout <<"Grade: D+" <<endl;
        cout <<"GPA: 1.33" <<endl;
    }
    if (marks>=50 && marks<54){
        cout <<"Grade: D" <<endl;
        cout <<"GPA: 1.00" <<endl;
    }
    if (marks<50){
        cout <<"Grade: F" <<endl;
        cout <<"GPA: No Grade points" <<endl;
    }
    

}
int main(){
  
    char name[20];
    cout <<"Name: ";
    cin>>name;
    float marks;
    cout<<"Enter marks: ";
    cin>>marks;
    cout <<"Name: " <<name <<endl;
    gpa_calculator(marks);

}