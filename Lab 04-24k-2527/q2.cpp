/*Create a class named 'Programming'. While creating an object of the class, if nothing is
passed to it, then the message "I love programming languages" should be printed. If some
String is passed to it, then in place of "programming languages" the name of that String
variable should be printed. For example, while creating object if we pass "C++", then "I
love C++" should be printed.*/
#include <iostream>
using namespace std;

class Programming{
    public:
    string programming_language;
    Programming(string language){
        programming_language=language;
        cout <<"I love " <<programming_language;

    }
    Programming(){
        cout <<"I love programming languages";
    }
};
int main (){
    
    string input;
    cout <<"Input: ";
    getline(cin, input);

    if (input==""){
        Programming prog;

    }
    else if (input!=""){
        Programming prog(input);
    }
   return 0; 
}