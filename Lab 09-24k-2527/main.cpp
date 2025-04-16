#include "Bankaccount.h"
#include <iostream>
using namespace std;
#include <string>

int main (){
    BankAccount account("CR7", 123456, 1000.0);
    cout << "Initial balance: $" << account.get_balance() << endl;
    
    account.deposit(500.0);
    cout << "After deposit: $" << account.get_balance() << endl;
    
    account.withdraw(200.0);
    cout << "After withdrawal: $" << account.get_balance() << endl;
    
    account.withdraw(2000.0); 
    
    return 0;


}