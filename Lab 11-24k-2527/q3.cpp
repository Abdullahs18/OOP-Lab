#include <iostream>
using namespace std;

class DimensionMismatchException {
public:
    const char* what() const {
        return "Matrix dimensions incompatible for multiplication.";
    }
};

template <typename T>
class Matrix {
private:
    int row1, column1, row2, column2;
    T array1[10][10];
    T array2[10][10];
    T result[10][10];

public:
    Matrix(){
        row1=0;
        column1=0;
        row2=0;
        column2=0;
    }
    Matrix(int r1, int c1, int r2, int c2) {
        row1 = r1;
        column1 = c1;
        row2 = r2;
        column2 = c2;
    }

    void add_members() {
        cout << "Enter elements for Matrix 1 (" << row1 << "x" << column1 << "):\n";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column1; j++) {
                cin >> array1[i][j];
            }
        }

        cout << "Enter elements for Matrix 2 (" << row2 << "x" << column2 << "):\n";
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < column2; j++) {
                cin >> array2[i][j];
            }
        }
    }

    void multiplication() {
        if (column1 != row2) {
            throw DimensionMismatchException();
        }

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < column1; k++) {
                    result[i][j] += array1[i][k] * array2[k][j];
                }
            }
        }

        cout << "Result of Multiplication:\n";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main (){
    try {
    Matrix <int> intarray(2,2,2,2);
    intarray.add_members();
    intarray.multiplication();
    Matrix <float> floatarray(2,2,3,2);
    floatarray.add_members();
    floatarray.multiplication();
    }
    catch(DimensionMismatchException& d){
        cout <<d.what() ;
    }
    

}
