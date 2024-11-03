#include <iostream>
#include<cstring>
using namespace std;
class Account
{
private:
    string a_no;
    double balance;
public:
    Account()
    {

    }
    Account(string a_no,double balance)
    {
        this->a_no=a_no;
        this->balance=balance;
    }
    void setAccno(string a_no)
    {
        this->a_no=a_no;
    }
    string getAccno()
    {
        return a_no;
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
      cout<<"Account No is: "<<a_no<<endl;
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
        cout<<"This empty constructor of SavingsAcc"<<endl;
    }
    SavingsAcc(string a_no,double balance,double minLimit):Account(a_no,balance)
    {
        cout<<"\nThis is parameterizes constructor of SavingsAcc"<<endl;
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
        cout<<"Account minimum balance is: "<<minLimit<<endl;
    }

};
class CreditAcc:public Account
{
private:
    double maxLimit;
public:
    CreditAcc()
    {
        cout<<"\nThis is empty constructor of CreditAcc"<<endl;
    }
    CreditAcc(string a_no,double balance,double maxLimit):Account(a_no,balance)
    {
        cout<<"\nThis is parameterizes constructor of CreditAcc"<<endl;
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
    s1.setAccno("000-123456-33");
    s1.setBalance(50000);
    s1.setminLimit(1000);
    s1.showSavingsAccinfo();
    SavingsAcc s2("000-123456-33",5000,1000);\
    s2.showSavingsAccinfo();
    CreditAcc c1;
    c1.setAccno("111-123456-44");
    c1.setBalance(40000);
    c1.setmaxLimit(500000);
    c1.showCreditAccinfo();
    CreditAcc c2("111-123456-44",40000,500000);
    c2.showCreditAccinfo();
    return 0;
}
