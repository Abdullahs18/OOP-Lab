#include <iostream>
using namespace std;
using std::string;
class BankAccount{
    private:
    string accountHolder;
    int accountNumber;
    double balance;
    public:
    BankAccount(string acc_holder,int acc_no,double Balance){
        accountHolder=acc_holder;
        accountNumber=acc_no;
        balance=Balance;
    }
    BankAccount(){
        accountHolder="Unknown";
        accountNumber=0;
        balance=0.0;
    }
    void set_account_holder(string acc_holder){
        accountHolder=acc_holder;
    }
    string get_acc_holder(){
        return accountHolder;
    }
    void set_account_number(int acc_no){
        accountNumber=acc_no;
    }
    int get_acc_number(){
        return accountNumber;
    }
    void set_balance(double Balance){
        balance=Balance;
    }
    double get_balance(){
        return balance;
    }
    double deposit(double amount){
        balance=balance+amount;
        return balance;
    }
    double withdraw(double amount){
        if (amount <= balance){
            balance=balance-amount;

        }
        else {
            cout <<"Not Sufficient Amount!!!!";
        }
        return balance;

    }
};
int main(){
    BankAccount account1=BankAccount("Abdullah",122345,334.554);
    BankAccount account2;
    account2.set_account_holder("Someone");
    account2.set_account_number(261567);
    account2.set_balance(500.00);

    cout << "Account 1 Holder: " << account1.get_acc_holder() << endl;
    cout << "Account 1 Number: " << account1.get_acc_number() << endl;
    cout << "Account 1 Balance: $" << account1.get_balance() << endl;

    cout << "---------------------------------" << endl;

    cout << "Account 2 Holder: " << account2.get_acc_holder() << endl;
    cout << "Account 2 Number: " << account2.get_acc_number() << endl;
    cout << "Account 2 Balance: $" << account2.get_balance() << endl;

    
    cout << "\nPerforming transactions for Account 1..." << endl;
    account1.deposit(200);   
    account1.withdraw(100); 

    cout << "\nPerforming transactions for Account 2..." << endl;
    account2.deposit(300);   
    account2.withdraw(600);  
    account2.withdraw(200); 

    return 0;
}



