#include <iostream>
using namespace std;

class Publication{
    public:
    string title;
    int price;
    Publication(){}
    Publication(string t,int p):title(t),price(p) {}
    void displaypub(){
        cout <<"Title:" <<title <<endl;
        cout <<"Price:" <<price <<endl; 
    }
    void putttile(){
        cout <<"Enter title:";
        cin >>title;
    }
    string gettitle(){
        return title;
    }
    void putprice(){
        cout <<"Enter price:";
        cin >>price;
    }
    int getprice(){
        return price;
    }
    
     
};
class Book:public Publication{
    public:
    int count;
    Book(){}
    Book(int cou,string ti,int pr):count(cou),Publication(ti,pr){}
    void putcount(){
        cout <<"Enter count:";
        cin >>count;
    }
    int getcount(){
        return count;
    }
    void displaybook(){
        displaypub();
        cout <<"Count:" <<count;
    }


};
class Tape:public Publication{
    public:
    float tape;
    Tape(){}
    Tape(float t,string ti,int pr):tape(t),Publication(ti,pr){}
    void puttape(){
        cout <<"Enter tape minutes:";
        cin >>tape;
    }
    float gettape(){
        return tape;
    }
    void displaytape(){
        displaypub();
        cout <<"Tape Minutes:" <<tape;
    }


};

int main (){
    Publication p;
    Tape t;
    Book b;
    p.putttile();
    cout <<p.gettitle() <<endl;
    p.putprice();
    cout <<p.getprice() <<endl;
    t.puttape();
    cout <<t.gettape() <<endl;
    b.putcount();
    cout <<b.getcount() <<endl;



}