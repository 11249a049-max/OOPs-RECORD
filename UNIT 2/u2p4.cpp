#include<iostream>
using namespace std;
class BankTransaction{
    private:
    string accountholder;
    double amount;
    public:
    BankTransaction(string name,double amt){
        accountholder=name;
        amount=amt;
        cout<<"Transaction started for "<<accountholder<<",with amount:"<<amount<<endl;
    }
    ~BankTransaction(){
        cout<<"Transaction started for "<<accountholder<<",Amount:"<<amount<<" Processed."<<endl;
    }
};
int main(){
    cout<<"Bank Transaction System:"<<endl;
    {
        BankTransaction t1("Haritha",100000);
        BankTransaction t2("Nandini",50000);
    }
    return 0;
}