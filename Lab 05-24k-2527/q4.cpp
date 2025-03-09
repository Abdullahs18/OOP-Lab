#include <iostream>
using namespace std;

class DivSales {
private:
    double quarterlySales[4];
    static double totalCorporateSales;

public:
    DivSales() {
        for (int i = 0; i < 4; i++) {
            quarterlySales[i] = 0;
        }
    }

    void setSales(double q1, double q2, double q3, double q4) {
        if (q1 < 0 || q2 < 0 || q3 < 0 || q4 < 0) {
            cout << "Error: Sales values must be positive." << endl;
            return;
        }
        quarterlySales[0] = q1;
        quarterlySales[1] = q2;
        quarterlySales[2] = q3;
        quarterlySales[3] = q4;
        totalCorporateSales += (q1 + q2 + q3 + q4);
    }

    double getQuarterlySales(int quarter) const {
        if (quarter < 0 || quarter > 3) {
            cout << "Error: Invalid quarter index." << endl;
            return -1;
        }
        return quarterlySales[quarter];
    }

    static double getTotalCorporateSales() {
        return totalCorporateSales;
    }
};

double DivSales::totalCorporateSales = 0;

int main() {
    const int NUM_DIVISIONS = 6;
    DivSales divisions[NUM_DIVISIONS];

    for (int i = 0; i < NUM_DIVISIONS; i++) {
        double q1, q2, q3, q4;
        cout << "Enter sales for Division " << i + 1 << " (Quarter 1 to 4): ";

        while (true) {
            cin >> q1 >> q2 >> q3 >> q4;
            if (q1 >= 0 && q2 >= 0 && q3 >= 0 && q4 >= 0) {
                break;
            }
            cout << "Error: Enter only positive values. Try again: ";
        }

        divisions[i].setSales(q1, q2, q3, q4);
    }

    cout << "\nDivision Sales Report:\n";
    cout << "Div  | Q1 Sales | Q2 Sales | Q3 Sales | Q4 Sales\n";
    

    for (int i = 0; i < NUM_DIVISIONS; i++) {
        cout << i + 1 << "    | ";
        for (int q = 0; q < 4; q++) {
            cout << divisions[i].getQuarterlySales(q);
        }
        cout << endl;
    }

    cout << "\nTotal Corporate Sales: $" << DivSales::getTotalCorporateSales() << endl;

    return 0;
}
