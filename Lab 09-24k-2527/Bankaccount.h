
#ifndef BANKACCOUNT
#define BANKACCOUNT
#include <string>
#include <iostream>
using namespace std;
class BankAccount{
    private:
    string account_title;
    int account_number;
    float account_balance;
    public:
    BankAccount(string title, int number, float balance):
        account_title(title), account_number(number), account_balance(balance) {}
    void deposit(float amount){
        account_balance += amount;
    }
    void withdraw(float amount){
        if(amount <= account_balance){
            account_balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }
    float get_balance() const {
        return account_balance;
    }
};
#endif