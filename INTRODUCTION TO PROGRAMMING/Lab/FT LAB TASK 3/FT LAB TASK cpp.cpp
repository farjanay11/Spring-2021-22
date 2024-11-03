#include <iostream>
#include<cstring>
using namespace std;
class Account
{
private:
    string acc_no;
    double balance;
public:
    Account()
    {

    }
    Account(string acc_no,double balance)
    {
        this->acc_no=acc_no;
        this->balance=balance;
    }
    void setAccno(string acc_no)
    {
        this->acc_no=acc_no;
    }
    string getAccno()
    {
        return acc_no;
    }
    void setBalance(double balance)
    {
        this->balance=balance;
    }
    double getBalance()
    {
        return balance;
    }
    void showAccinfo()
    {
      cout<<"Account No is: "<<acc_no<<endl;
      cout<<"Account balance is: "<<balance<<endl;
    }
};
class SavingsAcc:public Account
{
private:
    double minLimit;
public:
    SavingsAcc()
    {
        cout<<"Empty constructor of SavingsAcc"<<endl;
    }
    SavingsAcc(string acc_no,double balance,double minLimit):Account(acc_no,balance)
    {
        cout<<"\nParameterized constructor of SavingsAcc"<<endl;
        this->minLimit=minLimit;
    }
    void setminLimit(double minLimit)
    {
        this->minLimit=minLimit;
    }
    double getminLimit()
    {
        return minLimit;
    }
    void showSavingsAccinfo()
    {
        Account::showAccinfo();
        cout<<"Account minimum balance: "<<minLimit<<endl;
    }

};
class CreditAcc:public Account
{
private:
    double maxLimit;
public:
    CreditAcc()
    {
        cout<<"\nEmpty constructor of CreditAcc"<<endl;
    }
    CreditAcc(string acc_no,double balance,double maxLimit):Account(acc_no,balance)
    {
        cout<<"\nParameterized constructor of CreditAcc"<<endl;
        this->maxLimit=maxLimit;
    }
    void setmaxLimit(double maxLimit)
    {
        this->maxLimit=maxLimit;
    }
    double getmaxLimit()
    {
        return maxLimit;
    }
    void showCreditAccinfo()
    {
        Account::showAccinfo();
        cout<<"Account maximum balance is: "<<maxLimit<<endl;
    }
};
int main()
{
    SavingsAcc s1;
    s1.setAccno("000-47019-33");
    s1.setBalance(60000);
    s1.setminLimit(500);
    s1.showSavingsAccinfo();
    SavingsAcc s2("000-47019-33",60000,500);\
    s2.showSavingsAccinfo();
    CreditAcc c1;
    c1.setAccno("111-47019-44");
    c1.setBalance(50000);
    c1.setmaxLimit(100000);
    c1.showCreditAccinfo();
    CreditAcc c2("222-47019-44",50000,100000);
    c2.showCreditAccinfo();
    return 0;
}
