/*Create two classes, Speed and Time, that store speed (in km/h) and time (in hours),
respectively. Declare a friend function named calculateDistance() that computes the distance
traveled using both classes' private data.
Requirements:
 Use a friend function to access private members from both classes.
 Include a main function that instantiates objects with sample values (e.g., 60 km/h and 2
hours) and prints the calculated distance.*/
#include <iostream>
using namespace std;
class Speed;
class Time;
class Speed{
    private:
    float speed;
    public:
    Speed(float s):speed(s){}
    friend float calculatedistance(Speed s,Time t);

};
class Time{
    private:
    float time;
    public:
    Time(float t):time(t){}
    friend float calculatedistance(Speed s,Time t);
};
float calculatedistance(Speed s,Time t){
    float distance=s.speed*t.time;
    return distance;
}
int main(){
    Speed s(32.22);
    Time t(23.44);
   float distance = calculatedistance(s,t);
    cout <<"Distance is:" <<distance <<"km" <<endl;
    return 0;
}