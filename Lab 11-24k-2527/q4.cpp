
#include <iostream>
using namespace std;
class InsufficientFundsException{
    public:
    const char* what() const {
        return "Withdrawal failed: Insufficient";
    }
};
template <typename T>
class Bankaccount{
    private:
    T totalamount;
    public:
    void deposit(){
        T d_amount;
        cout <<"Enter the amount you want to deposit:" <<endl;
        cin >> d_amount;
        totalamount+=d_amount;
    }
    void wihdraw(){
        T w_amount;
        cout <<"Enter the amount you want to withdraw:" <<endl;
        cin >> w_amount;
        if(totalamount<w_amount){
            throw InsufficientFundsException();
        }
        else {
            totalamount-=w_amount;
        }

    }
    void displayamount(){
        cout <<"Amount in your account:" <<totalamount;
    }

};
int main(){
    try
    {
        Bankaccount <int> intamount;
        intamount.deposit();
        intamount.displayamount();
        intamount.wihdraw();
        intamount.displayamount();
    }
    catch(InsufficientFundsException& i)
    {
        cout <<i.what();
    }
    

}