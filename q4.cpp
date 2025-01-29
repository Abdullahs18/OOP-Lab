/*Write a program that implements a basic calculator using pointer arithmetic to perform addition,
subtraction, multiplication, and division. The program should take two integer inputs from the
user, perform the selected operation, and output the result. Use pointers to pass values to functions
and handle the result.*/
#include <iostream>
using namespace std;
float add(float* a,float* b){
    return (*a + *b);
}
float subtract(float* a,float* b){
    return a-b;
}
float multiplication(float* a,float* b){
    return (*a * *b);
}
float division(float* a,float* b){
    return (*a / *b);
}
int main (){
    float a,b;
    cout <<"Enter a:";
    cin >>a;
    cout <<"Enter b:";
    cin >>b;
    char optr;
    cout <<"Enter operator:(+,-,*,/)";
    cin >>optr;
    switch (optr){
        case '+':
        cout<<add(&a,&b);
        break;
        case '-':
        cout<<subtract(&a,&b);
        break;
        case '*':
        cout<<multiplication(&a,&b);
        break;
        case '/':
        cout<<division(&a,&b);
        break;
        default:
        cout <<"Invalid operator";
    }



}