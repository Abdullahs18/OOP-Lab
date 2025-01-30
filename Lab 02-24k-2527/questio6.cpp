/*Write a program that uses a structure to store the following data about a customer account:
Name
Address
City, State, and ZIP
Telephone Number
Account Balance
Date of Last Payment
The program should use an array of at least 10 structures. It should let the user enter data into the
array, change the contents of any element, and display all the data stored in the array. The program
should have a menu-driven user interface.
Input Validation: When the data for a new account is entered, be sure the user enters data for all
the fields. No negative account balances should be entered.*/
#include <iostream>
#include <string>

using namespace std;

struct CustomerAccount {
    string name;
    string address;
    string city;
    string state;
    string zip;
    string telephone;
    double accountBalance;
    string lastPaymentDate;
};

void displayMenu();
void addAccount(CustomerAccount accounts[], int size);
void editAccount(CustomerAccount accounts[], int size);
void displayAccounts(const CustomerAccount accounts[], int size);
bool isValidAccountBalance(double balance);

int main() {
    const int SIZE = 10;
    CustomerAccount accounts[SIZE];
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addAccount(accounts, SIZE);
                break;
            case 2:
                editAccount(accounts, SIZE);
                break;
            case 3:
                displayAccounts(accounts, SIZE);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "\nCustomer Account Management System\n";
    cout << "1. Add Account\n";
    cout << "2. Edit Account\n";
    cout << "3. Display All Accounts\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

void addAccount(CustomerAccount accounts[], int size) {
    for (int i = 0; i < size; ++i) {
        if (accounts[i].name.empty()) {
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, accounts[i].name);
            cout << "Enter Address: ";
            getline(cin, accounts[i].address);
            cout << "Enter City: ";
            getline(cin, accounts[i].city);
            cout << "Enter State: ";
            getline(cin, accounts[i].state);
            cout << "Enter ZIP: ";
            getline(cin, accounts[i].zip);
            cout << "Enter Telephone Number: ";
            getline(cin, accounts[i].telephone);
            do {
                cout << "Enter Account Balance: ";
                cin >> accounts[i].accountBalance;
                if (!isValidAccountBalance(accounts[i].accountBalance)) {
                    cout << "Invalid account balance. Please enter a non-negative value." << endl;
                }
            } while (!isValidAccountBalance(accounts[i].accountBalance));
            cout << "Enter Date of Last Payment: ";
            cin.ignore();
            getline(cin, accounts[i].lastPaymentDate);
            break;
        }
    }
}

void editAccount(CustomerAccount accounts[], int size) {
    int index;
    cout << "Enter the account index to edit (0-9): ";
    cin >> index;

    if (index >= 0 && index < size) {
        cout << "Editing Account #" << index << endl;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, accounts[index].name);
        cout << "Enter Address: ";
        getline(cin, accounts[index].address);
        cout << "Enter City: ";
        getline(cin, accounts[index].city);
        cout << "Enter State: ";
        getline(cin, accounts[index].state);
        cout << "Enter ZIP: ";
        getline(cin, accounts[index].zip);
        cout << "Enter Telephone Number: ";
        getline(cin, accounts[index].telephone);
        do {
            cout << "Enter Account Balance: ";
            cin >> accounts[index].accountBalance;
            if (!isValidAccountBalance(accounts[index].accountBalance)) {
                cout << "Invalid account balance. Please enter a non-negative value." << endl;
            }
        } while (!isValidAccountBalance(accounts[index].accountBalance));
        cout << "Enter Date of Last Payment: ";
        cin.ignore();
        getline(cin, accounts[index].lastPaymentDate);
    } else {
        cout << "Invalid index. Please try again." << endl;
    }
}

void displayAccounts(const CustomerAccount accounts[], int size) {
    for (int i = 0; i < size; ++i) {
        if (!accounts[i].name.empty()) {
            cout << "\nAccount #" << i << endl;
            cout << "Name: " << accounts[i].name << endl;
            cout << "Address: " << accounts[i].address << endl;
            cout << "City: " << accounts[i].city << endl;
            cout << "State: " << accounts[i].state << endl;
            cout << "ZIP: " << accounts[i].zip << endl;
            cout << "Telephone Number: " << accounts[i].telephone << endl;
            cout << "Account Balance: " << accounts[i].accountBalance << endl;
            cout << "Date of Last Payment: " << accounts[i].lastPaymentDate << endl;
        }
    }
}

bool isValidAccountBalance(double balance) {
    return balance >= 0;
}

