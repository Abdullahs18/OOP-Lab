/*You are tasked with developing a temperature monitoring system for a week (7 days). The
system will:
 Calculate the average temperature for the week.
 Identify the highest and lowest temperature recorded.
 Determine the number of days with temperatures above 30°C and below 10°C.
Requirements:
 The program should accept daily temperature data for 7 days.
 The program should pass the temperature data to a function.
 The function should:
▪ Calculate the average temperature for the week.
▪ Determine the highest and lowest temperatures recorded.
▪ Count how many days had temperatures above 30°C and below 10°C.
▪ Display the report to the user.*/
#include <iostream>
using namespace std;
void avg_temperature(float array[7]){
    float sum=0;
    for (int counter=0;counter<7;counter++){
        sum=sum+array[counter];
    }
    cout <<"The average temperature is: " <<sum/7 <<endl;
}
void lowest_temperature(float array[7]){
    float lowest=array[0];
    for (int counter=0;counter<7;counter++){
        if (lowest>array[counter]){
            lowest=array[counter];
        }
    }
    cout <<"The lowest temperature in the week is: " <<lowest <<endl;
}
void highest_temperature(float array[7]){
    float highest=array[0];
    for (int counter=0;counter<7;counter++){
        if (highest<array[counter]){
            highest=array[counter];
        }
    }
    cout <<"The highest temperature in the week is: " <<highest <<endl;
}
void report(float array[7]){
    int days=0;
    for (int counter=0;counter<7;counter++){
        if (array[counter]>30 || array[counter]<10){
            days++;
        }
    }
    cout <<"Number of days temperature is above 30 and below 10 are: " <<days <<endl;

}
int main (){
    float temperature_array[7];
    for (int counter=0;counter<7;counter++){
        cout <<"Enter temperature for day:" <<counter+1  <<"  ";
        cin >>temperature_array[counter];
    }
    highest_temperature(temperature_array);
    avg_temperature(temperature_array);
    lowest_temperature(temperature_array);
    report(temperature_array);

}