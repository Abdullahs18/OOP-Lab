#include <iostream>
#include <string>
using namespace std;

class DayOfYear{
    public:
    int integer;
    static string month[12];

    DayOfYear(){
        integer=1;

}

    DayOfYear(int day){
        integer=day;
    }


    void print(){
    
       
        if (integer<=31){
            
            cout <<month[0] <<integer   <<endl;
        }
        else if (integer<=31+28 ){
            
            cout <<month[1] <<" " <<(integer-31)  <<endl; 
        }
        else if (integer<=31+28+31){
            
            cout <<month[2] <<" " <<(integer-31-28)   <<endl; 
        }
        else if (integer<=31+28+31+30){
            
            cout <<month[3] <<" " <<(integer-31-28-31)  <<endl; 
        }
        else if (integer<=31+28+31+30+31){
        
            cout <<month[4] <<" " <<(integer-31-28-31-30)  <<endl; 
        }
        else if (integer<=31+28+31+30+31+30){
            
            cout <<month[5] <<" " <<(integer-31-28-31-30-31)  <<endl; 
        }
        else if (integer<=31+28+31+30+31+30+31){
        
            cout <<month[6] <<" " <<(integer-31-28-31-30-31-30)  <<endl; 
        }
        else if (integer<=31+28+31+30+31+30+31+31){
            
            cout <<month[7] <<" " <<(integer-31-28-31-30-31-30-31)  <<endl; 
        }
        else if (integer<=31+28+31+30+31+30+31+31+30){
            
            cout <<month[8] <<" " <<(integer-31-28-31-30-31-30-31-31)  <<endl; 
        }
        else if (integer<=31+28+31+30+31+30+31+31+30+31){
            
            cout <<month[9] <<" " <<(integer-31-28-31-30-31-30-31-31-30)  <<endl; 
        }
        else if (integer<=31+28+31+30+31+30+31+31+30+31+30){
            
            cout <<month[10] <<" " <<(integer-31-28-31-30-31-30-31-31-30-31)  <<endl; 
        }
        else if (integer<=31+28+31+30+31+30+31+31+30+31+30+31){
            
            cout <<month[11] <<" " <<(integer-31-28-31-30-31-30-31-31-30-31-30)  <<endl; 
        }
        else {
            cout <<"You enter integer > 365 or <0 ";
        }
    }



    

};
string DayOfYear::month[]={"Januray","Feburary","March","April","May","June","July","August","September","October","November","December"};


int main (){
    DayOfYear day(365);
    day.print();
    
    
    return 0;
    


}