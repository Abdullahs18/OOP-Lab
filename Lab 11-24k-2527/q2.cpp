
#include <iostream>
using namespace std;

class StackUnderflowException {
public:
    const char* what() const {
        return "Stack is empty";
    }
};

template <typename T>
class Stack {
private:
    T item[5];
    int current_size = 0;

public:
    void push(T value) {
        if (current_size < 5) {
            item[current_size] = value;
            current_size++;
        }
        
    }

    T pop() {
        if (current_size == 0) {
            throw StackUnderflowException();
        }
        current_size--;
        return item[current_size];
    }

    bool isEmpty() const {
        return current_size == 0;
    }
};

int main (){
    Stack<int> intarray;
    Stack<float> floatarray;
    
    try{
        intarray.push(12);
        cout <<"Popped Number:" <<intarray.pop() <<endl;
        intarray.push(13);
       
        cout <<floatarray.pop() <<endl;
    }
    catch(StackUnderflowException& s){
        cout <<s.what() <<endl;
    }

}