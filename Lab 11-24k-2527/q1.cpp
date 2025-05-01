#include <iostream>
#include <string>
using namespace std;


class OutOfBoundsException {
public:
    const char* what() const {
        return "Invalid array index access.";
    }
};


template <typename T>
class SafeArray {
private:
    T array[10]; 
    int size = 10;

public:
    void set(int index, T value) {
        if (index < 0 || index >= size) {
            throw OutOfBoundsException();
        }
        array[index] = value;
    }

    T get(int index) {
        if (index < 0 || index >= size) {
            throw OutOfBoundsException();
        }
        return array[index];
    }
};
int main() {
    SafeArray<int> intArray;
    SafeArray<string> strArray;

    try {
        intArray.set(2, 18);
        cout << intArray.get(2) << endl;

        strArray.set(4, "FAST");
        cout << strArray.get(4) << endl;

        
        intArray.get(15);  
    } catch (OutOfBoundsException& e) {
        cout << e.what() << endl;
    }

    return 0;
}

