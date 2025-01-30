/*Write a program that simulates a soft drink machine. The program should use a structure that
stores the following data:
Drink Name
Drink Cost
Number of Drinks in Machine
The program should create an array of five structures. The elements should be initialized with the
following data:
Drink Name Cost Number in Machine
Cola .75 20
Root Beer .75 20
Lemon-Lime .75 20
Grape Soda .80 20
Cream Soda .80 20
Each time the program runs, it should enter a loop that performs the following steps: A list of
drinks is displayed on the screen. The user should be allowed to either quit the program or pick a
drink. If the user selects a drink, he or she will next enter the amount of money that is to be inserted
into the drink machine. The program should display the amount of change that would be returned
and subtract one from the number of that drink left in the machine. If the user selects a drink that
has sold out, a message should be displayed. The loop then repeats. When the user chooses to quit
the program it should display the total amount of money the machine earned.
Input Validation: When the user enters an amount of money, do not accept negative values or
values greater than $1.00.*/
#include <iostream>
using namespace std;

struct Drink {
    string name;
    double cost;
    int quantity;
};

int main() {
    Drink machine[5] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    double totalEarnings = 0;
    int choice;
    
    do {
        cout << "\nAvailable Drinks:\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << machine[i].name << " - $" << machine[i].cost << " - Stock: " << machine[i].quantity << endl;
        }
        cout << "6. Quit\n";
        
        cout << "Select a drink (1-5) or press 6 to Quit: ";
        cin >> choice;

        // Check if input is valid
        if (cin.fail()) {
            cin.clear();  // Clear error flag
            cin.ignore(10000, '\n');  // Ignore invalid input
            cout << "Invalid selection. Please enter a number between 1 and 6.\n";
            continue;
        }

        if (choice >= 1 && choice <= 5) {
            int index = choice - 1;

            if (machine[index].quantity == 0) {
                cout << "Sorry, " << machine[index].name << " is sold out.\n";
                continue;
            }

            double money;
            while (true) {
                cout << "Enter money (max $1.00): ";
                cin >> money;

                // Check if input is valid
                if (cin.fail() || money < 0 || money > 1.00) {
                    cin.clear();  // Clear error flag
                    cin.ignore(10000, '\n');  // Ignore invalid input
                    cout << "Invalid amount. Please enter between $0 and $1.\n";
                } else {
                    break;  // Valid input, break the loop
                }
            }

            if (money < machine[index].cost) {
                cout << "Insufficient funds. Transaction canceled.\n";
            } else {
                double change = money - machine[index].cost;
                cout << "Dispensing " << machine[index].name << ". Change returned: $" << change << endl;
                machine[index].quantity--;
                totalEarnings += machine[index].cost;
            }
        } else if (choice != 6) {
            cout << "Invalid selection. Please choose between 1 and 6.\n";
        }

    } while (choice != 6);

    cout << "Total earnings: $" << totalEarnings << endl;
    cout << "Exiting program...\n";

    return 0;
}

