/*Design a BankAccount class that stores a customer's name, account balance, and an array of
three recent transactions (in amounts). Additionally, create a BankManager class (declared as
a friend in BankAccount) that can view and update these details. Include two friend functions:
 calculateAverageTransaction() to compute the average of the last three transactions.
 checkBalance() to return the current account balance.
Requirements:
 Use a friend class declaration so BankManager can access and modify BankAccount's
balance and transactions.
 Define two friend functions: calculateAverageTransaction() to compute the average of
the transactions, and checkBalance() to check the account balance.
 In main(), simulate a banking scenario by displaying the recent transactions, updating one
of them, checking the balance, and showing the average of the transactions.*/
#include <iostream>
using namespace std;
class Bankaccount;
class Bankaccount{
    private:
    string name;
    float account_balance;
    float transactions[3];
    public:
    Bankaccount(string n,float balance,float t[3]):name(n),account_balance(balance){
        for (int i=0;i<3;i++){
            transactions[i]=t[i];
        }
    }
    friend class BankManager;
};
class BankManager{
    public:
    void display(const Bankaccount& account1){
        cout <<"Name:" <<account1.name <<endl;
        cout <<"Account Balance:" <<account1.account_balance <<endl;
        for (int i=0;i<3;i++){
            cout <<account1.transactions[i];
        }
    }
    void update(Bankaccount& account1){
        string n;
        float balance;
        float t[3];
        cout <<"Update Name!!:";
        cin >>n;
        account1.name=n;
        cout <<"Update account balance!!:";
        cin >>balance;
        account1.account_balance=balance;
        for (int i=0;i<3;i++){
            cout <<"Update Transaction#" <<i+1;
            cin >>t[i];
            account1.transactions[i]=t[i];
        }


    }
    void calculateAverageTransaction(Bankaccount& account1){
        float total=0;
        for (int i=0;i<3;i++){
            total=total+account1.transactions[i];
            float average=total/3;
            cout <<"Average is:" <<average;        }
    }
    float checkBalance(Bankaccount& account1){
        return account1.account_balance;
        
    }
};
int main() {
    float transactions[3] = {1500.75, -500.50, 2000.25}; 
    Bankaccount account("Abdullah", 5000.00, transactions);
    BankManager manager;

    
    cout << "Initial Account Details:" << endl;
    manager.display(account);
    cout << endl << endl;

    
    manager.update(account);
    
    
    cout << endl << "Updated Account Details:" << endl;
    manager.display(account);
    cout << endl << endl;

    
    cout << "Calculating Average Transaction..." << endl;
    manager.calculateAverageTransaction(account);
    cout << endl << endl;


    cout << "Checking Account Balance..." << endl;
    cout << "Current Balance: $" << manager.checkBalance(account) << endl;

    return 0;
}
