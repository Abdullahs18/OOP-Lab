/*Write a program that count the number of vowels and consonants in a string using a pointer.*/
#include <iostream>
#include <cctype>
using namespace std;
void vowelconsonant_counter(string* str){
    int vowel_counter=0;
    int consonant_counter=0;
    for (int i=0;i<str->length();i++){
    	char ch=(*str)[i];
        if (isalpha(ch)) {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='O' || ch=='I' || ch=='U'){
                vowel_counter++;
            }
        
        else{
            consonant_counter++;
        }
    }
    }
    cout<<"Vowels: " <<vowel_counter <<endl;
    cout <<"Consonant: " <<consonant_counter;

}
int main(){
string str;
cout <<"Enter a string: ";
cin >>str;
vowelconsonant_counter(&str);
}