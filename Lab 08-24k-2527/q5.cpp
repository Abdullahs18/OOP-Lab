#include <iostream>
using namespace std;

class Complex {
private:
    int real_part;
    int imaginary_part;

public:
    
    Complex(int real, int imaginary) : real_part(real), imaginary_part(imaginary) {}

    
    Complex operator+(const Complex& c) {
        return Complex(real_part + c.real_part, imaginary_part + c.imaginary_part);
    }

    
    Complex operator-(const Complex& c) {
        return Complex(real_part - c.real_part, imaginary_part - c.imaginary_part);
    }

    
    Complex operator*(const Complex& c) {
        int real = (real_part * c.real_part) - (imaginary_part * c.imaginary_part);
        int imaginary = (real_part * c.imaginary_part) + (imaginary_part * c.real_part);
        return Complex(real, imaginary);
    }

    
    bool operator==(const Complex& c) {
        return (real_part == c.real_part && imaginary_part == c.imaginary_part);
    }

    
    void display() const {
        cout << real_part;
        if (imaginary_part >= 0) {
            cout << " + " << imaginary_part << "i";
        } else {
            cout << " - " << -imaginary_part << "i";
        }
        cout << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    
    
    Complex sum = c1 + c2;
    cout << "Sum: ";
    sum.display();


    Complex diff = c1 - c2;
    cout << "Difference: ";
    diff.display();

    
    Complex prod = c1 * c2;
    cout << "Product: ";
    prod.display();

    
    Complex c3(3, 4);
    if (c1 == c3) {
        cout << "c1 and c3 are equal" << endl;
    } else {
        cout << "c1 and c3 are not equal" << endl;
    }

    return 0;
}
