/*3. Define a class to represent a bank account. Include the following members
Data Members:
 Name of the depositors
 Account number
 Balance amount in the account
 Entering amount in the account

Member Functions:
 Create Default and Parameterized Constructor to initialize Depositor name, Account
number and the value of balance amount
 To deposit an amount
 To withdraw an amount after checking the balance and limit 25000 amount to
withdraw
 To display all details
 To display a Menu
Take input from user for performing above operations. If account does not have enough
balance to withdraw, display message you don’t have enough amount to withdraw and also
show message in case of limit exceed in withdraw amount.*/
#include <iostream>
#include <string>
using namespace std;

class bankaccount{
    private:
    string name;
    int acc_number;
    float balance_amount;
    float input_amount;

    public:
    void name_setter(string name_set){
        name=name_set;
    
    }
    void acc_number_setter(int number_set){
        acc_number=number_set;
    }
    void balance_setter(float balance_set){
        balance_amount=balance_set;
        
    }
    float deposit_amount(float amount){
        balance_amount=balance_amount+amount;
        return balance_amount;
    }
    float withdraw_amount(float withdraw_amount){
        if (withdraw_amount > balance_amount) {
            cout << "Not Enough Amount" << endl;
            return balance_amount;
        }
        else if (withdraw_amount > 25000) {
            cout << "Withdrawal limit exceeded (max 25000)" << endl;
            return balance_amount;
        }
        balance_amount -= withdraw_amount;
        return balance_amount;
    }
    
  

    string name_getter(){
        return name;
    }
    int acc_number_getter(){
        return acc_number;
    }
    float balance_getter(){
        return balance_amount;
    }

    


    bankaccount(){
        name="";
        acc_number=00;
        balance_amount=0.00;
        input_amount=0.00;


    }
    bankaccount(string name,int acc_number,float balance_amount){
        this->name=name;
      
        this->acc_number=acc_number;
   
        this->balance_amount=balance_amount;
     
        

    }

    void display_details(){
        cout <<"Account Holder Name: " <<name_getter() <<endl;
        cout <<"Acccount Number: " <<acc_number_getter() <<endl;
        cout <<"Current Balance: " << balance_getter() <<endl;
    }

};
int main (){
    cout <<"1.Create Account" <<endl;
    cout <<"2.Deposit Cash" <<endl;
    cout <<"3.Withdraw Cash" <<endl;
    cout <<"4.Display Account Details" <<endl;
    cout <<"------0------For Exit" <<endl;
    bankaccount acc1;
    while (1){
    int choice;
    cout <<"Enter your choice: ";
    cin >>choice;


    switch(choice){
        case 1: {
        string name;
        int acc_number;
        float balance;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> acc_number;
        cout << "Enter Balance: ";
        cin >> balance;
        acc1 = bankaccount(name, acc_number, balance);
        break;
    }
        case 2:
        float dep_amount;
        cout <<"Enter amount:";
        cin >>dep_amount;
        acc1.deposit_amount(dep_amount);
        break;
        case 3:
        float withdraw_amount;
        cout <<"Enter amount u want to withdraw: (limit=25000)";
        cin >>withdraw_amount;
        acc1.withdraw_amount(withdraw_amount);
        break;
        case 4:
        acc1.display_details();
        break;
        default:
        cout <<"Invalid Choice:";
    }

if (choice==0){
    break;
}
}
}