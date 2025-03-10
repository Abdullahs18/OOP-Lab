#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;
    Rectangle(int l,int w):length(l),width(w){}
    void display(){
        cout <<"Length:" <<length;
        cout <<"Width:" <<width; 
    }
};
class Block:public Rectangle{
    public:
    int height;
    Block(int len,int wid,int hei):Rectangle(len,wid),height(hei) {}
    void displayh(){
        cout <<"Height:" <<height;
        display();
        }

};


int main (){
    Block b1(7,8,9);
    b1.displayh();


}