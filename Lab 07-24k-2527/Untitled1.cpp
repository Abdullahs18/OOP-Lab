#include <iostream>
#include <cmath>

using namespace std;

class MathUtility {
public:
    static double calculateArea(double radius) {
        return M_PI * radius * radius;
    }

    static int calculateArea(int length, int width) {
        return length * width;
    }

    static double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    cout << "Circle Area: " << MathUtility::calculateArea(5.0) << endl;
    cout << "Rectangle Area: " << MathUtility::calculateArea(4, 6) << endl;
    cout << "Triangle Area: " << MathUtility::calculateArea(3.0, 7.0) << endl;
    return 0;
}
