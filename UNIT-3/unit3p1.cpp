#include<iostream>
using namespace std;
class Loan;
class Account{
    float balance;
    public:
    void getBalance(){
        cout<<"Enter account balance: ";
        cin>>balance;
    }
    friend void CheckEligibility(Account,Loan);
    };
    class Loan{
        float loanAmount;
        public:
        void getLoan(){
            cout<<"Enter loan amount:";
            cin>>loanAmount;
        }
        friend void CheckEligibility(Account,Loan);
    };
    void CheckEligibility(Account a,Loan l){
        if(a.balance>=2*l.loanAmount)
        cout<<"ELIGIBLE for loan"<<endl;
        else
        cout<<"NOT ELIGIBLE for loan"<<endl;
    }
    int main(){
    Account acc;
    Loan ln;
    acc.getBalance();
    ln.getLoan();
    CheckEligibility(acc,ln);
    return 0;
}